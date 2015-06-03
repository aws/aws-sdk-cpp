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
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/CloudFrontEndpoint.h>
#include <aws/cloudfront/CloudFrontErrorMarshaller.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2014_11_06Request.h>
#include <aws/cloudfront/model/CreateDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/CreateInvalidation2014_11_06Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2014_11_06Request.h>
#include <aws/cloudfront/model/DeleteDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2014_11_06Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2014_11_06Request.h>
#include <aws/cloudfront/model/GetDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2014_11_06Request.h>
#include <aws/cloudfront/model/GetInvalidation2014_11_06Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2014_11_06Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2014_11_06Request.h>
#include <aws/cloudfront/model/ListDistributions2014_11_06Request.h>
#include <aws/cloudfront/model/ListInvalidations2014_11_06Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2014_11_06Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2014_11_06Request.h>
#include <aws/cloudfront/model/UpdateDistribution2014_11_06Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2014_11_06Request.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudFront;
using namespace Aws::CloudFront::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "cloudfront";
static const char* ALLOCATION_TAG = "CloudFrontClient";

CloudFrontClient::CloudFrontClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG), "cloudfront.amazonaws.com"),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG), "cloudfront.amazonaws.com"),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG), "cloudfront.amazonaws.com"),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::~CloudFrontClient()
{
}

void CloudFrontClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << CloudFrontEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateCloudFrontOriginAccessIdentity2014_11_06Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2014_11_06(const CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/origin-access-identity/cloudfront";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2014_11_06Outcome(CreateCloudFrontOriginAccessIdentity2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2014_11_06Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2014_11_06Callable(const CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateCloudFrontOriginAccessIdentity2014_11_06, this, request);
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2014_11_06Async(const CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::CreateCloudFrontOriginAccessIdentity2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const CreateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_onCreateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived(this, request, CreateCloudFrontOriginAccessIdentity2014_11_06(request));
}

CreateDistribution2014_11_06Outcome CloudFrontClient::CreateDistribution2014_11_06(const CreateDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2014_11_06Outcome(CreateDistribution2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2014_11_06Outcome(outcome.GetError());
  }
}

CreateDistribution2014_11_06OutcomeCallable CloudFrontClient::CreateDistribution2014_11_06Callable(const CreateDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateDistribution2014_11_06, this, request);
}

void CloudFrontClient::CreateDistribution2014_11_06Async(const CreateDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::CreateDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::CreateDistribution2014_11_06AsyncHelper(const CreateDistribution2014_11_06Request& request) const
{
  m_onCreateDistribution2014_11_06OutcomeReceived(this, request, CreateDistribution2014_11_06(request));
}

CreateInvalidation2014_11_06Outcome CloudFrontClient::CreateInvalidation2014_11_06(const CreateInvalidation2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2014_11_06Outcome(CreateInvalidation2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2014_11_06Outcome(outcome.GetError());
  }
}

CreateInvalidation2014_11_06OutcomeCallable CloudFrontClient::CreateInvalidation2014_11_06Callable(const CreateInvalidation2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateInvalidation2014_11_06, this, request);
}

