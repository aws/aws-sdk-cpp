/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2015_04_17Request.h>
#include <aws/cloudfront/model/CreateDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/CreateInvalidation2015_04_17Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2015_04_17Request.h>
#include <aws/cloudfront/model/DeleteDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2015_04_17Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2015_04_17Request.h>
#include <aws/cloudfront/model/GetDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2015_04_17Request.h>
#include <aws/cloudfront/model/GetInvalidation2015_04_17Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2015_04_17Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2015_04_17Request.h>
#include <aws/cloudfront/model/ListDistributions2015_04_17Request.h>
#include <aws/cloudfront/model/ListInvalidations2015_04_17Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2015_04_17Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2015_04_17Request.h>
#include <aws/cloudfront/model/UpdateDistribution2015_04_17Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2015_04_17Request.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
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

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << CloudFrontEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
CreateCloudFrontOriginAccessIdentity2015_04_17Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2015_04_17(const CreateCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/origin-access-identity/cloudfront";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2015_04_17Outcome(CreateCloudFrontOriginAccessIdentity2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2015_04_17Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2015_04_17Callable(const CreateCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateCloudFrontOriginAccessIdentity2015_04_17, this, request);
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2015_04_17Async(const CreateCloudFrontOriginAccessIdentity2015_04_17Request& request, const CreateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::CreateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const CreateCloudFrontOriginAccessIdentity2015_04_17Request& request, const CreateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2015_04_17(request), context);
}

CreateDistribution2015_04_17Outcome CloudFrontClient::CreateDistribution2015_04_17(const CreateDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2015_04_17Outcome(CreateDistribution2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2015_04_17Outcome(outcome.GetError());
  }
}

CreateDistribution2015_04_17OutcomeCallable CloudFrontClient::CreateDistribution2015_04_17Callable(const CreateDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateDistribution2015_04_17, this, request);
}

void CloudFrontClient::CreateDistribution2015_04_17Async(const CreateDistribution2015_04_17Request& request, const CreateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::CreateDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::CreateDistribution2015_04_17AsyncHelper(const CreateDistribution2015_04_17Request& request, const CreateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2015_04_17(request), context);
}

CreateInvalidation2015_04_17Outcome CloudFrontClient::CreateInvalidation2015_04_17(const CreateInvalidation2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2015_04_17Outcome(CreateInvalidation2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2015_04_17Outcome(outcome.GetError());
  }
}

CreateInvalidation2015_04_17OutcomeCallable CloudFrontClient::CreateInvalidation2015_04_17Callable(const CreateInvalidation2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateInvalidation2015_04_17, this, request);
}

void CloudFrontClient::CreateInvalidation2015_04_17Async(const CreateInvalidation2015_04_17Request& request, const CreateInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::CreateInvalidation2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::CreateInvalidation2015_04_17AsyncHelper(const CreateInvalidation2015_04_17Request& request, const CreateInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2015_04_17(request), context);
}

CreateStreamingDistribution2015_04_17Outcome CloudFrontClient::CreateStreamingDistribution2015_04_17(const CreateStreamingDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/streaming-distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2015_04_17Outcome(CreateStreamingDistribution2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2015_04_17Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2015_04_17OutcomeCallable CloudFrontClient::CreateStreamingDistribution2015_04_17Callable(const CreateStreamingDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::CreateStreamingDistribution2015_04_17, this, request);
}

void CloudFrontClient::CreateStreamingDistribution2015_04_17Async(const CreateStreamingDistribution2015_04_17Request& request, const CreateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::CreateStreamingDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::CreateStreamingDistribution2015_04_17AsyncHelper(const CreateStreamingDistribution2015_04_17Request& request, const CreateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2015_04_17(request), context);
}

DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2015_04_17(const DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/origin-access-identity/cloudfront/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2015_04_17Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2015_04_17Callable(const DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2015_04_17, this, request);
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2015_04_17Async(const DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request, const DeleteCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2015_04_17Request& request, const DeleteCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2015_04_17(request), context);
}

DeleteDistribution2015_04_17Outcome CloudFrontClient::DeleteDistribution2015_04_17(const DeleteDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2015_04_17Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2015_04_17Outcome(outcome.GetError());
  }
}

