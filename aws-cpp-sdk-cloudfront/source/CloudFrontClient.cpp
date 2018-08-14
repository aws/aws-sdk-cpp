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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2018_06_18Request.h>
#include <aws/cloudfront/model/CreateDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2018_06_18Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2018_06_18Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2018_06_18Request.h>
#include <aws/cloudfront/model/CreateInvalidation2018_06_18Request.h>
#include <aws/cloudfront/model/CreatePublicKey2018_06_18Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2018_06_18Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2018_06_18Request.h>
#include <aws/cloudfront/model/DeleteDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2018_06_18Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionProfile2018_06_18Request.h>
#include <aws/cloudfront/model/DeletePublicKey2018_06_18Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2018_06_18Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2018_06_18Request.h>
#include <aws/cloudfront/model/GetDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2018_06_18Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2018_06_18Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2018_06_18Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2018_06_18Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2018_06_18Request.h>
#include <aws/cloudfront/model/GetInvalidation2018_06_18Request.h>
#include <aws/cloudfront/model/GetPublicKey2018_06_18Request.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2018_06_18Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2018_06_18Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2018_06_18Request.h>
#include <aws/cloudfront/model/ListDistributions2018_06_18Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2018_06_18Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2018_06_18Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2018_06_18Request.h>
#include <aws/cloudfront/model/ListInvalidations2018_06_18Request.h>
#include <aws/cloudfront/model/ListPublicKeys2018_06_18Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2018_06_18Request.h>
#include <aws/cloudfront/model/ListTagsForResource2018_06_18Request.h>
#include <aws/cloudfront/model/TagResource2018_06_18Request.h>
#include <aws/cloudfront/model/UntagResource2018_06_18Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2018_06_18Request.h>
#include <aws/cloudfront/model/UpdateDistribution2018_06_18Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2018_06_18Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2018_06_18Request.h>
#include <aws/cloudfront/model/UpdatePublicKey2018_06_18Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2018_06_18Request.h>

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

