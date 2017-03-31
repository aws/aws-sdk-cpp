/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/core/internal/AWSHttpResourceClient.h>

#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/StringUtils.h>

#include <sstream>

using namespace Aws::Utils;
using namespace Aws::Utils::Logging;
using namespace Aws::Http;
using namespace Aws::Client;
using namespace Aws::Internal;

static const char* EC2_SECURITY_CREDENTIALS_RESOURCE = "/latest/meta-data/iam/security-credentials";
static const char* EC2_REGION_RESOURCE = "/latest/meta-data/placement/availability-zone";

static const char* AWS_HTTP_RESOURCE_CLIENT_LOG_TAG = "AWSHttpResourceClient";

AWSHttpResourceClient::AWSHttpResourceClient() 
    : m_httpClient(nullptr)
{
    AWS_LOGSTREAM_INFO(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, 
            "Creating HttpClient with max connections" << 2 << " and scheme " << "http");
    ClientConfiguration clientConfiguration;
    clientConfiguration.maxConnections = 2;
    clientConfiguration.scheme = Scheme::HTTP;

    m_httpClient = CreateHttpClient(clientConfiguration);
}

AWSHttpResourceClient::~AWSHttpResourceClient()
{
}

Aws::String AWSHttpResourceClient::GetEC2DefaultCredentials(const char* endpoint) const
{
    AWS_LOGSTREAM_TRACE(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, 
            "Getting default credentials for ec2 instance");
    Aws::String credentialsString = GetResource(endpoint, EC2_SECURITY_CREDENTIALS_RESOURCE);

    if (credentialsString.empty()) return "";
    
    Aws::String trimmedCredentialsString = StringUtils::Trim(credentialsString.c_str());
    Aws::Vector<Aws::String> securityCredentials = StringUtils::Split(trimmedCredentialsString, '\n');

    AWS_LOGSTREAM_DEBUG(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG,
            "Calling EC2MetatadaService resource, " << EC2_SECURITY_CREDENTIALS_RESOURCE
            << " returned credential string " << trimmedCredentialsString);

    if (securityCredentials.size() == 0)
    {
        AWS_LOGSTREAM_WARN(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, 
                "Initial call to ec2Metadataservice to get credentials failed");
        return "";
    }

    Aws::StringStream ss;
    ss << EC2_SECURITY_CREDENTIALS_RESOURCE << "/" << securityCredentials[0];
    AWS_LOGSTREAM_DEBUG(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, 
            "Calling EC2MetatadaService resource " << ss.str());
    return GetResource(endpoint, ss.str().c_str());
}

Aws::String AWSHttpResourceClient::GetEC2CurrentRegion(const char* endpoint) const
{
    AWS_LOGSTREAM_TRACE(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, "Getting current region for ec2 instance");
    Aws::String azString = GetResource(endpoint, EC2_REGION_RESOURCE);

    if (azString.empty())
    {
        AWS_LOGSTREAM_INFO(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, 
                "Unable to pull region from instance metadata service ");
        return "";
    }
    
    Aws::String trimmedAZString = StringUtils::Trim(azString.c_str());
    AWS_LOGSTREAM_DEBUG(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, "Calling EC2MetatadaService resource " 
            << EC2_REGION_RESOURCE << " , returned credential string " << trimmedAZString);

    Aws::String region;
    region.reserve(trimmedAZString.length());

    bool digitFound = false;
    for (auto character : trimmedAZString)
    {
        if(digitFound && !isdigit(character))
        {
            break;
        }
        if (isdigit(character))
        {
            digitFound = true;
        }

        region.append(1, character);
    }

    AWS_LOGSTREAM_INFO(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, "Detected current region as " << region);
    return region;
}

Aws::String AWSHttpResourceClient::GetResource(const char* endpoint, const char* resource) const
{
    Aws::StringStream ss;
    ss << endpoint << resource;
    AWS_LOGSTREAM_TRACE(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, 
            "Calling Ec2MetadataService at " << ss.str().c_str());

    std::shared_ptr<HttpRequest> request(
            CreateHttpRequest(ss.str(), HttpMethod::HTTP_GET, 
                Aws::Utils::Stream::DefaultResponseStreamFactoryMethod));

    std::shared_ptr<HttpResponse> response(m_httpClient->MakeRequest(*request));

    if (response == nullptr)
    {
        AWS_LOGSTREAM_ERROR(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, "Http request to Ec2MetadataService failed.");
    }
    else if (response->GetResponseCode() != HttpResponseCode::OK)
    {
        AWS_LOGSTREAM_ERROR(AWS_HTTP_RESOURCE_CLIENT_LOG_TAG, "Http request failed with error code " <<
                      (int) response->GetResponseCode());
    }
    else
    {
        Aws::IStreamBufIterator eos;
        return Aws::String(Aws::IStreamBufIterator(response->GetResponseBody()), eos);
    }

    return "";
}
