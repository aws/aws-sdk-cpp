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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2016_01_28Request.h>
#include <aws/cloudfront/model/CreateDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/CreateInvalidation2016_01_28Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2016_01_28Request.h>
#include <aws/cloudfront/model/DeleteDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2016_01_28Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2016_01_28Request.h>
#include <aws/cloudfront/model/GetDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2016_01_28Request.h>
#include <aws/cloudfront/model/GetInvalidation2016_01_28Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2016_01_28Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2016_01_28Request.h>
#include <aws/cloudfront/model/ListDistributions2016_01_28Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2016_01_28Request.h>
#include <aws/cloudfront/model/ListInvalidations2016_01_28Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2016_01_28Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2016_01_28Request.h>
#include <aws/cloudfront/model/UpdateDistribution2016_01_28Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2016_01_28Request.h>

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
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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

  if(config.endpointOverride.empty())
  {
    ss << CloudFrontEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

CreateCloudFrontOriginAccessIdentity2016_01_28Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2016_01_28(const CreateCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/origin-access-identity/cloudfront";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2016_01_28Outcome(CreateCloudFrontOriginAccessIdentity2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2016_01_28Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2016_01_28Callable(const CreateCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2016_01_28Async(const CreateCloudFrontOriginAccessIdentity2016_01_28Request& request, const CreateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const CreateCloudFrontOriginAccessIdentity2016_01_28Request& request, const CreateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2016_01_28(request), context);
}

CreateDistribution2016_01_28Outcome CloudFrontClient::CreateDistribution2016_01_28(const CreateDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2016_01_28Outcome(CreateDistribution2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2016_01_28Outcome(outcome.GetError());
  }
}

CreateDistribution2016_01_28OutcomeCallable CloudFrontClient::CreateDistribution2016_01_28Callable(const CreateDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2016_01_28Async(const CreateDistribution2016_01_28Request& request, const CreateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2016_01_28AsyncHelper(const CreateDistribution2016_01_28Request& request, const CreateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2016_01_28(request), context);
}

CreateInvalidation2016_01_28Outcome CloudFrontClient::CreateInvalidation2016_01_28(const CreateInvalidation2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2016_01_28Outcome(CreateInvalidation2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2016_01_28Outcome(outcome.GetError());
  }
}

CreateInvalidation2016_01_28OutcomeCallable CloudFrontClient::CreateInvalidation2016_01_28Callable(const CreateInvalidation2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2016_01_28Async(const CreateInvalidation2016_01_28Request& request, const CreateInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2016_01_28AsyncHelper(const CreateInvalidation2016_01_28Request& request, const CreateInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2016_01_28(request), context);
}

CreateStreamingDistribution2016_01_28Outcome CloudFrontClient::CreateStreamingDistribution2016_01_28(const CreateStreamingDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/streaming-distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2016_01_28Outcome(CreateStreamingDistribution2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2016_01_28Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2016_01_28OutcomeCallable CloudFrontClient::CreateStreamingDistribution2016_01_28Callable(const CreateStreamingDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2016_01_28Async(const CreateStreamingDistribution2016_01_28Request& request, const CreateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2016_01_28AsyncHelper(const CreateStreamingDistribution2016_01_28Request& request, const CreateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2016_01_28(request), context);
}

DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2016_01_28(const DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/origin-access-identity/cloudfront/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2016_01_28Callable(const DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2016_01_28Async(const DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request, const DeleteCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2016_01_28Request& request, const DeleteCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2016_01_28(request), context);
}

DeleteDistribution2016_01_28Outcome CloudFrontClient::DeleteDistribution2016_01_28(const DeleteDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2016_01_28Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2016_01_28Outcome(outcome.GetError());
  }
}

DeleteDistribution2016_01_28OutcomeCallable CloudFrontClient::DeleteDistribution2016_01_28Callable(const DeleteDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2016_01_28Async(const DeleteDistribution2016_01_28Request& request, const DeleteDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2016_01_28AsyncHelper(const DeleteDistribution2016_01_28Request& request, const DeleteDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2016_01_28(request), context);
}

DeleteStreamingDistribution2016_01_28Outcome CloudFrontClient::DeleteStreamingDistribution2016_01_28(const DeleteStreamingDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/streaming-distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2016_01_28Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2016_01_28Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2016_01_28OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2016_01_28Callable(const DeleteStreamingDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2016_01_28Async(const DeleteStreamingDistribution2016_01_28Request& request, const DeleteStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2016_01_28AsyncHelper(const DeleteStreamingDistribution2016_01_28Request& request, const DeleteStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2016_01_28(request), context);
}

GetCloudFrontOriginAccessIdentity2016_01_28Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2016_01_28(const GetCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/origin-access-identity/cloudfront/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2016_01_28Outcome(GetCloudFrontOriginAccessIdentity2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2016_01_28Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2016_01_28Callable(const GetCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2016_01_28Async(const GetCloudFrontOriginAccessIdentity2016_01_28Request& request, const GetCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const GetCloudFrontOriginAccessIdentity2016_01_28Request& request, const GetCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2016_01_28(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2016_01_28(const GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome(GetCloudFrontOriginAccessIdentityConfig2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2016_01_28OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2016_01_28Callable(const GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2016_01_28Async(const GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request, const GetCloudFrontOriginAccessIdentityConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2016_01_28AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2016_01_28Request& request, const GetCloudFrontOriginAccessIdentityConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2016_01_28(request), context);
}

GetDistribution2016_01_28Outcome CloudFrontClient::GetDistribution2016_01_28(const GetDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2016_01_28Outcome(GetDistribution2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2016_01_28Outcome(outcome.GetError());
  }
}

GetDistribution2016_01_28OutcomeCallable CloudFrontClient::GetDistribution2016_01_28Callable(const GetDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2016_01_28Async(const GetDistribution2016_01_28Request& request, const GetDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2016_01_28AsyncHelper(const GetDistribution2016_01_28Request& request, const GetDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2016_01_28(request), context);
}

GetDistributionConfig2016_01_28Outcome CloudFrontClient::GetDistributionConfig2016_01_28(const GetDistributionConfig2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2016_01_28Outcome(GetDistributionConfig2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2016_01_28Outcome(outcome.GetError());
  }
}

GetDistributionConfig2016_01_28OutcomeCallable CloudFrontClient::GetDistributionConfig2016_01_28Callable(const GetDistributionConfig2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2016_01_28Async(const GetDistributionConfig2016_01_28Request& request, const GetDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2016_01_28AsyncHelper(const GetDistributionConfig2016_01_28Request& request, const GetDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2016_01_28(request), context);
}

GetInvalidation2016_01_28Outcome CloudFrontClient::GetInvalidation2016_01_28(const GetInvalidation2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2016_01_28Outcome(GetInvalidation2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2016_01_28Outcome(outcome.GetError());
  }
}

GetInvalidation2016_01_28OutcomeCallable CloudFrontClient::GetInvalidation2016_01_28Callable(const GetInvalidation2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2016_01_28Async(const GetInvalidation2016_01_28Request& request, const GetInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2016_01_28AsyncHelper(const GetInvalidation2016_01_28Request& request, const GetInvalidation2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2016_01_28(request), context);
}

GetStreamingDistribution2016_01_28Outcome CloudFrontClient::GetStreamingDistribution2016_01_28(const GetStreamingDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/streaming-distribution/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2016_01_28Outcome(GetStreamingDistribution2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2016_01_28Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2016_01_28OutcomeCallable CloudFrontClient::GetStreamingDistribution2016_01_28Callable(const GetStreamingDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2016_01_28Async(const GetStreamingDistribution2016_01_28Request& request, const GetStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2016_01_28AsyncHelper(const GetStreamingDistribution2016_01_28Request& request, const GetStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2016_01_28(request), context);
}

GetStreamingDistributionConfig2016_01_28Outcome CloudFrontClient::GetStreamingDistributionConfig2016_01_28(const GetStreamingDistributionConfig2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2016_01_28Outcome(GetStreamingDistributionConfig2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2016_01_28Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2016_01_28OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2016_01_28Callable(const GetStreamingDistributionConfig2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2016_01_28Async(const GetStreamingDistributionConfig2016_01_28Request& request, const GetStreamingDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2016_01_28AsyncHelper(const GetStreamingDistributionConfig2016_01_28Request& request, const GetStreamingDistributionConfig2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2016_01_28(request), context);
}

ListCloudFrontOriginAccessIdentities2016_01_28Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2016_01_28(const ListCloudFrontOriginAccessIdentities2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/origin-access-identity/cloudfront";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2016_01_28Outcome(ListCloudFrontOriginAccessIdentities2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2016_01_28Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2016_01_28OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2016_01_28Callable(const ListCloudFrontOriginAccessIdentities2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2016_01_28Async(const ListCloudFrontOriginAccessIdentities2016_01_28Request& request, const ListCloudFrontOriginAccessIdentities2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2016_01_28AsyncHelper(const ListCloudFrontOriginAccessIdentities2016_01_28Request& request, const ListCloudFrontOriginAccessIdentities2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2016_01_28(request), context);
}

ListDistributions2016_01_28Outcome CloudFrontClient::ListDistributions2016_01_28(const ListDistributions2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2016_01_28Outcome(ListDistributions2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2016_01_28Outcome(outcome.GetError());
  }
}

ListDistributions2016_01_28OutcomeCallable CloudFrontClient::ListDistributions2016_01_28Callable(const ListDistributions2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2016_01_28Async(const ListDistributions2016_01_28Request& request, const ListDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2016_01_28AsyncHelper(const ListDistributions2016_01_28Request& request, const ListDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2016_01_28(request), context);
}

ListDistributionsByWebACLId2016_01_28Outcome CloudFrontClient::ListDistributionsByWebACLId2016_01_28(const ListDistributionsByWebACLId2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distributionsByWebACLId/";
  ss << request.GetWebACLId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributionsByWebACLId2016_01_28Outcome(ListDistributionsByWebACLId2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributionsByWebACLId2016_01_28Outcome(outcome.GetError());
  }
}

ListDistributionsByWebACLId2016_01_28OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2016_01_28Callable(const ListDistributionsByWebACLId2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2016_01_28Async(const ListDistributionsByWebACLId2016_01_28Request& request, const ListDistributionsByWebACLId2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2016_01_28AsyncHelper(const ListDistributionsByWebACLId2016_01_28Request& request, const ListDistributionsByWebACLId2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2016_01_28(request), context);
}

ListInvalidations2016_01_28Outcome CloudFrontClient::ListInvalidations2016_01_28(const ListInvalidations2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2016_01_28Outcome(ListInvalidations2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2016_01_28Outcome(outcome.GetError());
  }
}

ListInvalidations2016_01_28OutcomeCallable CloudFrontClient::ListInvalidations2016_01_28Callable(const ListInvalidations2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2016_01_28Async(const ListInvalidations2016_01_28Request& request, const ListInvalidations2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2016_01_28AsyncHelper(const ListInvalidations2016_01_28Request& request, const ListInvalidations2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2016_01_28(request), context);
}

ListStreamingDistributions2016_01_28Outcome CloudFrontClient::ListStreamingDistributions2016_01_28(const ListStreamingDistributions2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/streaming-distribution";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2016_01_28Outcome(ListStreamingDistributions2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2016_01_28Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2016_01_28OutcomeCallable CloudFrontClient::ListStreamingDistributions2016_01_28Callable(const ListStreamingDistributions2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2016_01_28Async(const ListStreamingDistributions2016_01_28Request& request, const ListStreamingDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2016_01_28AsyncHelper(const ListStreamingDistributions2016_01_28Request& request, const ListStreamingDistributions2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2016_01_28(request), context);
}

UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2016_01_28(const UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome(UpdateCloudFrontOriginAccessIdentity2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2016_01_28OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2016_01_28Callable(const UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2016_01_28Async(const UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request, const UpdateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2016_01_28AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2016_01_28Request& request, const UpdateCloudFrontOriginAccessIdentity2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2016_01_28(request), context);
}

UpdateDistribution2016_01_28Outcome CloudFrontClient::UpdateDistribution2016_01_28(const UpdateDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2016_01_28Outcome(UpdateDistribution2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2016_01_28Outcome(outcome.GetError());
  }
}

UpdateDistribution2016_01_28OutcomeCallable CloudFrontClient::UpdateDistribution2016_01_28Callable(const UpdateDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2016_01_28Async(const UpdateDistribution2016_01_28Request& request, const UpdateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2016_01_28AsyncHelper(const UpdateDistribution2016_01_28Request& request, const UpdateDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2016_01_28(request), context);
}

UpdateStreamingDistribution2016_01_28Outcome CloudFrontClient::UpdateStreamingDistribution2016_01_28(const UpdateStreamingDistribution2016_01_28Request& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2016-01-28/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2016_01_28Outcome(UpdateStreamingDistribution2016_01_28Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2016_01_28Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2016_01_28OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2016_01_28Callable(const UpdateStreamingDistribution2016_01_28Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2016_01_28Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2016_01_28(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2016_01_28Async(const UpdateStreamingDistribution2016_01_28Request& request, const UpdateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2016_01_28AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2016_01_28AsyncHelper(const UpdateStreamingDistribution2016_01_28Request& request, const UpdateStreamingDistribution2016_01_28ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2016_01_28(request), context);
}

