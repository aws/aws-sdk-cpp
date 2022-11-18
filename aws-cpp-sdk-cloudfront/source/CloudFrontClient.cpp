/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/CloudFrontErrorMarshaller.h>
#include <aws/cloudfront/CloudFrontEndpointProvider.h>
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
#include <aws/cloudfront/model/CreateOriginAccessControl2020_05_31Request.h>
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
#include <aws/cloudfront/model/DeleteOriginAccessControl2020_05_31Request.h>
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
#include <aws/cloudfront/model/GetOriginAccessControl2020_05_31Request.h>
#include <aws/cloudfront/model/GetOriginAccessControlConfig2020_05_31Request.h>
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
#include <aws/cloudfront/model/ListOriginAccessControls2020_05_31Request.h>
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
#include <aws/cloudfront/model/UpdateOriginAccessControl2020_05_31Request.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;


const char* CloudFrontClient::SERVICE_NAME = "cloudfront";
const char* CloudFrontClient::ALLOCATION_TAG = "CloudFrontClient";

CloudFrontClient::CloudFrontClient(const CloudFront::CloudFrontClientConfiguration& clientConfiguration,
                                   std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials,
                                   std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider,
                                   const CloudFront::CloudFrontClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<CloudFrontEndpointProviderBase> endpointProvider,
                                   const CloudFront::CloudFrontClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudFrontClient::CloudFrontClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudFrontClient::CloudFrontClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudFrontErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudFrontEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudFrontClient::~CloudFrontClient()
{
}

std::shared_ptr<CloudFrontEndpointProviderBase>& CloudFrontClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudFrontClient::init(const CloudFront::CloudFrontClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudFront");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudFrontClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateAlias2020_05_31Outcome CloudFrontClient::AssociateAlias2020_05_31(const AssociateAlias2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateAlias2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateAlias2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTargetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associate-alias");
  return AssociateAlias2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

AssociateAlias2020_05_31OutcomeCallable CloudFrontClient::AssociateAlias2020_05_31Callable(const AssociateAlias2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(AssociateAlias2020_05_31, request, m_executor.get());
}

void CloudFrontClient::AssociateAlias2020_05_31Async(const AssociateAlias2020_05_31Request& request, const AssociateAlias2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(AssociateAlias2020_05_31, request, handler, context, m_executor.get());
}
CreateCachePolicy2020_05_31Outcome CloudFrontClient::CreateCachePolicy2020_05_31(const CreateCachePolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  return CreateCachePolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCachePolicy2020_05_31OutcomeCallable CloudFrontClient::CreateCachePolicy2020_05_31Callable(const CreateCachePolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateCachePolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateCachePolicy2020_05_31Async(const CreateCachePolicy2020_05_31Request& request, const CreateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateCachePolicy2020_05_31, request, handler, context, m_executor.get());
}
CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  return CreateCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31Callable(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateCloudFrontOriginAccessIdentity2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31Async(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request, const CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateCloudFrontOriginAccessIdentity2020_05_31, request, handler, context, m_executor.get());
}
CreateDistribution2020_05_31Outcome CloudFrontClient::CreateDistribution2020_05_31(const CreateDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  return CreateDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDistribution2020_05_31OutcomeCallable CloudFrontClient::CreateDistribution2020_05_31Callable(const CreateDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateDistribution2020_05_31Async(const CreateDistribution2020_05_31Request& request, const CreateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDistribution2020_05_31, request, handler, context, m_executor.get());
}
CreateDistributionWithTags2020_05_31Outcome CloudFrontClient::CreateDistributionWithTags2020_05_31(const CreateDistributionWithTags2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDistributionWithTags2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDistributionWithTags2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  ss.str("?WithTags");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return CreateDistributionWithTags2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDistributionWithTags2020_05_31OutcomeCallable CloudFrontClient::CreateDistributionWithTags2020_05_31Callable(const CreateDistributionWithTags2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDistributionWithTags2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateDistributionWithTags2020_05_31Async(const CreateDistributionWithTags2020_05_31Request& request, const CreateDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDistributionWithTags2020_05_31, request, handler, context, m_executor.get());
}
CreateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31(const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  return CreateFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31Callable(const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateFieldLevelEncryptionConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31Async(const CreateFieldLevelEncryptionConfig2020_05_31Request& request, const CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateFieldLevelEncryptionConfig2020_05_31, request, handler, context, m_executor.get());
}
CreateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31(const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  return CreateFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31Callable(const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateFieldLevelEncryptionProfile2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31Async(const CreateFieldLevelEncryptionProfile2020_05_31Request& request, const CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateFieldLevelEncryptionProfile2020_05_31, request, handler, context, m_executor.get());
}
CreateFunction2020_05_31Outcome CloudFrontClient::CreateFunction2020_05_31(const CreateFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  return CreateFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFunction2020_05_31OutcomeCallable CloudFrontClient::CreateFunction2020_05_31Callable(const CreateFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateFunction2020_05_31Async(const CreateFunction2020_05_31Request& request, const CreateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateFunction2020_05_31, request, handler, context, m_executor.get());
}
CreateInvalidation2020_05_31Outcome CloudFrontClient::CreateInvalidation2020_05_31(const CreateInvalidation2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInvalidation2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateInvalidation2020_05_31", "Required field: DistributionId, is not set");
    return CreateInvalidation2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInvalidation2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation");
  return CreateInvalidation2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateInvalidation2020_05_31OutcomeCallable CloudFrontClient::CreateInvalidation2020_05_31Callable(const CreateInvalidation2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateInvalidation2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateInvalidation2020_05_31Async(const CreateInvalidation2020_05_31Request& request, const CreateInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateInvalidation2020_05_31, request, handler, context, m_executor.get());
}
CreateKeyGroup2020_05_31Outcome CloudFrontClient::CreateKeyGroup2020_05_31(const CreateKeyGroup2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  return CreateKeyGroup2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateKeyGroup2020_05_31OutcomeCallable CloudFrontClient::CreateKeyGroup2020_05_31Callable(const CreateKeyGroup2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateKeyGroup2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateKeyGroup2020_05_31Async(const CreateKeyGroup2020_05_31Request& request, const CreateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateKeyGroup2020_05_31, request, handler, context, m_executor.get());
}
CreateMonitoringSubscription2020_05_31Outcome CloudFrontClient::CreateMonitoringSubscription2020_05_31(const CreateMonitoringSubscription2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMonitoringSubscription2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return CreateMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMonitoringSubscription2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring-subscription/");
  return CreateMonitoringSubscription2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateMonitoringSubscription2020_05_31OutcomeCallable CloudFrontClient::CreateMonitoringSubscription2020_05_31Callable(const CreateMonitoringSubscription2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateMonitoringSubscription2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateMonitoringSubscription2020_05_31Async(const CreateMonitoringSubscription2020_05_31Request& request, const CreateMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateMonitoringSubscription2020_05_31, request, handler, context, m_executor.get());
}
CreateOriginAccessControl2020_05_31Outcome CloudFrontClient::CreateOriginAccessControl2020_05_31(const CreateOriginAccessControl2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  return CreateOriginAccessControl2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateOriginAccessControl2020_05_31OutcomeCallable CloudFrontClient::CreateOriginAccessControl2020_05_31Callable(const CreateOriginAccessControl2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateOriginAccessControl2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateOriginAccessControl2020_05_31Async(const CreateOriginAccessControl2020_05_31Request& request, const CreateOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateOriginAccessControl2020_05_31, request, handler, context, m_executor.get());
}
CreateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::CreateOriginRequestPolicy2020_05_31(const CreateOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  return CreateOriginRequestPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::CreateOriginRequestPolicy2020_05_31Callable(const CreateOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateOriginRequestPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateOriginRequestPolicy2020_05_31Async(const CreateOriginRequestPolicy2020_05_31Request& request, const CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateOriginRequestPolicy2020_05_31, request, handler, context, m_executor.get());
}
CreatePublicKey2020_05_31Outcome CloudFrontClient::CreatePublicKey2020_05_31(const CreatePublicKey2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  return CreatePublicKey2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePublicKey2020_05_31OutcomeCallable CloudFrontClient::CreatePublicKey2020_05_31Callable(const CreatePublicKey2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreatePublicKey2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreatePublicKey2020_05_31Async(const CreatePublicKey2020_05_31Request& request, const CreatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreatePublicKey2020_05_31, request, handler, context, m_executor.get());
}
CreateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::CreateRealtimeLogConfig2020_05_31(const CreateRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  return CreateRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::CreateRealtimeLogConfig2020_05_31Callable(const CreateRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateRealtimeLogConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateRealtimeLogConfig2020_05_31Async(const CreateRealtimeLogConfig2020_05_31Request& request, const CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateRealtimeLogConfig2020_05_31, request, handler, context, m_executor.get());
}
CreateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::CreateResponseHeadersPolicy2020_05_31(const CreateResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  return CreateResponseHeadersPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::CreateResponseHeadersPolicy2020_05_31Callable(const CreateResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateResponseHeadersPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateResponseHeadersPolicy2020_05_31Async(const CreateResponseHeadersPolicy2020_05_31Request& request, const CreateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateResponseHeadersPolicy2020_05_31, request, handler, context, m_executor.get());
}
CreateStreamingDistribution2020_05_31Outcome CloudFrontClient::CreateStreamingDistribution2020_05_31(const CreateStreamingDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  return CreateStreamingDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::CreateStreamingDistribution2020_05_31Callable(const CreateStreamingDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateStreamingDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateStreamingDistribution2020_05_31Async(const CreateStreamingDistribution2020_05_31Request& request, const CreateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateStreamingDistribution2020_05_31, request, handler, context, m_executor.get());
}
CreateStreamingDistributionWithTags2020_05_31Outcome CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31(const CreateStreamingDistributionWithTags2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingDistributionWithTags2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingDistributionWithTags2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  ss.str("?WithTags");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return CreateStreamingDistributionWithTags2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStreamingDistributionWithTags2020_05_31OutcomeCallable CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31Callable(const CreateStreamingDistributionWithTags2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateStreamingDistributionWithTags2020_05_31, request, m_executor.get());
}

void CloudFrontClient::CreateStreamingDistributionWithTags2020_05_31Async(const CreateStreamingDistributionWithTags2020_05_31Request& request, const CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateStreamingDistributionWithTags2020_05_31, request, handler, context, m_executor.get());
}
DeleteCachePolicy2020_05_31Outcome CloudFrontClient::DeleteCachePolicy2020_05_31(const DeleteCachePolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCachePolicy2020_05_31", "Required field: Id, is not set");
    return DeleteCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteCachePolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteCachePolicy2020_05_31OutcomeCallable CloudFrontClient::DeleteCachePolicy2020_05_31Callable(const DeleteCachePolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteCachePolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteCachePolicy2020_05_31Async(const DeleteCachePolicy2020_05_31Request& request, const DeleteCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteCachePolicy2020_05_31, request, handler, context, m_executor.get());
}
DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31Callable(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteCloudFrontOriginAccessIdentity2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteCloudFrontOriginAccessIdentity2020_05_31Async(const DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request, const DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteCloudFrontOriginAccessIdentity2020_05_31, request, handler, context, m_executor.get());
}
DeleteDistribution2020_05_31Outcome CloudFrontClient::DeleteDistribution2020_05_31(const DeleteDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDistribution2020_05_31", "Required field: Id, is not set");
    return DeleteDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteDistribution2020_05_31OutcomeCallable CloudFrontClient::DeleteDistribution2020_05_31Callable(const DeleteDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteDistribution2020_05_31Async(const DeleteDistribution2020_05_31Request& request, const DeleteDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteDistribution2020_05_31, request, handler, context, m_executor.get());
}
DeleteFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31Callable(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteFieldLevelEncryptionConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteFieldLevelEncryptionConfig2020_05_31Async(const DeleteFieldLevelEncryptionConfig2020_05_31Request& request, const DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteFieldLevelEncryptionConfig2020_05_31, request, handler, context, m_executor.get());
}
DeleteFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return DeleteFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31Callable(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteFieldLevelEncryptionProfile2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteFieldLevelEncryptionProfile2020_05_31Async(const DeleteFieldLevelEncryptionProfile2020_05_31Request& request, const DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteFieldLevelEncryptionProfile2020_05_31, request, handler, context, m_executor.get());
}
DeleteFunction2020_05_31Outcome CloudFrontClient::DeleteFunction2020_05_31(const DeleteFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteFunction2020_05_31OutcomeCallable CloudFrontClient::DeleteFunction2020_05_31Callable(const DeleteFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteFunction2020_05_31Async(const DeleteFunction2020_05_31Request& request, const DeleteFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteFunction2020_05_31, request, handler, context, m_executor.get());
}
DeleteKeyGroup2020_05_31Outcome CloudFrontClient::DeleteKeyGroup2020_05_31(const DeleteKeyGroup2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteKeyGroup2020_05_31", "Required field: Id, is not set");
    return DeleteKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteKeyGroup2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteKeyGroup2020_05_31OutcomeCallable CloudFrontClient::DeleteKeyGroup2020_05_31Callable(const DeleteKeyGroup2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteKeyGroup2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteKeyGroup2020_05_31Async(const DeleteKeyGroup2020_05_31Request& request, const DeleteKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteKeyGroup2020_05_31, request, handler, context, m_executor.get());
}
DeleteMonitoringSubscription2020_05_31Outcome CloudFrontClient::DeleteMonitoringSubscription2020_05_31(const DeleteMonitoringSubscription2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMonitoringSubscription2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return DeleteMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMonitoringSubscription2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring-subscription/");
  return DeleteMonitoringSubscription2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteMonitoringSubscription2020_05_31OutcomeCallable CloudFrontClient::DeleteMonitoringSubscription2020_05_31Callable(const DeleteMonitoringSubscription2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteMonitoringSubscription2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteMonitoringSubscription2020_05_31Async(const DeleteMonitoringSubscription2020_05_31Request& request, const DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteMonitoringSubscription2020_05_31, request, handler, context, m_executor.get());
}
DeleteOriginAccessControl2020_05_31Outcome CloudFrontClient::DeleteOriginAccessControl2020_05_31(const DeleteOriginAccessControl2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginAccessControl2020_05_31", "Required field: Id, is not set");
    return DeleteOriginAccessControl2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteOriginAccessControl2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteOriginAccessControl2020_05_31OutcomeCallable CloudFrontClient::DeleteOriginAccessControl2020_05_31Callable(const DeleteOriginAccessControl2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteOriginAccessControl2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteOriginAccessControl2020_05_31Async(const DeleteOriginAccessControl2020_05_31Request& request, const DeleteOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteOriginAccessControl2020_05_31, request, handler, context, m_executor.get());
}
DeleteOriginRequestPolicy2020_05_31Outcome CloudFrontClient::DeleteOriginRequestPolicy2020_05_31(const DeleteOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteOriginRequestPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::DeleteOriginRequestPolicy2020_05_31Callable(const DeleteOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteOriginRequestPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteOriginRequestPolicy2020_05_31Async(const DeleteOriginRequestPolicy2020_05_31Request& request, const DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteOriginRequestPolicy2020_05_31, request, handler, context, m_executor.get());
}
DeletePublicKey2020_05_31Outcome CloudFrontClient::DeletePublicKey2020_05_31(const DeletePublicKey2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublicKey2020_05_31", "Required field: Id, is not set");
    return DeletePublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeletePublicKey2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeletePublicKey2020_05_31OutcomeCallable CloudFrontClient::DeletePublicKey2020_05_31Callable(const DeletePublicKey2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeletePublicKey2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeletePublicKey2020_05_31Async(const DeletePublicKey2020_05_31Request& request, const DeletePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeletePublicKey2020_05_31, request, handler, context, m_executor.get());
}
DeleteRealtimeLogConfig2020_05_31Outcome CloudFrontClient::DeleteRealtimeLogConfig2020_05_31(const DeleteRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/delete-realtime-log-config/");
  return DeleteRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::DeleteRealtimeLogConfig2020_05_31Callable(const DeleteRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteRealtimeLogConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteRealtimeLogConfig2020_05_31Async(const DeleteRealtimeLogConfig2020_05_31Request& request, const DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteRealtimeLogConfig2020_05_31, request, handler, context, m_executor.get());
}
DeleteResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31(const DeleteResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteResponseHeadersPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31Callable(const DeleteResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteResponseHeadersPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteResponseHeadersPolicy2020_05_31Async(const DeleteResponseHeadersPolicy2020_05_31Request& request, const DeleteResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteResponseHeadersPolicy2020_05_31, request, handler, context, m_executor.get());
}
DeleteStreamingDistribution2020_05_31Outcome CloudFrontClient::DeleteStreamingDistribution2020_05_31(const DeleteStreamingDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return DeleteStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteStreamingDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
}

DeleteStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::DeleteStreamingDistribution2020_05_31Callable(const DeleteStreamingDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteStreamingDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DeleteStreamingDistribution2020_05_31Async(const DeleteStreamingDistribution2020_05_31Request& request, const DeleteStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteStreamingDistribution2020_05_31, request, handler, context, m_executor.get());
}
DescribeFunction2020_05_31Outcome CloudFrontClient::DescribeFunction2020_05_31(const DescribeFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFunction2020_05_31", "Required field: Name, is not set");
    return DescribeFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/describe");
  return DescribeFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

DescribeFunction2020_05_31OutcomeCallable CloudFrontClient::DescribeFunction2020_05_31Callable(const DescribeFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::DescribeFunction2020_05_31Async(const DescribeFunction2020_05_31Request& request, const DescribeFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeFunction2020_05_31, request, handler, context, m_executor.get());
}
GetCachePolicy2020_05_31Outcome CloudFrontClient::GetCachePolicy2020_05_31(const GetCachePolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCachePolicy2020_05_31", "Required field: Id, is not set");
    return GetCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetCachePolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetCachePolicy2020_05_31OutcomeCallable CloudFrontClient::GetCachePolicy2020_05_31Callable(const GetCachePolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetCachePolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetCachePolicy2020_05_31Async(const GetCachePolicy2020_05_31Request& request, const GetCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetCachePolicy2020_05_31, request, handler, context, m_executor.get());
}
GetCachePolicyConfig2020_05_31Outcome CloudFrontClient::GetCachePolicyConfig2020_05_31(const GetCachePolicyConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCachePolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCachePolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetCachePolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCachePolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetCachePolicyConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetCachePolicyConfig2020_05_31OutcomeCallable CloudFrontClient::GetCachePolicyConfig2020_05_31Callable(const GetCachePolicyConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetCachePolicyConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetCachePolicyConfig2020_05_31Async(const GetCachePolicyConfig2020_05_31Request& request, const GetCachePolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetCachePolicyConfig2020_05_31, request, handler, context, m_executor.get());
}
GetCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31Callable(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetCloudFrontOriginAccessIdentity2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentity2020_05_31Async(const GetCloudFrontOriginAccessIdentity2020_05_31Request& request, const GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetCloudFrontOriginAccessIdentity2020_05_31, request, handler, context, m_executor.get());
}
GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudFrontOriginAccessIdentityConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCloudFrontOriginAccessIdentityConfig2020_05_31", "Required field: Id, is not set");
    return GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCloudFrontOriginAccessIdentityConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetCloudFrontOriginAccessIdentityConfig2020_05_31OutcomeCallable CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31Callable(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetCloudFrontOriginAccessIdentityConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetCloudFrontOriginAccessIdentityConfig2020_05_31Async(const GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request, const GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetCloudFrontOriginAccessIdentityConfig2020_05_31, request, handler, context, m_executor.get());
}
GetDistribution2020_05_31Outcome CloudFrontClient::GetDistribution2020_05_31(const GetDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistribution2020_05_31", "Required field: Id, is not set");
    return GetDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetDistribution2020_05_31OutcomeCallable CloudFrontClient::GetDistribution2020_05_31Callable(const GetDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetDistribution2020_05_31Async(const GetDistribution2020_05_31Request& request, const GetDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetDistribution2020_05_31, request, handler, context, m_executor.get());
}
GetDistributionConfig2020_05_31Outcome CloudFrontClient::GetDistributionConfig2020_05_31(const GetDistributionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDistributionConfig2020_05_31", "Required field: Id, is not set");
    return GetDistributionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetDistributionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetDistributionConfig2020_05_31OutcomeCallable CloudFrontClient::GetDistributionConfig2020_05_31Callable(const GetDistributionConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetDistributionConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetDistributionConfig2020_05_31Async(const GetDistributionConfig2020_05_31Request& request, const GetDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetDistributionConfig2020_05_31, request, handler, context, m_executor.get());
}
GetFieldLevelEncryption2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryption2020_05_31(const GetFieldLevelEncryption2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFieldLevelEncryption2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryption2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryption2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFieldLevelEncryption2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetFieldLevelEncryption2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryption2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryption2020_05_31Callable(const GetFieldLevelEncryption2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetFieldLevelEncryption2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetFieldLevelEncryption2020_05_31Async(const GetFieldLevelEncryption2020_05_31Request& request, const GetFieldLevelEncryption2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetFieldLevelEncryption2020_05_31, request, handler, context, m_executor.get());
}
GetFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31(const GetFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31Callable(const GetFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetFieldLevelEncryptionConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetFieldLevelEncryptionConfig2020_05_31Async(const GetFieldLevelEncryptionConfig2020_05_31Request& request, const GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetFieldLevelEncryptionConfig2020_05_31, request, handler, context, m_executor.get());
}
GetFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31(const GetFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31Callable(const GetFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetFieldLevelEncryptionProfile2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetFieldLevelEncryptionProfile2020_05_31Async(const GetFieldLevelEncryptionProfile2020_05_31Request& request, const GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetFieldLevelEncryptionProfile2020_05_31, request, handler, context, m_executor.get());
}
GetFieldLevelEncryptionProfileConfig2020_05_31Outcome CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFieldLevelEncryptionProfileConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFieldLevelEncryptionProfileConfig2020_05_31", "Required field: Id, is not set");
    return GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFieldLevelEncryptionProfileConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetFieldLevelEncryptionProfileConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetFieldLevelEncryptionProfileConfig2020_05_31OutcomeCallable CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31Callable(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetFieldLevelEncryptionProfileConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetFieldLevelEncryptionProfileConfig2020_05_31Async(const GetFieldLevelEncryptionProfileConfig2020_05_31Request& request, const GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetFieldLevelEncryptionProfileConfig2020_05_31, request, handler, context, m_executor.get());
}
GetFunction2020_05_31Outcome CloudFrontClient::GetFunction2020_05_31(const GetFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunction2020_05_31", "Required field: Name, is not set");
    return GetFunction2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetFunction2020_05_31Outcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetFunction2020_05_31OutcomeCallable CloudFrontClient::GetFunction2020_05_31Callable(const GetFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetFunction2020_05_31Async(const GetFunction2020_05_31Request& request, const GetFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetFunction2020_05_31, request, handler, context, m_executor.get());
}
GetInvalidation2020_05_31Outcome CloudFrontClient::GetInvalidation2020_05_31(const GetInvalidation2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInvalidation2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInvalidation2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetInvalidation2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetInvalidation2020_05_31OutcomeCallable CloudFrontClient::GetInvalidation2020_05_31Callable(const GetInvalidation2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetInvalidation2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetInvalidation2020_05_31Async(const GetInvalidation2020_05_31Request& request, const GetInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetInvalidation2020_05_31, request, handler, context, m_executor.get());
}
GetKeyGroup2020_05_31Outcome CloudFrontClient::GetKeyGroup2020_05_31(const GetKeyGroup2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKeyGroup2020_05_31", "Required field: Id, is not set");
    return GetKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetKeyGroup2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetKeyGroup2020_05_31OutcomeCallable CloudFrontClient::GetKeyGroup2020_05_31Callable(const GetKeyGroup2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetKeyGroup2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetKeyGroup2020_05_31Async(const GetKeyGroup2020_05_31Request& request, const GetKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetKeyGroup2020_05_31, request, handler, context, m_executor.get());
}
GetKeyGroupConfig2020_05_31Outcome CloudFrontClient::GetKeyGroupConfig2020_05_31(const GetKeyGroupConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyGroupConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetKeyGroupConfig2020_05_31", "Required field: Id, is not set");
    return GetKeyGroupConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyGroupConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetKeyGroupConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetKeyGroupConfig2020_05_31OutcomeCallable CloudFrontClient::GetKeyGroupConfig2020_05_31Callable(const GetKeyGroupConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetKeyGroupConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetKeyGroupConfig2020_05_31Async(const GetKeyGroupConfig2020_05_31Request& request, const GetKeyGroupConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetKeyGroupConfig2020_05_31, request, handler, context, m_executor.get());
}
GetMonitoringSubscription2020_05_31Outcome CloudFrontClient::GetMonitoringSubscription2020_05_31(const GetMonitoringSubscription2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMonitoringSubscription2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMonitoringSubscription2020_05_31", "Required field: DistributionId, is not set");
    return GetMonitoringSubscription2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMonitoringSubscription2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/monitoring-subscription/");
  return GetMonitoringSubscription2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetMonitoringSubscription2020_05_31OutcomeCallable CloudFrontClient::GetMonitoringSubscription2020_05_31Callable(const GetMonitoringSubscription2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetMonitoringSubscription2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetMonitoringSubscription2020_05_31Async(const GetMonitoringSubscription2020_05_31Request& request, const GetMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetMonitoringSubscription2020_05_31, request, handler, context, m_executor.get());
}
GetOriginAccessControl2020_05_31Outcome CloudFrontClient::GetOriginAccessControl2020_05_31(const GetOriginAccessControl2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginAccessControl2020_05_31", "Required field: Id, is not set");
    return GetOriginAccessControl2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetOriginAccessControl2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetOriginAccessControl2020_05_31OutcomeCallable CloudFrontClient::GetOriginAccessControl2020_05_31Callable(const GetOriginAccessControl2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetOriginAccessControl2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetOriginAccessControl2020_05_31Async(const GetOriginAccessControl2020_05_31Request& request, const GetOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetOriginAccessControl2020_05_31, request, handler, context, m_executor.get());
}
GetOriginAccessControlConfig2020_05_31Outcome CloudFrontClient::GetOriginAccessControlConfig2020_05_31(const GetOriginAccessControlConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginAccessControlConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginAccessControlConfig2020_05_31", "Required field: Id, is not set");
    return GetOriginAccessControlConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginAccessControlConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetOriginAccessControlConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetOriginAccessControlConfig2020_05_31OutcomeCallable CloudFrontClient::GetOriginAccessControlConfig2020_05_31Callable(const GetOriginAccessControlConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetOriginAccessControlConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetOriginAccessControlConfig2020_05_31Async(const GetOriginAccessControlConfig2020_05_31Request& request, const GetOriginAccessControlConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetOriginAccessControlConfig2020_05_31, request, handler, context, m_executor.get());
}
GetOriginRequestPolicy2020_05_31Outcome CloudFrontClient::GetOriginRequestPolicy2020_05_31(const GetOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return GetOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetOriginRequestPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::GetOriginRequestPolicy2020_05_31Callable(const GetOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetOriginRequestPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetOriginRequestPolicy2020_05_31Async(const GetOriginRequestPolicy2020_05_31Request& request, const GetOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetOriginRequestPolicy2020_05_31, request, handler, context, m_executor.get());
}
GetOriginRequestPolicyConfig2020_05_31Outcome CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31(const GetOriginRequestPolicyConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOriginRequestPolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetOriginRequestPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetOriginRequestPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOriginRequestPolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetOriginRequestPolicyConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetOriginRequestPolicyConfig2020_05_31OutcomeCallable CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31Callable(const GetOriginRequestPolicyConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetOriginRequestPolicyConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetOriginRequestPolicyConfig2020_05_31Async(const GetOriginRequestPolicyConfig2020_05_31Request& request, const GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetOriginRequestPolicyConfig2020_05_31, request, handler, context, m_executor.get());
}
GetPublicKey2020_05_31Outcome CloudFrontClient::GetPublicKey2020_05_31(const GetPublicKey2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicKey2020_05_31", "Required field: Id, is not set");
    return GetPublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetPublicKey2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicKey2020_05_31OutcomeCallable CloudFrontClient::GetPublicKey2020_05_31Callable(const GetPublicKey2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetPublicKey2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetPublicKey2020_05_31Async(const GetPublicKey2020_05_31Request& request, const GetPublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetPublicKey2020_05_31, request, handler, context, m_executor.get());
}
GetPublicKeyConfig2020_05_31Outcome CloudFrontClient::GetPublicKeyConfig2020_05_31(const GetPublicKeyConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPublicKeyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPublicKeyConfig2020_05_31", "Required field: Id, is not set");
    return GetPublicKeyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPublicKeyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetPublicKeyConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetPublicKeyConfig2020_05_31OutcomeCallable CloudFrontClient::GetPublicKeyConfig2020_05_31Callable(const GetPublicKeyConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetPublicKeyConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetPublicKeyConfig2020_05_31Async(const GetPublicKeyConfig2020_05_31Request& request, const GetPublicKeyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetPublicKeyConfig2020_05_31, request, handler, context, m_executor.get());
}
GetRealtimeLogConfig2020_05_31Outcome CloudFrontClient::GetRealtimeLogConfig2020_05_31(const GetRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/get-realtime-log-config/");
  return GetRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::GetRealtimeLogConfig2020_05_31Callable(const GetRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetRealtimeLogConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetRealtimeLogConfig2020_05_31Async(const GetRealtimeLogConfig2020_05_31Request& request, const GetRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetRealtimeLogConfig2020_05_31, request, handler, context, m_executor.get());
}
GetResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::GetResponseHeadersPolicy2020_05_31(const GetResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return GetResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetResponseHeadersPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::GetResponseHeadersPolicy2020_05_31Callable(const GetResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetResponseHeadersPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetResponseHeadersPolicy2020_05_31Async(const GetResponseHeadersPolicy2020_05_31Request& request, const GetResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetResponseHeadersPolicy2020_05_31, request, handler, context, m_executor.get());
}
GetResponseHeadersPolicyConfig2020_05_31Outcome CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31(const GetResponseHeadersPolicyConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResponseHeadersPolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResponseHeadersPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetResponseHeadersPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResponseHeadersPolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetResponseHeadersPolicyConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetResponseHeadersPolicyConfig2020_05_31OutcomeCallable CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31Callable(const GetResponseHeadersPolicyConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetResponseHeadersPolicyConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetResponseHeadersPolicyConfig2020_05_31Async(const GetResponseHeadersPolicyConfig2020_05_31Request& request, const GetResponseHeadersPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetResponseHeadersPolicyConfig2020_05_31, request, handler, context, m_executor.get());
}
GetStreamingDistribution2020_05_31Outcome CloudFrontClient::GetStreamingDistribution2020_05_31(const GetStreamingDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return GetStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetStreamingDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::GetStreamingDistribution2020_05_31Callable(const GetStreamingDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetStreamingDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetStreamingDistribution2020_05_31Async(const GetStreamingDistribution2020_05_31Request& request, const GetStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetStreamingDistribution2020_05_31, request, handler, context, m_executor.get());
}
GetStreamingDistributionConfig2020_05_31Outcome CloudFrontClient::GetStreamingDistributionConfig2020_05_31(const GetStreamingDistributionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamingDistributionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingDistributionConfig2020_05_31", "Required field: Id, is not set");
    return GetStreamingDistributionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStreamingDistributionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetStreamingDistributionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetStreamingDistributionConfig2020_05_31OutcomeCallable CloudFrontClient::GetStreamingDistributionConfig2020_05_31Callable(const GetStreamingDistributionConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetStreamingDistributionConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::GetStreamingDistributionConfig2020_05_31Async(const GetStreamingDistributionConfig2020_05_31Request& request, const GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetStreamingDistributionConfig2020_05_31, request, handler, context, m_executor.get());
}
ListCachePolicies2020_05_31Outcome CloudFrontClient::ListCachePolicies2020_05_31(const ListCachePolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCachePolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCachePolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  return ListCachePolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListCachePolicies2020_05_31OutcomeCallable CloudFrontClient::ListCachePolicies2020_05_31Callable(const ListCachePolicies2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListCachePolicies2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListCachePolicies2020_05_31Async(const ListCachePolicies2020_05_31Request& request, const ListCachePolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListCachePolicies2020_05_31, request, handler, context, m_executor.get());
}
ListCloudFrontOriginAccessIdentities2020_05_31Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCloudFrontOriginAccessIdentities2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCloudFrontOriginAccessIdentities2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  return ListCloudFrontOriginAccessIdentities2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListCloudFrontOriginAccessIdentities2020_05_31OutcomeCallable CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31Callable(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListCloudFrontOriginAccessIdentities2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31Async(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request, const ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListCloudFrontOriginAccessIdentities2020_05_31, request, handler, context, m_executor.get());
}
ListConflictingAliases2020_05_31Outcome CloudFrontClient::ListConflictingAliases2020_05_31(const ListConflictingAliases2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConflictingAliases2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConflictingAliases2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/conflicting-alias");
  return ListConflictingAliases2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListConflictingAliases2020_05_31OutcomeCallable CloudFrontClient::ListConflictingAliases2020_05_31Callable(const ListConflictingAliases2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListConflictingAliases2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListConflictingAliases2020_05_31Async(const ListConflictingAliases2020_05_31Request& request, const ListConflictingAliases2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListConflictingAliases2020_05_31, request, handler, context, m_executor.get());
}
ListDistributions2020_05_31Outcome CloudFrontClient::ListDistributions2020_05_31(const ListDistributions2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  return ListDistributions2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributions2020_05_31OutcomeCallable CloudFrontClient::ListDistributions2020_05_31Callable(const ListDistributions2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributions2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributions2020_05_31Async(const ListDistributions2020_05_31Request& request, const ListDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributions2020_05_31, request, handler, context, m_executor.get());
}
ListDistributionsByCachePolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31(const ListDistributionsByCachePolicyId2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByCachePolicyId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CachePolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByCachePolicyId2020_05_31", "Required field: CachePolicyId, is not set");
    return ListDistributionsByCachePolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CachePolicyId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByCachePolicyId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByCachePolicyId/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCachePolicyId());
  return ListDistributionsByCachePolicyId2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByCachePolicyId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31Callable(const ListDistributionsByCachePolicyId2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributionsByCachePolicyId2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributionsByCachePolicyId2020_05_31Async(const ListDistributionsByCachePolicyId2020_05_31Request& request, const ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributionsByCachePolicyId2020_05_31, request, handler, context, m_executor.get());
}
ListDistributionsByKeyGroup2020_05_31Outcome CloudFrontClient::ListDistributionsByKeyGroup2020_05_31(const ListDistributionsByKeyGroup2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.KeyGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByKeyGroup2020_05_31", "Required field: KeyGroupId, is not set");
    return ListDistributionsByKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByKeyGroupId/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKeyGroupId());
  return ListDistributionsByKeyGroup2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByKeyGroup2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByKeyGroup2020_05_31Callable(const ListDistributionsByKeyGroup2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributionsByKeyGroup2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributionsByKeyGroup2020_05_31Async(const ListDistributionsByKeyGroup2020_05_31Request& request, const ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributionsByKeyGroup2020_05_31, request, handler, context, m_executor.get());
}
ListDistributionsByOriginRequestPolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByOriginRequestPolicyId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.OriginRequestPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByOriginRequestPolicyId2020_05_31", "Required field: OriginRequestPolicyId, is not set");
    return ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OriginRequestPolicyId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByOriginRequestPolicyId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByOriginRequestPolicyId/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOriginRequestPolicyId());
  return ListDistributionsByOriginRequestPolicyId2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByOriginRequestPolicyId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31Callable(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributionsByOriginRequestPolicyId2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributionsByOriginRequestPolicyId2020_05_31Async(const ListDistributionsByOriginRequestPolicyId2020_05_31Request& request, const ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributionsByOriginRequestPolicyId2020_05_31, request, handler, context, m_executor.get());
}
ListDistributionsByRealtimeLogConfig2020_05_31Outcome CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByRealtimeLogConfig/");
  return ListDistributionsByRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListDistributionsByRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31Callable(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributionsByRealtimeLogConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31Async(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request, const ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributionsByRealtimeLogConfig2020_05_31, request, handler, context, m_executor.get());
}
ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByResponseHeadersPolicyId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResponseHeadersPolicyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByResponseHeadersPolicyId2020_05_31", "Required field: ResponseHeadersPolicyId, is not set");
    return ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseHeadersPolicyId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByResponseHeadersPolicyId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByResponseHeadersPolicyId/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResponseHeadersPolicyId());
  return ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByResponseHeadersPolicyId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31Callable(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributionsByResponseHeadersPolicyId2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributionsByResponseHeadersPolicyId2020_05_31Async(const ListDistributionsByResponseHeadersPolicyId2020_05_31Request& request, const ListDistributionsByResponseHeadersPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributionsByResponseHeadersPolicyId2020_05_31, request, handler, context, m_executor.get());
}
ListDistributionsByWebACLId2020_05_31Outcome CloudFrontClient::ListDistributionsByWebACLId2020_05_31(const ListDistributionsByWebACLId2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByWebACLId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.WebACLIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDistributionsByWebACLId2020_05_31", "Required field: WebACLId, is not set");
    return ListDistributionsByWebACLId2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WebACLId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByWebACLId2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByWebACLId/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebACLId());
  return ListDistributionsByWebACLId2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributionsByWebACLId2020_05_31OutcomeCallable CloudFrontClient::ListDistributionsByWebACLId2020_05_31Callable(const ListDistributionsByWebACLId2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDistributionsByWebACLId2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListDistributionsByWebACLId2020_05_31Async(const ListDistributionsByWebACLId2020_05_31Request& request, const ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDistributionsByWebACLId2020_05_31, request, handler, context, m_executor.get());
}
ListFieldLevelEncryptionConfigs2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31(const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFieldLevelEncryptionConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFieldLevelEncryptionConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  return ListFieldLevelEncryptionConfigs2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListFieldLevelEncryptionConfigs2020_05_31OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31Callable(const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListFieldLevelEncryptionConfigs2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31Async(const ListFieldLevelEncryptionConfigs2020_05_31Request& request, const ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListFieldLevelEncryptionConfigs2020_05_31, request, handler, context, m_executor.get());
}
ListFieldLevelEncryptionProfiles2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31(const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFieldLevelEncryptionProfiles2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFieldLevelEncryptionProfiles2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  return ListFieldLevelEncryptionProfiles2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListFieldLevelEncryptionProfiles2020_05_31OutcomeCallable CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31Callable(const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListFieldLevelEncryptionProfiles2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31Async(const ListFieldLevelEncryptionProfiles2020_05_31Request& request, const ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListFieldLevelEncryptionProfiles2020_05_31, request, handler, context, m_executor.get());
}
ListFunctions2020_05_31Outcome CloudFrontClient::ListFunctions2020_05_31(const ListFunctions2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFunctions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFunctions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  return ListFunctions2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListFunctions2020_05_31OutcomeCallable CloudFrontClient::ListFunctions2020_05_31Callable(const ListFunctions2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListFunctions2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListFunctions2020_05_31Async(const ListFunctions2020_05_31Request& request, const ListFunctions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListFunctions2020_05_31, request, handler, context, m_executor.get());
}
ListInvalidations2020_05_31Outcome CloudFrontClient::ListInvalidations2020_05_31(const ListInvalidations2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvalidations2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListInvalidations2020_05_31", "Required field: DistributionId, is not set");
    return ListInvalidations2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DistributionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInvalidations2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invalidation");
  return ListInvalidations2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListInvalidations2020_05_31OutcomeCallable CloudFrontClient::ListInvalidations2020_05_31Callable(const ListInvalidations2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListInvalidations2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListInvalidations2020_05_31Async(const ListInvalidations2020_05_31Request& request, const ListInvalidations2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListInvalidations2020_05_31, request, handler, context, m_executor.get());
}
ListKeyGroups2020_05_31Outcome CloudFrontClient::ListKeyGroups2020_05_31(const ListKeyGroups2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKeyGroups2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKeyGroups2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  return ListKeyGroups2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListKeyGroups2020_05_31OutcomeCallable CloudFrontClient::ListKeyGroups2020_05_31Callable(const ListKeyGroups2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListKeyGroups2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListKeyGroups2020_05_31Async(const ListKeyGroups2020_05_31Request& request, const ListKeyGroups2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListKeyGroups2020_05_31, request, handler, context, m_executor.get());
}
ListOriginAccessControls2020_05_31Outcome CloudFrontClient::ListOriginAccessControls2020_05_31(const ListOriginAccessControls2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOriginAccessControls2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginAccessControls2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  return ListOriginAccessControls2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListOriginAccessControls2020_05_31OutcomeCallable CloudFrontClient::ListOriginAccessControls2020_05_31Callable(const ListOriginAccessControls2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListOriginAccessControls2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListOriginAccessControls2020_05_31Async(const ListOriginAccessControls2020_05_31Request& request, const ListOriginAccessControls2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListOriginAccessControls2020_05_31, request, handler, context, m_executor.get());
}
ListOriginRequestPolicies2020_05_31Outcome CloudFrontClient::ListOriginRequestPolicies2020_05_31(const ListOriginRequestPolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOriginRequestPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginRequestPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  return ListOriginRequestPolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListOriginRequestPolicies2020_05_31OutcomeCallable CloudFrontClient::ListOriginRequestPolicies2020_05_31Callable(const ListOriginRequestPolicies2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListOriginRequestPolicies2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListOriginRequestPolicies2020_05_31Async(const ListOriginRequestPolicies2020_05_31Request& request, const ListOriginRequestPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListOriginRequestPolicies2020_05_31, request, handler, context, m_executor.get());
}
ListPublicKeys2020_05_31Outcome CloudFrontClient::ListPublicKeys2020_05_31(const ListPublicKeys2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPublicKeys2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPublicKeys2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  return ListPublicKeys2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListPublicKeys2020_05_31OutcomeCallable CloudFrontClient::ListPublicKeys2020_05_31Callable(const ListPublicKeys2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListPublicKeys2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListPublicKeys2020_05_31Async(const ListPublicKeys2020_05_31Request& request, const ListPublicKeys2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListPublicKeys2020_05_31, request, handler, context, m_executor.get());
}
ListRealtimeLogConfigs2020_05_31Outcome CloudFrontClient::ListRealtimeLogConfigs2020_05_31(const ListRealtimeLogConfigs2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRealtimeLogConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRealtimeLogConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  return ListRealtimeLogConfigs2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListRealtimeLogConfigs2020_05_31OutcomeCallable CloudFrontClient::ListRealtimeLogConfigs2020_05_31Callable(const ListRealtimeLogConfigs2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListRealtimeLogConfigs2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListRealtimeLogConfigs2020_05_31Async(const ListRealtimeLogConfigs2020_05_31Request& request, const ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListRealtimeLogConfigs2020_05_31, request, handler, context, m_executor.get());
}
ListResponseHeadersPolicies2020_05_31Outcome CloudFrontClient::ListResponseHeadersPolicies2020_05_31(const ListResponseHeadersPolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResponseHeadersPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResponseHeadersPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  return ListResponseHeadersPolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListResponseHeadersPolicies2020_05_31OutcomeCallable CloudFrontClient::ListResponseHeadersPolicies2020_05_31Callable(const ListResponseHeadersPolicies2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListResponseHeadersPolicies2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListResponseHeadersPolicies2020_05_31Async(const ListResponseHeadersPolicies2020_05_31Request& request, const ListResponseHeadersPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListResponseHeadersPolicies2020_05_31, request, handler, context, m_executor.get());
}
ListStreamingDistributions2020_05_31Outcome CloudFrontClient::ListStreamingDistributions2020_05_31(const ListStreamingDistributions2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamingDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamingDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  return ListStreamingDistributions2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListStreamingDistributions2020_05_31OutcomeCallable CloudFrontClient::ListStreamingDistributions2020_05_31Callable(const ListStreamingDistributions2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListStreamingDistributions2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListStreamingDistributions2020_05_31Async(const ListStreamingDistributions2020_05_31Request& request, const ListStreamingDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListStreamingDistributions2020_05_31, request, handler, context, m_executor.get());
}
ListTagsForResource2020_05_31Outcome CloudFrontClient::ListTagsForResource2020_05_31(const ListTagsForResource2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource2020_05_31", "Required field: Resource, is not set");
    return ListTagsForResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/tagging");
  return ListTagsForResource2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListTagsForResource2020_05_31OutcomeCallable CloudFrontClient::ListTagsForResource2020_05_31Callable(const ListTagsForResource2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource2020_05_31, request, m_executor.get());
}

void CloudFrontClient::ListTagsForResource2020_05_31Async(const ListTagsForResource2020_05_31Request& request, const ListTagsForResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource2020_05_31, request, handler, context, m_executor.get());
}
PublishFunction2020_05_31Outcome CloudFrontClient::PublishFunction2020_05_31(const PublishFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PublishFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PublishFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publish");
  return PublishFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

PublishFunction2020_05_31OutcomeCallable CloudFrontClient::PublishFunction2020_05_31Callable(const PublishFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(PublishFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::PublishFunction2020_05_31Async(const PublishFunction2020_05_31Request& request, const PublishFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(PublishFunction2020_05_31, request, handler, context, m_executor.get());
}
TagResource2020_05_31Outcome CloudFrontClient::TagResource2020_05_31(const TagResource2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource2020_05_31", "Required field: Resource, is not set");
    return TagResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/tagging");
  ss.str("?Operation=Tag");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return TagResource2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TagResource2020_05_31OutcomeCallable CloudFrontClient::TagResource2020_05_31Callable(const TagResource2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource2020_05_31, request, m_executor.get());
}

void CloudFrontClient::TagResource2020_05_31Async(const TagResource2020_05_31Request& request, const TagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource2020_05_31, request, handler, context, m_executor.get());
}
TestFunction2020_05_31Outcome CloudFrontClient::TestFunction2020_05_31(const TestFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/test");
  return TestFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

TestFunction2020_05_31OutcomeCallable CloudFrontClient::TestFunction2020_05_31Callable(const TestFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TestFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::TestFunction2020_05_31Async(const TestFunction2020_05_31Request& request, const TestFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TestFunction2020_05_31, request, handler, context, m_executor.get());
}
UntagResource2020_05_31Outcome CloudFrontClient::UntagResource2020_05_31(const UntagResource2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource2020_05_31", "Required field: Resource, is not set");
    return UntagResource2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  Aws::StringStream ss;
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/tagging");
  ss.str("?Operation=Untag");
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  return UntagResource2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

UntagResource2020_05_31OutcomeCallable CloudFrontClient::UntagResource2020_05_31Callable(const UntagResource2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UntagResource2020_05_31Async(const UntagResource2020_05_31Request& request, const UntagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource2020_05_31, request, handler, context, m_executor.get());
}
UpdateCachePolicy2020_05_31Outcome CloudFrontClient::UpdateCachePolicy2020_05_31(const UpdateCachePolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCachePolicy2020_05_31", "Required field: Id, is not set");
    return UpdateCachePolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateCachePolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateCachePolicy2020_05_31OutcomeCallable CloudFrontClient::UpdateCachePolicy2020_05_31Callable(const UpdateCachePolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateCachePolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateCachePolicy2020_05_31Async(const UpdateCachePolicy2020_05_31Request& request, const UpdateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateCachePolicy2020_05_31, request, handler, context, m_executor.get());
}
UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCloudFrontOriginAccessIdentity2020_05_31", "Required field: Id, is not set");
    return UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31Callable(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateCloudFrontOriginAccessIdentity2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateCloudFrontOriginAccessIdentity2020_05_31Async(const UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request, const UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateCloudFrontOriginAccessIdentity2020_05_31, request, handler, context, m_executor.get());
}
UpdateDistribution2020_05_31Outcome CloudFrontClient::UpdateDistribution2020_05_31(const UpdateDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDistribution2020_05_31", "Required field: Id, is not set");
    return UpdateDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateDistribution2020_05_31OutcomeCallable CloudFrontClient::UpdateDistribution2020_05_31Callable(const UpdateDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateDistribution2020_05_31Async(const UpdateDistribution2020_05_31Request& request, const UpdateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateDistribution2020_05_31, request, handler, context, m_executor.get());
}
UpdateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionConfig2020_05_31", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateFieldLevelEncryptionConfig2020_05_31OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31Callable(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateFieldLevelEncryptionConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateFieldLevelEncryptionConfig2020_05_31Async(const UpdateFieldLevelEncryptionConfig2020_05_31Request& request, const UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateFieldLevelEncryptionConfig2020_05_31, request, handler, context, m_executor.get());
}
UpdateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFieldLevelEncryptionProfile2020_05_31", "Required field: Id, is not set");
    return UpdateFieldLevelEncryptionProfile2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateFieldLevelEncryptionProfile2020_05_31OutcomeCallable CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31Callable(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateFieldLevelEncryptionProfile2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateFieldLevelEncryptionProfile2020_05_31Async(const UpdateFieldLevelEncryptionProfile2020_05_31Request& request, const UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateFieldLevelEncryptionProfile2020_05_31, request, handler, context, m_executor.get());
}
UpdateFunction2020_05_31Outcome CloudFrontClient::UpdateFunction2020_05_31(const UpdateFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return UpdateFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateFunction2020_05_31OutcomeCallable CloudFrontClient::UpdateFunction2020_05_31Callable(const UpdateFunction2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateFunction2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateFunction2020_05_31Async(const UpdateFunction2020_05_31Request& request, const UpdateFunction2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateFunction2020_05_31, request, handler, context, m_executor.get());
}
UpdateKeyGroup2020_05_31Outcome CloudFrontClient::UpdateKeyGroup2020_05_31(const UpdateKeyGroup2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKeyGroup2020_05_31", "Required field: Id, is not set");
    return UpdateKeyGroup2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateKeyGroup2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateKeyGroup2020_05_31OutcomeCallable CloudFrontClient::UpdateKeyGroup2020_05_31Callable(const UpdateKeyGroup2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateKeyGroup2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateKeyGroup2020_05_31Async(const UpdateKeyGroup2020_05_31Request& request, const UpdateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateKeyGroup2020_05_31, request, handler, context, m_executor.get());
}
UpdateOriginAccessControl2020_05_31Outcome CloudFrontClient::UpdateOriginAccessControl2020_05_31(const UpdateOriginAccessControl2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginAccessControl2020_05_31", "Required field: Id, is not set");
    return UpdateOriginAccessControl2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateOriginAccessControl2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateOriginAccessControl2020_05_31OutcomeCallable CloudFrontClient::UpdateOriginAccessControl2020_05_31Callable(const UpdateOriginAccessControl2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateOriginAccessControl2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateOriginAccessControl2020_05_31Async(const UpdateOriginAccessControl2020_05_31Request& request, const UpdateOriginAccessControl2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateOriginAccessControl2020_05_31, request, handler, context, m_executor.get());
}
UpdateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::UpdateOriginRequestPolicy2020_05_31(const UpdateOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOriginRequestPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateOriginRequestPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateOriginRequestPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateOriginRequestPolicy2020_05_31OutcomeCallable CloudFrontClient::UpdateOriginRequestPolicy2020_05_31Callable(const UpdateOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateOriginRequestPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateOriginRequestPolicy2020_05_31Async(const UpdateOriginRequestPolicy2020_05_31Request& request, const UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateOriginRequestPolicy2020_05_31, request, handler, context, m_executor.get());
}
UpdatePublicKey2020_05_31Outcome CloudFrontClient::UpdatePublicKey2020_05_31(const UpdatePublicKey2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicKey2020_05_31", "Required field: Id, is not set");
    return UpdatePublicKey2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdatePublicKey2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdatePublicKey2020_05_31OutcomeCallable CloudFrontClient::UpdatePublicKey2020_05_31Callable(const UpdatePublicKey2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdatePublicKey2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdatePublicKey2020_05_31Async(const UpdatePublicKey2020_05_31Request& request, const UpdatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdatePublicKey2020_05_31, request, handler, context, m_executor.get());
}
UpdateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::UpdateRealtimeLogConfig2020_05_31(const UpdateRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config/");
  return UpdateRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateRealtimeLogConfig2020_05_31OutcomeCallable CloudFrontClient::UpdateRealtimeLogConfig2020_05_31Callable(const UpdateRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateRealtimeLogConfig2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateRealtimeLogConfig2020_05_31Async(const UpdateRealtimeLogConfig2020_05_31Request& request, const UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateRealtimeLogConfig2020_05_31, request, handler, context, m_executor.get());
}
UpdateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31(const UpdateResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResponseHeadersPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateResponseHeadersPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateResponseHeadersPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateResponseHeadersPolicy2020_05_31OutcomeCallable CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31Callable(const UpdateResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateResponseHeadersPolicy2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateResponseHeadersPolicy2020_05_31Async(const UpdateResponseHeadersPolicy2020_05_31Request& request, const UpdateResponseHeadersPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateResponseHeadersPolicy2020_05_31, request, handler, context, m_executor.get());
}
UpdateStreamingDistribution2020_05_31Outcome CloudFrontClient::UpdateStreamingDistribution2020_05_31(const UpdateStreamingDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStreamingDistribution2020_05_31", "Required field: Id, is not set");
    return UpdateStreamingDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return UpdateStreamingDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
}

UpdateStreamingDistribution2020_05_31OutcomeCallable CloudFrontClient::UpdateStreamingDistribution2020_05_31Callable(const UpdateStreamingDistribution2020_05_31Request& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateStreamingDistribution2020_05_31, request, m_executor.get());
}

void CloudFrontClient::UpdateStreamingDistribution2020_05_31Async(const UpdateStreamingDistribution2020_05_31Request& request, const UpdateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateStreamingDistribution2020_05_31, request, handler, context, m_executor.get());
}
