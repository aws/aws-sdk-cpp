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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2017_10_30Request.h>
#include <aws/cloudfront/model/CreateDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2017_10_30Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2017_10_30Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2017_10_30Request.h>
#include <aws/cloudfront/model/CreateInvalidation2017_10_30Request.h>
#include <aws/cloudfront/model/CreatePublicKey2017_10_30Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2017_10_30Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2017_10_30Request.h>
#include <aws/cloudfront/model/DeleteDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2017_10_30Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionProfile2017_10_30Request.h>
#include <aws/cloudfront/model/DeletePublicKey2017_10_30Request.h>
#include <aws/cloudfront/model/DeleteServiceLinkedRole2017_10_30Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2017_10_30Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2017_10_30Request.h>
#include <aws/cloudfront/model/GetDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2017_10_30Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2017_10_30Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2017_10_30Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2017_10_30Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2017_10_30Request.h>
#include <aws/cloudfront/model/GetInvalidation2017_10_30Request.h>
#include <aws/cloudfront/model/GetPublicKey2017_10_30Request.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2017_10_30Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2017_10_30Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2017_10_30Request.h>
#include <aws/cloudfront/model/ListDistributions2017_10_30Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2017_10_30Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2017_10_30Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2017_10_30Request.h>
#include <aws/cloudfront/model/ListInvalidations2017_10_30Request.h>
#include <aws/cloudfront/model/ListPublicKeys2017_10_30Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2017_10_30Request.h>
#include <aws/cloudfront/model/ListTagsForResource2017_10_30Request.h>
#include <aws/cloudfront/model/TagResource2017_10_30Request.h>
#include <aws/cloudfront/model/UntagResource2017_10_30Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2017_10_30Request.h>
#include <aws/cloudfront/model/UpdateDistribution2017_10_30Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2017_10_30Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2017_10_30Request.h>
#include <aws/cloudfront/model/UpdatePublicKey2017_10_30Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2017_10_30Request.h>

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

