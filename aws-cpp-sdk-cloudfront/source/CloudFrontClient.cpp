/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2017_03_25Request.h>
#include <aws/cloudfront/model/CreateDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2017_03_25Request.h>
#include <aws/cloudfront/model/CreateInvalidation2017_03_25Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2017_03_25Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2017_03_25Request.h>
#include <aws/cloudfront/model/DeleteDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2017_03_25Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2017_03_25Request.h>
#include <aws/cloudfront/model/GetDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2017_03_25Request.h>
#include <aws/cloudfront/model/GetInvalidation2017_03_25Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2017_03_25Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2017_03_25Request.h>
#include <aws/cloudfront/model/ListDistributions2017_03_25Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2017_03_25Request.h>
#include <aws/cloudfront/model/ListInvalidations2017_03_25Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2017_03_25Request.h>
#include <aws/cloudfront/model/ListTagsForResource2017_03_25Request.h>
#include <aws/cloudfront/model/TagResource2017_03_25Request.h>
#include <aws/cloudfront/model/UntagResource2017_03_25Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2017_03_25Request.h>
#include <aws/cloudfront/model/UpdateDistribution2017_03_25Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2017_03_25Request.h>

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

CreateCloudFrontOriginAccessIdentity2017_03_25Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_03_25(const CreateCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2017_03_25Outcome(CreateCloudFrontOriginAccessIdentity2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2017_03_25Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_03_25Callable(const CreateCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_03_25Async(const CreateCloudFrontOriginAccessIdentity2017_03_25Request& request, const CreateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const CreateCloudFrontOriginAccessIdentity2017_03_25Request& request, const CreateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2017_03_25(request), context);
}

CreateDistribution2017_03_25Outcome CloudFrontClient::CreateDistribution2017_03_25(const CreateDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2017_03_25Outcome(CreateDistribution2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2017_03_25Outcome(outcome.GetError());
  }
}

CreateDistribution2017_03_25OutcomeCallable CloudFrontClient::CreateDistribution2017_03_25Callable(const CreateDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2017_03_25Async(const CreateDistribution2017_03_25Request& request, const CreateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2017_03_25AsyncHelper(const CreateDistribution2017_03_25Request& request, const CreateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2017_03_25(request), context);
}

CreateDistributionWithTags2017_03_25Outcome CloudFrontClient::CreateDistributionWithTags2017_03_25(const CreateDistributionWithTags2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistributionWithTags2017_03_25Outcome(CreateDistributionWithTags2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistributionWithTags2017_03_25Outcome(outcome.GetError());
  }
}

CreateDistributionWithTags2017_03_25OutcomeCallable CloudFrontClient::CreateDistributionWithTags2017_03_25Callable(const CreateDistributionWithTags2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionWithTags2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionWithTags2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistributionWithTags2017_03_25Async(const CreateDistributionWithTags2017_03_25Request& request, const CreateDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistributionWithTags2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistributionWithTags2017_03_25AsyncHelper(const CreateDistributionWithTags2017_03_25Request& request, const CreateDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistributionWithTags2017_03_25(request), context);
}

CreateInvalidation2017_03_25Outcome CloudFrontClient::CreateInvalidation2017_03_25(const CreateInvalidation2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2017_03_25Outcome(CreateInvalidation2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2017_03_25Outcome(outcome.GetError());
  }
}

CreateInvalidation2017_03_25OutcomeCallable CloudFrontClient::CreateInvalidation2017_03_25Callable(const CreateInvalidation2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2017_03_25Async(const CreateInvalidation2017_03_25Request& request, const CreateInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2017_03_25AsyncHelper(const CreateInvalidation2017_03_25Request& request, const CreateInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2017_03_25(request), context);
}

CreateStreamingDistribution2017_03_25Outcome CloudFrontClient::CreateStreamingDistribution2017_03_25(const CreateStreamingDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2017_03_25Outcome(CreateStreamingDistribution2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2017_03_25Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2017_03_25OutcomeCallable CloudFrontClient::CreateStreamingDistribution2017_03_25Callable(const CreateStreamingDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2017_03_25Async(const CreateStreamingDistribution2017_03_25Request& request, const CreateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2017_03_25AsyncHelper(const CreateStreamingDistribution2017_03_25Request& request, const CreateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2017_03_25(request), context);
}

CreateStreamingDistributionWithTags2017_03_25Outcome CloudFrontClient::CreateStreamingDistributionWithTags2017_03_25(const CreateStreamingDistributionWithTags2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistributionWithTags2017_03_25Outcome(CreateStreamingDistributionWithTags2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistributionWithTags2017_03_25Outcome(outcome.GetError());
  }
}

CreateStreamingDistributionWithTags2017_03_25OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2017_03_25Callable(const CreateStreamingDistributionWithTags2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistributionWithTags2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistributionWithTags2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistributionWithTags2017_03_25Async(const CreateStreamingDistributionWithTags2017_03_25Request& request, const CreateStreamingDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistributionWithTags2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistributionWithTags2017_03_25AsyncHelper(const CreateStreamingDistributionWithTags2017_03_25Request& request, const CreateStreamingDistributionWithTags2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistributionWithTags2017_03_25(request), context);
}

DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_03_25(const DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_03_25Callable(const DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_03_25Async(const DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request, const DeleteCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2017_03_25Request& request, const DeleteCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2017_03_25(request), context);
}

DeleteDistribution2017_03_25Outcome CloudFrontClient::DeleteDistribution2017_03_25(const DeleteDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2017_03_25Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2017_03_25Outcome(outcome.GetError());
  }
}

DeleteDistribution2017_03_25OutcomeCallable CloudFrontClient::DeleteDistribution2017_03_25Callable(const DeleteDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2017_03_25Async(const DeleteDistribution2017_03_25Request& request, const DeleteDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2017_03_25AsyncHelper(const DeleteDistribution2017_03_25Request& request, const DeleteDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2017_03_25(request), context);
}

DeleteStreamingDistribution2017_03_25Outcome CloudFrontClient::DeleteStreamingDistribution2017_03_25(const DeleteStreamingDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2017_03_25Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2017_03_25Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2017_03_25OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2017_03_25Callable(const DeleteStreamingDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2017_03_25Async(const DeleteStreamingDistribution2017_03_25Request& request, const DeleteStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2017_03_25AsyncHelper(const DeleteStreamingDistribution2017_03_25Request& request, const DeleteStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2017_03_25(request), context);
}

GetCloudFrontOriginAccessIdentity2017_03_25Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_03_25(const GetCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2017_03_25Outcome(GetCloudFrontOriginAccessIdentity2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2017_03_25Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_03_25Callable(const GetCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_03_25Async(const GetCloudFrontOriginAccessIdentity2017_03_25Request& request, const GetCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const GetCloudFrontOriginAccessIdentity2017_03_25Request& request, const GetCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2017_03_25(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_03_25(const GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome(GetCloudFrontOriginAccessIdentityConfig2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2017_03_25OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_03_25Callable(const GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_03_25Async(const GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request, const GetCloudFrontOriginAccessIdentityConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_03_25AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2017_03_25Request& request, const GetCloudFrontOriginAccessIdentityConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2017_03_25(request), context);
}

GetDistribution2017_03_25Outcome CloudFrontClient::GetDistribution2017_03_25(const GetDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2017_03_25Outcome(GetDistribution2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2017_03_25Outcome(outcome.GetError());
  }
}

GetDistribution2017_03_25OutcomeCallable CloudFrontClient::GetDistribution2017_03_25Callable(const GetDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2017_03_25Async(const GetDistribution2017_03_25Request& request, const GetDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2017_03_25AsyncHelper(const GetDistribution2017_03_25Request& request, const GetDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2017_03_25(request), context);
}

GetDistributionConfig2017_03_25Outcome CloudFrontClient::GetDistributionConfig2017_03_25(const GetDistributionConfig2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2017_03_25Outcome(GetDistributionConfig2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2017_03_25Outcome(outcome.GetError());
  }
}

GetDistributionConfig2017_03_25OutcomeCallable CloudFrontClient::GetDistributionConfig2017_03_25Callable(const GetDistributionConfig2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2017_03_25Async(const GetDistributionConfig2017_03_25Request& request, const GetDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2017_03_25AsyncHelper(const GetDistributionConfig2017_03_25Request& request, const GetDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2017_03_25(request), context);
}

GetInvalidation2017_03_25Outcome CloudFrontClient::GetInvalidation2017_03_25(const GetInvalidation2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2017_03_25Outcome(GetInvalidation2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2017_03_25Outcome(outcome.GetError());
  }
}

GetInvalidation2017_03_25OutcomeCallable CloudFrontClient::GetInvalidation2017_03_25Callable(const GetInvalidation2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2017_03_25Async(const GetInvalidation2017_03_25Request& request, const GetInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2017_03_25AsyncHelper(const GetInvalidation2017_03_25Request& request, const GetInvalidation2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2017_03_25(request), context);
}

GetStreamingDistribution2017_03_25Outcome CloudFrontClient::GetStreamingDistribution2017_03_25(const GetStreamingDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2017_03_25Outcome(GetStreamingDistribution2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2017_03_25Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2017_03_25OutcomeCallable CloudFrontClient::GetStreamingDistribution2017_03_25Callable(const GetStreamingDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2017_03_25Async(const GetStreamingDistribution2017_03_25Request& request, const GetStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2017_03_25AsyncHelper(const GetStreamingDistribution2017_03_25Request& request, const GetStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2017_03_25(request), context);
}

GetStreamingDistributionConfig2017_03_25Outcome CloudFrontClient::GetStreamingDistributionConfig2017_03_25(const GetStreamingDistributionConfig2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2017_03_25Outcome(GetStreamingDistributionConfig2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2017_03_25Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2017_03_25OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2017_03_25Callable(const GetStreamingDistributionConfig2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2017_03_25Async(const GetStreamingDistributionConfig2017_03_25Request& request, const GetStreamingDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2017_03_25AsyncHelper(const GetStreamingDistributionConfig2017_03_25Request& request, const GetStreamingDistributionConfig2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2017_03_25(request), context);
}

ListCloudFrontOriginAccessIdentities2017_03_25Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_03_25(const ListCloudFrontOriginAccessIdentities2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2017_03_25Outcome(ListCloudFrontOriginAccessIdentities2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2017_03_25Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2017_03_25OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_03_25Callable(const ListCloudFrontOriginAccessIdentities2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_03_25Async(const ListCloudFrontOriginAccessIdentities2017_03_25Request& request, const ListCloudFrontOriginAccessIdentities2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_03_25AsyncHelper(const ListCloudFrontOriginAccessIdentities2017_03_25Request& request, const ListCloudFrontOriginAccessIdentities2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2017_03_25(request), context);
}

ListDistributions2017_03_25Outcome CloudFrontClient::ListDistributions2017_03_25(const ListDistributions2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2017_03_25Outcome(ListDistributions2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2017_03_25Outcome(outcome.GetError());
  }
}

ListDistributions2017_03_25OutcomeCallable CloudFrontClient::ListDistributions2017_03_25Callable(const ListDistributions2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2017_03_25Async(const ListDistributions2017_03_25Request& request, const ListDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2017_03_25AsyncHelper(const ListDistributions2017_03_25Request& request, const ListDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2017_03_25(request), context);
}

ListDistributionsByWebACLId2017_03_25Outcome CloudFrontClient::ListDistributionsByWebACLId2017_03_25(const ListDistributionsByWebACLId2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distributionsByWebACLId/";
  ss << request.GetWebACLId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributionsByWebACLId2017_03_25Outcome(ListDistributionsByWebACLId2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributionsByWebACLId2017_03_25Outcome(outcome.GetError());
  }
}

ListDistributionsByWebACLId2017_03_25OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2017_03_25Callable(const ListDistributionsByWebACLId2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2017_03_25Async(const ListDistributionsByWebACLId2017_03_25Request& request, const ListDistributionsByWebACLId2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2017_03_25AsyncHelper(const ListDistributionsByWebACLId2017_03_25Request& request, const ListDistributionsByWebACLId2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2017_03_25(request), context);
}

ListInvalidations2017_03_25Outcome CloudFrontClient::ListInvalidations2017_03_25(const ListInvalidations2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2017_03_25Outcome(ListInvalidations2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2017_03_25Outcome(outcome.GetError());
  }
}

ListInvalidations2017_03_25OutcomeCallable CloudFrontClient::ListInvalidations2017_03_25Callable(const ListInvalidations2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2017_03_25Async(const ListInvalidations2017_03_25Request& request, const ListInvalidations2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2017_03_25AsyncHelper(const ListInvalidations2017_03_25Request& request, const ListInvalidations2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2017_03_25(request), context);
}

ListStreamingDistributions2017_03_25Outcome CloudFrontClient::ListStreamingDistributions2017_03_25(const ListStreamingDistributions2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2017_03_25Outcome(ListStreamingDistributions2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2017_03_25Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2017_03_25OutcomeCallable CloudFrontClient::ListStreamingDistributions2017_03_25Callable(const ListStreamingDistributions2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2017_03_25Async(const ListStreamingDistributions2017_03_25Request& request, const ListStreamingDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2017_03_25AsyncHelper(const ListStreamingDistributions2017_03_25Request& request, const ListStreamingDistributions2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2017_03_25(request), context);
}

ListTagsForResource2017_03_25Outcome CloudFrontClient::ListTagsForResource2017_03_25(const ListTagsForResource2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsForResource2017_03_25Outcome(ListTagsForResource2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResource2017_03_25Outcome(outcome.GetError());
  }
}

ListTagsForResource2017_03_25OutcomeCallable CloudFrontClient::ListTagsForResource2017_03_25Callable(const ListTagsForResource2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResource2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListTagsForResource2017_03_25Async(const ListTagsForResource2017_03_25Request& request, const ListTagsForResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResource2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListTagsForResource2017_03_25AsyncHelper(const ListTagsForResource2017_03_25Request& request, const ListTagsForResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource2017_03_25(request), context);
}

TagResource2017_03_25Outcome CloudFrontClient::TagResource2017_03_25(const TagResource2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Tag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResource2017_03_25Outcome(NoResult());
  }
  else
  {
    return TagResource2017_03_25Outcome(outcome.GetError());
  }
}

TagResource2017_03_25OutcomeCallable CloudFrontClient::TagResource2017_03_25Callable(const TagResource2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResource2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TagResource2017_03_25Async(const TagResource2017_03_25Request& request, const TagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResource2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TagResource2017_03_25AsyncHelper(const TagResource2017_03_25Request& request, const TagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource2017_03_25(request), context);
}

UntagResource2017_03_25Outcome CloudFrontClient::UntagResource2017_03_25(const UntagResource2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Untag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResource2017_03_25Outcome(NoResult());
  }
  else
  {
    return UntagResource2017_03_25Outcome(outcome.GetError());
  }
}

UntagResource2017_03_25OutcomeCallable CloudFrontClient::UntagResource2017_03_25Callable(const UntagResource2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResource2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UntagResource2017_03_25Async(const UntagResource2017_03_25Request& request, const UntagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResource2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UntagResource2017_03_25AsyncHelper(const UntagResource2017_03_25Request& request, const UntagResource2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource2017_03_25(request), context);
}

UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_03_25(const UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome(UpdateCloudFrontOriginAccessIdentity2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2017_03_25OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_03_25Callable(const UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_03_25Async(const UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request, const UpdateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_03_25AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2017_03_25Request& request, const UpdateCloudFrontOriginAccessIdentity2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2017_03_25(request), context);
}

UpdateDistribution2017_03_25Outcome CloudFrontClient::UpdateDistribution2017_03_25(const UpdateDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2017_03_25Outcome(UpdateDistribution2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2017_03_25Outcome(outcome.GetError());
  }
}

UpdateDistribution2017_03_25OutcomeCallable CloudFrontClient::UpdateDistribution2017_03_25Callable(const UpdateDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2017_03_25Async(const UpdateDistribution2017_03_25Request& request, const UpdateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2017_03_25AsyncHelper(const UpdateDistribution2017_03_25Request& request, const UpdateDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2017_03_25(request), context);
}

UpdateStreamingDistribution2017_03_25Outcome CloudFrontClient::UpdateStreamingDistribution2017_03_25(const UpdateStreamingDistribution2017_03_25Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-03-25/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2017_03_25Outcome(UpdateStreamingDistribution2017_03_25Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2017_03_25Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2017_03_25OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2017_03_25Callable(const UpdateStreamingDistribution2017_03_25Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2017_03_25Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2017_03_25(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2017_03_25Async(const UpdateStreamingDistribution2017_03_25Request& request, const UpdateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2017_03_25AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2017_03_25AsyncHelper(const UpdateStreamingDistribution2017_03_25Request& request, const UpdateStreamingDistribution2017_03_25ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2017_03_25(request), context);
}