CreateCloudFrontOriginAccessIdentity2018_06_18Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_06_18(const CreateCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2018_06_18Outcome(CreateCloudFrontOriginAccessIdentity2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2018_06_18Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_06_18Callable(const CreateCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_06_18Async(const CreateCloudFrontOriginAccessIdentity2018_06_18Request& request, const CreateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const CreateCloudFrontOriginAccessIdentity2018_06_18Request& request, const CreateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2018_06_18(request), context);
}

CreateDistribution2018_06_18Outcome CloudFrontClient::CreateDistribution2018_06_18(const CreateDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2018_06_18Outcome(CreateDistribution2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2018_06_18Outcome(outcome.GetError());
  }
}

CreateDistribution2018_06_18OutcomeCallable CloudFrontClient::CreateDistribution2018_06_18Callable(const CreateDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2018_06_18Async(const CreateDistribution2018_06_18Request& request, const CreateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2018_06_18AsyncHelper(const CreateDistribution2018_06_18Request& request, const CreateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2018_06_18(request), context);
}

CreateDistributionWithTags2018_06_18Outcome CloudFrontClient::CreateDistributionWithTags2018_06_18(const CreateDistributionWithTags2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistributionWithTags2018_06_18Outcome(CreateDistributionWithTags2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistributionWithTags2018_06_18Outcome(outcome.GetError());
  }
}

CreateDistributionWithTags2018_06_18OutcomeCallable CloudFrontClient::CreateDistributionWithTags2018_06_18Callable(const CreateDistributionWithTags2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionWithTags2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionWithTags2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistributionWithTags2018_06_18Async(const CreateDistributionWithTags2018_06_18Request& request, const CreateDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistributionWithTags2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistributionWithTags2018_06_18AsyncHelper(const CreateDistributionWithTags2018_06_18Request& request, const CreateDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistributionWithTags2018_06_18(request), context);
}

CreateFieldLevelEncryptionConfig2018_06_18Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2018_06_18(const CreateFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionConfig2018_06_18Outcome(CreateFieldLevelEncryptionConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionConfig2018_06_18Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionConfig2018_06_18OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionConfig2018_06_18Callable(const CreateFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2018_06_18Async(const CreateFieldLevelEncryptionConfig2018_06_18Request& request, const CreateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2018_06_18AsyncHelper(const CreateFieldLevelEncryptionConfig2018_06_18Request& request, const CreateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionConfig2018_06_18(request), context);
}

CreateFieldLevelEncryptionProfile2018_06_18Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2018_06_18(const CreateFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionProfile2018_06_18Outcome(CreateFieldLevelEncryptionProfile2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionProfile2018_06_18Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionProfile2018_06_18OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionProfile2018_06_18Callable(const CreateFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionProfile2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionProfile2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2018_06_18Async(const CreateFieldLevelEncryptionProfile2018_06_18Request& request, const CreateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionProfile2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2018_06_18AsyncHelper(const CreateFieldLevelEncryptionProfile2018_06_18Request& request, const CreateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionProfile2018_06_18(request), context);
}

CreateInvalidation2018_06_18Outcome CloudFrontClient::CreateInvalidation2018_06_18(const CreateInvalidation2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2018_06_18Outcome(CreateInvalidation2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2018_06_18Outcome(outcome.GetError());
  }
}

CreateInvalidation2018_06_18OutcomeCallable CloudFrontClient::CreateInvalidation2018_06_18Callable(const CreateInvalidation2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2018_06_18Async(const CreateInvalidation2018_06_18Request& request, const CreateInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2018_06_18AsyncHelper(const CreateInvalidation2018_06_18Request& request, const CreateInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2018_06_18(request), context);
}

CreatePublicKey2018_06_18Outcome CloudFrontClient::CreatePublicKey2018_06_18(const CreatePublicKey2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePublicKey2018_06_18Outcome(CreatePublicKey2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreatePublicKey2018_06_18Outcome(outcome.GetError());
  }
}

CreatePublicKey2018_06_18OutcomeCallable CloudFrontClient::CreatePublicKey2018_06_18Callable(const CreatePublicKey2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicKey2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicKey2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreatePublicKey2018_06_18Async(const CreatePublicKey2018_06_18Request& request, const CreatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicKey2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreatePublicKey2018_06_18AsyncHelper(const CreatePublicKey2018_06_18Request& request, const CreatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicKey2018_06_18(request), context);
}

CreateStreamingDistribution2018_06_18Outcome CloudFrontClient::CreateStreamingDistribution2018_06_18(const CreateStreamingDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2018_06_18Outcome(CreateStreamingDistribution2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2018_06_18Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2018_06_18OutcomeCallable CloudFrontClient::CreateStreamingDistribution2018_06_18Callable(const CreateStreamingDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2018_06_18Async(const CreateStreamingDistribution2018_06_18Request& request, const CreateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2018_06_18AsyncHelper(const CreateStreamingDistribution2018_06_18Request& request, const CreateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2018_06_18(request), context);
}

CreateStreamingDistributionWithTags2018_06_18Outcome CloudFrontClient::CreateStreamingDistributionWithTags2018_06_18(const CreateStreamingDistributionWithTags2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistributionWithTags2018_06_18Outcome(CreateStreamingDistributionWithTags2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistributionWithTags2018_06_18Outcome(outcome.GetError());
  }
}

CreateStreamingDistributionWithTags2018_06_18OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2018_06_18Callable(const CreateStreamingDistributionWithTags2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistributionWithTags2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistributionWithTags2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistributionWithTags2018_06_18Async(const CreateStreamingDistributionWithTags2018_06_18Request& request, const CreateStreamingDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistributionWithTags2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistributionWithTags2018_06_18AsyncHelper(const CreateStreamingDistributionWithTags2018_06_18Request& request, const CreateStreamingDistributionWithTags2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistributionWithTags2018_06_18(request), context);
}

DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_06_18(const DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_06_18Callable(const DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_06_18Async(const DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request, const DeleteCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2018_06_18Request& request, const DeleteCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2018_06_18(request), context);
}

DeleteDistribution2018_06_18Outcome CloudFrontClient::DeleteDistribution2018_06_18(const DeleteDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2018_06_18Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2018_06_18Outcome(outcome.GetError());
  }
}

DeleteDistribution2018_06_18OutcomeCallable CloudFrontClient::DeleteDistribution2018_06_18Callable(const DeleteDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2018_06_18Async(const DeleteDistribution2018_06_18Request& request, const DeleteDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2018_06_18AsyncHelper(const DeleteDistribution2018_06_18Request& request, const DeleteDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2018_06_18(request), context);
}

DeleteFieldLevelEncryptionConfig2018_06_18Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_06_18(const DeleteFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionConfig2018_06_18Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionConfig2018_06_18Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionConfig2018_06_18OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_06_18Callable(const DeleteFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_06_18Async(const DeleteFieldLevelEncryptionConfig2018_06_18Request& request, const DeleteFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_06_18AsyncHelper(const DeleteFieldLevelEncryptionConfig2018_06_18Request& request, const DeleteFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionConfig2018_06_18(request), context);
}

DeleteFieldLevelEncryptionProfile2018_06_18Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_06_18(const DeleteFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionProfile2018_06_18Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionProfile2018_06_18Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionProfile2018_06_18OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_06_18Callable(const DeleteFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionProfile2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionProfile2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_06_18Async(const DeleteFieldLevelEncryptionProfile2018_06_18Request& request, const DeleteFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionProfile2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_06_18AsyncHelper(const DeleteFieldLevelEncryptionProfile2018_06_18Request& request, const DeleteFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionProfile2018_06_18(request), context);
}

DeletePublicKey2018_06_18Outcome CloudFrontClient::DeletePublicKey2018_06_18(const DeletePublicKey2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePublicKey2018_06_18Outcome(NoResult());
  }
  else
  {
    return DeletePublicKey2018_06_18Outcome(outcome.GetError());
  }
}

DeletePublicKey2018_06_18OutcomeCallable CloudFrontClient::DeletePublicKey2018_06_18Callable(const DeletePublicKey2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicKey2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicKey2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeletePublicKey2018_06_18Async(const DeletePublicKey2018_06_18Request& request, const DeletePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicKey2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeletePublicKey2018_06_18AsyncHelper(const DeletePublicKey2018_06_18Request& request, const DeletePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicKey2018_06_18(request), context);
}

DeleteStreamingDistribution2018_06_18Outcome CloudFrontClient::DeleteStreamingDistribution2018_06_18(const DeleteStreamingDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2018_06_18Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2018_06_18Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2018_06_18OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2018_06_18Callable(const DeleteStreamingDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2018_06_18Async(const DeleteStreamingDistribution2018_06_18Request& request, const DeleteStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2018_06_18AsyncHelper(const DeleteStreamingDistribution2018_06_18Request& request, const DeleteStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2018_06_18(request), context);
}

GetCloudFrontOriginAccessIdentity2018_06_18Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_06_18(const GetCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2018_06_18Outcome(GetCloudFrontOriginAccessIdentity2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2018_06_18Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_06_18Callable(const GetCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_06_18Async(const GetCloudFrontOriginAccessIdentity2018_06_18Request& request, const GetCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const GetCloudFrontOriginAccessIdentity2018_06_18Request& request, const GetCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2018_06_18(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_06_18(const GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome(GetCloudFrontOriginAccessIdentityConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2018_06_18OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_06_18Callable(const GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_06_18Async(const GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request, const GetCloudFrontOriginAccessIdentityConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_06_18AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2018_06_18Request& request, const GetCloudFrontOriginAccessIdentityConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2018_06_18(request), context);
}

GetDistribution2018_06_18Outcome CloudFrontClient::GetDistribution2018_06_18(const GetDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2018_06_18Outcome(GetDistribution2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2018_06_18Outcome(outcome.GetError());
  }
}

GetDistribution2018_06_18OutcomeCallable CloudFrontClient::GetDistribution2018_06_18Callable(const GetDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2018_06_18Async(const GetDistribution2018_06_18Request& request, const GetDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2018_06_18AsyncHelper(const GetDistribution2018_06_18Request& request, const GetDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2018_06_18(request), context);
}

GetDistributionConfig2018_06_18Outcome CloudFrontClient::GetDistributionConfig2018_06_18(const GetDistributionConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2018_06_18Outcome(GetDistributionConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2018_06_18Outcome(outcome.GetError());
  }
}

GetDistributionConfig2018_06_18OutcomeCallable CloudFrontClient::GetDistributionConfig2018_06_18Callable(const GetDistributionConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2018_06_18Async(const GetDistributionConfig2018_06_18Request& request, const GetDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2018_06_18AsyncHelper(const GetDistributionConfig2018_06_18Request& request, const GetDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2018_06_18(request), context);
}

GetFieldLevelEncryption2018_06_18Outcome CloudFrontClient::GetFieldLevelEncryption2018_06_18(const GetFieldLevelEncryption2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryption2018_06_18Outcome(GetFieldLevelEncryption2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryption2018_06_18Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryption2018_06_18OutcomeCallable CloudFrontClient::GetFieldLevelEncryption2018_06_18Callable(const GetFieldLevelEncryption2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryption2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryption2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryption2018_06_18Async(const GetFieldLevelEncryption2018_06_18Request& request, const GetFieldLevelEncryption2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryption2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryption2018_06_18AsyncHelper(const GetFieldLevelEncryption2018_06_18Request& request, const GetFieldLevelEncryption2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryption2018_06_18(request), context);
}

GetFieldLevelEncryptionConfig2018_06_18Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2018_06_18(const GetFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionConfig2018_06_18Outcome(GetFieldLevelEncryptionConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionConfig2018_06_18Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionConfig2018_06_18OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionConfig2018_06_18Callable(const GetFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2018_06_18Async(const GetFieldLevelEncryptionConfig2018_06_18Request& request, const GetFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2018_06_18AsyncHelper(const GetFieldLevelEncryptionConfig2018_06_18Request& request, const GetFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionConfig2018_06_18(request), context);
}

GetFieldLevelEncryptionProfile2018_06_18Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2018_06_18(const GetFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfile2018_06_18Outcome(GetFieldLevelEncryptionProfile2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfile2018_06_18Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfile2018_06_18OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfile2018_06_18Callable(const GetFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfile2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfile2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2018_06_18Async(const GetFieldLevelEncryptionProfile2018_06_18Request& request, const GetFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfile2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2018_06_18AsyncHelper(const GetFieldLevelEncryptionProfile2018_06_18Request& request, const GetFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfile2018_06_18(request), context);
}

GetFieldLevelEncryptionProfileConfig2018_06_18Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_06_18(const GetFieldLevelEncryptionProfileConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfileConfig2018_06_18Outcome(GetFieldLevelEncryptionProfileConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfileConfig2018_06_18Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfileConfig2018_06_18OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_06_18Callable(const GetFieldLevelEncryptionProfileConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfileConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfileConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_06_18Async(const GetFieldLevelEncryptionProfileConfig2018_06_18Request& request, const GetFieldLevelEncryptionProfileConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfileConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_06_18AsyncHelper(const GetFieldLevelEncryptionProfileConfig2018_06_18Request& request, const GetFieldLevelEncryptionProfileConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfileConfig2018_06_18(request), context);
}

GetInvalidation2018_06_18Outcome CloudFrontClient::GetInvalidation2018_06_18(const GetInvalidation2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2018_06_18Outcome(GetInvalidation2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2018_06_18Outcome(outcome.GetError());
  }
}

GetInvalidation2018_06_18OutcomeCallable CloudFrontClient::GetInvalidation2018_06_18Callable(const GetInvalidation2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2018_06_18Async(const GetInvalidation2018_06_18Request& request, const GetInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2018_06_18AsyncHelper(const GetInvalidation2018_06_18Request& request, const GetInvalidation2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2018_06_18(request), context);
}

GetPublicKey2018_06_18Outcome CloudFrontClient::GetPublicKey2018_06_18(const GetPublicKey2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKey2018_06_18Outcome(GetPublicKey2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKey2018_06_18Outcome(outcome.GetError());
  }
}

GetPublicKey2018_06_18OutcomeCallable CloudFrontClient::GetPublicKey2018_06_18Callable(const GetPublicKey2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKey2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKey2018_06_18Async(const GetPublicKey2018_06_18Request& request, const GetPublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKey2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKey2018_06_18AsyncHelper(const GetPublicKey2018_06_18Request& request, const GetPublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKey2018_06_18(request), context);
}

GetPublicKeyConfig2018_06_18Outcome CloudFrontClient::GetPublicKeyConfig2018_06_18(const GetPublicKeyConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKeyConfig2018_06_18Outcome(GetPublicKeyConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKeyConfig2018_06_18Outcome(outcome.GetError());
  }
}

GetPublicKeyConfig2018_06_18OutcomeCallable CloudFrontClient::GetPublicKeyConfig2018_06_18Callable(const GetPublicKeyConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKeyConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKeyConfig2018_06_18Async(const GetPublicKeyConfig2018_06_18Request& request, const GetPublicKeyConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKeyConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKeyConfig2018_06_18AsyncHelper(const GetPublicKeyConfig2018_06_18Request& request, const GetPublicKeyConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKeyConfig2018_06_18(request), context);
}

GetStreamingDistribution2018_06_18Outcome CloudFrontClient::GetStreamingDistribution2018_06_18(const GetStreamingDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2018_06_18Outcome(GetStreamingDistribution2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2018_06_18Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2018_06_18OutcomeCallable CloudFrontClient::GetStreamingDistribution2018_06_18Callable(const GetStreamingDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2018_06_18Async(const GetStreamingDistribution2018_06_18Request& request, const GetStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2018_06_18AsyncHelper(const GetStreamingDistribution2018_06_18Request& request, const GetStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2018_06_18(request), context);
}

GetStreamingDistributionConfig2018_06_18Outcome CloudFrontClient::GetStreamingDistributionConfig2018_06_18(const GetStreamingDistributionConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2018_06_18Outcome(GetStreamingDistributionConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2018_06_18Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2018_06_18OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2018_06_18Callable(const GetStreamingDistributionConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2018_06_18Async(const GetStreamingDistributionConfig2018_06_18Request& request, const GetStreamingDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2018_06_18AsyncHelper(const GetStreamingDistributionConfig2018_06_18Request& request, const GetStreamingDistributionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2018_06_18(request), context);
}

ListCloudFrontOriginAccessIdentities2018_06_18Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_06_18(const ListCloudFrontOriginAccessIdentities2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2018_06_18Outcome(ListCloudFrontOriginAccessIdentities2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2018_06_18Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2018_06_18OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_06_18Callable(const ListCloudFrontOriginAccessIdentities2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_06_18Async(const ListCloudFrontOriginAccessIdentities2018_06_18Request& request, const ListCloudFrontOriginAccessIdentities2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_06_18AsyncHelper(const ListCloudFrontOriginAccessIdentities2018_06_18Request& request, const ListCloudFrontOriginAccessIdentities2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2018_06_18(request), context);
}

ListDistributions2018_06_18Outcome CloudFrontClient::ListDistributions2018_06_18(const ListDistributions2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2018_06_18Outcome(ListDistributions2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2018_06_18Outcome(outcome.GetError());
  }
}

ListDistributions2018_06_18OutcomeCallable CloudFrontClient::ListDistributions2018_06_18Callable(const ListDistributions2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2018_06_18Async(const ListDistributions2018_06_18Request& request, const ListDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2018_06_18AsyncHelper(const ListDistributions2018_06_18Request& request, const ListDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2018_06_18(request), context);
}

ListDistributionsByWebACLId2018_06_18Outcome CloudFrontClient::ListDistributionsByWebACLId2018_06_18(const ListDistributionsByWebACLId2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distributionsByWebACLId/";
  ss << request.GetWebACLId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributionsByWebACLId2018_06_18Outcome(ListDistributionsByWebACLId2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributionsByWebACLId2018_06_18Outcome(outcome.GetError());
  }
}

ListDistributionsByWebACLId2018_06_18OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2018_06_18Callable(const ListDistributionsByWebACLId2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2018_06_18Async(const ListDistributionsByWebACLId2018_06_18Request& request, const ListDistributionsByWebACLId2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2018_06_18AsyncHelper(const ListDistributionsByWebACLId2018_06_18Request& request, const ListDistributionsByWebACLId2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2018_06_18(request), context);
}

ListFieldLevelEncryptionConfigs2018_06_18Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2018_06_18(const ListFieldLevelEncryptionConfigs2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionConfigs2018_06_18Outcome(ListFieldLevelEncryptionConfigs2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionConfigs2018_06_18Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionConfigs2018_06_18OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionConfigs2018_06_18Callable(const ListFieldLevelEncryptionConfigs2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionConfigs2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionConfigs2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2018_06_18Async(const ListFieldLevelEncryptionConfigs2018_06_18Request& request, const ListFieldLevelEncryptionConfigs2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionConfigs2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2018_06_18AsyncHelper(const ListFieldLevelEncryptionConfigs2018_06_18Request& request, const ListFieldLevelEncryptionConfigs2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionConfigs2018_06_18(request), context);
}

ListFieldLevelEncryptionProfiles2018_06_18Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2018_06_18(const ListFieldLevelEncryptionProfiles2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionProfiles2018_06_18Outcome(ListFieldLevelEncryptionProfiles2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionProfiles2018_06_18Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionProfiles2018_06_18OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionProfiles2018_06_18Callable(const ListFieldLevelEncryptionProfiles2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionProfiles2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionProfiles2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2018_06_18Async(const ListFieldLevelEncryptionProfiles2018_06_18Request& request, const ListFieldLevelEncryptionProfiles2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionProfiles2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2018_06_18AsyncHelper(const ListFieldLevelEncryptionProfiles2018_06_18Request& request, const ListFieldLevelEncryptionProfiles2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionProfiles2018_06_18(request), context);
}

ListInvalidations2018_06_18Outcome CloudFrontClient::ListInvalidations2018_06_18(const ListInvalidations2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2018_06_18Outcome(ListInvalidations2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2018_06_18Outcome(outcome.GetError());
  }
}

ListInvalidations2018_06_18OutcomeCallable CloudFrontClient::ListInvalidations2018_06_18Callable(const ListInvalidations2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2018_06_18Async(const ListInvalidations2018_06_18Request& request, const ListInvalidations2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2018_06_18AsyncHelper(const ListInvalidations2018_06_18Request& request, const ListInvalidations2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2018_06_18(request), context);
}

ListPublicKeys2018_06_18Outcome CloudFrontClient::ListPublicKeys2018_06_18(const ListPublicKeys2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPublicKeys2018_06_18Outcome(ListPublicKeys2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListPublicKeys2018_06_18Outcome(outcome.GetError());
  }
}

ListPublicKeys2018_06_18OutcomeCallable CloudFrontClient::ListPublicKeys2018_06_18Callable(const ListPublicKeys2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeys2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListPublicKeys2018_06_18Async(const ListPublicKeys2018_06_18Request& request, const ListPublicKeys2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeys2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListPublicKeys2018_06_18AsyncHelper(const ListPublicKeys2018_06_18Request& request, const ListPublicKeys2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys2018_06_18(request), context);
}

ListStreamingDistributions2018_06_18Outcome CloudFrontClient::ListStreamingDistributions2018_06_18(const ListStreamingDistributions2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2018_06_18Outcome(ListStreamingDistributions2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2018_06_18Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2018_06_18OutcomeCallable CloudFrontClient::ListStreamingDistributions2018_06_18Callable(const ListStreamingDistributions2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2018_06_18Async(const ListStreamingDistributions2018_06_18Request& request, const ListStreamingDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2018_06_18AsyncHelper(const ListStreamingDistributions2018_06_18Request& request, const ListStreamingDistributions2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2018_06_18(request), context);
}

ListTagsForResource2018_06_18Outcome CloudFrontClient::ListTagsForResource2018_06_18(const ListTagsForResource2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsForResource2018_06_18Outcome(ListTagsForResource2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResource2018_06_18Outcome(outcome.GetError());
  }
}

ListTagsForResource2018_06_18OutcomeCallable CloudFrontClient::ListTagsForResource2018_06_18Callable(const ListTagsForResource2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResource2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListTagsForResource2018_06_18Async(const ListTagsForResource2018_06_18Request& request, const ListTagsForResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResource2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListTagsForResource2018_06_18AsyncHelper(const ListTagsForResource2018_06_18Request& request, const ListTagsForResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource2018_06_18(request), context);
}

TagResource2018_06_18Outcome CloudFrontClient::TagResource2018_06_18(const TagResource2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Tag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResource2018_06_18Outcome(NoResult());
  }
  else
  {
    return TagResource2018_06_18Outcome(outcome.GetError());
  }
}

TagResource2018_06_18OutcomeCallable CloudFrontClient::TagResource2018_06_18Callable(const TagResource2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResource2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TagResource2018_06_18Async(const TagResource2018_06_18Request& request, const TagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResource2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TagResource2018_06_18AsyncHelper(const TagResource2018_06_18Request& request, const TagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource2018_06_18(request), context);
}

UntagResource2018_06_18Outcome CloudFrontClient::UntagResource2018_06_18(const UntagResource2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Untag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResource2018_06_18Outcome(NoResult());
  }
  else
  {
    return UntagResource2018_06_18Outcome(outcome.GetError());
  }
}

UntagResource2018_06_18OutcomeCallable CloudFrontClient::UntagResource2018_06_18Callable(const UntagResource2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResource2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UntagResource2018_06_18Async(const UntagResource2018_06_18Request& request, const UntagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResource2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UntagResource2018_06_18AsyncHelper(const UntagResource2018_06_18Request& request, const UntagResource2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource2018_06_18(request), context);
}

UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_06_18(const UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome(UpdateCloudFrontOriginAccessIdentity2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2018_06_18OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_06_18Callable(const UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_06_18Async(const UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request, const UpdateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_06_18AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2018_06_18Request& request, const UpdateCloudFrontOriginAccessIdentity2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2018_06_18(request), context);
}

UpdateDistribution2018_06_18Outcome CloudFrontClient::UpdateDistribution2018_06_18(const UpdateDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2018_06_18Outcome(UpdateDistribution2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2018_06_18Outcome(outcome.GetError());
  }
}

UpdateDistribution2018_06_18OutcomeCallable CloudFrontClient::UpdateDistribution2018_06_18Callable(const UpdateDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2018_06_18Async(const UpdateDistribution2018_06_18Request& request, const UpdateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2018_06_18AsyncHelper(const UpdateDistribution2018_06_18Request& request, const UpdateDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2018_06_18(request), context);
}

UpdateFieldLevelEncryptionConfig2018_06_18Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_06_18(const UpdateFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionConfig2018_06_18Outcome(UpdateFieldLevelEncryptionConfig2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionConfig2018_06_18Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionConfig2018_06_18OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_06_18Callable(const UpdateFieldLevelEncryptionConfig2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionConfig2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionConfig2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_06_18Async(const UpdateFieldLevelEncryptionConfig2018_06_18Request& request, const UpdateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionConfig2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_06_18AsyncHelper(const UpdateFieldLevelEncryptionConfig2018_06_18Request& request, const UpdateFieldLevelEncryptionConfig2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionConfig2018_06_18(request), context);
}

UpdateFieldLevelEncryptionProfile2018_06_18Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_06_18(const UpdateFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionProfile2018_06_18Outcome(UpdateFieldLevelEncryptionProfile2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionProfile2018_06_18Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionProfile2018_06_18OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_06_18Callable(const UpdateFieldLevelEncryptionProfile2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionProfile2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionProfile2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_06_18Async(const UpdateFieldLevelEncryptionProfile2018_06_18Request& request, const UpdateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionProfile2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_06_18AsyncHelper(const UpdateFieldLevelEncryptionProfile2018_06_18Request& request, const UpdateFieldLevelEncryptionProfile2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionProfile2018_06_18(request), context);
}

UpdatePublicKey2018_06_18Outcome CloudFrontClient::UpdatePublicKey2018_06_18(const UpdatePublicKey2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdatePublicKey2018_06_18Outcome(UpdatePublicKey2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return UpdatePublicKey2018_06_18Outcome(outcome.GetError());
  }
}

UpdatePublicKey2018_06_18OutcomeCallable CloudFrontClient::UpdatePublicKey2018_06_18Callable(const UpdatePublicKey2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicKey2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicKey2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdatePublicKey2018_06_18Async(const UpdatePublicKey2018_06_18Request& request, const UpdatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePublicKey2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdatePublicKey2018_06_18AsyncHelper(const UpdatePublicKey2018_06_18Request& request, const UpdatePublicKey2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePublicKey2018_06_18(request), context);
}

UpdateStreamingDistribution2018_06_18Outcome CloudFrontClient::UpdateStreamingDistribution2018_06_18(const UpdateStreamingDistribution2018_06_18Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2018-06-18/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2018_06_18Outcome(UpdateStreamingDistribution2018_06_18Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2018_06_18Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2018_06_18OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2018_06_18Callable(const UpdateStreamingDistribution2018_06_18Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2018_06_18Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2018_06_18(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2018_06_18Async(const UpdateStreamingDistribution2018_06_18Request& request, const UpdateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2018_06_18AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2018_06_18AsyncHelper(const UpdateStreamingDistribution2018_06_18Request& request, const UpdateStreamingDistribution2018_06_18ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2018_06_18(request), context);
}