CreateCloudFrontOriginAccessIdentity2017_10_30Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_10_30(const CreateCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2017_10_30Outcome(CreateCloudFrontOriginAccessIdentity2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2017_10_30Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2017_10_30OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_10_30Callable(const CreateCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_10_30Async(const CreateCloudFrontOriginAccessIdentity2017_10_30Request& request, const CreateCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2017_10_30AsyncHelper(const CreateCloudFrontOriginAccessIdentity2017_10_30Request& request, const CreateCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2017_10_30(request), context);
}

CreateDistribution2017_10_30Outcome CloudFrontClient::CreateDistribution2017_10_30(const CreateDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2017_10_30Outcome(CreateDistribution2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2017_10_30Outcome(outcome.GetError());
  }
}

CreateDistribution2017_10_30OutcomeCallable CloudFrontClient::CreateDistribution2017_10_30Callable(const CreateDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2017_10_30Async(const CreateDistribution2017_10_30Request& request, const CreateDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2017_10_30AsyncHelper(const CreateDistribution2017_10_30Request& request, const CreateDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2017_10_30(request), context);
}

CreateDistributionWithTags2017_10_30Outcome CloudFrontClient::CreateDistributionWithTags2017_10_30(const CreateDistributionWithTags2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistributionWithTags2017_10_30Outcome(CreateDistributionWithTags2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistributionWithTags2017_10_30Outcome(outcome.GetError());
  }
}

CreateDistributionWithTags2017_10_30OutcomeCallable CloudFrontClient::CreateDistributionWithTags2017_10_30Callable(const CreateDistributionWithTags2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionWithTags2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionWithTags2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistributionWithTags2017_10_30Async(const CreateDistributionWithTags2017_10_30Request& request, const CreateDistributionWithTags2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistributionWithTags2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistributionWithTags2017_10_30AsyncHelper(const CreateDistributionWithTags2017_10_30Request& request, const CreateDistributionWithTags2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistributionWithTags2017_10_30(request), context);
}

CreateFieldLevelEncryptionConfig2017_10_30Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2017_10_30(const CreateFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionConfig2017_10_30Outcome(CreateFieldLevelEncryptionConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionConfig2017_10_30Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionConfig2017_10_30OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionConfig2017_10_30Callable(const CreateFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2017_10_30Async(const CreateFieldLevelEncryptionConfig2017_10_30Request& request, const CreateFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2017_10_30AsyncHelper(const CreateFieldLevelEncryptionConfig2017_10_30Request& request, const CreateFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionConfig2017_10_30(request), context);
}

CreateFieldLevelEncryptionProfile2017_10_30Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2017_10_30(const CreateFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionProfile2017_10_30Outcome(CreateFieldLevelEncryptionProfile2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionProfile2017_10_30Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionProfile2017_10_30OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionProfile2017_10_30Callable(const CreateFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionProfile2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionProfile2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2017_10_30Async(const CreateFieldLevelEncryptionProfile2017_10_30Request& request, const CreateFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionProfile2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2017_10_30AsyncHelper(const CreateFieldLevelEncryptionProfile2017_10_30Request& request, const CreateFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionProfile2017_10_30(request), context);
}

CreateInvalidation2017_10_30Outcome CloudFrontClient::CreateInvalidation2017_10_30(const CreateInvalidation2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2017_10_30Outcome(CreateInvalidation2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2017_10_30Outcome(outcome.GetError());
  }
}

CreateInvalidation2017_10_30OutcomeCallable CloudFrontClient::CreateInvalidation2017_10_30Callable(const CreateInvalidation2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2017_10_30Async(const CreateInvalidation2017_10_30Request& request, const CreateInvalidation2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2017_10_30AsyncHelper(const CreateInvalidation2017_10_30Request& request, const CreateInvalidation2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2017_10_30(request), context);
}

CreatePublicKey2017_10_30Outcome CloudFrontClient::CreatePublicKey2017_10_30(const CreatePublicKey2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePublicKey2017_10_30Outcome(CreatePublicKey2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreatePublicKey2017_10_30Outcome(outcome.GetError());
  }
}

CreatePublicKey2017_10_30OutcomeCallable CloudFrontClient::CreatePublicKey2017_10_30Callable(const CreatePublicKey2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicKey2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicKey2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreatePublicKey2017_10_30Async(const CreatePublicKey2017_10_30Request& request, const CreatePublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicKey2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreatePublicKey2017_10_30AsyncHelper(const CreatePublicKey2017_10_30Request& request, const CreatePublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicKey2017_10_30(request), context);
}

CreateStreamingDistribution2017_10_30Outcome CloudFrontClient::CreateStreamingDistribution2017_10_30(const CreateStreamingDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2017_10_30Outcome(CreateStreamingDistribution2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2017_10_30Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2017_10_30OutcomeCallable CloudFrontClient::CreateStreamingDistribution2017_10_30Callable(const CreateStreamingDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2017_10_30Async(const CreateStreamingDistribution2017_10_30Request& request, const CreateStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2017_10_30AsyncHelper(const CreateStreamingDistribution2017_10_30Request& request, const CreateStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2017_10_30(request), context);
}

CreateStreamingDistributionWithTags2017_10_30Outcome CloudFrontClient::CreateStreamingDistributionWithTags2017_10_30(const CreateStreamingDistributionWithTags2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistributionWithTags2017_10_30Outcome(CreateStreamingDistributionWithTags2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistributionWithTags2017_10_30Outcome(outcome.GetError());
  }
}

CreateStreamingDistributionWithTags2017_10_30OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2017_10_30Callable(const CreateStreamingDistributionWithTags2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistributionWithTags2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistributionWithTags2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistributionWithTags2017_10_30Async(const CreateStreamingDistributionWithTags2017_10_30Request& request, const CreateStreamingDistributionWithTags2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistributionWithTags2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistributionWithTags2017_10_30AsyncHelper(const CreateStreamingDistributionWithTags2017_10_30Request& request, const CreateStreamingDistributionWithTags2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistributionWithTags2017_10_30(request), context);
}

DeleteCloudFrontOriginAccessIdentity2017_10_30Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_10_30(const DeleteCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2017_10_30Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2017_10_30OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_10_30Callable(const DeleteCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_10_30Async(const DeleteCloudFrontOriginAccessIdentity2017_10_30Request& request, const DeleteCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2017_10_30AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2017_10_30Request& request, const DeleteCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2017_10_30(request), context);
}

DeleteDistribution2017_10_30Outcome CloudFrontClient::DeleteDistribution2017_10_30(const DeleteDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2017_10_30Outcome(outcome.GetError());
  }
}

DeleteDistribution2017_10_30OutcomeCallable CloudFrontClient::DeleteDistribution2017_10_30Callable(const DeleteDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2017_10_30Async(const DeleteDistribution2017_10_30Request& request, const DeleteDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2017_10_30AsyncHelper(const DeleteDistribution2017_10_30Request& request, const DeleteDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2017_10_30(request), context);
}

DeleteFieldLevelEncryptionConfig2017_10_30Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2017_10_30(const DeleteFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionConfig2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionConfig2017_10_30Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionConfig2017_10_30OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionConfig2017_10_30Callable(const DeleteFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2017_10_30Async(const DeleteFieldLevelEncryptionConfig2017_10_30Request& request, const DeleteFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2017_10_30AsyncHelper(const DeleteFieldLevelEncryptionConfig2017_10_30Request& request, const DeleteFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionConfig2017_10_30(request), context);
}

DeleteFieldLevelEncryptionProfile2017_10_30Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2017_10_30(const DeleteFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionProfile2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionProfile2017_10_30Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionProfile2017_10_30OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionProfile2017_10_30Callable(const DeleteFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionProfile2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionProfile2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2017_10_30Async(const DeleteFieldLevelEncryptionProfile2017_10_30Request& request, const DeleteFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionProfile2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2017_10_30AsyncHelper(const DeleteFieldLevelEncryptionProfile2017_10_30Request& request, const DeleteFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionProfile2017_10_30(request), context);
}

DeletePublicKey2017_10_30Outcome CloudFrontClient::DeletePublicKey2017_10_30(const DeletePublicKey2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePublicKey2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeletePublicKey2017_10_30Outcome(outcome.GetError());
  }
}

DeletePublicKey2017_10_30OutcomeCallable CloudFrontClient::DeletePublicKey2017_10_30Callable(const DeletePublicKey2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicKey2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicKey2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeletePublicKey2017_10_30Async(const DeletePublicKey2017_10_30Request& request, const DeletePublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicKey2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeletePublicKey2017_10_30AsyncHelper(const DeletePublicKey2017_10_30Request& request, const DeletePublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicKey2017_10_30(request), context);
}

DeleteServiceLinkedRole2017_10_30Outcome CloudFrontClient::DeleteServiceLinkedRole2017_10_30(const DeleteServiceLinkedRole2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/service-linked-role/";
  ss << request.GetRoleName();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteServiceLinkedRole2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeleteServiceLinkedRole2017_10_30Outcome(outcome.GetError());
  }
}

DeleteServiceLinkedRole2017_10_30OutcomeCallable CloudFrontClient::DeleteServiceLinkedRole2017_10_30Callable(const DeleteServiceLinkedRole2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceLinkedRole2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteServiceLinkedRole2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteServiceLinkedRole2017_10_30Async(const DeleteServiceLinkedRole2017_10_30Request& request, const DeleteServiceLinkedRole2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceLinkedRole2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteServiceLinkedRole2017_10_30AsyncHelper(const DeleteServiceLinkedRole2017_10_30Request& request, const DeleteServiceLinkedRole2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteServiceLinkedRole2017_10_30(request), context);
}

DeleteStreamingDistribution2017_10_30Outcome CloudFrontClient::DeleteStreamingDistribution2017_10_30(const DeleteStreamingDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2017_10_30Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2017_10_30Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2017_10_30OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2017_10_30Callable(const DeleteStreamingDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2017_10_30Async(const DeleteStreamingDistribution2017_10_30Request& request, const DeleteStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2017_10_30AsyncHelper(const DeleteStreamingDistribution2017_10_30Request& request, const DeleteStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2017_10_30(request), context);
}

GetCloudFrontOriginAccessIdentity2017_10_30Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_10_30(const GetCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2017_10_30Outcome(GetCloudFrontOriginAccessIdentity2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2017_10_30Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2017_10_30OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_10_30Callable(const GetCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_10_30Async(const GetCloudFrontOriginAccessIdentity2017_10_30Request& request, const GetCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2017_10_30AsyncHelper(const GetCloudFrontOriginAccessIdentity2017_10_30Request& request, const GetCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2017_10_30(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2017_10_30Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_10_30(const GetCloudFrontOriginAccessIdentityConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2017_10_30Outcome(GetCloudFrontOriginAccessIdentityConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2017_10_30Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2017_10_30OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_10_30Callable(const GetCloudFrontOriginAccessIdentityConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_10_30Async(const GetCloudFrontOriginAccessIdentityConfig2017_10_30Request& request, const GetCloudFrontOriginAccessIdentityConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2017_10_30AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2017_10_30Request& request, const GetCloudFrontOriginAccessIdentityConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2017_10_30(request), context);
}

GetDistribution2017_10_30Outcome CloudFrontClient::GetDistribution2017_10_30(const GetDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2017_10_30Outcome(GetDistribution2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2017_10_30Outcome(outcome.GetError());
  }
}

GetDistribution2017_10_30OutcomeCallable CloudFrontClient::GetDistribution2017_10_30Callable(const GetDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2017_10_30Async(const GetDistribution2017_10_30Request& request, const GetDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2017_10_30AsyncHelper(const GetDistribution2017_10_30Request& request, const GetDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2017_10_30(request), context);
}

GetDistributionConfig2017_10_30Outcome CloudFrontClient::GetDistributionConfig2017_10_30(const GetDistributionConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2017_10_30Outcome(GetDistributionConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2017_10_30Outcome(outcome.GetError());
  }
}

GetDistributionConfig2017_10_30OutcomeCallable CloudFrontClient::GetDistributionConfig2017_10_30Callable(const GetDistributionConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2017_10_30Async(const GetDistributionConfig2017_10_30Request& request, const GetDistributionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2017_10_30AsyncHelper(const GetDistributionConfig2017_10_30Request& request, const GetDistributionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2017_10_30(request), context);
}

GetFieldLevelEncryption2017_10_30Outcome CloudFrontClient::GetFieldLevelEncryption2017_10_30(const GetFieldLevelEncryption2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryption2017_10_30Outcome(GetFieldLevelEncryption2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryption2017_10_30Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryption2017_10_30OutcomeCallable CloudFrontClient::GetFieldLevelEncryption2017_10_30Callable(const GetFieldLevelEncryption2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryption2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryption2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryption2017_10_30Async(const GetFieldLevelEncryption2017_10_30Request& request, const GetFieldLevelEncryption2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryption2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryption2017_10_30AsyncHelper(const GetFieldLevelEncryption2017_10_30Request& request, const GetFieldLevelEncryption2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryption2017_10_30(request), context);
}

GetFieldLevelEncryptionConfig2017_10_30Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2017_10_30(const GetFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionConfig2017_10_30Outcome(GetFieldLevelEncryptionConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionConfig2017_10_30Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionConfig2017_10_30OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionConfig2017_10_30Callable(const GetFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2017_10_30Async(const GetFieldLevelEncryptionConfig2017_10_30Request& request, const GetFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2017_10_30AsyncHelper(const GetFieldLevelEncryptionConfig2017_10_30Request& request, const GetFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionConfig2017_10_30(request), context);
}

GetFieldLevelEncryptionProfile2017_10_30Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2017_10_30(const GetFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfile2017_10_30Outcome(GetFieldLevelEncryptionProfile2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfile2017_10_30Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfile2017_10_30OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfile2017_10_30Callable(const GetFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfile2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfile2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2017_10_30Async(const GetFieldLevelEncryptionProfile2017_10_30Request& request, const GetFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfile2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2017_10_30AsyncHelper(const GetFieldLevelEncryptionProfile2017_10_30Request& request, const GetFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfile2017_10_30(request), context);
}

GetFieldLevelEncryptionProfileConfig2017_10_30Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2017_10_30(const GetFieldLevelEncryptionProfileConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfileConfig2017_10_30Outcome(GetFieldLevelEncryptionProfileConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfileConfig2017_10_30Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfileConfig2017_10_30OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfileConfig2017_10_30Callable(const GetFieldLevelEncryptionProfileConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfileConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfileConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2017_10_30Async(const GetFieldLevelEncryptionProfileConfig2017_10_30Request& request, const GetFieldLevelEncryptionProfileConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfileConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2017_10_30AsyncHelper(const GetFieldLevelEncryptionProfileConfig2017_10_30Request& request, const GetFieldLevelEncryptionProfileConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfileConfig2017_10_30(request), context);
}

GetInvalidation2017_10_30Outcome CloudFrontClient::GetInvalidation2017_10_30(const GetInvalidation2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2017_10_30Outcome(GetInvalidation2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2017_10_30Outcome(outcome.GetError());
  }
}

GetInvalidation2017_10_30OutcomeCallable CloudFrontClient::GetInvalidation2017_10_30Callable(const GetInvalidation2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2017_10_30Async(const GetInvalidation2017_10_30Request& request, const GetInvalidation2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2017_10_30AsyncHelper(const GetInvalidation2017_10_30Request& request, const GetInvalidation2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2017_10_30(request), context);
}

GetPublicKey2017_10_30Outcome CloudFrontClient::GetPublicKey2017_10_30(const GetPublicKey2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKey2017_10_30Outcome(GetPublicKey2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKey2017_10_30Outcome(outcome.GetError());
  }
}

GetPublicKey2017_10_30OutcomeCallable CloudFrontClient::GetPublicKey2017_10_30Callable(const GetPublicKey2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKey2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKey2017_10_30Async(const GetPublicKey2017_10_30Request& request, const GetPublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKey2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKey2017_10_30AsyncHelper(const GetPublicKey2017_10_30Request& request, const GetPublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKey2017_10_30(request), context);
}

GetPublicKeyConfig2017_10_30Outcome CloudFrontClient::GetPublicKeyConfig2017_10_30(const GetPublicKeyConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKeyConfig2017_10_30Outcome(GetPublicKeyConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKeyConfig2017_10_30Outcome(outcome.GetError());
  }
}

GetPublicKeyConfig2017_10_30OutcomeCallable CloudFrontClient::GetPublicKeyConfig2017_10_30Callable(const GetPublicKeyConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKeyConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKeyConfig2017_10_30Async(const GetPublicKeyConfig2017_10_30Request& request, const GetPublicKeyConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKeyConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKeyConfig2017_10_30AsyncHelper(const GetPublicKeyConfig2017_10_30Request& request, const GetPublicKeyConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKeyConfig2017_10_30(request), context);
}

GetStreamingDistribution2017_10_30Outcome CloudFrontClient::GetStreamingDistribution2017_10_30(const GetStreamingDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2017_10_30Outcome(GetStreamingDistribution2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2017_10_30Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2017_10_30OutcomeCallable CloudFrontClient::GetStreamingDistribution2017_10_30Callable(const GetStreamingDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2017_10_30Async(const GetStreamingDistribution2017_10_30Request& request, const GetStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2017_10_30AsyncHelper(const GetStreamingDistribution2017_10_30Request& request, const GetStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2017_10_30(request), context);
}

GetStreamingDistributionConfig2017_10_30Outcome CloudFrontClient::GetStreamingDistributionConfig2017_10_30(const GetStreamingDistributionConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2017_10_30Outcome(GetStreamingDistributionConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2017_10_30Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2017_10_30OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2017_10_30Callable(const GetStreamingDistributionConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2017_10_30Async(const GetStreamingDistributionConfig2017_10_30Request& request, const GetStreamingDistributionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2017_10_30AsyncHelper(const GetStreamingDistributionConfig2017_10_30Request& request, const GetStreamingDistributionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2017_10_30(request), context);
}

ListCloudFrontOriginAccessIdentities2017_10_30Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_10_30(const ListCloudFrontOriginAccessIdentities2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2017_10_30Outcome(ListCloudFrontOriginAccessIdentities2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2017_10_30Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2017_10_30OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_10_30Callable(const ListCloudFrontOriginAccessIdentities2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_10_30Async(const ListCloudFrontOriginAccessIdentities2017_10_30Request& request, const ListCloudFrontOriginAccessIdentities2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2017_10_30AsyncHelper(const ListCloudFrontOriginAccessIdentities2017_10_30Request& request, const ListCloudFrontOriginAccessIdentities2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2017_10_30(request), context);
}

ListDistributions2017_10_30Outcome CloudFrontClient::ListDistributions2017_10_30(const ListDistributions2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2017_10_30Outcome(ListDistributions2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2017_10_30Outcome(outcome.GetError());
  }
}

ListDistributions2017_10_30OutcomeCallable CloudFrontClient::ListDistributions2017_10_30Callable(const ListDistributions2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2017_10_30Async(const ListDistributions2017_10_30Request& request, const ListDistributions2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2017_10_30AsyncHelper(const ListDistributions2017_10_30Request& request, const ListDistributions2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2017_10_30(request), context);
}

ListDistributionsByWebACLId2017_10_30Outcome CloudFrontClient::ListDistributionsByWebACLId2017_10_30(const ListDistributionsByWebACLId2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distributionsByWebACLId/";
  ss << request.GetWebACLId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributionsByWebACLId2017_10_30Outcome(ListDistributionsByWebACLId2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributionsByWebACLId2017_10_30Outcome(outcome.GetError());
  }
}

ListDistributionsByWebACLId2017_10_30OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2017_10_30Callable(const ListDistributionsByWebACLId2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2017_10_30Async(const ListDistributionsByWebACLId2017_10_30Request& request, const ListDistributionsByWebACLId2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2017_10_30AsyncHelper(const ListDistributionsByWebACLId2017_10_30Request& request, const ListDistributionsByWebACLId2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2017_10_30(request), context);
}

ListFieldLevelEncryptionConfigs2017_10_30Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2017_10_30(const ListFieldLevelEncryptionConfigs2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionConfigs2017_10_30Outcome(ListFieldLevelEncryptionConfigs2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionConfigs2017_10_30Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionConfigs2017_10_30OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionConfigs2017_10_30Callable(const ListFieldLevelEncryptionConfigs2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionConfigs2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionConfigs2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2017_10_30Async(const ListFieldLevelEncryptionConfigs2017_10_30Request& request, const ListFieldLevelEncryptionConfigs2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionConfigs2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2017_10_30AsyncHelper(const ListFieldLevelEncryptionConfigs2017_10_30Request& request, const ListFieldLevelEncryptionConfigs2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionConfigs2017_10_30(request), context);
}

ListFieldLevelEncryptionProfiles2017_10_30Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2017_10_30(const ListFieldLevelEncryptionProfiles2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionProfiles2017_10_30Outcome(ListFieldLevelEncryptionProfiles2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionProfiles2017_10_30Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionProfiles2017_10_30OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionProfiles2017_10_30Callable(const ListFieldLevelEncryptionProfiles2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionProfiles2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionProfiles2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2017_10_30Async(const ListFieldLevelEncryptionProfiles2017_10_30Request& request, const ListFieldLevelEncryptionProfiles2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionProfiles2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2017_10_30AsyncHelper(const ListFieldLevelEncryptionProfiles2017_10_30Request& request, const ListFieldLevelEncryptionProfiles2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionProfiles2017_10_30(request), context);
}

ListInvalidations2017_10_30Outcome CloudFrontClient::ListInvalidations2017_10_30(const ListInvalidations2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2017_10_30Outcome(ListInvalidations2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2017_10_30Outcome(outcome.GetError());
  }
}

ListInvalidations2017_10_30OutcomeCallable CloudFrontClient::ListInvalidations2017_10_30Callable(const ListInvalidations2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2017_10_30Async(const ListInvalidations2017_10_30Request& request, const ListInvalidations2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2017_10_30AsyncHelper(const ListInvalidations2017_10_30Request& request, const ListInvalidations2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2017_10_30(request), context);
}

ListPublicKeys2017_10_30Outcome CloudFrontClient::ListPublicKeys2017_10_30(const ListPublicKeys2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPublicKeys2017_10_30Outcome(ListPublicKeys2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListPublicKeys2017_10_30Outcome(outcome.GetError());
  }
}

ListPublicKeys2017_10_30OutcomeCallable CloudFrontClient::ListPublicKeys2017_10_30Callable(const ListPublicKeys2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeys2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListPublicKeys2017_10_30Async(const ListPublicKeys2017_10_30Request& request, const ListPublicKeys2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeys2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListPublicKeys2017_10_30AsyncHelper(const ListPublicKeys2017_10_30Request& request, const ListPublicKeys2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys2017_10_30(request), context);
}

ListStreamingDistributions2017_10_30Outcome CloudFrontClient::ListStreamingDistributions2017_10_30(const ListStreamingDistributions2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2017_10_30Outcome(ListStreamingDistributions2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2017_10_30Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2017_10_30OutcomeCallable CloudFrontClient::ListStreamingDistributions2017_10_30Callable(const ListStreamingDistributions2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2017_10_30Async(const ListStreamingDistributions2017_10_30Request& request, const ListStreamingDistributions2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2017_10_30AsyncHelper(const ListStreamingDistributions2017_10_30Request& request, const ListStreamingDistributions2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2017_10_30(request), context);
}

ListTagsForResource2017_10_30Outcome CloudFrontClient::ListTagsForResource2017_10_30(const ListTagsForResource2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsForResource2017_10_30Outcome(ListTagsForResource2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResource2017_10_30Outcome(outcome.GetError());
  }
}

ListTagsForResource2017_10_30OutcomeCallable CloudFrontClient::ListTagsForResource2017_10_30Callable(const ListTagsForResource2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResource2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListTagsForResource2017_10_30Async(const ListTagsForResource2017_10_30Request& request, const ListTagsForResource2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResource2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListTagsForResource2017_10_30AsyncHelper(const ListTagsForResource2017_10_30Request& request, const ListTagsForResource2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource2017_10_30(request), context);
}

TagResource2017_10_30Outcome CloudFrontClient::TagResource2017_10_30(const TagResource2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Tag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResource2017_10_30Outcome(NoResult());
  }
  else
  {
    return TagResource2017_10_30Outcome(outcome.GetError());
  }
}

TagResource2017_10_30OutcomeCallable CloudFrontClient::TagResource2017_10_30Callable(const TagResource2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResource2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TagResource2017_10_30Async(const TagResource2017_10_30Request& request, const TagResource2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResource2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TagResource2017_10_30AsyncHelper(const TagResource2017_10_30Request& request, const TagResource2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource2017_10_30(request), context);
}

UntagResource2017_10_30Outcome CloudFrontClient::UntagResource2017_10_30(const UntagResource2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Untag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResource2017_10_30Outcome(NoResult());
  }
  else
  {
    return UntagResource2017_10_30Outcome(outcome.GetError());
  }
}

UntagResource2017_10_30OutcomeCallable CloudFrontClient::UntagResource2017_10_30Callable(const UntagResource2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResource2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UntagResource2017_10_30Async(const UntagResource2017_10_30Request& request, const UntagResource2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResource2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UntagResource2017_10_30AsyncHelper(const UntagResource2017_10_30Request& request, const UntagResource2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource2017_10_30(request), context);
}

UpdateCloudFrontOriginAccessIdentity2017_10_30Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_10_30(const UpdateCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2017_10_30Outcome(UpdateCloudFrontOriginAccessIdentity2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2017_10_30Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2017_10_30OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_10_30Callable(const UpdateCloudFrontOriginAccessIdentity2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_10_30Async(const UpdateCloudFrontOriginAccessIdentity2017_10_30Request& request, const UpdateCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2017_10_30AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2017_10_30Request& request, const UpdateCloudFrontOriginAccessIdentity2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2017_10_30(request), context);
}

UpdateDistribution2017_10_30Outcome CloudFrontClient::UpdateDistribution2017_10_30(const UpdateDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2017_10_30Outcome(UpdateDistribution2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2017_10_30Outcome(outcome.GetError());
  }
}

UpdateDistribution2017_10_30OutcomeCallable CloudFrontClient::UpdateDistribution2017_10_30Callable(const UpdateDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2017_10_30Async(const UpdateDistribution2017_10_30Request& request, const UpdateDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2017_10_30AsyncHelper(const UpdateDistribution2017_10_30Request& request, const UpdateDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2017_10_30(request), context);
}

UpdateFieldLevelEncryptionConfig2017_10_30Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2017_10_30(const UpdateFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionConfig2017_10_30Outcome(UpdateFieldLevelEncryptionConfig2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionConfig2017_10_30Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionConfig2017_10_30OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionConfig2017_10_30Callable(const UpdateFieldLevelEncryptionConfig2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionConfig2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionConfig2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2017_10_30Async(const UpdateFieldLevelEncryptionConfig2017_10_30Request& request, const UpdateFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionConfig2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2017_10_30AsyncHelper(const UpdateFieldLevelEncryptionConfig2017_10_30Request& request, const UpdateFieldLevelEncryptionConfig2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionConfig2017_10_30(request), context);
}

UpdateFieldLevelEncryptionProfile2017_10_30Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2017_10_30(const UpdateFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionProfile2017_10_30Outcome(UpdateFieldLevelEncryptionProfile2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionProfile2017_10_30Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionProfile2017_10_30OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionProfile2017_10_30Callable(const UpdateFieldLevelEncryptionProfile2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionProfile2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionProfile2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2017_10_30Async(const UpdateFieldLevelEncryptionProfile2017_10_30Request& request, const UpdateFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionProfile2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2017_10_30AsyncHelper(const UpdateFieldLevelEncryptionProfile2017_10_30Request& request, const UpdateFieldLevelEncryptionProfile2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionProfile2017_10_30(request), context);
}

UpdatePublicKey2017_10_30Outcome CloudFrontClient::UpdatePublicKey2017_10_30(const UpdatePublicKey2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdatePublicKey2017_10_30Outcome(UpdatePublicKey2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return UpdatePublicKey2017_10_30Outcome(outcome.GetError());
  }
}

UpdatePublicKey2017_10_30OutcomeCallable CloudFrontClient::UpdatePublicKey2017_10_30Callable(const UpdatePublicKey2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicKey2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicKey2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdatePublicKey2017_10_30Async(const UpdatePublicKey2017_10_30Request& request, const UpdatePublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePublicKey2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdatePublicKey2017_10_30AsyncHelper(const UpdatePublicKey2017_10_30Request& request, const UpdatePublicKey2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePublicKey2017_10_30(request), context);
}

UpdateStreamingDistribution2017_10_30Outcome CloudFrontClient::UpdateStreamingDistribution2017_10_30(const UpdateStreamingDistribution2017_10_30Request& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/2017-10-30/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2017_10_30Outcome(UpdateStreamingDistribution2017_10_30Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2017_10_30Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2017_10_30OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2017_10_30Callable(const UpdateStreamingDistribution2017_10_30Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2017_10_30Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2017_10_30(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2017_10_30Async(const UpdateStreamingDistribution2017_10_30Request& request, const UpdateStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2017_10_30AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2017_10_30AsyncHelper(const UpdateStreamingDistribution2017_10_30Request& request, const UpdateStreamingDistribution2017_10_30ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2017_10_30(request), context);
}



