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
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/CloudFrontEndpoint.h>
#include <aws/cloudfront/CloudFrontErrorMarshaller.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2018_11_05Request.h>
#include <aws/cloudfront/model/CreateDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2018_11_05Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2018_11_05Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2018_11_05Request.h>
#include <aws/cloudfront/model/CreateInvalidation2018_11_05Request.h>
#include <aws/cloudfront/model/CreatePublicKey2018_11_05Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2018_11_05Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2018_11_05Request.h>
#include <aws/cloudfront/model/DeleteDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2018_11_05Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionProfile2018_11_05Request.h>
#include <aws/cloudfront/model/DeletePublicKey2018_11_05Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2018_11_05Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2018_11_05Request.h>
#include <aws/cloudfront/model/GetDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2018_11_05Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2018_11_05Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2018_11_05Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2018_11_05Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2018_11_05Request.h>
#include <aws/cloudfront/model/GetInvalidation2018_11_05Request.h>
#include <aws/cloudfront/model/GetPublicKey2018_11_05Request.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2018_11_05Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2018_11_05Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2018_11_05Request.h>
#include <aws/cloudfront/model/ListDistributions2018_11_05Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2018_11_05Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2018_11_05Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2018_11_05Request.h>
#include <aws/cloudfront/model/ListInvalidations2018_11_05Request.h>
#include <aws/cloudfront/model/ListPublicKeys2018_11_05Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2018_11_05Request.h>
#include <aws/cloudfront/model/ListTagsForResource2018_11_05Request.h>
#include <aws/cloudfront/model/TagResource2018_11_05Request.h>
#include <aws/cloudfront/model/UntagResource2018_11_05Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2018_11_05Request.h>
#include <aws/cloudfront/model/UpdateDistribution2018_11_05Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2018_11_05Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2018_11_05Request.h>
#include <aws/cloudfront/model/UpdatePublicKey2018_11_05Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2018_11_05Request.h>

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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudFrontEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudFrontClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}
CreateCloudFrontOriginAccessIdentity2018_11_05Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_11_05(const CreateCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2018_11_05Outcome(CreateCloudFrontOriginAccessIdentity2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2018_11_05Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2018_11_05OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_11_05Callable(const CreateCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_11_05Async(const CreateCloudFrontOriginAccessIdentity2018_11_05Request& request, const CreateCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2018_11_05AsyncHelper(const CreateCloudFrontOriginAccessIdentity2018_11_05Request& request, const CreateCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2018_11_05(request), context);
}

CreateDistribution2018_11_05Outcome CloudFrontClient::CreateDistribution2018_11_05(const CreateDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2018_11_05Outcome(CreateDistribution2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2018_11_05Outcome(outcome.GetError());
  }
}

CreateDistribution2018_11_05OutcomeCallable CloudFrontClient::CreateDistribution2018_11_05Callable(const CreateDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2018_11_05Async(const CreateDistribution2018_11_05Request& request, const CreateDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2018_11_05AsyncHelper(const CreateDistribution2018_11_05Request& request, const CreateDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2018_11_05(request), context);
}

CreateDistributionWithTags2018_11_05Outcome CloudFrontClient::CreateDistributionWithTags2018_11_05(const CreateDistributionWithTags2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistributionWithTags2018_11_05Outcome(CreateDistributionWithTags2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistributionWithTags2018_11_05Outcome(outcome.GetError());
  }
}

CreateDistributionWithTags2018_11_05OutcomeCallable CloudFrontClient::CreateDistributionWithTags2018_11_05Callable(const CreateDistributionWithTags2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionWithTags2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionWithTags2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistributionWithTags2018_11_05Async(const CreateDistributionWithTags2018_11_05Request& request, const CreateDistributionWithTags2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistributionWithTags2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistributionWithTags2018_11_05AsyncHelper(const CreateDistributionWithTags2018_11_05Request& request, const CreateDistributionWithTags2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistributionWithTags2018_11_05(request), context);
}

CreateFieldLevelEncryptionConfig2018_11_05Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2018_11_05(const CreateFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionConfig2018_11_05Outcome(CreateFieldLevelEncryptionConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionConfig2018_11_05Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionConfig2018_11_05OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionConfig2018_11_05Callable(const CreateFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2018_11_05Async(const CreateFieldLevelEncryptionConfig2018_11_05Request& request, const CreateFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2018_11_05AsyncHelper(const CreateFieldLevelEncryptionConfig2018_11_05Request& request, const CreateFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionConfig2018_11_05(request), context);
}

CreateFieldLevelEncryptionProfile2018_11_05Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2018_11_05(const CreateFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionProfile2018_11_05Outcome(CreateFieldLevelEncryptionProfile2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionProfile2018_11_05Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionProfile2018_11_05OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionProfile2018_11_05Callable(const CreateFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionProfile2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionProfile2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2018_11_05Async(const CreateFieldLevelEncryptionProfile2018_11_05Request& request, const CreateFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionProfile2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2018_11_05AsyncHelper(const CreateFieldLevelEncryptionProfile2018_11_05Request& request, const CreateFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionProfile2018_11_05(request), context);
}

CreateInvalidation2018_11_05Outcome CloudFrontClient::CreateInvalidation2018_11_05(const CreateInvalidation2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2018_11_05Outcome(CreateInvalidation2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2018_11_05Outcome(outcome.GetError());
  }
}

CreateInvalidation2018_11_05OutcomeCallable CloudFrontClient::CreateInvalidation2018_11_05Callable(const CreateInvalidation2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2018_11_05Async(const CreateInvalidation2018_11_05Request& request, const CreateInvalidation2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2018_11_05AsyncHelper(const CreateInvalidation2018_11_05Request& request, const CreateInvalidation2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2018_11_05(request), context);
}

CreatePublicKey2018_11_05Outcome CloudFrontClient::CreatePublicKey2018_11_05(const CreatePublicKey2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePublicKey2018_11_05Outcome(CreatePublicKey2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreatePublicKey2018_11_05Outcome(outcome.GetError());
  }
}

CreatePublicKey2018_11_05OutcomeCallable CloudFrontClient::CreatePublicKey2018_11_05Callable(const CreatePublicKey2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicKey2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicKey2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreatePublicKey2018_11_05Async(const CreatePublicKey2018_11_05Request& request, const CreatePublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicKey2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreatePublicKey2018_11_05AsyncHelper(const CreatePublicKey2018_11_05Request& request, const CreatePublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicKey2018_11_05(request), context);
}

CreateStreamingDistribution2018_11_05Outcome CloudFrontClient::CreateStreamingDistribution2018_11_05(const CreateStreamingDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2018_11_05Outcome(CreateStreamingDistribution2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2018_11_05Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2018_11_05OutcomeCallable CloudFrontClient::CreateStreamingDistribution2018_11_05Callable(const CreateStreamingDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2018_11_05Async(const CreateStreamingDistribution2018_11_05Request& request, const CreateStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2018_11_05AsyncHelper(const CreateStreamingDistribution2018_11_05Request& request, const CreateStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2018_11_05(request), context);
}

CreateStreamingDistributionWithTags2018_11_05Outcome CloudFrontClient::CreateStreamingDistributionWithTags2018_11_05(const CreateStreamingDistributionWithTags2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistributionWithTags2018_11_05Outcome(CreateStreamingDistributionWithTags2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistributionWithTags2018_11_05Outcome(outcome.GetError());
  }
}

CreateStreamingDistributionWithTags2018_11_05OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2018_11_05Callable(const CreateStreamingDistributionWithTags2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistributionWithTags2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistributionWithTags2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistributionWithTags2018_11_05Async(const CreateStreamingDistributionWithTags2018_11_05Request& request, const CreateStreamingDistributionWithTags2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistributionWithTags2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistributionWithTags2018_11_05AsyncHelper(const CreateStreamingDistributionWithTags2018_11_05Request& request, const CreateStreamingDistributionWithTags2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistributionWithTags2018_11_05(request), context);
}

DeleteCloudFrontOriginAccessIdentity2018_11_05Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_11_05(const DeleteCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2018_11_05Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2018_11_05Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2018_11_05OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_11_05Callable(const DeleteCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_11_05Async(const DeleteCloudFrontOriginAccessIdentity2018_11_05Request& request, const DeleteCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2018_11_05AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2018_11_05Request& request, const DeleteCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2018_11_05(request), context);
}

DeleteDistribution2018_11_05Outcome CloudFrontClient::DeleteDistribution2018_11_05(const DeleteDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2018_11_05Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2018_11_05Outcome(outcome.GetError());
  }
}

DeleteDistribution2018_11_05OutcomeCallable CloudFrontClient::DeleteDistribution2018_11_05Callable(const DeleteDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2018_11_05Async(const DeleteDistribution2018_11_05Request& request, const DeleteDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2018_11_05AsyncHelper(const DeleteDistribution2018_11_05Request& request, const DeleteDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2018_11_05(request), context);
}

DeleteFieldLevelEncryptionConfig2018_11_05Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_11_05(const DeleteFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionConfig2018_11_05Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionConfig2018_11_05Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionConfig2018_11_05OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_11_05Callable(const DeleteFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_11_05Async(const DeleteFieldLevelEncryptionConfig2018_11_05Request& request, const DeleteFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2018_11_05AsyncHelper(const DeleteFieldLevelEncryptionConfig2018_11_05Request& request, const DeleteFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionConfig2018_11_05(request), context);
}

DeleteFieldLevelEncryptionProfile2018_11_05Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_11_05(const DeleteFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionProfile2018_11_05Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionProfile2018_11_05Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionProfile2018_11_05OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_11_05Callable(const DeleteFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionProfile2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionProfile2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_11_05Async(const DeleteFieldLevelEncryptionProfile2018_11_05Request& request, const DeleteFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionProfile2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2018_11_05AsyncHelper(const DeleteFieldLevelEncryptionProfile2018_11_05Request& request, const DeleteFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionProfile2018_11_05(request), context);
}

DeletePublicKey2018_11_05Outcome CloudFrontClient::DeletePublicKey2018_11_05(const DeletePublicKey2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePublicKey2018_11_05Outcome(NoResult());
  }
  else
  {
    return DeletePublicKey2018_11_05Outcome(outcome.GetError());
  }
}

DeletePublicKey2018_11_05OutcomeCallable CloudFrontClient::DeletePublicKey2018_11_05Callable(const DeletePublicKey2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicKey2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicKey2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeletePublicKey2018_11_05Async(const DeletePublicKey2018_11_05Request& request, const DeletePublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicKey2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeletePublicKey2018_11_05AsyncHelper(const DeletePublicKey2018_11_05Request& request, const DeletePublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicKey2018_11_05(request), context);
}

DeleteStreamingDistribution2018_11_05Outcome CloudFrontClient::DeleteStreamingDistribution2018_11_05(const DeleteStreamingDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2018_11_05Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2018_11_05Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2018_11_05OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2018_11_05Callable(const DeleteStreamingDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2018_11_05Async(const DeleteStreamingDistribution2018_11_05Request& request, const DeleteStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2018_11_05AsyncHelper(const DeleteStreamingDistribution2018_11_05Request& request, const DeleteStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2018_11_05(request), context);
}

GetCloudFrontOriginAccessIdentity2018_11_05Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_11_05(const GetCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2018_11_05Outcome(GetCloudFrontOriginAccessIdentity2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2018_11_05Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2018_11_05OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_11_05Callable(const GetCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_11_05Async(const GetCloudFrontOriginAccessIdentity2018_11_05Request& request, const GetCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2018_11_05AsyncHelper(const GetCloudFrontOriginAccessIdentity2018_11_05Request& request, const GetCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2018_11_05(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2018_11_05Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_11_05(const GetCloudFrontOriginAccessIdentityConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2018_11_05Outcome(GetCloudFrontOriginAccessIdentityConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2018_11_05Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2018_11_05OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_11_05Callable(const GetCloudFrontOriginAccessIdentityConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_11_05Async(const GetCloudFrontOriginAccessIdentityConfig2018_11_05Request& request, const GetCloudFrontOriginAccessIdentityConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2018_11_05AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2018_11_05Request& request, const GetCloudFrontOriginAccessIdentityConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2018_11_05(request), context);
}

GetDistribution2018_11_05Outcome CloudFrontClient::GetDistribution2018_11_05(const GetDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2018_11_05Outcome(GetDistribution2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2018_11_05Outcome(outcome.GetError());
  }
}

GetDistribution2018_11_05OutcomeCallable CloudFrontClient::GetDistribution2018_11_05Callable(const GetDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2018_11_05Async(const GetDistribution2018_11_05Request& request, const GetDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2018_11_05AsyncHelper(const GetDistribution2018_11_05Request& request, const GetDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2018_11_05(request), context);
}

GetDistributionConfig2018_11_05Outcome CloudFrontClient::GetDistributionConfig2018_11_05(const GetDistributionConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2018_11_05Outcome(GetDistributionConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2018_11_05Outcome(outcome.GetError());
  }
}

GetDistributionConfig2018_11_05OutcomeCallable CloudFrontClient::GetDistributionConfig2018_11_05Callable(const GetDistributionConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2018_11_05Async(const GetDistributionConfig2018_11_05Request& request, const GetDistributionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2018_11_05AsyncHelper(const GetDistributionConfig2018_11_05Request& request, const GetDistributionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2018_11_05(request), context);
}

GetFieldLevelEncryption2018_11_05Outcome CloudFrontClient::GetFieldLevelEncryption2018_11_05(const GetFieldLevelEncryption2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryption2018_11_05Outcome(GetFieldLevelEncryption2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryption2018_11_05Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryption2018_11_05OutcomeCallable CloudFrontClient::GetFieldLevelEncryption2018_11_05Callable(const GetFieldLevelEncryption2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryption2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryption2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryption2018_11_05Async(const GetFieldLevelEncryption2018_11_05Request& request, const GetFieldLevelEncryption2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryption2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryption2018_11_05AsyncHelper(const GetFieldLevelEncryption2018_11_05Request& request, const GetFieldLevelEncryption2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryption2018_11_05(request), context);
}

GetFieldLevelEncryptionConfig2018_11_05Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2018_11_05(const GetFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionConfig2018_11_05Outcome(GetFieldLevelEncryptionConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionConfig2018_11_05Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionConfig2018_11_05OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionConfig2018_11_05Callable(const GetFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2018_11_05Async(const GetFieldLevelEncryptionConfig2018_11_05Request& request, const GetFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2018_11_05AsyncHelper(const GetFieldLevelEncryptionConfig2018_11_05Request& request, const GetFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionConfig2018_11_05(request), context);
}

GetFieldLevelEncryptionProfile2018_11_05Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2018_11_05(const GetFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfile2018_11_05Outcome(GetFieldLevelEncryptionProfile2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfile2018_11_05Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfile2018_11_05OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfile2018_11_05Callable(const GetFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfile2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfile2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2018_11_05Async(const GetFieldLevelEncryptionProfile2018_11_05Request& request, const GetFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfile2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2018_11_05AsyncHelper(const GetFieldLevelEncryptionProfile2018_11_05Request& request, const GetFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfile2018_11_05(request), context);
}

GetFieldLevelEncryptionProfileConfig2018_11_05Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_11_05(const GetFieldLevelEncryptionProfileConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfileConfig2018_11_05Outcome(GetFieldLevelEncryptionProfileConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfileConfig2018_11_05Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfileConfig2018_11_05OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_11_05Callable(const GetFieldLevelEncryptionProfileConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfileConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfileConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_11_05Async(const GetFieldLevelEncryptionProfileConfig2018_11_05Request& request, const GetFieldLevelEncryptionProfileConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfileConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2018_11_05AsyncHelper(const GetFieldLevelEncryptionProfileConfig2018_11_05Request& request, const GetFieldLevelEncryptionProfileConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfileConfig2018_11_05(request), context);
}

GetInvalidation2018_11_05Outcome CloudFrontClient::GetInvalidation2018_11_05(const GetInvalidation2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2018_11_05Outcome(GetInvalidation2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2018_11_05Outcome(outcome.GetError());
  }
}

GetInvalidation2018_11_05OutcomeCallable CloudFrontClient::GetInvalidation2018_11_05Callable(const GetInvalidation2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2018_11_05Async(const GetInvalidation2018_11_05Request& request, const GetInvalidation2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2018_11_05AsyncHelper(const GetInvalidation2018_11_05Request& request, const GetInvalidation2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2018_11_05(request), context);
}

GetPublicKey2018_11_05Outcome CloudFrontClient::GetPublicKey2018_11_05(const GetPublicKey2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKey2018_11_05Outcome(GetPublicKey2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKey2018_11_05Outcome(outcome.GetError());
  }
}

GetPublicKey2018_11_05OutcomeCallable CloudFrontClient::GetPublicKey2018_11_05Callable(const GetPublicKey2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKey2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKey2018_11_05Async(const GetPublicKey2018_11_05Request& request, const GetPublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKey2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKey2018_11_05AsyncHelper(const GetPublicKey2018_11_05Request& request, const GetPublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKey2018_11_05(request), context);
}

GetPublicKeyConfig2018_11_05Outcome CloudFrontClient::GetPublicKeyConfig2018_11_05(const GetPublicKeyConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKeyConfig2018_11_05Outcome(GetPublicKeyConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKeyConfig2018_11_05Outcome(outcome.GetError());
  }
}

GetPublicKeyConfig2018_11_05OutcomeCallable CloudFrontClient::GetPublicKeyConfig2018_11_05Callable(const GetPublicKeyConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKeyConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKeyConfig2018_11_05Async(const GetPublicKeyConfig2018_11_05Request& request, const GetPublicKeyConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKeyConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKeyConfig2018_11_05AsyncHelper(const GetPublicKeyConfig2018_11_05Request& request, const GetPublicKeyConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKeyConfig2018_11_05(request), context);
}

GetStreamingDistribution2018_11_05Outcome CloudFrontClient::GetStreamingDistribution2018_11_05(const GetStreamingDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2018_11_05Outcome(GetStreamingDistribution2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2018_11_05Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2018_11_05OutcomeCallable CloudFrontClient::GetStreamingDistribution2018_11_05Callable(const GetStreamingDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2018_11_05Async(const GetStreamingDistribution2018_11_05Request& request, const GetStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2018_11_05AsyncHelper(const GetStreamingDistribution2018_11_05Request& request, const GetStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2018_11_05(request), context);
}

GetStreamingDistributionConfig2018_11_05Outcome CloudFrontClient::GetStreamingDistributionConfig2018_11_05(const GetStreamingDistributionConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2018_11_05Outcome(GetStreamingDistributionConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2018_11_05Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2018_11_05OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2018_11_05Callable(const GetStreamingDistributionConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2018_11_05Async(const GetStreamingDistributionConfig2018_11_05Request& request, const GetStreamingDistributionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2018_11_05AsyncHelper(const GetStreamingDistributionConfig2018_11_05Request& request, const GetStreamingDistributionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2018_11_05(request), context);
}

ListCloudFrontOriginAccessIdentities2018_11_05Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_11_05(const ListCloudFrontOriginAccessIdentities2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2018_11_05Outcome(ListCloudFrontOriginAccessIdentities2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2018_11_05Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2018_11_05OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_11_05Callable(const ListCloudFrontOriginAccessIdentities2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_11_05Async(const ListCloudFrontOriginAccessIdentities2018_11_05Request& request, const ListCloudFrontOriginAccessIdentities2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2018_11_05AsyncHelper(const ListCloudFrontOriginAccessIdentities2018_11_05Request& request, const ListCloudFrontOriginAccessIdentities2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2018_11_05(request), context);
}

ListDistributions2018_11_05Outcome CloudFrontClient::ListDistributions2018_11_05(const ListDistributions2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2018_11_05Outcome(ListDistributions2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2018_11_05Outcome(outcome.GetError());
  }
}

ListDistributions2018_11_05OutcomeCallable CloudFrontClient::ListDistributions2018_11_05Callable(const ListDistributions2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2018_11_05Async(const ListDistributions2018_11_05Request& request, const ListDistributions2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2018_11_05AsyncHelper(const ListDistributions2018_11_05Request& request, const ListDistributions2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2018_11_05(request), context);
}

ListDistributionsByWebACLId2018_11_05Outcome CloudFrontClient::ListDistributionsByWebACLId2018_11_05(const ListDistributionsByWebACLId2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distributionsByWebACLId/";
  ss << request.GetWebACLId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributionsByWebACLId2018_11_05Outcome(ListDistributionsByWebACLId2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributionsByWebACLId2018_11_05Outcome(outcome.GetError());
  }
}

ListDistributionsByWebACLId2018_11_05OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2018_11_05Callable(const ListDistributionsByWebACLId2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2018_11_05Async(const ListDistributionsByWebACLId2018_11_05Request& request, const ListDistributionsByWebACLId2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2018_11_05AsyncHelper(const ListDistributionsByWebACLId2018_11_05Request& request, const ListDistributionsByWebACLId2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2018_11_05(request), context);
}

ListFieldLevelEncryptionConfigs2018_11_05Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2018_11_05(const ListFieldLevelEncryptionConfigs2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionConfigs2018_11_05Outcome(ListFieldLevelEncryptionConfigs2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionConfigs2018_11_05Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionConfigs2018_11_05OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionConfigs2018_11_05Callable(const ListFieldLevelEncryptionConfigs2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionConfigs2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionConfigs2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2018_11_05Async(const ListFieldLevelEncryptionConfigs2018_11_05Request& request, const ListFieldLevelEncryptionConfigs2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionConfigs2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2018_11_05AsyncHelper(const ListFieldLevelEncryptionConfigs2018_11_05Request& request, const ListFieldLevelEncryptionConfigs2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionConfigs2018_11_05(request), context);
}

ListFieldLevelEncryptionProfiles2018_11_05Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2018_11_05(const ListFieldLevelEncryptionProfiles2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionProfiles2018_11_05Outcome(ListFieldLevelEncryptionProfiles2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionProfiles2018_11_05Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionProfiles2018_11_05OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionProfiles2018_11_05Callable(const ListFieldLevelEncryptionProfiles2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionProfiles2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionProfiles2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2018_11_05Async(const ListFieldLevelEncryptionProfiles2018_11_05Request& request, const ListFieldLevelEncryptionProfiles2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionProfiles2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2018_11_05AsyncHelper(const ListFieldLevelEncryptionProfiles2018_11_05Request& request, const ListFieldLevelEncryptionProfiles2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionProfiles2018_11_05(request), context);
}

ListInvalidations2018_11_05Outcome CloudFrontClient::ListInvalidations2018_11_05(const ListInvalidations2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2018_11_05Outcome(ListInvalidations2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2018_11_05Outcome(outcome.GetError());
  }
}

ListInvalidations2018_11_05OutcomeCallable CloudFrontClient::ListInvalidations2018_11_05Callable(const ListInvalidations2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2018_11_05Async(const ListInvalidations2018_11_05Request& request, const ListInvalidations2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2018_11_05AsyncHelper(const ListInvalidations2018_11_05Request& request, const ListInvalidations2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2018_11_05(request), context);
}

ListPublicKeys2018_11_05Outcome CloudFrontClient::ListPublicKeys2018_11_05(const ListPublicKeys2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPublicKeys2018_11_05Outcome(ListPublicKeys2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListPublicKeys2018_11_05Outcome(outcome.GetError());
  }
}

ListPublicKeys2018_11_05OutcomeCallable CloudFrontClient::ListPublicKeys2018_11_05Callable(const ListPublicKeys2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeys2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListPublicKeys2018_11_05Async(const ListPublicKeys2018_11_05Request& request, const ListPublicKeys2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeys2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListPublicKeys2018_11_05AsyncHelper(const ListPublicKeys2018_11_05Request& request, const ListPublicKeys2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys2018_11_05(request), context);
}

ListStreamingDistributions2018_11_05Outcome CloudFrontClient::ListStreamingDistributions2018_11_05(const ListStreamingDistributions2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2018_11_05Outcome(ListStreamingDistributions2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2018_11_05Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2018_11_05OutcomeCallable CloudFrontClient::ListStreamingDistributions2018_11_05Callable(const ListStreamingDistributions2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2018_11_05Async(const ListStreamingDistributions2018_11_05Request& request, const ListStreamingDistributions2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2018_11_05AsyncHelper(const ListStreamingDistributions2018_11_05Request& request, const ListStreamingDistributions2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2018_11_05(request), context);
}

ListTagsForResource2018_11_05Outcome CloudFrontClient::ListTagsForResource2018_11_05(const ListTagsForResource2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsForResource2018_11_05Outcome(ListTagsForResource2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResource2018_11_05Outcome(outcome.GetError());
  }
}

ListTagsForResource2018_11_05OutcomeCallable CloudFrontClient::ListTagsForResource2018_11_05Callable(const ListTagsForResource2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResource2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListTagsForResource2018_11_05Async(const ListTagsForResource2018_11_05Request& request, const ListTagsForResource2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResource2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListTagsForResource2018_11_05AsyncHelper(const ListTagsForResource2018_11_05Request& request, const ListTagsForResource2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource2018_11_05(request), context);
}

TagResource2018_11_05Outcome CloudFrontClient::TagResource2018_11_05(const TagResource2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Tag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResource2018_11_05Outcome(NoResult());
  }
  else
  {
    return TagResource2018_11_05Outcome(outcome.GetError());
  }
}

TagResource2018_11_05OutcomeCallable CloudFrontClient::TagResource2018_11_05Callable(const TagResource2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResource2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TagResource2018_11_05Async(const TagResource2018_11_05Request& request, const TagResource2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResource2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TagResource2018_11_05AsyncHelper(const TagResource2018_11_05Request& request, const TagResource2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource2018_11_05(request), context);
}

UntagResource2018_11_05Outcome CloudFrontClient::UntagResource2018_11_05(const UntagResource2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Untag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResource2018_11_05Outcome(NoResult());
  }
  else
  {
    return UntagResource2018_11_05Outcome(outcome.GetError());
  }
}

UntagResource2018_11_05OutcomeCallable CloudFrontClient::UntagResource2018_11_05Callable(const UntagResource2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResource2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UntagResource2018_11_05Async(const UntagResource2018_11_05Request& request, const UntagResource2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResource2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UntagResource2018_11_05AsyncHelper(const UntagResource2018_11_05Request& request, const UntagResource2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource2018_11_05(request), context);
}

UpdateCloudFrontOriginAccessIdentity2018_11_05Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_11_05(const UpdateCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2018_11_05Outcome(UpdateCloudFrontOriginAccessIdentity2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2018_11_05Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2018_11_05OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_11_05Callable(const UpdateCloudFrontOriginAccessIdentity2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_11_05Async(const UpdateCloudFrontOriginAccessIdentity2018_11_05Request& request, const UpdateCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2018_11_05AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2018_11_05Request& request, const UpdateCloudFrontOriginAccessIdentity2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2018_11_05(request), context);
}

UpdateDistribution2018_11_05Outcome CloudFrontClient::UpdateDistribution2018_11_05(const UpdateDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2018_11_05Outcome(UpdateDistribution2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2018_11_05Outcome(outcome.GetError());
  }
}

UpdateDistribution2018_11_05OutcomeCallable CloudFrontClient::UpdateDistribution2018_11_05Callable(const UpdateDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2018_11_05Async(const UpdateDistribution2018_11_05Request& request, const UpdateDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2018_11_05AsyncHelper(const UpdateDistribution2018_11_05Request& request, const UpdateDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2018_11_05(request), context);
}

UpdateFieldLevelEncryptionConfig2018_11_05Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_11_05(const UpdateFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionConfig2018_11_05Outcome(UpdateFieldLevelEncryptionConfig2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionConfig2018_11_05Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionConfig2018_11_05OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_11_05Callable(const UpdateFieldLevelEncryptionConfig2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionConfig2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionConfig2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_11_05Async(const UpdateFieldLevelEncryptionConfig2018_11_05Request& request, const UpdateFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionConfig2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2018_11_05AsyncHelper(const UpdateFieldLevelEncryptionConfig2018_11_05Request& request, const UpdateFieldLevelEncryptionConfig2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionConfig2018_11_05(request), context);
}

UpdateFieldLevelEncryptionProfile2018_11_05Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_11_05(const UpdateFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionProfile2018_11_05Outcome(UpdateFieldLevelEncryptionProfile2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionProfile2018_11_05Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionProfile2018_11_05OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_11_05Callable(const UpdateFieldLevelEncryptionProfile2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionProfile2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionProfile2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_11_05Async(const UpdateFieldLevelEncryptionProfile2018_11_05Request& request, const UpdateFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionProfile2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2018_11_05AsyncHelper(const UpdateFieldLevelEncryptionProfile2018_11_05Request& request, const UpdateFieldLevelEncryptionProfile2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionProfile2018_11_05(request), context);
}

UpdatePublicKey2018_11_05Outcome CloudFrontClient::UpdatePublicKey2018_11_05(const UpdatePublicKey2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdatePublicKey2018_11_05Outcome(UpdatePublicKey2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return UpdatePublicKey2018_11_05Outcome(outcome.GetError());
  }
}

UpdatePublicKey2018_11_05OutcomeCallable CloudFrontClient::UpdatePublicKey2018_11_05Callable(const UpdatePublicKey2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicKey2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicKey2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdatePublicKey2018_11_05Async(const UpdatePublicKey2018_11_05Request& request, const UpdatePublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePublicKey2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdatePublicKey2018_11_05AsyncHelper(const UpdatePublicKey2018_11_05Request& request, const UpdatePublicKey2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePublicKey2018_11_05(request), context);
}

UpdateStreamingDistribution2018_11_05Outcome CloudFrontClient::UpdateStreamingDistribution2018_11_05(const UpdateStreamingDistribution2018_11_05Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2018-11-05/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2018_11_05Outcome(UpdateStreamingDistribution2018_11_05Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2018_11_05Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2018_11_05OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2018_11_05Callable(const UpdateStreamingDistribution2018_11_05Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2018_11_05Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2018_11_05(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2018_11_05Async(const UpdateStreamingDistribution2018_11_05Request& request, const UpdateStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2018_11_05AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2018_11_05AsyncHelper(const UpdateStreamingDistribution2018_11_05Request& request, const UpdateStreamingDistribution2018_11_05ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2018_11_05(request), context);
}



