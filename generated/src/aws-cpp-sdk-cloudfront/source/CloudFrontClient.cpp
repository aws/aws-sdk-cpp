/**
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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront/CloudFrontErrorMarshaller.h>
#include <aws/cloudfront/CloudFrontEndpointProvider.h>
#include <aws/cloudfront/model/AssociateAlias2020_05_31Request.h>
#include <aws/cloudfront/model/CopyDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/CreateCachePolicy2020_05_31Request.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2020_05_31Request.h>
#include <aws/cloudfront/model/CreateContinuousDeploymentPolicy2020_05_31Request.h>
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
#include <aws/cloudfront/model/DeleteContinuousDeploymentPolicy2020_05_31Request.h>
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
#include <aws/cloudfront/model/GetContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/GetContinuousDeploymentPolicyConfig2020_05_31Request.h>
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
#include <aws/cloudfront/model/ListContinuousDeploymentPolicies2020_05_31Request.h>
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
#include <aws/cloudfront/model/UpdateContinuousDeploymentPolicy2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDistribution2020_05_31Request.h>
#include <aws/cloudfront/model/UpdateDistributionWithStagingConfig2020_05_31Request.h>
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

CopyDistribution2020_05_31Outcome CloudFrontClient::CopyDistribution2020_05_31(const CopyDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopyDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrimaryDistributionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CopyDistribution2020_05_31", "Required field: PrimaryDistributionId, is not set");
    return CopyDistribution2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrimaryDistributionId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopyDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrimaryDistributionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/copy");
  return CopyDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCachePolicy2020_05_31Outcome CloudFrontClient::CreateCachePolicy2020_05_31(const CreateCachePolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCachePolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  return CreateCachePolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CloudFrontClient::CreateCloudFrontOriginAccessIdentity2020_05_31(const CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCloudFrontOriginAccessIdentity2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  return CreateCloudFrontOriginAccessIdentity2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::CreateContinuousDeploymentPolicy2020_05_31(const CreateContinuousDeploymentPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy");
  return CreateContinuousDeploymentPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateDistribution2020_05_31Outcome CloudFrontClient::CreateDistribution2020_05_31(const CreateDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  return CreateDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

CreateFieldLevelEncryptionConfig2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionConfig2020_05_31(const CreateFieldLevelEncryptionConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFieldLevelEncryptionConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  return CreateFieldLevelEncryptionConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFieldLevelEncryptionProfile2020_05_31Outcome CloudFrontClient::CreateFieldLevelEncryptionProfile2020_05_31(const CreateFieldLevelEncryptionProfile2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFieldLevelEncryptionProfile2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  return CreateFieldLevelEncryptionProfile2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateFunction2020_05_31Outcome CloudFrontClient::CreateFunction2020_05_31(const CreateFunction2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFunction2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  return CreateFunction2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

CreateKeyGroup2020_05_31Outcome CloudFrontClient::CreateKeyGroup2020_05_31(const CreateKeyGroup2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeyGroup2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  return CreateKeyGroup2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

CreateOriginAccessControl2020_05_31Outcome CloudFrontClient::CreateOriginAccessControl2020_05_31(const CreateOriginAccessControl2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginAccessControl2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  return CreateOriginAccessControl2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateOriginRequestPolicy2020_05_31Outcome CloudFrontClient::CreateOriginRequestPolicy2020_05_31(const CreateOriginRequestPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateOriginRequestPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  return CreateOriginRequestPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreatePublicKey2020_05_31Outcome CloudFrontClient::CreatePublicKey2020_05_31(const CreatePublicKey2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePublicKey2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  return CreatePublicKey2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::CreateRealtimeLogConfig2020_05_31(const CreateRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  return CreateRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateResponseHeadersPolicy2020_05_31Outcome CloudFrontClient::CreateResponseHeadersPolicy2020_05_31(const CreateResponseHeadersPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateResponseHeadersPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  return CreateResponseHeadersPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

CreateStreamingDistribution2020_05_31Outcome CloudFrontClient::CreateStreamingDistribution2020_05_31(const CreateStreamingDistribution2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingDistribution2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  return CreateStreamingDistribution2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

DeleteContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::DeleteContinuousDeploymentPolicy2020_05_31(const DeleteContinuousDeploymentPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteContinuousDeploymentPolicy2020_05_31", "Required field: Id, is not set");
    return DeleteContinuousDeploymentPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return DeleteContinuousDeploymentPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE));
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

DeleteRealtimeLogConfig2020_05_31Outcome CloudFrontClient::DeleteRealtimeLogConfig2020_05_31(const DeleteRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/delete-realtime-log-config/");
  return DeleteRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

GetContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::GetContinuousDeploymentPolicy2020_05_31(const GetContinuousDeploymentPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContinuousDeploymentPolicy2020_05_31", "Required field: Id, is not set");
    return GetContinuousDeploymentPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return GetContinuousDeploymentPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetContinuousDeploymentPolicyConfig2020_05_31Outcome CloudFrontClient::GetContinuousDeploymentPolicyConfig2020_05_31(const GetContinuousDeploymentPolicyConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContinuousDeploymentPolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetContinuousDeploymentPolicyConfig2020_05_31", "Required field: Id, is not set");
    return GetContinuousDeploymentPolicyConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContinuousDeploymentPolicyConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return GetContinuousDeploymentPolicyConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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

GetRealtimeLogConfig2020_05_31Outcome CloudFrontClient::GetRealtimeLogConfig2020_05_31(const GetRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/get-realtime-log-config/");
  return GetRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

ListCachePolicies2020_05_31Outcome CloudFrontClient::ListCachePolicies2020_05_31(const ListCachePolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCachePolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCachePolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/cache-policy");
  return ListCachePolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListCloudFrontOriginAccessIdentities2020_05_31Outcome CloudFrontClient::ListCloudFrontOriginAccessIdentities2020_05_31(const ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCloudFrontOriginAccessIdentities2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCloudFrontOriginAccessIdentities2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-identity/cloudfront");
  return ListCloudFrontOriginAccessIdentities2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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

ListContinuousDeploymentPolicies2020_05_31Outcome CloudFrontClient::ListContinuousDeploymentPolicies2020_05_31(const ListContinuousDeploymentPolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContinuousDeploymentPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContinuousDeploymentPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy");
  return ListContinuousDeploymentPolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListDistributions2020_05_31Outcome CloudFrontClient::ListDistributions2020_05_31(const ListDistributions2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution");
  return ListDistributions2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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

ListDistributionsByRealtimeLogConfig2020_05_31Outcome CloudFrontClient::ListDistributionsByRealtimeLogConfig2020_05_31(const ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDistributionsByRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDistributionsByRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distributionsByRealtimeLogConfig/");
  return ListDistributionsByRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
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

ListFieldLevelEncryptionConfigs2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionConfigs2020_05_31(const ListFieldLevelEncryptionConfigs2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFieldLevelEncryptionConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFieldLevelEncryptionConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption");
  return ListFieldLevelEncryptionConfigs2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListFieldLevelEncryptionProfiles2020_05_31Outcome CloudFrontClient::ListFieldLevelEncryptionProfiles2020_05_31(const ListFieldLevelEncryptionProfiles2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFieldLevelEncryptionProfiles2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFieldLevelEncryptionProfiles2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/field-level-encryption-profile");
  return ListFieldLevelEncryptionProfiles2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListFunctions2020_05_31Outcome CloudFrontClient::ListFunctions2020_05_31(const ListFunctions2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFunctions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFunctions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/function");
  return ListFunctions2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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

ListKeyGroups2020_05_31Outcome CloudFrontClient::ListKeyGroups2020_05_31(const ListKeyGroups2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListKeyGroups2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListKeyGroups2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/key-group");
  return ListKeyGroups2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListOriginAccessControls2020_05_31Outcome CloudFrontClient::ListOriginAccessControls2020_05_31(const ListOriginAccessControls2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOriginAccessControls2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginAccessControls2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-access-control");
  return ListOriginAccessControls2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListOriginRequestPolicies2020_05_31Outcome CloudFrontClient::ListOriginRequestPolicies2020_05_31(const ListOriginRequestPolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOriginRequestPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOriginRequestPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/origin-request-policy");
  return ListOriginRequestPolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListPublicKeys2020_05_31Outcome CloudFrontClient::ListPublicKeys2020_05_31(const ListPublicKeys2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPublicKeys2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPublicKeys2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/public-key");
  return ListPublicKeys2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListRealtimeLogConfigs2020_05_31Outcome CloudFrontClient::ListRealtimeLogConfigs2020_05_31(const ListRealtimeLogConfigs2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRealtimeLogConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRealtimeLogConfigs2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config");
  return ListRealtimeLogConfigs2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListResponseHeadersPolicies2020_05_31Outcome CloudFrontClient::ListResponseHeadersPolicies2020_05_31(const ListResponseHeadersPolicies2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResponseHeadersPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResponseHeadersPolicies2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/response-headers-policy");
  return ListResponseHeadersPolicies2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

ListStreamingDistributions2020_05_31Outcome CloudFrontClient::ListStreamingDistributions2020_05_31(const ListStreamingDistributions2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamingDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamingDistributions2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/streaming-distribution");
  return ListStreamingDistributions2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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

UpdateContinuousDeploymentPolicy2020_05_31Outcome CloudFrontClient::UpdateContinuousDeploymentPolicy2020_05_31(const UpdateContinuousDeploymentPolicy2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateContinuousDeploymentPolicy2020_05_31", "Required field: Id, is not set");
    return UpdateContinuousDeploymentPolicy2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContinuousDeploymentPolicy2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/continuous-deployment-policy/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  return UpdateContinuousDeploymentPolicy2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
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

UpdateDistributionWithStagingConfig2020_05_31Outcome CloudFrontClient::UpdateDistributionWithStagingConfig2020_05_31(const UpdateDistributionWithStagingConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistributionWithStagingConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDistributionWithStagingConfig2020_05_31", "Required field: Id, is not set");
    return UpdateDistributionWithStagingConfig2020_05_31Outcome(Aws::Client::AWSError<CloudFrontErrors>(CloudFrontErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistributionWithStagingConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/distribution/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/promote-staging-config");
  return UpdateDistributionWithStagingConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
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

UpdateRealtimeLogConfig2020_05_31Outcome CloudFrontClient::UpdateRealtimeLogConfig2020_05_31(const UpdateRealtimeLogConfig2020_05_31Request& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRealtimeLogConfig2020_05_31, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-05-31/realtime-log-config/");
  return UpdateRealtimeLogConfig2020_05_31Outcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT));
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