DeleteDistribution2015_04_17OutcomeCallable CloudFrontClient::DeleteDistribution2015_04_17Callable(const DeleteDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::DeleteDistribution2015_04_17, this, request);
}

void CloudFrontClient::DeleteDistribution2015_04_17Async(const DeleteDistribution2015_04_17Request& request, const DeleteDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::DeleteDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::DeleteDistribution2015_04_17AsyncHelper(const DeleteDistribution2015_04_17Request& request, const DeleteDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2015_04_17(request), context);
}

DeleteStreamingDistribution2015_04_17Outcome CloudFrontClient::DeleteStreamingDistribution2015_04_17(const DeleteStreamingDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/streaming-distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2015_04_17Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2015_04_17Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2015_04_17OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2015_04_17Callable(const DeleteStreamingDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::DeleteStreamingDistribution2015_04_17, this, request);
}

void CloudFrontClient::DeleteStreamingDistribution2015_04_17Async(const DeleteStreamingDistribution2015_04_17Request& request, const DeleteStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::DeleteStreamingDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::DeleteStreamingDistribution2015_04_17AsyncHelper(const DeleteStreamingDistribution2015_04_17Request& request, const DeleteStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2015_04_17(request), context);
}

GetCloudFrontOriginAccessIdentity2015_04_17Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2015_04_17(const GetCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/origin-access-identity/cloudfront/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2015_04_17Outcome(GetCloudFrontOriginAccessIdentity2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2015_04_17Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2015_04_17Callable(const GetCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetCloudFrontOriginAccessIdentity2015_04_17, this, request);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2015_04_17Async(const GetCloudFrontOriginAccessIdentity2015_04_17Request& request, const GetCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetCloudFrontOriginAccessIdentity2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const GetCloudFrontOriginAccessIdentity2015_04_17Request& request, const GetCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2015_04_17(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2015_04_17(const GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome(GetCloudFrontOriginAccessIdentityConfig2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2015_04_17Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2015_04_17OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2015_04_17Callable(const GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2015_04_17, this, request);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2015_04_17Async(const GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request, const GetCloudFrontOriginAccessIdentityConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2015_04_17AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2015_04_17Request& request, const GetCloudFrontOriginAccessIdentityConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2015_04_17(request), context);
}

GetDistribution2015_04_17Outcome CloudFrontClient::GetDistribution2015_04_17(const GetDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2015_04_17Outcome(GetDistribution2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2015_04_17Outcome(outcome.GetError());
  }
}

GetDistribution2015_04_17OutcomeCallable CloudFrontClient::GetDistribution2015_04_17Callable(const GetDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetDistribution2015_04_17, this, request);
}

void CloudFrontClient::GetDistribution2015_04_17Async(const GetDistribution2015_04_17Request& request, const GetDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetDistribution2015_04_17AsyncHelper(const GetDistribution2015_04_17Request& request, const GetDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2015_04_17(request), context);
}

GetDistributionConfig2015_04_17Outcome CloudFrontClient::GetDistributionConfig2015_04_17(const GetDistributionConfig2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2015_04_17Outcome(GetDistributionConfig2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2015_04_17Outcome(outcome.GetError());
  }
}

GetDistributionConfig2015_04_17OutcomeCallable CloudFrontClient::GetDistributionConfig2015_04_17Callable(const GetDistributionConfig2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetDistributionConfig2015_04_17, this, request);
}

void CloudFrontClient::GetDistributionConfig2015_04_17Async(const GetDistributionConfig2015_04_17Request& request, const GetDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetDistributionConfig2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetDistributionConfig2015_04_17AsyncHelper(const GetDistributionConfig2015_04_17Request& request, const GetDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2015_04_17(request), context);
}

GetInvalidation2015_04_17Outcome CloudFrontClient::GetInvalidation2015_04_17(const GetInvalidation2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2015_04_17Outcome(GetInvalidation2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2015_04_17Outcome(outcome.GetError());
  }
}

GetInvalidation2015_04_17OutcomeCallable CloudFrontClient::GetInvalidation2015_04_17Callable(const GetInvalidation2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetInvalidation2015_04_17, this, request);
}

void CloudFrontClient::GetInvalidation2015_04_17Async(const GetInvalidation2015_04_17Request& request, const GetInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetInvalidation2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetInvalidation2015_04_17AsyncHelper(const GetInvalidation2015_04_17Request& request, const GetInvalidation2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2015_04_17(request), context);
}

GetStreamingDistribution2015_04_17Outcome CloudFrontClient::GetStreamingDistribution2015_04_17(const GetStreamingDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/streaming-distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2015_04_17Outcome(GetStreamingDistribution2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2015_04_17Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2015_04_17OutcomeCallable CloudFrontClient::GetStreamingDistribution2015_04_17Callable(const GetStreamingDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetStreamingDistribution2015_04_17, this, request);
}

void CloudFrontClient::GetStreamingDistribution2015_04_17Async(const GetStreamingDistribution2015_04_17Request& request, const GetStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetStreamingDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetStreamingDistribution2015_04_17AsyncHelper(const GetStreamingDistribution2015_04_17Request& request, const GetStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2015_04_17(request), context);
}

GetStreamingDistributionConfig2015_04_17Outcome CloudFrontClient::GetStreamingDistributionConfig2015_04_17(const GetStreamingDistributionConfig2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2015_04_17Outcome(GetStreamingDistributionConfig2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2015_04_17Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2015_04_17OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2015_04_17Callable(const GetStreamingDistributionConfig2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::GetStreamingDistributionConfig2015_04_17, this, request);
}

void CloudFrontClient::GetStreamingDistributionConfig2015_04_17Async(const GetStreamingDistributionConfig2015_04_17Request& request, const GetStreamingDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::GetStreamingDistributionConfig2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::GetStreamingDistributionConfig2015_04_17AsyncHelper(const GetStreamingDistributionConfig2015_04_17Request& request, const GetStreamingDistributionConfig2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2015_04_17(request), context);
}

ListCloudFrontOriginAccessIdentities2015_04_17Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2015_04_17(const ListCloudFrontOriginAccessIdentities2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/origin-access-identity/cloudfront";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2015_04_17Outcome(ListCloudFrontOriginAccessIdentities2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2015_04_17Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2015_04_17OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2015_04_17Callable(const ListCloudFrontOriginAccessIdentities2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListCloudFrontOriginAccessIdentities2015_04_17, this, request);
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2015_04_17Async(const ListCloudFrontOriginAccessIdentities2015_04_17Request& request, const ListCloudFrontOriginAccessIdentities2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::ListCloudFrontOriginAccessIdentities2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2015_04_17AsyncHelper(const ListCloudFrontOriginAccessIdentities2015_04_17Request& request, const ListCloudFrontOriginAccessIdentities2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2015_04_17(request), context);
}

ListDistributions2015_04_17Outcome CloudFrontClient::ListDistributions2015_04_17(const ListDistributions2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2015_04_17Outcome(ListDistributions2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2015_04_17Outcome(outcome.GetError());
  }
}

ListDistributions2015_04_17OutcomeCallable CloudFrontClient::ListDistributions2015_04_17Callable(const ListDistributions2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListDistributions2015_04_17, this, request);
}

void CloudFrontClient::ListDistributions2015_04_17Async(const ListDistributions2015_04_17Request& request, const ListDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::ListDistributions2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::ListDistributions2015_04_17AsyncHelper(const ListDistributions2015_04_17Request& request, const ListDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2015_04_17(request), context);
}

ListInvalidations2015_04_17Outcome CloudFrontClient::ListInvalidations2015_04_17(const ListInvalidations2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2015_04_17Outcome(ListInvalidations2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2015_04_17Outcome(outcome.GetError());
  }
}

ListInvalidations2015_04_17OutcomeCallable CloudFrontClient::ListInvalidations2015_04_17Callable(const ListInvalidations2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListInvalidations2015_04_17, this, request);
}

void CloudFrontClient::ListInvalidations2015_04_17Async(const ListInvalidations2015_04_17Request& request, const ListInvalidations2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::ListInvalidations2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::ListInvalidations2015_04_17AsyncHelper(const ListInvalidations2015_04_17Request& request, const ListInvalidations2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2015_04_17(request), context);
}

ListStreamingDistributions2015_04_17Outcome CloudFrontClient::ListStreamingDistributions2015_04_17(const ListStreamingDistributions2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/streaming-distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2015_04_17Outcome(ListStreamingDistributions2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2015_04_17Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2015_04_17OutcomeCallable CloudFrontClient::ListStreamingDistributions2015_04_17Callable(const ListStreamingDistributions2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::ListStreamingDistributions2015_04_17, this, request);
}

void CloudFrontClient::ListStreamingDistributions2015_04_17Async(const ListStreamingDistributions2015_04_17Request& request, const ListStreamingDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::ListStreamingDistributions2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::ListStreamingDistributions2015_04_17AsyncHelper(const ListStreamingDistributions2015_04_17Request& request, const ListStreamingDistributions2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2015_04_17(request), context);
}

UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2015_04_17(const UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome(UpdateCloudFrontOriginAccessIdentity2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2015_04_17Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2015_04_17OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2015_04_17Callable(const UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2015_04_17, this, request);
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2015_04_17Async(const UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request, const UpdateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2015_04_17AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2015_04_17Request& request, const UpdateCloudFrontOriginAccessIdentity2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2015_04_17(request), context);
}

UpdateDistribution2015_04_17Outcome CloudFrontClient::UpdateDistribution2015_04_17(const UpdateDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2015_04_17Outcome(UpdateDistribution2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2015_04_17Outcome(outcome.GetError());
  }
}

UpdateDistribution2015_04_17OutcomeCallable CloudFrontClient::UpdateDistribution2015_04_17Callable(const UpdateDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::UpdateDistribution2015_04_17, this, request);
}

void CloudFrontClient::UpdateDistribution2015_04_17Async(const UpdateDistribution2015_04_17Request& request, const UpdateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::UpdateDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::UpdateDistribution2015_04_17AsyncHelper(const UpdateDistribution2015_04_17Request& request, const UpdateDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2015_04_17(request), context);
}

UpdateStreamingDistribution2015_04_17Outcome CloudFrontClient::UpdateStreamingDistribution2015_04_17(const UpdateStreamingDistribution2015_04_17Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2015-04-17/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2015_04_17Outcome(UpdateStreamingDistribution2015_04_17Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2015_04_17Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2015_04_17OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2015_04_17Callable(const UpdateStreamingDistribution2015_04_17Request& request) const
{
  return std::async(std::launch::async, &CloudFrontClient::UpdateStreamingDistribution2015_04_17, this, request);
}

void CloudFrontClient::UpdateStreamingDistribution2015_04_17Async(const UpdateStreamingDistribution2015_04_17Request& request, const UpdateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&CloudFrontClient::UpdateStreamingDistribution2015_04_17AsyncHelper, this, request, handler, context);
}

void CloudFrontClient::UpdateStreamingDistribution2015_04_17AsyncHelper(const UpdateStreamingDistribution2015_04_17Request& request, const UpdateStreamingDistribution2015_04_17ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2015_04_17(request), context);
}

