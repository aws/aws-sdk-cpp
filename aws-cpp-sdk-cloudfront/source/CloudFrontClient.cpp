﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/cloudfront/model/AssociateAlias2020_05_31Request.h>
#include <aws/cloudfront/model/CreateCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/CreateDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2020_05_31Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/CreateFunction2020_05_31Request.h>
#include <aws/cloudfront/model/CreateInvalidation2020_05_31Request.h>
#include <aws/cloudfront/model/CreateKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/CreateMonitoringSubscription2020_05_31Request.h>
#include <aws/cloudfront/model/CreateOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreatePublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/CreateRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/CreateResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteFunction2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteMonitoringSubscription2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeletePublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/DeleteStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/DescribeFunction2020_05_31Request.h>
#include <aws/cloudfront/model/GetCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetCachePolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/GetDistributionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetFunction2020_05_31Request.h>
#include <aws/cloudfront/model/GetInvalidation2020_05_31Request.h>
#include <aws/cloudfront/model/GetKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/GetKeyGroupConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetMonitoringSubscription2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginRequestPolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetPublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetResponseHeadersPolicyConfig2020_05_31Request.h>
#include <aws/cloudfront/model/GetStreamingDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/ListCachePolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2020_05_31Request.h>
#include <aws/cloudfront/model/ListConflictingAliases2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributions2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByCachePolicyId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByOriginRequestPolicyId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByResponseHeadersPolicyId2020_05_31Request.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2020_05_31Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2020_05_31Request.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2020_05_31Request.h>
#include <aws/cloudfront/model/ListFunctions2020_05_31Request.h>
#include <aws/cloudfront/model/ListInvalidations2020_05_31Request.h>
#include <aws/cloudfront/model/ListKeyGroups2020_05_31Request.h>
#include <aws/cloudfront/model/ListOriginRequestPolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListPublicKeys2020_05_31Request.h>
#include <aws/cloudfront/model/ListRealtimeLogConfigs2020_05_31Request.h>
#include <aws/cloudfront/model/ListResponseHeadersPolicies2020_05_31Request.h>
#include <aws/cloudfront/model/ListStreamingDistributions2020_05_31Request.h>
#include <aws/cloudfront/model/ListTagsForResource2020_05_31Request.h>
#include <aws/cloudfront/model/PublishFunction2020_05_31Request.h>
#include <aws/cloudfront/model/TagResource2020_05_31Request.h>
#include <aws/cloudfront/model/TestFunction2020_05_31Request.h>
#include <aws/cloudfront/model/UntagResource2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateFunction2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateKeyGroup2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateOriginRequestPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdatePublicKey2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateRealtimeLogConfig2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateResponseHeadersPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2020_05_31Request.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudFrontClient::~CloudFrontClient()
{
}

void CloudFrontClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("CloudFront");
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

AssociateAlias2020_05_31Outcome CloudFrontClient::AssociateAlias2020_05_31(const AssociateAlias2020_05_31Request& request) const
{
  if (!request.TargetDistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAlias2020_05_31", "Required field: TargetDistributionId, is not set");
    return AssociateAlias2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetDistributionId]", false));
  }
  if (!request.AliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateAlias2020_05_31", "Required field: Alias, is not set");
    return AssociateAlias2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetTargetDistributionId());
  uri.AddPathSegments("/associate-alias");
  return AssociateAlias2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