void CloudFrontClient::CreateInvalidation2014_11_06Async(const CreateInvalidation2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::CreateInvalidation2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::CreateInvalidation2014_11_06AsyncHelper(const CreateInvalidation2014_11_06Request& request) const
{
  m_onCreateInvalidation2014_11_06OutcomeReceived(this, request, CreateInvalidation2014_11_06(request));
}

CreateStreamingDistribution2014_11_06Outcome CloudFrontClient::CreateStreamingDistribution2014_11_06(const CreateStreamingDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/streaming-distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2014_11_06Outcome(CreateStreamingDistribution2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2014_11_06Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2014_11_06OutcomeCallable CloudFrontClient::CreateStreamingDistribution2014_11_06Callable(const CreateStreamingDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateStreamingDistribution2014_11_06, this, request);
}

void CloudFrontClient::CreateStreamingDistribution2014_11_06Async(const CreateStreamingDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::CreateStreamingDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::CreateStreamingDistribution2014_11_06AsyncHelper(const CreateStreamingDistribution2014_11_06Request& request) const
{
  m_onCreateStreamingDistribution2014_11_06OutcomeReceived(this, request, CreateStreamingDistribution2014_11_06(request));
}

DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2014_11_06(const DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/origin-access-identity/cloudfront/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2014_11_06Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2014_11_06Callable(const DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2014_11_06, this, request);
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2014_11_06Async(const DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_onDeleteCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived(this, request, DeleteCloudFrontOriginAccessIdentity2014_11_06(request));
}

DeleteDistribution2014_11_06Outcome CloudFrontClient::DeleteDistribution2014_11_06(const DeleteDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2014_11_06Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2014_11_06Outcome(outcome.GetError());
  }
}

DeleteDistribution2014_11_06OutcomeCallable CloudFrontClient::DeleteDistribution2014_11_06Callable(const DeleteDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::DeleteDistribution2014_11_06, this, request);
}

void CloudFrontClient::DeleteDistribution2014_11_06Async(const DeleteDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::DeleteDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::DeleteDistribution2014_11_06AsyncHelper(const DeleteDistribution2014_11_06Request& request) const
{
  m_onDeleteDistribution2014_11_06OutcomeReceived(this, request, DeleteDistribution2014_11_06(request));
}

DeleteStreamingDistribution2014_11_06Outcome CloudFrontClient::DeleteStreamingDistribution2014_11_06(const DeleteStreamingDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/streaming-distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2014_11_06Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2014_11_06Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2014_11_06OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2014_11_06Callable(const DeleteStreamingDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::DeleteStreamingDistribution2014_11_06, this, request);
}

void CloudFrontClient::DeleteStreamingDistribution2014_11_06Async(const DeleteStreamingDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::DeleteStreamingDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::DeleteStreamingDistribution2014_11_06AsyncHelper(const DeleteStreamingDistribution2014_11_06Request& request) const
{
  m_onDeleteStreamingDistribution2014_11_06OutcomeReceived(this, request, DeleteStreamingDistribution2014_11_06(request));
}

GetCloudFrontOriginAccessIdentity2014_11_06Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2014_11_06(const GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/origin-access-identity/cloudfront/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2014_11_06Outcome(GetCloudFrontOriginAccessIdentity2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2014_11_06Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2014_11_06Callable(const GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetCloudFrontOriginAccessIdentity2014_11_06, this, request);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2014_11_06Async(const GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetCloudFrontOriginAccessIdentity2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const GetCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_onGetCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived(this, request, GetCloudFrontOriginAccessIdentity2014_11_06(request));
}

GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2014_11_06(const GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome(GetCloudFrontOriginAccessIdentityConfig2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2014_11_06Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2014_11_06Callable(const GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2014_11_06, this, request);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2014_11_06Async(const GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2014_11_06AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2014_11_06Request& request) const
{
  m_onGetCloudFrontOriginAccessIdentityConfig2014_11_06OutcomeReceived(this, request, GetCloudFrontOriginAccessIdentityConfig2014_11_06(request));
}

GetDistribution2014_11_06Outcome CloudFrontClient::GetDistribution2014_11_06(const GetDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2014_11_06Outcome(GetDistribution2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2014_11_06Outcome(outcome.GetError());
  }
}

GetDistribution2014_11_06OutcomeCallable CloudFrontClient::GetDistribution2014_11_06Callable(const GetDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetDistribution2014_11_06, this, request);
}

void CloudFrontClient::GetDistribution2014_11_06Async(const GetDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetDistribution2014_11_06AsyncHelper(const GetDistribution2014_11_06Request& request) const
{
  m_onGetDistribution2014_11_06OutcomeReceived(this, request, GetDistribution2014_11_06(request));
}

GetDistributionConfig2014_11_06Outcome CloudFrontClient::GetDistributionConfig2014_11_06(const GetDistributionConfig2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2014_11_06Outcome(GetDistributionConfig2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2014_11_06Outcome(outcome.GetError());
  }
}

GetDistributionConfig2014_11_06OutcomeCallable CloudFrontClient::GetDistributionConfig2014_11_06Callable(const GetDistributionConfig2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetDistributionConfig2014_11_06, this, request);
}

void CloudFrontClient::GetDistributionConfig2014_11_06Async(const GetDistributionConfig2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetDistributionConfig2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetDistributionConfig2014_11_06AsyncHelper(const GetDistributionConfig2014_11_06Request& request) const
{
  m_onGetDistributionConfig2014_11_06OutcomeReceived(this, request, GetDistributionConfig2014_11_06(request));
}

GetInvalidation2014_11_06Outcome CloudFrontClient::GetInvalidation2014_11_06(const GetInvalidation2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2014_11_06Outcome(GetInvalidation2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2014_11_06Outcome(outcome.GetError());
  }
}

GetInvalidation2014_11_06OutcomeCallable CloudFrontClient::GetInvalidation2014_11_06Callable(const GetInvalidation2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetInvalidation2014_11_06, this, request);
}

void CloudFrontClient::GetInvalidation2014_11_06Async(const GetInvalidation2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetInvalidation2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetInvalidation2014_11_06AsyncHelper(const GetInvalidation2014_11_06Request& request) const
{
  m_onGetInvalidation2014_11_06OutcomeReceived(this, request, GetInvalidation2014_11_06(request));
}

GetStreamingDistribution2014_11_06Outcome CloudFrontClient::GetStreamingDistribution2014_11_06(const GetStreamingDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/streaming-distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2014_11_06Outcome(GetStreamingDistribution2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2014_11_06Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2014_11_06OutcomeCallable CloudFrontClient::GetStreamingDistribution2014_11_06Callable(const GetStreamingDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetStreamingDistribution2014_11_06, this, request);
}

void CloudFrontClient::GetStreamingDistribution2014_11_06Async(const GetStreamingDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetStreamingDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetStreamingDistribution2014_11_06AsyncHelper(const GetStreamingDistribution2014_11_06Request& request) const
{
  m_onGetStreamingDistribution2014_11_06OutcomeReceived(this, request, GetStreamingDistribution2014_11_06(request));
}

GetStreamingDistributionConfig2014_11_06Outcome CloudFrontClient::GetStreamingDistributionConfig2014_11_06(const GetStreamingDistributionConfig2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2014_11_06Outcome(GetStreamingDistributionConfig2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2014_11_06Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2014_11_06OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2014_11_06Callable(const GetStreamingDistributionConfig2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetStreamingDistributionConfig2014_11_06, this, request);
}

void CloudFrontClient::GetStreamingDistributionConfig2014_11_06Async(const GetStreamingDistributionConfig2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::GetStreamingDistributionConfig2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::GetStreamingDistributionConfig2014_11_06AsyncHelper(const GetStreamingDistributionConfig2014_11_06Request& request) const
{
  m_onGetStreamingDistributionConfig2014_11_06OutcomeReceived(this, request, GetStreamingDistributionConfig2014_11_06(request));
}

ListCloudFrontOriginAccessIdentities2014_11_06Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2014_11_06(const ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/origin-access-identity/cloudfront";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2014_11_06Outcome(ListCloudFrontOriginAccessIdentities2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2014_11_06Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2014_11_06OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2014_11_06Callable(const ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListCloudFrontOriginAccessIdentities2014_11_06, this, request);
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2014_11_06Async(const ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::ListCloudFrontOriginAccessIdentities2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2014_11_06AsyncHelper(const ListCloudFrontOriginAccessIdentities2014_11_06Request& request) const
{
  m_onListCloudFrontOriginAccessIdentities2014_11_06OutcomeReceived(this, request, ListCloudFrontOriginAccessIdentities2014_11_06(request));
}

ListDistributions2014_11_06Outcome CloudFrontClient::ListDistributions2014_11_06(const ListDistributions2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2014_11_06Outcome(ListDistributions2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2014_11_06Outcome(outcome.GetError());
  }
}

ListDistributions2014_11_06OutcomeCallable CloudFrontClient::ListDistributions2014_11_06Callable(const ListDistributions2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListDistributions2014_11_06, this, request);
}

void CloudFrontClient::ListDistributions2014_11_06Async(const ListDistributions2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::ListDistributions2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::ListDistributions2014_11_06AsyncHelper(const ListDistributions2014_11_06Request& request) const
{
  m_onListDistributions2014_11_06OutcomeReceived(this, request, ListDistributions2014_11_06(request));
}

ListInvalidations2014_11_06Outcome CloudFrontClient::ListInvalidations2014_11_06(const ListInvalidations2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2014_11_06Outcome(ListInvalidations2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2014_11_06Outcome(outcome.GetError());
  }
}

ListInvalidations2014_11_06OutcomeCallable CloudFrontClient::ListInvalidations2014_11_06Callable(const ListInvalidations2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListInvalidations2014_11_06, this, request);
}

void CloudFrontClient::ListInvalidations2014_11_06Async(const ListInvalidations2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::ListInvalidations2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::ListInvalidations2014_11_06AsyncHelper(const ListInvalidations2014_11_06Request& request) const
{
  m_onListInvalidations2014_11_06OutcomeReceived(this, request, ListInvalidations2014_11_06(request));
}

ListStreamingDistributions2014_11_06Outcome CloudFrontClient::ListStreamingDistributions2014_11_06(const ListStreamingDistributions2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/streaming-distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2014_11_06Outcome(ListStreamingDistributions2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2014_11_06Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2014_11_06OutcomeCallable CloudFrontClient::ListStreamingDistributions2014_11_06Callable(const ListStreamingDistributions2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListStreamingDistributions2014_11_06, this, request);
}

void CloudFrontClient::ListStreamingDistributions2014_11_06Async(const ListStreamingDistributions2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::ListStreamingDistributions2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::ListStreamingDistributions2014_11_06AsyncHelper(const ListStreamingDistributions2014_11_06Request& request) const
{
  m_onListStreamingDistributions2014_11_06OutcomeReceived(this, request, ListStreamingDistributions2014_11_06(request));
}

UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2014_11_06(const UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome(UpdateCloudFrontOriginAccessIdentity2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2014_11_06Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2014_11_06Callable(const UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2014_11_06, this, request);
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2014_11_06Async(const UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2014_11_06AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2014_11_06Request& request) const
{
  m_onUpdateCloudFrontOriginAccessIdentity2014_11_06OutcomeReceived(this, request, UpdateCloudFrontOriginAccessIdentity2014_11_06(request));
}

UpdateDistribution2014_11_06Outcome CloudFrontClient::UpdateDistribution2014_11_06(const UpdateDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2014_11_06Outcome(UpdateDistribution2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2014_11_06Outcome(outcome.GetError());
  }
}

UpdateDistribution2014_11_06OutcomeCallable CloudFrontClient::UpdateDistribution2014_11_06Callable(const UpdateDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::UpdateDistribution2014_11_06, this, request);
}

void CloudFrontClient::UpdateDistribution2014_11_06Async(const UpdateDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::UpdateDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::UpdateDistribution2014_11_06AsyncHelper(const UpdateDistribution2014_11_06Request& request) const
{
  m_onUpdateDistribution2014_11_06OutcomeReceived(this, request, UpdateDistribution2014_11_06(request));
}

UpdateStreamingDistribution2014_11_06Outcome CloudFrontClient::UpdateStreamingDistribution2014_11_06(const UpdateStreamingDistribution2014_11_06Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2014-11-06/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2014_11_06Outcome(UpdateStreamingDistribution2014_11_06Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2014_11_06Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2014_11_06OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2014_11_06Callable(const UpdateStreamingDistribution2014_11_06Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::UpdateStreamingDistribution2014_11_06, this, request);
}

void CloudFrontClient::UpdateStreamingDistribution2014_11_06Async(const UpdateStreamingDistribution2014_11_06Request& request) const
{
  m_executor->Submit(&CloudFrontClient::UpdateStreamingDistribution2014_11_06AsyncHelper, this, request);
}

void CloudFrontClient::UpdateStreamingDistribution2014_11_06AsyncHelper(const UpdateStreamingDistribution2014_11_06Request& request) const
{
  m_onUpdateStreamingDistribution2014_11_06OutcomeReceived(this, request, UpdateStreamingDistribution2014_11_06(request));
}

