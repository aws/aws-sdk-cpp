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
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2019_03_26Request.h>
#include <aws/cloudfront/model/CreateDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2019_03_26Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2019_03_26Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2019_03_26Request.h>
#include <aws/cloudfront/model/CreateInvalidation2019_03_26Request.h>
#include <aws/cloudfront/model/CreatePublicKey2019_03_26Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2019_03_26Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2019_03_26Request.h>
#include <aws/cloudfront/model/DeleteDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2019_03_26Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionProfile2019_03_26Request.h>
#include <aws/cloudfront/model/DeletePublicKey2019_03_26Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2019_03_26Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2019_03_26Request.h>
#include <aws/cloudfront/model/GetDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2019_03_26Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2019_03_26Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2019_03_26Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2019_03_26Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2019_03_26Request.h>
#include <aws/cloudfront/model/GetInvalidation2019_03_26Request.h>
#include <aws/cloudfront/model/GetPublicKey2019_03_26Request.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2019_03_26Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2019_03_26Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2019_03_26Request.h>
#include <aws/cloudfront/model/ListDistributions2019_03_26Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2019_03_26Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2019_03_26Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2019_03_26Request.h>
#include <aws/cloudfront/model/ListInvalidations2019_03_26Request.h>
#include <aws/cloudfront/model/ListPublicKeys2019_03_26Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2019_03_26Request.h>
#include <aws/cloudfront/model/ListTagsForResource2019_03_26Request.h>
#include <aws/cloudfront/model/TagResource2019_03_26Request.h>
#include <aws/cloudfront/model/UntagResource2019_03_26Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2019_03_26Request.h>
#include <aws/cloudfront/model/UpdateDistribution2019_03_26Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2019_03_26Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2019_03_26Request.h>
#include <aws/cloudfront/model/UpdatePublicKey2019_03_26Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2019_03_26Request.h>

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

CreateCloudFrontOriginAccessIdentity2019_03_26Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2019_03_26(const CreateCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateCloudFrontOriginAccessIdentity2019_03_26Outcome(CreateCloudFrontOriginAccessIdentity2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFrontOriginAccessIdentity2019_03_26Outcome(outcome.GetError());
  }
}

CreateCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2019_03_26Callable(const CreateCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2019_03_26Async(const CreateCloudFrontOriginAccessIdentity2019_03_26Request& request, const CreateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const CreateCloudFrontOriginAccessIdentity2019_03_26Request& request, const CreateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2019_03_26(request), context);
}

CreateDistribution2019_03_26Outcome CloudFrontClient::CreateDistribution2019_03_26(const CreateDistribution2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistribution2019_03_26Outcome(CreateDistribution2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistribution2019_03_26Outcome(outcome.GetError());
  }
}