AssociateAlias2020_05_31OutcomeCallable CloudFrontClient::AssociateAlias2020_05_31Callable(const AssociateAlias2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateAlias2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateAlias2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::AssociateAlias2020_05_31Async(const AssociateAlias2020_05_31Request& request, const AssociateAlias2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateAlias2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::AssociateAlias2020_05_31AsyncHelper(const AssociateAlias2020_05_31Request& request, const AssociateAlias2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateAlias2020_05_31(request), context);
}

CreateCachePolicy2020_05_31Outcome CloudFrontClient::CreateCachePolicy2020_05_31(const CreateCachePolicy2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/cache-policy");
  return CreateCachePolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCachePolicy2020_05_31OutcomeCallable CloudFrontClient::CreateCachePolicy2020_05_31Callable(const CreateCachePolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCachePolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCachePolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCachePolicy2020_05_31Async(const CreateCachePolicy2020_05_31Request& request, const CreateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCachePolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCachePolicy2020_05_31AsyncHelper(const CreateCachePolicy2020_05_31Request& request, const CreateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCachePolicy2020_05_31(request), context);
}

CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  return CreateCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31Callable(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFrontOriginAccessIdentity2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFrontOriginAccessIdentity2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31Async(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request, const CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFrontOriginAccessIdentity2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request, const CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFrontOriginAccessIdentity2020_05_31(request), context);
}

CreateDistribution2020_05_31Outcome CloudFrontClient::CreateDistribution2020_05_31(const CreateDistribution2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution");
  return CreateDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDistribution2020_05_31OutcomeCallable CloudFrontClient::CreateDistribution2020_05_31Callable(const CreateDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistribution2020_05_31Async(const CreateDistribution2020_05_31Request& request, const CreateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistribution2020_05_31AsyncHelper(const CreateDistribution2020_05_31Request& request, const CreateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistribution2020_05_31(request), context);
}

CreateDistributionWithTags2020_05_31Outcome CloudFrontClient::CreateDistributionWithTags2020_05_31(const CreateDistributionWithTags2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2020-05-31/distribution");
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  return CreateDistributionWithTags2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDistributionWithTags2020_05_31OutcomeCallable CloudFrontClient::CreateDistributionWithTags2020_05_31Callable(const CreateDistributionWithTags2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionWithTags2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistributionWithTags2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateDistributionWithTags2020_05_31Async(const CreateDistributionWithTags2020_05_31Request& request, const CreateDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDistributionWithTags2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateDistributionWithTags2020_05_31AsyncHelper(const CreateDistributionWithTags2020_05_31Request& request, const CreateDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDistributionWithTags2020_05_31(request), context);
}

CreateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31(const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption");
  return CreateFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31Callable(const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31Async(const CreateFieldLevelEncryptionConfig2020_05_31Request& request, const CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31AsyncHelper(const CreateFieldLevelEncryptionConfig2020_05_31Request& request, const CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionConfig2020_05_31(request), context);
}

CreateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31(const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption-profile");
  return CreateFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31Callable(const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFieldLevelEncryptionProfile2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFieldLevelEncryptionProfile2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31Async(const CreateFieldLevelEncryptionProfile2020_05_31Request& request, const CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFieldLevelEncryptionProfile2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31AsyncHelper(const CreateFieldLevelEncryptionProfile2020_05_31Request& request, const CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFieldLevelEncryptionProfile2020_05_31(request), context);
}

CreateFunction2020_05_31Outcome CloudFrontClient::CreateFunction2020_05_31(const CreateFunction2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function");
  return CreateFunction2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateFunction2020_05_31OutcomeCallable CloudFrontClient::CreateFunction2020_05_31Callable(const CreateFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateFunction2020_05_31Async(const CreateFunction2020_05_31Request& request, const CreateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateFunction2020_05_31AsyncHelper(const CreateFunction2020_05_31Request& request, const CreateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFunction2020_05_31(request), context);
}

CreateInvalidation2020_05_31Outcome CloudFrontClient::CreateInvalidation2020_05_31(const CreateInvalidation2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateInvalidation2020_05_31", "Required field: DistributionId, is not set");
    return CreateInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetDistributionId());
  uri.AddPathSegments("/invalidation");
  return CreateInvalidation2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateInvalidation2020_05_31OutcomeCallable CloudFrontClient::CreateInvalidation2020_05_31Callable(const CreateInvalidation2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvalidation2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvalidation2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateInvalidation2020_05_31Async(const CreateInvalidation2020_05_31Request& request, const CreateInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvalidation2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateInvalidation2020_05_31AsyncHelper(const CreateInvalidation2020_05_31Request& request, const CreateInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvalidation2020_05_31(request), context);
}

CreateKeyGroup2020_05_31Outcome CloudFrontClient::CreateKeyGroup2020_05_31(const CreateKeyGroup2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/key-group");
  return CreateKeyGroup2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateKeyGroup2020_05_31OutcomeCallable CloudFrontClient::CreateKeyGroup2020_05_31Callable(const CreateKeyGroup2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyGroup2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeyGroup2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateKeyGroup2020_05_31Async(const CreateKeyGroup2020_05_31Request& request, const CreateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeyGroup2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateKeyGroup2020_05_31AsyncHelper(const CreateKeyGroup2020_05_31Request& request, const CreateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeyGroup2020_05_31(request), context);
}

CreateMonitoringSubscription2020_05_31Outcome CloudFrontClient::CreateMonitoringSubscription2020_05_31(const CreateMonitoringSubscription2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return CreateMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributions/");
  uri.AddPathSegment(request.GetDistributionId());
  uri.AddPathSegments("/monitoring-subscription");
  return CreateMonitoringSubscription2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateMonitoringSubscription2020_05_31OutcomeCallable CloudFrontClient::CreateMonitoringSubscription2020_05_31Callable(const CreateMonitoringSubscription2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMonitoringSubscription2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMonitoringSubscription2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateMonitoringSubscription2020_05_31Async(const CreateMonitoringSubscription2020_05_31Request& request, const CreateMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMonitoringSubscription2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateMonitoringSubscription2020_05_31AsyncHelper(const CreateMonitoringSubscription2020_05_31Request& request, const CreateMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMonitoringSubscription2020_05_31(request), context);
}

CreateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::CreateOriginRequestPolicy2020_05_31(const CreateOriginRequestPolicy2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-request-policy");
  return CreateOriginRequestPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::CreateOriginRequestPolicy2020_05_31Callable(const CreateOriginRequestPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateOriginRequestPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateOriginRequestPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateOriginRequestPolicy2020_05_31Async(const CreateOriginRequestPolicy2020_05_31Request& request, const CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateOriginRequestPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateOriginRequestPolicy2020_05_31AsyncHelper(const CreateOriginRequestPolicy2020_05_31Request& request, const CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateOriginRequestPolicy2020_05_31(request), context);
}

CreatePublicKey2020_05_31Outcome CloudFrontClient::CreatePublicKey2020_05_31(const CreatePublicKey2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/public-key");
  return CreatePublicKey2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreatePublicKey2020_05_31OutcomeCallable CloudFrontClient::CreatePublicKey2020_05_31Callable(const CreatePublicKey2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicKey2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicKey2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreatePublicKey2020_05_31Async(const CreatePublicKey2020_05_31Request& request, const CreatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicKey2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreatePublicKey2020_05_31AsyncHelper(const CreatePublicKey2020_05_31Request& request, const CreatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicKey2020_05_31(request), context);
}

CreateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::CreateRealtimeLogConfig2020_05_31(const CreateRealtimeLogConfig2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/realtime-log-config");
  return CreateRealtimeLogConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::CreateRealtimeLogConfig2020_05_31Callable(const CreateRealtimeLogConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRealtimeLogConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRealtimeLogConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateRealtimeLogConfig2020_05_31Async(const CreateRealtimeLogConfig2020_05_31Request& request, const CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRealtimeLogConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateRealtimeLogConfig2020_05_31AsyncHelper(const CreateRealtimeLogConfig2020_05_31Request& request, const CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRealtimeLogConfig2020_05_31(request), context);
}

CreateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::CreateResponseHeadersPolicy2020_05_31(const CreateResponseHeadersPolicy2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/response-headers-policy");
  return CreateResponseHeadersPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::CreateResponseHeadersPolicy2020_05_31Callable(const CreateResponseHeadersPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResponseHeadersPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResponseHeadersPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateResponseHeadersPolicy2020_05_31Async(const CreateResponseHeadersPolicy2020_05_31Request& request, const CreateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResponseHeadersPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateResponseHeadersPolicy2020_05_31AsyncHelper(const CreateResponseHeadersPolicy2020_05_31Request& request, const CreateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResponseHeadersPolicy2020_05_31(request), context);
}

CreateStreamingDistribution2020_05_31Outcome CloudFrontClient::CreateStreamingDistribution2020_05_31(const CreateStreamingDistribution2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/streaming-distribution");
  return CreateStreamingDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::CreateStreamingDistribution2020_05_31Callable(const CreateStreamingDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistribution2020_05_31Async(const CreateStreamingDistribution2020_05_31Request& request, const CreateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistribution2020_05_31AsyncHelper(const CreateStreamingDistribution2020_05_31Request& request, const CreateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistribution2020_05_31(request), context);
}

CreateStreamingDistributionWithTags2020_05_31Outcome CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31(const CreateStreamingDistributionWithTags2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2020-05-31/streaming-distribution");
  ss.str("?WithTags");
  uri.SetQueryString(ss.str());
  return CreateStreamingDistributionWithTags2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateStreamingDistributionWithTags2020_05_31OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31Callable(const CreateStreamingDistributionWithTags2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingDistributionWithTags2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingDistributionWithTags2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31Async(const CreateStreamingDistributionWithTags2020_05_31Request& request, const CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStreamingDistributionWithTags2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31AsyncHelper(const CreateStreamingDistributionWithTags2020_05_31Request& request, const CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStreamingDistributionWithTags2020_05_31(request), context);
}

DeleteCachePolicy2020_05_31Outcome CloudFrontClient::DeleteCachePolicy2020_05_31(const DeleteCachePolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCachePolicy2020_05_31", "Required field: Id, is not set");
    return DeleteCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/cache-policy/");
  uri.AddPathSegment(request.GetId());
  return DeleteCachePolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteCachePolicy2020_05_31OutcomeCallable CloudFrontClient::DeleteCachePolicy2020_05_31Callable(const DeleteCachePolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCachePolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCachePolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCachePolicy2020_05_31Async(const DeleteCachePolicy2020_05_31Request& request, const DeleteCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCachePolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCachePolicy2020_05_31AsyncHelper(const DeleteCachePolicy2020_05_31Request& request, const DeleteCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCachePolicy2020_05_31(request), context);
}

DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  uri.AddPathSegment(request.GetId());
  return DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31Callable(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCloudFrontOriginAccessIdentity2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31Async(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request, const DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCloudFrontOriginAccessIdentity2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request, const DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCloudFrontOriginAccessIdentity2020_05_31(request), context);
}

DeleteDistribution2020_05_31Outcome CloudFrontClient::DeleteDistribution2020_05_31(const DeleteDistribution2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDistribution2020_05_31", "Required field: Id, is not set");
    return DeleteDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetId());
  return DeleteDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteDistribution2020_05_31OutcomeCallable CloudFrontClient::DeleteDistribution2020_05_31Callable(const DeleteDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteDistribution2020_05_31Async(const DeleteDistribution2020_05_31Request& request, const DeleteDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteDistribution2020_05_31AsyncHelper(const DeleteDistribution2020_05_31Request& request, const DeleteDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDistribution2020_05_31(request), context);
}

DeleteFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption/");
  uri.AddPathSegment(request.GetId());
  return DeleteFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31Callable(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31Async(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request, const DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31AsyncHelper(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request, const DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionConfig2020_05_31(request), context);
}

DeleteFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  uri.AddPathSegment(request.GetId());
  return DeleteFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31Callable(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFieldLevelEncryptionProfile2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFieldLevelEncryptionProfile2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31Async(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request, const DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFieldLevelEncryptionProfile2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31AsyncHelper(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request, const DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFieldLevelEncryptionProfile2020_05_31(request), context);
}

DeleteFunction2020_05_31Outcome CloudFrontClient::DeleteFunction2020_05_31(const DeleteFunction2020_05_31Request& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunction2020_05_31", "Required field: Name, is not set");
    return DeleteFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunction2020_05_31", "Required field: IfMatch, is not set");
    return DeleteFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function/");
  uri.AddPathSegment(request.GetName());
  return DeleteFunction2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteFunction2020_05_31OutcomeCallable CloudFrontClient::DeleteFunction2020_05_31Callable(const DeleteFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteFunction2020_05_31Async(const DeleteFunction2020_05_31Request& request, const DeleteFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteFunction2020_05_31AsyncHelper(const DeleteFunction2020_05_31Request& request, const DeleteFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFunction2020_05_31(request), context);
}

DeleteKeyGroup2020_05_31Outcome CloudFrontClient::DeleteKeyGroup2020_05_31(const DeleteKeyGroup2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKeyGroup2020_05_31", "Required field: Id, is not set");
    return DeleteKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/key-group/");
  uri.AddPathSegment(request.GetId());
  return DeleteKeyGroup2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteKeyGroup2020_05_31OutcomeCallable CloudFrontClient::DeleteKeyGroup2020_05_31Callable(const DeleteKeyGroup2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeyGroup2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKeyGroup2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteKeyGroup2020_05_31Async(const DeleteKeyGroup2020_05_31Request& request, const DeleteKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKeyGroup2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteKeyGroup2020_05_31AsyncHelper(const DeleteKeyGroup2020_05_31Request& request, const DeleteKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeyGroup2020_05_31(request), context);
}

DeleteMonitoringSubscription2020_05_31Outcome CloudFrontClient::DeleteMonitoringSubscription2020_05_31(const DeleteMonitoringSubscription2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return DeleteMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributions/");
  uri.AddPathSegment(request.GetDistributionId());
  uri.AddPathSegments("/monitoring-subscription");
  return DeleteMonitoringSubscription2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteMonitoringSubscription2020_05_31OutcomeCallable CloudFrontClient::DeleteMonitoringSubscription2020_05_31Callable(const DeleteMonitoringSubscription2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMonitoringSubscription2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMonitoringSubscription2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteMonitoringSubscription2020_05_31Async(const DeleteMonitoringSubscription2020_05_31Request& request, const DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMonitoringSubscription2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteMonitoringSubscription2020_05_31AsyncHelper(const DeleteMonitoringSubscription2020_05_31Request& request, const DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMonitoringSubscription2020_05_31(request), context);
}

DeleteOriginRequestPolicy2020_05_31Outcome CloudFrontClient::DeleteOriginRequestPolicy2020_05_31(const DeleteOriginRequestPolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-request-policy/");
  uri.AddPathSegment(request.GetId());
  return DeleteOriginRequestPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::DeleteOriginRequestPolicy2020_05_31Callable(const DeleteOriginRequestPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteOriginRequestPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteOriginRequestPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteOriginRequestPolicy2020_05_31Async(const DeleteOriginRequestPolicy2020_05_31Request& request, const DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteOriginRequestPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteOriginRequestPolicy2020_05_31AsyncHelper(const DeleteOriginRequestPolicy2020_05_31Request& request, const DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteOriginRequestPolicy2020_05_31(request), context);
}

DeletePublicKey2020_05_31Outcome CloudFrontClient::DeletePublicKey2020_05_31(const DeletePublicKey2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicKey2020_05_31", "Required field: Id, is not set");
    return DeletePublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/public-key/");
  uri.AddPathSegment(request.GetId());
  return DeletePublicKey2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeletePublicKey2020_05_31OutcomeCallable CloudFrontClient::DeletePublicKey2020_05_31Callable(const DeletePublicKey2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublicKey2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublicKey2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeletePublicKey2020_05_31Async(const DeletePublicKey2020_05_31Request& request, const DeletePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeletePublicKey2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeletePublicKey2020_05_31AsyncHelper(const DeletePublicKey2020_05_31Request& request, const DeletePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeletePublicKey2020_05_31(request), context);
}

DeleteRealtimeLogConfig2020_05_31Outcome CloudFrontClient::DeleteRealtimeLogConfig2020_05_31(const DeleteRealtimeLogConfig2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/delete-realtime-log-config/");
  return DeleteRealtimeLogConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::DeleteRealtimeLogConfig2020_05_31Callable(const DeleteRealtimeLogConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRealtimeLogConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRealtimeLogConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteRealtimeLogConfig2020_05_31Async(const DeleteRealtimeLogConfig2020_05_31Request& request, const DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRealtimeLogConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteRealtimeLogConfig2020_05_31AsyncHelper(const DeleteRealtimeLogConfig2020_05_31Request& request, const DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRealtimeLogConfig2020_05_31(request), context);
}

DeleteResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31(const DeleteResponseHeadersPolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/response-headers-policy/");
  uri.AddPathSegment(request.GetId());
  return DeleteResponseHeadersPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31Callable(const DeleteResponseHeadersPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResponseHeadersPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResponseHeadersPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31Async(const DeleteResponseHeadersPolicy2020_05_31Request& request, const DeleteResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResponseHeadersPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31AsyncHelper(const DeleteResponseHeadersPolicy2020_05_31Request& request, const DeleteResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResponseHeadersPolicy2020_05_31(request), context);
}

DeleteStreamingDistribution2020_05_31Outcome CloudFrontClient::DeleteStreamingDistribution2020_05_31(const DeleteStreamingDistribution2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return DeleteStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/streaming-distribution/");
  uri.AddPathSegment(request.GetId());
  return DeleteStreamingDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2020_05_31Callable(const DeleteStreamingDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DeleteStreamingDistribution2020_05_31Async(const DeleteStreamingDistribution2020_05_31Request& request, const DeleteStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStreamingDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DeleteStreamingDistribution2020_05_31AsyncHelper(const DeleteStreamingDistribution2020_05_31Request& request, const DeleteStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStreamingDistribution2020_05_31(request), context);
}

DescribeFunction2020_05_31Outcome CloudFrontClient::DescribeFunction2020_05_31(const DescribeFunction2020_05_31Request& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFunction2020_05_31", "Required field: Name, is not set");
    return DescribeFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/describe");
  return DescribeFunction2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

DescribeFunction2020_05_31OutcomeCallable CloudFrontClient::DescribeFunction2020_05_31Callable(const DescribeFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::DescribeFunction2020_05_31Async(const DescribeFunction2020_05_31Request& request, const DescribeFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::DescribeFunction2020_05_31AsyncHelper(const DescribeFunction2020_05_31Request& request, const DescribeFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFunction2020_05_31(request), context);
}

GetCachePolicy2020_05_31Outcome CloudFrontClient::GetCachePolicy2020_05_31(const GetCachePolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCachePolicy2020_05_31", "Required field: Id, is not set");
    return GetCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/cache-policy/");
  uri.AddPathSegment(request.GetId());
  return GetCachePolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetCachePolicy2020_05_31OutcomeCallable CloudFrontClient::GetCachePolicy2020_05_31Callable(const GetCachePolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCachePolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCachePolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCachePolicy2020_05_31Async(const GetCachePolicy2020_05_31Request& request, const GetCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCachePolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCachePolicy2020_05_31AsyncHelper(const GetCachePolicy2020_05_31Request& request, const GetCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCachePolicy2020_05_31(request), context);
}

GetCachePolicyConfig2020_05_31Outcome CloudFrontClient::GetCachePolicyConfig2020_05_31(const GetCachePolicyConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCachePolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetCachePolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/cache-policy/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetCachePolicyConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetCachePolicyConfig2020_05_31OutcomeCallable CloudFrontClient::GetCachePolicyConfig2020_05_31Callable(const GetCachePolicyConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCachePolicyConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCachePolicyConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCachePolicyConfig2020_05_31Async(const GetCachePolicyConfig2020_05_31Request& request, const GetCachePolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCachePolicyConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCachePolicyConfig2020_05_31AsyncHelper(const GetCachePolicyConfig2020_05_31Request& request, const GetCachePolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCachePolicyConfig2020_05_31(request), context);
}

GetCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  uri.AddPathSegment(request.GetId());
  return GetCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31Callable(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentity2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentity2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31Async(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request, const GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentity2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request, const GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentity2020_05_31(request), context);
}

GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentityConfig2020_05_31", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetCloudFrontOriginAccessIdentityConfig2020_05_31OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31Callable(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFrontOriginAccessIdentityConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31Async(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request, const GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFrontOriginAccessIdentityConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31AsyncHelper(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request, const GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFrontOriginAccessIdentityConfig2020_05_31(request), context);
}

GetDistribution2020_05_31Outcome CloudFrontClient::GetDistribution2020_05_31(const GetDistribution2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistribution2020_05_31", "Required field: Id, is not set");
    return GetDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetId());
  return GetDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetDistribution2020_05_31OutcomeCallable CloudFrontClient::GetDistribution2020_05_31Callable(const GetDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistribution2020_05_31Async(const GetDistribution2020_05_31Request& request, const GetDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistribution2020_05_31AsyncHelper(const GetDistribution2020_05_31Request& request, const GetDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistribution2020_05_31(request), context);
}

GetDistributionConfig2020_05_31Outcome CloudFrontClient::GetDistributionConfig2020_05_31(const GetDistributionConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistributionConfig2020_05_31", "Required field: Id, is not set");
    return GetDistributionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetDistributionConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetDistributionConfig2020_05_31OutcomeCallable CloudFrontClient::GetDistributionConfig2020_05_31Callable(const GetDistributionConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetDistributionConfig2020_05_31Async(const GetDistributionConfig2020_05_31Request& request, const GetDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDistributionConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetDistributionConfig2020_05_31AsyncHelper(const GetDistributionConfig2020_05_31Request& request, const GetDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDistributionConfig2020_05_31(request), context);
}

GetFieldLevelEncryption2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryption2020_05_31(const GetFieldLevelEncryption2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryption2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryption2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption/");
  uri.AddPathSegment(request.GetId());
  return GetFieldLevelEncryption2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryption2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryption2020_05_31Callable(const GetFieldLevelEncryption2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryption2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryption2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryption2020_05_31Async(const GetFieldLevelEncryption2020_05_31Request& request, const GetFieldLevelEncryption2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryption2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryption2020_05_31AsyncHelper(const GetFieldLevelEncryption2020_05_31Request& request, const GetFieldLevelEncryption2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryption2020_05_31(request), context);
}

GetFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31(const GetFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31Callable(const GetFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31Async(const GetFieldLevelEncryptionConfig2020_05_31Request& request, const GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31AsyncHelper(const GetFieldLevelEncryptionConfig2020_05_31Request& request, const GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionConfig2020_05_31(request), context);
}

GetFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31(const GetFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  uri.AddPathSegment(request.GetId());
  return GetFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31Callable(const GetFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfile2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfile2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31Async(const GetFieldLevelEncryptionProfile2020_05_31Request& request, const GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfile2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31AsyncHelper(const GetFieldLevelEncryptionProfile2020_05_31Request& request, const GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfile2020_05_31(request), context);
}

GetFieldLevelEncryptionProfileConfig2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfileConfig2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryptionProfileConfig2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31Callable(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFieldLevelEncryptionProfileConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFieldLevelEncryptionProfileConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31Async(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request, const GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFieldLevelEncryptionProfileConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31AsyncHelper(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request, const GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFieldLevelEncryptionProfileConfig2020_05_31(request), context);
}

GetFunction2020_05_31Outcome CloudFrontClient::GetFunction2020_05_31(const GetFunction2020_05_31Request& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunction2020_05_31", "Required field: Name, is not set");
    return GetFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function/");
  uri.AddPathSegment(request.GetName());
  return GetFunction2020_05_31Outcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetFunction2020_05_31OutcomeCallable CloudFrontClient::GetFunction2020_05_31Callable(const GetFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetFunction2020_05_31Async(const GetFunction2020_05_31Request& request, const GetFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetFunction2020_05_31AsyncHelper(const GetFunction2020_05_31Request& request, const GetFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFunction2020_05_31(request), context);
}

GetInvalidation2020_05_31Outcome CloudFrontClient::GetInvalidation2020_05_31(const GetInvalidation2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInvalidation2020_05_31", "Required field: DistributionId, is not set");
    return GetInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInvalidation2020_05_31", "Required field: Id, is not set");
    return GetInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetDistributionId());
  uri.AddPathSegments("/invalidation/");
  uri.AddPathSegment(request.GetId());
  return GetInvalidation2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetInvalidation2020_05_31OutcomeCallable CloudFrontClient::GetInvalidation2020_05_31Callable(const GetInvalidation2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvalidation2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvalidation2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetInvalidation2020_05_31Async(const GetInvalidation2020_05_31Request& request, const GetInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvalidation2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetInvalidation2020_05_31AsyncHelper(const GetInvalidation2020_05_31Request& request, const GetInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvalidation2020_05_31(request), context);
}

GetKeyGroup2020_05_31Outcome CloudFrontClient::GetKeyGroup2020_05_31(const GetKeyGroup2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKeyGroup2020_05_31", "Required field: Id, is not set");
    return GetKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/key-group/");
  uri.AddPathSegment(request.GetId());
  return GetKeyGroup2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetKeyGroup2020_05_31OutcomeCallable CloudFrontClient::GetKeyGroup2020_05_31Callable(const GetKeyGroup2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyGroup2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyGroup2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetKeyGroup2020_05_31Async(const GetKeyGroup2020_05_31Request& request, const GetKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyGroup2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetKeyGroup2020_05_31AsyncHelper(const GetKeyGroup2020_05_31Request& request, const GetKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyGroup2020_05_31(request), context);
}

GetKeyGroupConfig2020_05_31Outcome CloudFrontClient::GetKeyGroupConfig2020_05_31(const GetKeyGroupConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKeyGroupConfig2020_05_31", "Required field: Id, is not set");
    return GetKeyGroupConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/key-group/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetKeyGroupConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetKeyGroupConfig2020_05_31OutcomeCallable CloudFrontClient::GetKeyGroupConfig2020_05_31Callable(const GetKeyGroupConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyGroupConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyGroupConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetKeyGroupConfig2020_05_31Async(const GetKeyGroupConfig2020_05_31Request& request, const GetKeyGroupConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyGroupConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetKeyGroupConfig2020_05_31AsyncHelper(const GetKeyGroupConfig2020_05_31Request& request, const GetKeyGroupConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyGroupConfig2020_05_31(request), context);
}

GetMonitoringSubscription2020_05_31Outcome CloudFrontClient::GetMonitoringSubscription2020_05_31(const GetMonitoringSubscription2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return GetMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributions/");
  uri.AddPathSegment(request.GetDistributionId());
  uri.AddPathSegments("/monitoring-subscription");
  return GetMonitoringSubscription2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetMonitoringSubscription2020_05_31OutcomeCallable CloudFrontClient::GetMonitoringSubscription2020_05_31Callable(const GetMonitoringSubscription2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMonitoringSubscription2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMonitoringSubscription2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetMonitoringSubscription2020_05_31Async(const GetMonitoringSubscription2020_05_31Request& request, const GetMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMonitoringSubscription2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetMonitoringSubscription2020_05_31AsyncHelper(const GetMonitoringSubscription2020_05_31Request& request, const GetMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMonitoringSubscription2020_05_31(request), context);
}

GetOriginRequestPolicy2020_05_31Outcome CloudFrontClient::GetOriginRequestPolicy2020_05_31(const GetOriginRequestPolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return GetOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-request-policy/");
  uri.AddPathSegment(request.GetId());
  return GetOriginRequestPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::GetOriginRequestPolicy2020_05_31Callable(const GetOriginRequestPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOriginRequestPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOriginRequestPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetOriginRequestPolicy2020_05_31Async(const GetOriginRequestPolicy2020_05_31Request& request, const GetOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOriginRequestPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetOriginRequestPolicy2020_05_31AsyncHelper(const GetOriginRequestPolicy2020_05_31Request& request, const GetOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOriginRequestPolicy2020_05_31(request), context);
}

GetOriginRequestPolicyConfig2020_05_31Outcome CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31(const GetOriginRequestPolicyConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginRequestPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetOriginRequestPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-request-policy/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetOriginRequestPolicyConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetOriginRequestPolicyConfig2020_05_31OutcomeCallable CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31Callable(const GetOriginRequestPolicyConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOriginRequestPolicyConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOriginRequestPolicyConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31Async(const GetOriginRequestPolicyConfig2020_05_31Request& request, const GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOriginRequestPolicyConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31AsyncHelper(const GetOriginRequestPolicyConfig2020_05_31Request& request, const GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOriginRequestPolicyConfig2020_05_31(request), context);
}

GetPublicKey2020_05_31Outcome CloudFrontClient::GetPublicKey2020_05_31(const GetPublicKey2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicKey2020_05_31", "Required field: Id, is not set");
    return GetPublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/public-key/");
  uri.AddPathSegment(request.GetId());
  return GetPublicKey2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicKey2020_05_31OutcomeCallable CloudFrontClient::GetPublicKey2020_05_31Callable(const GetPublicKey2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKey2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKey2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKey2020_05_31Async(const GetPublicKey2020_05_31Request& request, const GetPublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKey2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKey2020_05_31AsyncHelper(const GetPublicKey2020_05_31Request& request, const GetPublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKey2020_05_31(request), context);
}

GetPublicKeyConfig2020_05_31Outcome CloudFrontClient::GetPublicKeyConfig2020_05_31(const GetPublicKeyConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicKeyConfig2020_05_31", "Required field: Id, is not set");
    return GetPublicKeyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/public-key/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetPublicKeyConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicKeyConfig2020_05_31OutcomeCallable CloudFrontClient::GetPublicKeyConfig2020_05_31Callable(const GetPublicKeyConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPublicKeyConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPublicKeyConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetPublicKeyConfig2020_05_31Async(const GetPublicKeyConfig2020_05_31Request& request, const GetPublicKeyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPublicKeyConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetPublicKeyConfig2020_05_31AsyncHelper(const GetPublicKeyConfig2020_05_31Request& request, const GetPublicKeyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPublicKeyConfig2020_05_31(request), context);
}

GetRealtimeLogConfig2020_05_31Outcome CloudFrontClient::GetRealtimeLogConfig2020_05_31(const GetRealtimeLogConfig2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/get-realtime-log-config/");
  return GetRealtimeLogConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

GetRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::GetRealtimeLogConfig2020_05_31Callable(const GetRealtimeLogConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRealtimeLogConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRealtimeLogConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetRealtimeLogConfig2020_05_31Async(const GetRealtimeLogConfig2020_05_31Request& request, const GetRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRealtimeLogConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetRealtimeLogConfig2020_05_31AsyncHelper(const GetRealtimeLogConfig2020_05_31Request& request, const GetRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRealtimeLogConfig2020_05_31(request), context);
}

GetResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::GetResponseHeadersPolicy2020_05_31(const GetResponseHeadersPolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return GetResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/response-headers-policy/");
  uri.AddPathSegment(request.GetId());
  return GetResponseHeadersPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::GetResponseHeadersPolicy2020_05_31Callable(const GetResponseHeadersPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResponseHeadersPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResponseHeadersPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetResponseHeadersPolicy2020_05_31Async(const GetResponseHeadersPolicy2020_05_31Request& request, const GetResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResponseHeadersPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetResponseHeadersPolicy2020_05_31AsyncHelper(const GetResponseHeadersPolicy2020_05_31Request& request, const GetResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResponseHeadersPolicy2020_05_31(request), context);
}

GetResponseHeadersPolicyConfig2020_05_31Outcome CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31(const GetResponseHeadersPolicyConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResponseHeadersPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetResponseHeadersPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/response-headers-policy/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetResponseHeadersPolicyConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetResponseHeadersPolicyConfig2020_05_31OutcomeCallable CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31Callable(const GetResponseHeadersPolicyConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResponseHeadersPolicyConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResponseHeadersPolicyConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31Async(const GetResponseHeadersPolicyConfig2020_05_31Request& request, const GetResponseHeadersPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResponseHeadersPolicyConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31AsyncHelper(const GetResponseHeadersPolicyConfig2020_05_31Request& request, const GetResponseHeadersPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResponseHeadersPolicyConfig2020_05_31(request), context);
}

GetStreamingDistribution2020_05_31Outcome CloudFrontClient::GetStreamingDistribution2020_05_31(const GetStreamingDistribution2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return GetStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/streaming-distribution/");
  uri.AddPathSegment(request.GetId());
  return GetStreamingDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::GetStreamingDistribution2020_05_31Callable(const GetStreamingDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistribution2020_05_31Async(const GetStreamingDistribution2020_05_31Request& request, const GetStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistribution2020_05_31AsyncHelper(const GetStreamingDistribution2020_05_31Request& request, const GetStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistribution2020_05_31(request), context);
}

GetStreamingDistributionConfig2020_05_31Outcome CloudFrontClient::GetStreamingDistributionConfig2020_05_31(const GetStreamingDistributionConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingDistributionConfig2020_05_31", "Required field: Id, is not set");
    return GetStreamingDistributionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/streaming-distribution/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return GetStreamingDistributionConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetStreamingDistributionConfig2020_05_31OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2020_05_31Callable(const GetStreamingDistributionConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingDistributionConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingDistributionConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::GetStreamingDistributionConfig2020_05_31Async(const GetStreamingDistributionConfig2020_05_31Request& request, const GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStreamingDistributionConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::GetStreamingDistributionConfig2020_05_31AsyncHelper(const GetStreamingDistributionConfig2020_05_31Request& request, const GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStreamingDistributionConfig2020_05_31(request), context);
}

ListCachePolicies2020_05_31Outcome CloudFrontClient::ListCachePolicies2020_05_31(const ListCachePolicies2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/cache-policy");
  return ListCachePolicies2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListCachePolicies2020_05_31OutcomeCallable CloudFrontClient::ListCachePolicies2020_05_31Callable(const ListCachePolicies2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCachePolicies2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCachePolicies2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCachePolicies2020_05_31Async(const ListCachePolicies2020_05_31Request& request, const ListCachePolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCachePolicies2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCachePolicies2020_05_31AsyncHelper(const ListCachePolicies2020_05_31Request& request, const ListCachePolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCachePolicies2020_05_31(request), context);
}

ListCloudFrontOriginAccessIdentities2020_05_31Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  return ListCloudFrontOriginAccessIdentities2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListCloudFrontOriginAccessIdentities2020_05_31OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31Callable(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCloudFrontOriginAccessIdentities2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCloudFrontOriginAccessIdentities2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31Async(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request, const ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCloudFrontOriginAccessIdentities2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31AsyncHelper(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request, const ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCloudFrontOriginAccessIdentities2020_05_31(request), context);
}

ListConflictingAliases2020_05_31Outcome CloudFrontClient::ListConflictingAliases2020_05_31(const ListConflictingAliases2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConflictingAliases2020_05_31", "Required field: DistributionId, is not set");
    return ListConflictingAliases2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  if (!request.AliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListConflictingAliases2020_05_31", "Required field: Alias, is not set");
    return ListConflictingAliases2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/conflicting-alias");
  return ListConflictingAliases2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListConflictingAliases2020_05_31OutcomeCallable CloudFrontClient::ListConflictingAliases2020_05_31Callable(const ListConflictingAliases2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListConflictingAliases2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConflictingAliases2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListConflictingAliases2020_05_31Async(const ListConflictingAliases2020_05_31Request& request, const ListConflictingAliases2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListConflictingAliases2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListConflictingAliases2020_05_31AsyncHelper(const ListConflictingAliases2020_05_31Request& request, const ListConflictingAliases2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListConflictingAliases2020_05_31(request), context);
}

ListDistributions2020_05_31Outcome CloudFrontClient::ListDistributions2020_05_31(const ListDistributions2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution");
  return ListDistributions2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributions2020_05_31OutcomeCallable CloudFrontClient::ListDistributions2020_05_31Callable(const ListDistributions2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributions2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributions2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributions2020_05_31Async(const ListDistributions2020_05_31Request& request, const ListDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributions2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributions2020_05_31AsyncHelper(const ListDistributions2020_05_31Request& request, const ListDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributions2020_05_31(request), context);
}

ListDistributionsByCachePolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31(const ListDistributionsByCachePolicyId2020_05_31Request& request) const
{
  if (!request.CachePolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByCachePolicyId2020_05_31", "Required field: CachePolicyId, is not set");
    return ListDistributionsByCachePolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CachePolicyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributionsByCachePolicyId/");
  uri.AddPathSegment(request.GetCachePolicyId());
  return ListDistributionsByCachePolicyId2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByCachePolicyId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31Callable(const ListDistributionsByCachePolicyId2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByCachePolicyId2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByCachePolicyId2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31Async(const ListDistributionsByCachePolicyId2020_05_31Request& request, const ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByCachePolicyId2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31AsyncHelper(const ListDistributionsByCachePolicyId2020_05_31Request& request, const ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByCachePolicyId2020_05_31(request), context);
}

ListDistributionsByKeyGroup2020_05_31Outcome CloudFrontClient::ListDistributionsByKeyGroup2020_05_31(const ListDistributionsByKeyGroup2020_05_31Request& request) const
{
  if (!request.KeyGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByKeyGroup2020_05_31", "Required field: KeyGroupId, is not set");
    return ListDistributionsByKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyGroupId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributionsByKeyGroupId/");
  uri.AddPathSegment(request.GetKeyGroupId());
  return ListDistributionsByKeyGroup2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByKeyGroup2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByKeyGroup2020_05_31Callable(const ListDistributionsByKeyGroup2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByKeyGroup2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByKeyGroup2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByKeyGroup2020_05_31Async(const ListDistributionsByKeyGroup2020_05_31Request& request, const ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByKeyGroup2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByKeyGroup2020_05_31AsyncHelper(const ListDistributionsByKeyGroup2020_05_31Request& request, const ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByKeyGroup2020_05_31(request), context);
}

ListDistributionsByOriginRequestPolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const
{
  if (!request.OriginRequestPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByOriginRequestPolicyId2020_05_31", "Required field: OriginRequestPolicyId, is not set");
    return ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginRequestPolicyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributionsByOriginRequestPolicyId/");
  uri.AddPathSegment(request.GetOriginRequestPolicyId());
  return ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByOriginRequestPolicyId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31Callable(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByOriginRequestPolicyId2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByOriginRequestPolicyId2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31Async(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request, const ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByOriginRequestPolicyId2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31AsyncHelper(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request, const ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByOriginRequestPolicyId2020_05_31(request), context);
}

ListDistributionsByRealtimeLogConfig2020_05_31Outcome CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributionsByRealtimeLogConfig/");
  return ListDistributionsByRealtimeLogConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListDistributionsByRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31Callable(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByRealtimeLogConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByRealtimeLogConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31Async(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request, const ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByRealtimeLogConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31AsyncHelper(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request, const ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByRealtimeLogConfig2020_05_31(request), context);
}

ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request) const
{
  if (!request.ResponseHeadersPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByResponseHeadersPolicyId2020_05_31", "Required field: ResponseHeadersPolicyId, is not set");
    return ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseHeadersPolicyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributionsByResponseHeadersPolicyId/");
  uri.AddPathSegment(request.GetResponseHeadersPolicyId());
  return ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByResponseHeadersPolicyId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31Callable(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByResponseHeadersPolicyId2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31Async(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request, const ListDistributionsByResponseHeadersPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByResponseHeadersPolicyId2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31AsyncHelper(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request, const ListDistributionsByResponseHeadersPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByResponseHeadersPolicyId2020_05_31(request), context);
}

ListDistributionsByWebACLId2020_05_31Outcome CloudFrontClient::ListDistributionsByWebACLId2020_05_31(const ListDistributionsByWebACLId2020_05_31Request& request) const
{
  if (!request.WebACLIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByWebACLId2020_05_31", "Required field: WebACLId, is not set");
    return ListDistributionsByWebACLId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebACLId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distributionsByWebACLId/");
  uri.AddPathSegment(request.GetWebACLId());
  return ListDistributionsByWebACLId2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByWebACLId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2020_05_31Callable(const ListDistributionsByWebACLId2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDistributionsByWebACLId2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDistributionsByWebACLId2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListDistributionsByWebACLId2020_05_31Async(const ListDistributionsByWebACLId2020_05_31Request& request, const ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDistributionsByWebACLId2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListDistributionsByWebACLId2020_05_31AsyncHelper(const ListDistributionsByWebACLId2020_05_31Request& request, const ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDistributionsByWebACLId2020_05_31(request), context);
}

ListFieldLevelEncryptionConfigs2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31(const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption");
  return ListFieldLevelEncryptionConfigs2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListFieldLevelEncryptionConfigs2020_05_31OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31Callable(const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionConfigs2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionConfigs2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31Async(const ListFieldLevelEncryptionConfigs2020_05_31Request& request, const ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionConfigs2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31AsyncHelper(const ListFieldLevelEncryptionConfigs2020_05_31Request& request, const ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionConfigs2020_05_31(request), context);
}

ListFieldLevelEncryptionProfiles2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31(const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption-profile");
  return ListFieldLevelEncryptionProfiles2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListFieldLevelEncryptionProfiles2020_05_31OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31Callable(const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFieldLevelEncryptionProfiles2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFieldLevelEncryptionProfiles2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31Async(const ListFieldLevelEncryptionProfiles2020_05_31Request& request, const ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFieldLevelEncryptionProfiles2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31AsyncHelper(const ListFieldLevelEncryptionProfiles2020_05_31Request& request, const ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFieldLevelEncryptionProfiles2020_05_31(request), context);
}

ListFunctions2020_05_31Outcome CloudFrontClient::ListFunctions2020_05_31(const ListFunctions2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function");
  return ListFunctions2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListFunctions2020_05_31OutcomeCallable CloudFrontClient::ListFunctions2020_05_31Callable(const ListFunctions2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctions2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctions2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListFunctions2020_05_31Async(const ListFunctions2020_05_31Request& request, const ListFunctions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFunctions2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListFunctions2020_05_31AsyncHelper(const ListFunctions2020_05_31Request& request, const ListFunctions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFunctions2020_05_31(request), context);
}

ListInvalidations2020_05_31Outcome CloudFrontClient::ListInvalidations2020_05_31(const ListInvalidations2020_05_31Request& request) const
{
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInvalidations2020_05_31", "Required field: DistributionId, is not set");
    return ListInvalidations2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetDistributionId());
  uri.AddPathSegments("/invalidation");
  return ListInvalidations2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListInvalidations2020_05_31OutcomeCallable CloudFrontClient::ListInvalidations2020_05_31Callable(const ListInvalidations2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvalidations2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvalidations2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListInvalidations2020_05_31Async(const ListInvalidations2020_05_31Request& request, const ListInvalidations2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvalidations2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListInvalidations2020_05_31AsyncHelper(const ListInvalidations2020_05_31Request& request, const ListInvalidations2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvalidations2020_05_31(request), context);
}

ListKeyGroups2020_05_31Outcome CloudFrontClient::ListKeyGroups2020_05_31(const ListKeyGroups2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/key-group");
  return ListKeyGroups2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListKeyGroups2020_05_31OutcomeCallable CloudFrontClient::ListKeyGroups2020_05_31Callable(const ListKeyGroups2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeyGroups2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeyGroups2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListKeyGroups2020_05_31Async(const ListKeyGroups2020_05_31Request& request, const ListKeyGroups2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListKeyGroups2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListKeyGroups2020_05_31AsyncHelper(const ListKeyGroups2020_05_31Request& request, const ListKeyGroups2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeyGroups2020_05_31(request), context);
}

ListOriginRequestPolicies2020_05_31Outcome CloudFrontClient::ListOriginRequestPolicies2020_05_31(const ListOriginRequestPolicies2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-request-policy");
  return ListOriginRequestPolicies2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListOriginRequestPolicies2020_05_31OutcomeCallable CloudFrontClient::ListOriginRequestPolicies2020_05_31Callable(const ListOriginRequestPolicies2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOriginRequestPolicies2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOriginRequestPolicies2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListOriginRequestPolicies2020_05_31Async(const ListOriginRequestPolicies2020_05_31Request& request, const ListOriginRequestPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOriginRequestPolicies2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListOriginRequestPolicies2020_05_31AsyncHelper(const ListOriginRequestPolicies2020_05_31Request& request, const ListOriginRequestPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOriginRequestPolicies2020_05_31(request), context);
}

ListPublicKeys2020_05_31Outcome CloudFrontClient::ListPublicKeys2020_05_31(const ListPublicKeys2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/public-key");
  return ListPublicKeys2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListPublicKeys2020_05_31OutcomeCallable CloudFrontClient::ListPublicKeys2020_05_31Callable(const ListPublicKeys2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublicKeys2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublicKeys2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListPublicKeys2020_05_31Async(const ListPublicKeys2020_05_31Request& request, const ListPublicKeys2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPublicKeys2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListPublicKeys2020_05_31AsyncHelper(const ListPublicKeys2020_05_31Request& request, const ListPublicKeys2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPublicKeys2020_05_31(request), context);
}

ListRealtimeLogConfigs2020_05_31Outcome CloudFrontClient::ListRealtimeLogConfigs2020_05_31(const ListRealtimeLogConfigs2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/realtime-log-config");
  return ListRealtimeLogConfigs2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListRealtimeLogConfigs2020_05_31OutcomeCallable CloudFrontClient::ListRealtimeLogConfigs2020_05_31Callable(const ListRealtimeLogConfigs2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRealtimeLogConfigs2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRealtimeLogConfigs2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListRealtimeLogConfigs2020_05_31Async(const ListRealtimeLogConfigs2020_05_31Request& request, const ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRealtimeLogConfigs2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListRealtimeLogConfigs2020_05_31AsyncHelper(const ListRealtimeLogConfigs2020_05_31Request& request, const ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRealtimeLogConfigs2020_05_31(request), context);
}

ListResponseHeadersPolicies2020_05_31Outcome CloudFrontClient::ListResponseHeadersPolicies2020_05_31(const ListResponseHeadersPolicies2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/response-headers-policy");
  return ListResponseHeadersPolicies2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListResponseHeadersPolicies2020_05_31OutcomeCallable CloudFrontClient::ListResponseHeadersPolicies2020_05_31Callable(const ListResponseHeadersPolicies2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResponseHeadersPolicies2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResponseHeadersPolicies2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListResponseHeadersPolicies2020_05_31Async(const ListResponseHeadersPolicies2020_05_31Request& request, const ListResponseHeadersPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResponseHeadersPolicies2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListResponseHeadersPolicies2020_05_31AsyncHelper(const ListResponseHeadersPolicies2020_05_31Request& request, const ListResponseHeadersPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResponseHeadersPolicies2020_05_31(request), context);
}

ListStreamingDistributions2020_05_31Outcome CloudFrontClient::ListStreamingDistributions2020_05_31(const ListStreamingDistributions2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/streaming-distribution");
  return ListStreamingDistributions2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListStreamingDistributions2020_05_31OutcomeCallable CloudFrontClient::ListStreamingDistributions2020_05_31Callable(const ListStreamingDistributions2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingDistributions2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingDistributions2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListStreamingDistributions2020_05_31Async(const ListStreamingDistributions2020_05_31Request& request, const ListStreamingDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListStreamingDistributions2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListStreamingDistributions2020_05_31AsyncHelper(const ListStreamingDistributions2020_05_31Request& request, const ListStreamingDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListStreamingDistributions2020_05_31(request), context);
}

ListTagsForResource2020_05_31Outcome CloudFrontClient::ListTagsForResource2020_05_31(const ListTagsForResource2020_05_31Request& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource2020_05_31", "Required field: Resource, is not set");
    return ListTagsForResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/tagging");
  return ListTagsForResource2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ListTagsForResource2020_05_31OutcomeCallable CloudFrontClient::ListTagsForResource2020_05_31Callable(const ListTagsForResource2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResource2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::ListTagsForResource2020_05_31Async(const ListTagsForResource2020_05_31Request& request, const ListTagsForResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResource2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::ListTagsForResource2020_05_31AsyncHelper(const ListTagsForResource2020_05_31Request& request, const ListTagsForResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource2020_05_31(request), context);
}

PublishFunction2020_05_31Outcome CloudFrontClient::PublishFunction2020_05_31(const PublishFunction2020_05_31Request& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishFunction2020_05_31", "Required field: Name, is not set");
    return PublishFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishFunction2020_05_31", "Required field: IfMatch, is not set");
    return PublishFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/publish");
  return PublishFunction2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

PublishFunction2020_05_31OutcomeCallable CloudFrontClient::PublishFunction2020_05_31Callable(const PublishFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::PublishFunction2020_05_31Async(const PublishFunction2020_05_31Request& request, const PublishFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PublishFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::PublishFunction2020_05_31AsyncHelper(const PublishFunction2020_05_31Request& request, const PublishFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PublishFunction2020_05_31(request), context);
}

TagResource2020_05_31Outcome CloudFrontClient::TagResource2020_05_31(const TagResource2020_05_31Request& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource2020_05_31", "Required field: Resource, is not set");
    return TagResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2020-05-31/tagging");
  ss.str("?Operation=Tag");
  uri.SetQueryString(ss.str());
  return TagResource2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TagResource2020_05_31OutcomeCallable CloudFrontClient::TagResource2020_05_31Callable(const TagResource2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResource2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TagResource2020_05_31Async(const TagResource2020_05_31Request& request, const TagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResource2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TagResource2020_05_31AsyncHelper(const TagResource2020_05_31Request& request, const TagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource2020_05_31(request), context);
}

TestFunction2020_05_31Outcome CloudFrontClient::TestFunction2020_05_31(const TestFunction2020_05_31Request& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestFunction2020_05_31", "Required field: Name, is not set");
    return TestFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestFunction2020_05_31", "Required field: IfMatch, is not set");
    return TestFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function/");
  uri.AddPathSegment(request.GetName());
  uri.AddPathSegments("/test");
  return TestFunction2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

TestFunction2020_05_31OutcomeCallable CloudFrontClient::TestFunction2020_05_31Callable(const TestFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::TestFunction2020_05_31Async(const TestFunction2020_05_31Request& request, const TestFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::TestFunction2020_05_31AsyncHelper(const TestFunction2020_05_31Request& request, const TestFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestFunction2020_05_31(request), context);
}

UntagResource2020_05_31Outcome CloudFrontClient::UntagResource2020_05_31(const UntagResource2020_05_31Request& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource2020_05_31", "Required field: Resource, is not set");
    return UntagResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2020-05-31/tagging");
  ss.str("?Operation=Untag");
  uri.SetQueryString(ss.str());
  return UntagResource2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UntagResource2020_05_31OutcomeCallable CloudFrontClient::UntagResource2020_05_31Callable(const UntagResource2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResource2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UntagResource2020_05_31Async(const UntagResource2020_05_31Request& request, const UntagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResource2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UntagResource2020_05_31AsyncHelper(const UntagResource2020_05_31Request& request, const UntagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource2020_05_31(request), context);
}

UpdateCachePolicy2020_05_31Outcome CloudFrontClient::UpdateCachePolicy2020_05_31(const UpdateCachePolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCachePolicy2020_05_31", "Required field: Id, is not set");
    return UpdateCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/cache-policy/");
  uri.AddPathSegment(request.GetId());
  return UpdateCachePolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateCachePolicy2020_05_31OutcomeCallable CloudFrontClient::UpdateCachePolicy2020_05_31Callable(const UpdateCachePolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCachePolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCachePolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCachePolicy2020_05_31Async(const UpdateCachePolicy2020_05_31Request& request, const UpdateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCachePolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCachePolicy2020_05_31AsyncHelper(const UpdateCachePolicy2020_05_31Request& request, const UpdateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCachePolicy2020_05_31(request), context);
}

UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31Callable(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCloudFrontOriginAccessIdentity2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31Async(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request, const UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateCloudFrontOriginAccessIdentity2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request, const UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateCloudFrontOriginAccessIdentity2020_05_31(request), context);
}

UpdateDistribution2020_05_31Outcome CloudFrontClient::UpdateDistribution2020_05_31(const UpdateDistribution2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDistribution2020_05_31", "Required field: Id, is not set");
    return UpdateDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/distribution/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return UpdateDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateDistribution2020_05_31OutcomeCallable CloudFrontClient::UpdateDistribution2020_05_31Callable(const UpdateDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateDistribution2020_05_31Async(const UpdateDistribution2020_05_31Request& request, const UpdateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateDistribution2020_05_31AsyncHelper(const UpdateDistribution2020_05_31Request& request, const UpdateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDistribution2020_05_31(request), context);
}

UpdateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return UpdateFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31Callable(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31Async(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request, const UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31AsyncHelper(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request, const UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionConfig2020_05_31(request), context);
}

UpdateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return UpdateFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31Callable(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFieldLevelEncryptionProfile2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFieldLevelEncryptionProfile2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31Async(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request, const UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFieldLevelEncryptionProfile2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31AsyncHelper(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request, const UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFieldLevelEncryptionProfile2020_05_31(request), context);
}

UpdateFunction2020_05_31Outcome CloudFrontClient::UpdateFunction2020_05_31(const UpdateFunction2020_05_31Request& request) const
{
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunction2020_05_31", "Required field: Name, is not set");
    return UpdateFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  if (!request.IfMatchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunction2020_05_31", "Required field: IfMatch, is not set");
    return UpdateFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IfMatch]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/function/");
  uri.AddPathSegment(request.GetName());
  return UpdateFunction2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateFunction2020_05_31OutcomeCallable CloudFrontClient::UpdateFunction2020_05_31Callable(const UpdateFunction2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunction2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunction2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateFunction2020_05_31Async(const UpdateFunction2020_05_31Request& request, const UpdateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFunction2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateFunction2020_05_31AsyncHelper(const UpdateFunction2020_05_31Request& request, const UpdateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFunction2020_05_31(request), context);
}

UpdateKeyGroup2020_05_31Outcome CloudFrontClient::UpdateKeyGroup2020_05_31(const UpdateKeyGroup2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKeyGroup2020_05_31", "Required field: Id, is not set");
    return UpdateKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/key-group/");
  uri.AddPathSegment(request.GetId());
  return UpdateKeyGroup2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateKeyGroup2020_05_31OutcomeCallable CloudFrontClient::UpdateKeyGroup2020_05_31Callable(const UpdateKeyGroup2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateKeyGroup2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateKeyGroup2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateKeyGroup2020_05_31Async(const UpdateKeyGroup2020_05_31Request& request, const UpdateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateKeyGroup2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateKeyGroup2020_05_31AsyncHelper(const UpdateKeyGroup2020_05_31Request& request, const UpdateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateKeyGroup2020_05_31(request), context);
}

UpdateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::UpdateOriginRequestPolicy2020_05_31(const UpdateOriginRequestPolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/origin-request-policy/");
  uri.AddPathSegment(request.GetId());
  return UpdateOriginRequestPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::UpdateOriginRequestPolicy2020_05_31Callable(const UpdateOriginRequestPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOriginRequestPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOriginRequestPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateOriginRequestPolicy2020_05_31Async(const UpdateOriginRequestPolicy2020_05_31Request& request, const UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateOriginRequestPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateOriginRequestPolicy2020_05_31AsyncHelper(const UpdateOriginRequestPolicy2020_05_31Request& request, const UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOriginRequestPolicy2020_05_31(request), context);
}

UpdatePublicKey2020_05_31Outcome CloudFrontClient::UpdatePublicKey2020_05_31(const UpdatePublicKey2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicKey2020_05_31", "Required field: Id, is not set");
    return UpdatePublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/public-key/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return UpdatePublicKey2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdatePublicKey2020_05_31OutcomeCallable CloudFrontClient::UpdatePublicKey2020_05_31Callable(const UpdatePublicKey2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicKey2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicKey2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdatePublicKey2020_05_31Async(const UpdatePublicKey2020_05_31Request& request, const UpdatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdatePublicKey2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdatePublicKey2020_05_31AsyncHelper(const UpdatePublicKey2020_05_31Request& request, const UpdatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdatePublicKey2020_05_31(request), context);
}

UpdateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::UpdateRealtimeLogConfig2020_05_31(const UpdateRealtimeLogConfig2020_05_31Request& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/realtime-log-config/");
  return UpdateRealtimeLogConfig2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::UpdateRealtimeLogConfig2020_05_31Callable(const UpdateRealtimeLogConfig2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRealtimeLogConfig2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRealtimeLogConfig2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateRealtimeLogConfig2020_05_31Async(const UpdateRealtimeLogConfig2020_05_31Request& request, const UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRealtimeLogConfig2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateRealtimeLogConfig2020_05_31AsyncHelper(const UpdateRealtimeLogConfig2020_05_31Request& request, const UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRealtimeLogConfig2020_05_31(request), context);
}

UpdateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31(const UpdateResponseHeadersPolicy2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/response-headers-policy/");
  uri.AddPathSegment(request.GetId());
  return UpdateResponseHeadersPolicy2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31Callable(const UpdateResponseHeadersPolicy2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResponseHeadersPolicy2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResponseHeadersPolicy2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31Async(const UpdateResponseHeadersPolicy2020_05_31Request& request, const UpdateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResponseHeadersPolicy2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31AsyncHelper(const UpdateResponseHeadersPolicy2020_05_31Request& request, const UpdateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResponseHeadersPolicy2020_05_31(request), context);
}

UpdateStreamingDistribution2020_05_31Outcome CloudFrontClient::UpdateStreamingDistribution2020_05_31(const UpdateStreamingDistribution2020_05_31Request& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return UpdateStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-05-31/streaming-distribution/");
  uri.AddPathSegment(request.GetId());
  uri.AddPathSegments("/config");
  return UpdateStreamingDistribution2020_05_31Outcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2020_05_31Callable(const UpdateStreamingDistribution2020_05_31Request& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingDistribution2020_05_31Outcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingDistribution2020_05_31(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudFrontClient::UpdateStreamingDistribution2020_05_31Async(const UpdateStreamingDistribution2020_05_31Request& request, const UpdateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStreamingDistribution2020_05_31AsyncHelper( request, handler, context ); } );
}

void CloudFrontClient::UpdateStreamingDistribution2020_05_31AsyncHelper(const UpdateStreamingDistribution2020_05_31Request& request, const UpdateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStreamingDistribution2020_05_31(request), context);
}