CreateDistribution2019_03_26OutcomeCallable CloudFrontClient::CreateDistribution2019_03_26Callable(const CreateDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2019_03_26Async(const CreateDistribution2019_03_26Request& request, const CreateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2019_03_26AsyncHelper(const CreateDistribution2019_03_26Request& request, const CreateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2019_03_26(request), context);
}

CreateDistributionWithTags2019_03_26Outcome CloudFrontClient::CreateDistributionWithTags2019_03_26(const CreateDistributionWithTags2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDistributionWithTags2019_03_26Outcome(CreateDistributionWithTags2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateDistributionWithTags2019_03_26Outcome(outcome.GetError());
  }
}

CreateDistributionWithTags2019_03_26OutcomeCallable CloudFrontClient::CreateDistributionWithTags2019_03_26Callable(const CreateDistributionWithTags2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionWithTags2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionWithTags2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistributionWithTags2019_03_26Async(const CreateDistributionWithTags2019_03_26Request& request, const CreateDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistributionWithTags2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistributionWithTags2019_03_26AsyncHelper(const CreateDistributionWithTags2019_03_26Request& request, const CreateDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistributionWithTags2019_03_26(request), context);
}

CreateFieldLevelEncryptionConfig2019_03_26Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2019_03_26(const CreateFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionConfig2019_03_26Outcome(CreateFieldLevelEncryptionConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionConfig2019_03_26Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionConfig2019_03_26OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionConfig2019_03_26Callable(const CreateFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2019_03_26Async(const CreateFieldLevelEncryptionConfig2019_03_26Request& request, const CreateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2019_03_26AsyncHelper(const CreateFieldLevelEncryptionConfig2019_03_26Request& request, const CreateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionConfig2019_03_26(request), context);
}

CreateFieldLevelEncryptionProfile2019_03_26Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2019_03_26(const CreateFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateFieldLevelEncryptionProfile2019_03_26Outcome(CreateFieldLevelEncryptionProfile2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateFieldLevelEncryptionProfile2019_03_26Outcome(outcome.GetError());
  }
}

CreateFieldLevelEncryptionProfile2019_03_26OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionProfile2019_03_26Callable(const CreateFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionProfile2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionProfile2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2019_03_26Async(const CreateFieldLevelEncryptionProfile2019_03_26Request& request, const CreateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionProfile2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2019_03_26AsyncHelper(const CreateFieldLevelEncryptionProfile2019_03_26Request& request, const CreateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionProfile2019_03_26(request), context);
}

CreateInvalidation2019_03_26Outcome CloudFrontClient::CreateInvalidation2019_03_26(const CreateInvalidation2019_03_26Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateInvalidation2019_03_26", "Required field: DistributionId, is not set");
    return CreateInvalidation2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInvalidation2019_03_26Outcome(CreateInvalidation2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateInvalidation2019_03_26Outcome(outcome.GetError());
  }
}

CreateInvalidation2019_03_26OutcomeCallable CloudFrontClient::CreateInvalidation2019_03_26Callable(const CreateInvalidation2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2019_03_26Async(const CreateInvalidation2019_03_26Request& request, const CreateInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2019_03_26AsyncHelper(const CreateInvalidation2019_03_26Request& request, const CreateInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2019_03_26(request), context);
}

CreatePublicKey2019_03_26Outcome CloudFrontClient::CreatePublicKey2019_03_26(const CreatePublicKey2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePublicKey2019_03_26Outcome(CreatePublicKey2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreatePublicKey2019_03_26Outcome(outcome.GetError());
  }
}

CreatePublicKey2019_03_26OutcomeCallable CloudFrontClient::CreatePublicKey2019_03_26Callable(const CreatePublicKey2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicKey2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicKey2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreatePublicKey2019_03_26Async(const CreatePublicKey2019_03_26Request& request, const CreatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicKey2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreatePublicKey2019_03_26AsyncHelper(const CreatePublicKey2019_03_26Request& request, const CreatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicKey2019_03_26(request), context);
}

CreateStreamingDistribution2019_03_26Outcome CloudFrontClient::CreateStreamingDistribution2019_03_26(const CreateStreamingDistribution2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistribution2019_03_26Outcome(CreateStreamingDistribution2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistribution2019_03_26Outcome(outcome.GetError());
  }
}

CreateStreamingDistribution2019_03_26OutcomeCallable CloudFrontClient::CreateStreamingDistribution2019_03_26Callable(const CreateStreamingDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2019_03_26Async(const CreateStreamingDistribution2019_03_26Request& request, const CreateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2019_03_26AsyncHelper(const CreateStreamingDistribution2019_03_26Request& request, const CreateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2019_03_26(request), context);
}

CreateStreamingDistributionWithTags2019_03_26Outcome CloudFrontClient::CreateStreamingDistributionWithTags2019_03_26(const CreateStreamingDistributionWithTags2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateStreamingDistributionWithTags2019_03_26Outcome(CreateStreamingDistributionWithTags2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return CreateStreamingDistributionWithTags2019_03_26Outcome(outcome.GetError());
  }
}

CreateStreamingDistributionWithTags2019_03_26OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2019_03_26Callable(const CreateStreamingDistributionWithTags2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistributionWithTags2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistributionWithTags2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistributionWithTags2019_03_26Async(const CreateStreamingDistributionWithTags2019_03_26Request& request, const CreateStreamingDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistributionWithTags2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistributionWithTags2019_03_26AsyncHelper(const CreateStreamingDistributionWithTags2019_03_26Request& request, const CreateStreamingDistributionWithTags2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistributionWithTags2019_03_26(request), context);
}

DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2019_03_26(const DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCloudFrontOriginAccessIdentity2019_03_26", "Required field: Id, is not set");
    return DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome(NoResult());
  }
  else
  {
    return DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome(outcome.GetError());
  }
}

DeleteCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2019_03_26Callable(const DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2019_03_26Async(const DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request, const DeleteCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2019_03_26Request& request, const DeleteCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2019_03_26(request), context);
}

DeleteDistribution2019_03_26Outcome CloudFrontClient::DeleteDistribution2019_03_26(const DeleteDistribution2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDistribution2019_03_26", "Required field: Id, is not set");
    return DeleteDistribution2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteDistribution2019_03_26Outcome(NoResult());
  }
  else
  {
    return DeleteDistribution2019_03_26Outcome(outcome.GetError());
  }
}

DeleteDistribution2019_03_26OutcomeCallable CloudFrontClient::DeleteDistribution2019_03_26Callable(const DeleteDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2019_03_26Async(const DeleteDistribution2019_03_26Request& request, const DeleteDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2019_03_26AsyncHelper(const DeleteDistribution2019_03_26Request& request, const DeleteDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2019_03_26(request), context);
}

DeleteFieldLevelEncryptionConfig2019_03_26Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2019_03_26(const DeleteFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionConfig2019_03_26", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionConfig2019_03_26Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionConfig2019_03_26Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionConfig2019_03_26OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionConfig2019_03_26Callable(const DeleteFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2019_03_26Async(const DeleteFieldLevelEncryptionConfig2019_03_26Request& request, const DeleteFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2019_03_26AsyncHelper(const DeleteFieldLevelEncryptionConfig2019_03_26Request& request, const DeleteFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionConfig2019_03_26(request), context);
}

DeleteFieldLevelEncryptionProfile2019_03_26Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2019_03_26(const DeleteFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionProfile2019_03_26", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionProfile2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteFieldLevelEncryptionProfile2019_03_26Outcome(NoResult());
  }
  else
  {
    return DeleteFieldLevelEncryptionProfile2019_03_26Outcome(outcome.GetError());
  }
}

DeleteFieldLevelEncryptionProfile2019_03_26OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionProfile2019_03_26Callable(const DeleteFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionProfile2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionProfile2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2019_03_26Async(const DeleteFieldLevelEncryptionProfile2019_03_26Request& request, const DeleteFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionProfile2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2019_03_26AsyncHelper(const DeleteFieldLevelEncryptionProfile2019_03_26Request& request, const DeleteFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionProfile2019_03_26(request), context);
}

DeletePublicKey2019_03_26Outcome CloudFrontClient::DeletePublicKey2019_03_26(const DeletePublicKey2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicKey2019_03_26", "Required field: Id, is not set");
    return DeletePublicKey2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeletePublicKey2019_03_26Outcome(NoResult());
  }
  else
  {
    return DeletePublicKey2019_03_26Outcome(outcome.GetError());
  }
}

DeletePublicKey2019_03_26OutcomeCallable CloudFrontClient::DeletePublicKey2019_03_26Callable(const DeletePublicKey2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicKey2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicKey2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeletePublicKey2019_03_26Async(const DeletePublicKey2019_03_26Request& request, const DeletePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicKey2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeletePublicKey2019_03_26AsyncHelper(const DeletePublicKey2019_03_26Request& request, const DeletePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicKey2019_03_26(request), context);
}

DeleteStreamingDistribution2019_03_26Outcome CloudFrontClient::DeleteStreamingDistribution2019_03_26(const DeleteStreamingDistribution2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingDistribution2019_03_26", "Required field: Id, is not set");
    return DeleteStreamingDistribution2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteStreamingDistribution2019_03_26Outcome(NoResult());
  }
  else
  {
    return DeleteStreamingDistribution2019_03_26Outcome(outcome.GetError());
  }
}

DeleteStreamingDistribution2019_03_26OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2019_03_26Callable(const DeleteStreamingDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2019_03_26Async(const DeleteStreamingDistribution2019_03_26Request& request, const DeleteStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2019_03_26AsyncHelper(const DeleteStreamingDistribution2019_03_26Request& request, const DeleteStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2019_03_26(request), context);
}

GetCloudFrontOriginAccessIdentity2019_03_26Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2019_03_26(const GetCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentity2019_03_26", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentity2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/origin-access-identity/cloudfront/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentity2019_03_26Outcome(GetCloudFrontOriginAccessIdentity2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentity2019_03_26Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2019_03_26Callable(const GetCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2019_03_26Async(const GetCloudFrontOriginAccessIdentity2019_03_26Request& request, const GetCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const GetCloudFrontOriginAccessIdentity2019_03_26Request& request, const GetCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2019_03_26(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2019_03_26(const GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentityConfig2019_03_26", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome(GetCloudFrontOriginAccessIdentityConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome(outcome.GetError());
  }
}

GetCloudFrontOriginAccessIdentityConfig2019_03_26OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2019_03_26Callable(const GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2019_03_26Async(const GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request, const GetCloudFrontOriginAccessIdentityConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2019_03_26AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2019_03_26Request& request, const GetCloudFrontOriginAccessIdentityConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2019_03_26(request), context);
}

GetDistribution2019_03_26Outcome CloudFrontClient::GetDistribution2019_03_26(const GetDistribution2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistribution2019_03_26", "Required field: Id, is not set");
    return GetDistribution2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistribution2019_03_26Outcome(GetDistribution2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetDistribution2019_03_26Outcome(outcome.GetError());
  }
}

GetDistribution2019_03_26OutcomeCallable CloudFrontClient::GetDistribution2019_03_26Callable(const GetDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2019_03_26Async(const GetDistribution2019_03_26Request& request, const GetDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2019_03_26AsyncHelper(const GetDistribution2019_03_26Request& request, const GetDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2019_03_26(request), context);
}

GetDistributionConfig2019_03_26Outcome CloudFrontClient::GetDistributionConfig2019_03_26(const GetDistributionConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistributionConfig2019_03_26", "Required field: Id, is not set");
    return GetDistributionConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetDistributionConfig2019_03_26Outcome(GetDistributionConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetDistributionConfig2019_03_26Outcome(outcome.GetError());
  }
}

GetDistributionConfig2019_03_26OutcomeCallable CloudFrontClient::GetDistributionConfig2019_03_26Callable(const GetDistributionConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2019_03_26Async(const GetDistributionConfig2019_03_26Request& request, const GetDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2019_03_26AsyncHelper(const GetDistributionConfig2019_03_26Request& request, const GetDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2019_03_26(request), context);
}

GetFieldLevelEncryption2019_03_26Outcome CloudFrontClient::GetFieldLevelEncryption2019_03_26(const GetFieldLevelEncryption2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryption2019_03_26", "Required field: Id, is not set");
    return GetFieldLevelEncryption2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryption2019_03_26Outcome(GetFieldLevelEncryption2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryption2019_03_26Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryption2019_03_26OutcomeCallable CloudFrontClient::GetFieldLevelEncryption2019_03_26Callable(const GetFieldLevelEncryption2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryption2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryption2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryption2019_03_26Async(const GetFieldLevelEncryption2019_03_26Request& request, const GetFieldLevelEncryption2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryption2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryption2019_03_26AsyncHelper(const GetFieldLevelEncryption2019_03_26Request& request, const GetFieldLevelEncryption2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryption2019_03_26(request), context);
}

GetFieldLevelEncryptionConfig2019_03_26Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2019_03_26(const GetFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionConfig2019_03_26", "Required field: Id, is not set");
    return GetFieldLevelEncryptionConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionConfig2019_03_26Outcome(GetFieldLevelEncryptionConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionConfig2019_03_26Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionConfig2019_03_26OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionConfig2019_03_26Callable(const GetFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2019_03_26Async(const GetFieldLevelEncryptionConfig2019_03_26Request& request, const GetFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2019_03_26AsyncHelper(const GetFieldLevelEncryptionConfig2019_03_26Request& request, const GetFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionConfig2019_03_26(request), context);
}

GetFieldLevelEncryptionProfile2019_03_26Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2019_03_26(const GetFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfile2019_03_26", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfile2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption-profile/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfile2019_03_26Outcome(GetFieldLevelEncryptionProfile2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfile2019_03_26Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfile2019_03_26OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfile2019_03_26Callable(const GetFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfile2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfile2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2019_03_26Async(const GetFieldLevelEncryptionProfile2019_03_26Request& request, const GetFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfile2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2019_03_26AsyncHelper(const GetFieldLevelEncryptionProfile2019_03_26Request& request, const GetFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfile2019_03_26(request), context);
}

GetFieldLevelEncryptionProfileConfig2019_03_26Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2019_03_26(const GetFieldLevelEncryptionProfileConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfileConfig2019_03_26", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfileConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetFieldLevelEncryptionProfileConfig2019_03_26Outcome(GetFieldLevelEncryptionProfileConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetFieldLevelEncryptionProfileConfig2019_03_26Outcome(outcome.GetError());
  }
}

GetFieldLevelEncryptionProfileConfig2019_03_26OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfileConfig2019_03_26Callable(const GetFieldLevelEncryptionProfileConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfileConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfileConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2019_03_26Async(const GetFieldLevelEncryptionProfileConfig2019_03_26Request& request, const GetFieldLevelEncryptionProfileConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfileConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2019_03_26AsyncHelper(const GetFieldLevelEncryptionProfileConfig2019_03_26Request& request, const GetFieldLevelEncryptionProfileConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfileConfig2019_03_26(request), context);
}

GetInvalidation2019_03_26Outcome CloudFrontClient::GetInvalidation2019_03_26(const GetInvalidation2019_03_26Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInvalidation2019_03_26", "Required field: DistributionId, is not set");
    return GetInvalidation2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInvalidation2019_03_26", "Required field: Id, is not set");
    return GetInvalidation2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetInvalidation2019_03_26Outcome(GetInvalidation2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetInvalidation2019_03_26Outcome(outcome.GetError());
  }
}

GetInvalidation2019_03_26OutcomeCallable CloudFrontClient::GetInvalidation2019_03_26Callable(const GetInvalidation2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2019_03_26Async(const GetInvalidation2019_03_26Request& request, const GetInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2019_03_26AsyncHelper(const GetInvalidation2019_03_26Request& request, const GetInvalidation2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2019_03_26(request), context);
}

GetPublicKey2019_03_26Outcome CloudFrontClient::GetPublicKey2019_03_26(const GetPublicKey2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicKey2019_03_26", "Required field: Id, is not set");
    return GetPublicKey2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/public-key/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKey2019_03_26Outcome(GetPublicKey2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKey2019_03_26Outcome(outcome.GetError());
  }
}

GetPublicKey2019_03_26OutcomeCallable CloudFrontClient::GetPublicKey2019_03_26Callable(const GetPublicKey2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKey2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKey2019_03_26Async(const GetPublicKey2019_03_26Request& request, const GetPublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKey2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKey2019_03_26AsyncHelper(const GetPublicKey2019_03_26Request& request, const GetPublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKey2019_03_26(request), context);
}

GetPublicKeyConfig2019_03_26Outcome CloudFrontClient::GetPublicKeyConfig2019_03_26(const GetPublicKeyConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicKeyConfig2019_03_26", "Required field: Id, is not set");
    return GetPublicKeyConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetPublicKeyConfig2019_03_26Outcome(GetPublicKeyConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetPublicKeyConfig2019_03_26Outcome(outcome.GetError());
  }
}

GetPublicKeyConfig2019_03_26OutcomeCallable CloudFrontClient::GetPublicKeyConfig2019_03_26Callable(const GetPublicKeyConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKeyConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKeyConfig2019_03_26Async(const GetPublicKeyConfig2019_03_26Request& request, const GetPublicKeyConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKeyConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKeyConfig2019_03_26AsyncHelper(const GetPublicKeyConfig2019_03_26Request& request, const GetPublicKeyConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKeyConfig2019_03_26(request), context);
}

GetStreamingDistribution2019_03_26Outcome CloudFrontClient::GetStreamingDistribution2019_03_26(const GetStreamingDistribution2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingDistribution2019_03_26", "Required field: Id, is not set");
    return GetStreamingDistribution2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistribution2019_03_26Outcome(GetStreamingDistribution2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistribution2019_03_26Outcome(outcome.GetError());
  }
}

GetStreamingDistribution2019_03_26OutcomeCallable CloudFrontClient::GetStreamingDistribution2019_03_26Callable(const GetStreamingDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2019_03_26Async(const GetStreamingDistribution2019_03_26Request& request, const GetStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2019_03_26AsyncHelper(const GetStreamingDistribution2019_03_26Request& request, const GetStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2019_03_26(request), context);
}

GetStreamingDistributionConfig2019_03_26Outcome CloudFrontClient::GetStreamingDistributionConfig2019_03_26(const GetStreamingDistributionConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingDistributionConfig2019_03_26", "Required field: Id, is not set");
    return GetStreamingDistributionConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetStreamingDistributionConfig2019_03_26Outcome(GetStreamingDistributionConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return GetStreamingDistributionConfig2019_03_26Outcome(outcome.GetError());
  }
}

GetStreamingDistributionConfig2019_03_26OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2019_03_26Callable(const GetStreamingDistributionConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2019_03_26Async(const GetStreamingDistributionConfig2019_03_26Request& request, const GetStreamingDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2019_03_26AsyncHelper(const GetStreamingDistributionConfig2019_03_26Request& request, const GetStreamingDistributionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2019_03_26(request), context);
}

ListCloudFrontOriginAccessIdentities2019_03_26Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2019_03_26(const ListCloudFrontOriginAccessIdentities2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/origin-access-identity/cloudfront";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListCloudFrontOriginAccessIdentities2019_03_26Outcome(ListCloudFrontOriginAccessIdentities2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListCloudFrontOriginAccessIdentities2019_03_26Outcome(outcome.GetError());
  }
}

ListCloudFrontOriginAccessIdentities2019_03_26OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2019_03_26Callable(const ListCloudFrontOriginAccessIdentities2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2019_03_26Async(const ListCloudFrontOriginAccessIdentities2019_03_26Request& request, const ListCloudFrontOriginAccessIdentities2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2019_03_26AsyncHelper(const ListCloudFrontOriginAccessIdentities2019_03_26Request& request, const ListCloudFrontOriginAccessIdentities2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2019_03_26(request), context);
}

ListDistributions2019_03_26Outcome CloudFrontClient::ListDistributions2019_03_26(const ListDistributions2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributions2019_03_26Outcome(ListDistributions2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributions2019_03_26Outcome(outcome.GetError());
  }
}

ListDistributions2019_03_26OutcomeCallable CloudFrontClient::ListDistributions2019_03_26Callable(const ListDistributions2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2019_03_26Async(const ListDistributions2019_03_26Request& request, const ListDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2019_03_26AsyncHelper(const ListDistributions2019_03_26Request& request, const ListDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2019_03_26(request), context);
}

ListDistributionsByWebACLId2019_03_26Outcome CloudFrontClient::ListDistributionsByWebACLId2019_03_26(const ListDistributionsByWebACLId2019_03_26Request& request) const
{
  if (!request.WebACLIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByWebACLId2019_03_26", "Required field: WebACLId, is not set");
    return ListDistributionsByWebACLId2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebACLId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distributionsByWebACLId/";
  ss << request.GetWebACLId();
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListDistributionsByWebACLId2019_03_26Outcome(ListDistributionsByWebACLId2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListDistributionsByWebACLId2019_03_26Outcome(outcome.GetError());
  }
}

ListDistributionsByWebACLId2019_03_26OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2019_03_26Callable(const ListDistributionsByWebACLId2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2019_03_26Async(const ListDistributionsByWebACLId2019_03_26Request& request, const ListDistributionsByWebACLId2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2019_03_26AsyncHelper(const ListDistributionsByWebACLId2019_03_26Request& request, const ListDistributionsByWebACLId2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2019_03_26(request), context);
}

ListFieldLevelEncryptionConfigs2019_03_26Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2019_03_26(const ListFieldLevelEncryptionConfigs2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionConfigs2019_03_26Outcome(ListFieldLevelEncryptionConfigs2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionConfigs2019_03_26Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionConfigs2019_03_26OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionConfigs2019_03_26Callable(const ListFieldLevelEncryptionConfigs2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionConfigs2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionConfigs2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2019_03_26Async(const ListFieldLevelEncryptionConfigs2019_03_26Request& request, const ListFieldLevelEncryptionConfigs2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionConfigs2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2019_03_26AsyncHelper(const ListFieldLevelEncryptionConfigs2019_03_26Request& request, const ListFieldLevelEncryptionConfigs2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionConfigs2019_03_26(request), context);
}

ListFieldLevelEncryptionProfiles2019_03_26Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2019_03_26(const ListFieldLevelEncryptionProfiles2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption-profile";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListFieldLevelEncryptionProfiles2019_03_26Outcome(ListFieldLevelEncryptionProfiles2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListFieldLevelEncryptionProfiles2019_03_26Outcome(outcome.GetError());
  }
}

ListFieldLevelEncryptionProfiles2019_03_26OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionProfiles2019_03_26Callable(const ListFieldLevelEncryptionProfiles2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionProfiles2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionProfiles2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2019_03_26Async(const ListFieldLevelEncryptionProfiles2019_03_26Request& request, const ListFieldLevelEncryptionProfiles2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionProfiles2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2019_03_26AsyncHelper(const ListFieldLevelEncryptionProfiles2019_03_26Request& request, const ListFieldLevelEncryptionProfiles2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionProfiles2019_03_26(request), context);
}

ListInvalidations2019_03_26Outcome CloudFrontClient::ListInvalidations2019_03_26(const ListInvalidations2019_03_26Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInvalidations2019_03_26", "Required field: DistributionId, is not set");
    return ListInvalidations2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetDistributionId();
  ss << "/invalidation";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListInvalidations2019_03_26Outcome(ListInvalidations2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListInvalidations2019_03_26Outcome(outcome.GetError());
  }
}

ListInvalidations2019_03_26OutcomeCallable CloudFrontClient::ListInvalidations2019_03_26Callable(const ListInvalidations2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2019_03_26Async(const ListInvalidations2019_03_26Request& request, const ListInvalidations2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2019_03_26AsyncHelper(const ListInvalidations2019_03_26Request& request, const ListInvalidations2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2019_03_26(request), context);
}

ListPublicKeys2019_03_26Outcome CloudFrontClient::ListPublicKeys2019_03_26(const ListPublicKeys2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/public-key";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListPublicKeys2019_03_26Outcome(ListPublicKeys2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListPublicKeys2019_03_26Outcome(outcome.GetError());
  }
}

ListPublicKeys2019_03_26OutcomeCallable CloudFrontClient::ListPublicKeys2019_03_26Callable(const ListPublicKeys2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeys2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListPublicKeys2019_03_26Async(const ListPublicKeys2019_03_26Request& request, const ListPublicKeys2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeys2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListPublicKeys2019_03_26AsyncHelper(const ListPublicKeys2019_03_26Request& request, const ListPublicKeys2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys2019_03_26(request), context);
}

ListStreamingDistributions2019_03_26Outcome CloudFrontClient::ListStreamingDistributions2019_03_26(const ListStreamingDistributions2019_03_26Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListStreamingDistributions2019_03_26Outcome(ListStreamingDistributions2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListStreamingDistributions2019_03_26Outcome(outcome.GetError());
  }
}

ListStreamingDistributions2019_03_26OutcomeCallable CloudFrontClient::ListStreamingDistributions2019_03_26Callable(const ListStreamingDistributions2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2019_03_26Async(const ListStreamingDistributions2019_03_26Request& request, const ListStreamingDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2019_03_26AsyncHelper(const ListStreamingDistributions2019_03_26Request& request, const ListStreamingDistributions2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2019_03_26(request), context);
}

ListTagsForResource2019_03_26Outcome CloudFrontClient::ListTagsForResource2019_03_26(const ListTagsForResource2019_03_26Request& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource2019_03_26", "Required field: Resource, is not set");
    return ListTagsForResource2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsForResource2019_03_26Outcome(ListTagsForResource2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResource2019_03_26Outcome(outcome.GetError());
  }
}

ListTagsForResource2019_03_26OutcomeCallable CloudFrontClient::ListTagsForResource2019_03_26Callable(const ListTagsForResource2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResource2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListTagsForResource2019_03_26Async(const ListTagsForResource2019_03_26Request& request, const ListTagsForResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResource2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListTagsForResource2019_03_26AsyncHelper(const ListTagsForResource2019_03_26Request& request, const ListTagsForResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource2019_03_26(request), context);
}

TagResource2019_03_26Outcome CloudFrontClient::TagResource2019_03_26(const TagResource2019_03_26Request& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource2019_03_26", "Required field: Resource, is not set");
    return TagResource2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Tag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResource2019_03_26Outcome(NoResult());
  }
  else
  {
    return TagResource2019_03_26Outcome(outcome.GetError());
  }
}

TagResource2019_03_26OutcomeCallable CloudFrontClient::TagResource2019_03_26Callable(const TagResource2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResource2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TagResource2019_03_26Async(const TagResource2019_03_26Request& request, const TagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResource2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TagResource2019_03_26AsyncHelper(const TagResource2019_03_26Request& request, const TagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource2019_03_26(request), context);
}

UntagResource2019_03_26Outcome CloudFrontClient::UntagResource2019_03_26(const UntagResource2019_03_26Request& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource2019_03_26", "Required field: Resource, is not set");
    return UntagResource2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/tagging";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?Operation=Untag");
  uri.SetQueryString(ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResource2019_03_26Outcome(NoResult());
  }
  else
  {
    return UntagResource2019_03_26Outcome(outcome.GetError());
  }
}

UntagResource2019_03_26OutcomeCallable CloudFrontClient::UntagResource2019_03_26Callable(const UntagResource2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResource2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UntagResource2019_03_26Async(const UntagResource2019_03_26Request& request, const UntagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResource2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UntagResource2019_03_26AsyncHelper(const UntagResource2019_03_26Request& request, const UntagResource2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource2019_03_26(request), context);
}

UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2019_03_26(const UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCloudFrontOriginAccessIdentity2019_03_26", "Required field: Id, is not set");
    return UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/origin-access-identity/cloudfront/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome(UpdateCloudFrontOriginAccessIdentity2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome(outcome.GetError());
  }
}

UpdateCloudFrontOriginAccessIdentity2019_03_26OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2019_03_26Callable(const UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2019_03_26Async(const UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request, const UpdateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2019_03_26AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2019_03_26Request& request, const UpdateCloudFrontOriginAccessIdentity2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2019_03_26(request), context);
}

UpdateDistribution2019_03_26Outcome CloudFrontClient::UpdateDistribution2019_03_26(const UpdateDistribution2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDistribution2019_03_26", "Required field: Id, is not set");
    return UpdateDistribution2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateDistribution2019_03_26Outcome(UpdateDistribution2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return UpdateDistribution2019_03_26Outcome(outcome.GetError());
  }
}

UpdateDistribution2019_03_26OutcomeCallable CloudFrontClient::UpdateDistribution2019_03_26Callable(const UpdateDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2019_03_26Async(const UpdateDistribution2019_03_26Request& request, const UpdateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2019_03_26AsyncHelper(const UpdateDistribution2019_03_26Request& request, const UpdateDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2019_03_26(request), context);
}

UpdateFieldLevelEncryptionConfig2019_03_26Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2019_03_26(const UpdateFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionConfig2019_03_26", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionConfig2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionConfig2019_03_26Outcome(UpdateFieldLevelEncryptionConfig2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionConfig2019_03_26Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionConfig2019_03_26OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionConfig2019_03_26Callable(const UpdateFieldLevelEncryptionConfig2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionConfig2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionConfig2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2019_03_26Async(const UpdateFieldLevelEncryptionConfig2019_03_26Request& request, const UpdateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionConfig2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2019_03_26AsyncHelper(const UpdateFieldLevelEncryptionConfig2019_03_26Request& request, const UpdateFieldLevelEncryptionConfig2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionConfig2019_03_26(request), context);
}

UpdateFieldLevelEncryptionProfile2019_03_26Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2019_03_26(const UpdateFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionProfile2019_03_26", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionProfile2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/field-level-encryption-profile/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateFieldLevelEncryptionProfile2019_03_26Outcome(UpdateFieldLevelEncryptionProfile2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return UpdateFieldLevelEncryptionProfile2019_03_26Outcome(outcome.GetError());
  }
}

UpdateFieldLevelEncryptionProfile2019_03_26OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionProfile2019_03_26Callable(const UpdateFieldLevelEncryptionProfile2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionProfile2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionProfile2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2019_03_26Async(const UpdateFieldLevelEncryptionProfile2019_03_26Request& request, const UpdateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionProfile2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2019_03_26AsyncHelper(const UpdateFieldLevelEncryptionProfile2019_03_26Request& request, const UpdateFieldLevelEncryptionProfile2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionProfile2019_03_26(request), context);
}

UpdatePublicKey2019_03_26Outcome CloudFrontClient::UpdatePublicKey2019_03_26(const UpdatePublicKey2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicKey2019_03_26", "Required field: Id, is not set");
    return UpdatePublicKey2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/public-key/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdatePublicKey2019_03_26Outcome(UpdatePublicKey2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return UpdatePublicKey2019_03_26Outcome(outcome.GetError());
  }
}

UpdatePublicKey2019_03_26OutcomeCallable CloudFrontClient::UpdatePublicKey2019_03_26Callable(const UpdatePublicKey2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicKey2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicKey2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdatePublicKey2019_03_26Async(const UpdatePublicKey2019_03_26Request& request, const UpdatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePublicKey2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdatePublicKey2019_03_26AsyncHelper(const UpdatePublicKey2019_03_26Request& request, const UpdatePublicKey2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePublicKey2019_03_26(request), context);
}

UpdateStreamingDistribution2019_03_26Outcome CloudFrontClient::UpdateStreamingDistribution2019_03_26(const UpdateStreamingDistribution2019_03_26Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStreamingDistribution2019_03_26", "Required field: Id, is not set");
    return UpdateStreamingDistribution2019_03_26Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/2019-03-26/streaming-distribution/";
  ss << request.GetId();
  ss << "/config";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT);
  if(outcome.IsSuccess())
  {
    return UpdateStreamingDistribution2019_03_26Outcome(UpdateStreamingDistribution2019_03_26Result(outcome.GetResult()));
  }
  else
  {
    return UpdateStreamingDistribution2019_03_26Outcome(outcome.GetError());
  }
}

UpdateStreamingDistribution2019_03_26OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2019_03_26Callable(const UpdateStreamingDistribution2019_03_26Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2019_03_26Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2019_03_26(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2019_03_26Async(const UpdateStreamingDistribution2019_03_26Request& request, const UpdateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2019_03_26AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2019_03_26AsyncHelper(const UpdateStreamingDistribution2019_03_26Request& request, const UpdateStreamingDistribution2019_03_26ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2019_03_26(request), context);
}



