/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudfront/CloudFrontErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudfront/CloudFrontEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudFrontClient header */
#include <aws/cloudfront/model/CopyDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/CreateCachePolicy2020_05_31Result.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2020_05_31Result.h>
#include <aws/cloudfront/model/CreateContinuousDeploymentPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/CreateDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2020_05_31Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2020_05_31Result.h>
#include <aws/cloudfront/model/CreateFunction2020_05_31Result.h>
#include <aws/cloudfront/model/CreateInvalidation2020_05_31Result.h>
#include <aws/cloudfront/model/CreateKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/CreateMonitoringSubscription2020_05_31Result.h>
#include <aws/cloudfront/model/CreateOriginAccessControl2020_05_31Result.h>
#include <aws/cloudfront/model/CreateOriginRequestPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/CreatePublicKey2020_05_31Result.h>
#include <aws/cloudfront/model/CreateRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/CreateResponseHeadersPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2020_05_31Result.h>
#include <aws/cloudfront/model/DeleteMonitoringSubscription2020_05_31Result.h>
#include <aws/cloudfront/model/DescribeFunction2020_05_31Result.h>
#include <aws/cloudfront/model/GetCachePolicy2020_05_31Result.h>
#include <aws/cloudfront/model/GetCachePolicyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2020_05_31Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetContinuousDeploymentPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/GetContinuousDeploymentPolicyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetFunction2020_05_31Result.h>
#include <aws/cloudfront/model/GetInvalidation2020_05_31Result.h>
#include <aws/cloudfront/model/GetKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/GetKeyGroupConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetMonitoringSubscription2020_05_31Result.h>
#include <aws/cloudfront/model/GetOriginAccessControl2020_05_31Result.h>
#include <aws/cloudfront/model/GetOriginAccessControlConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetOriginRequestPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/GetOriginRequestPolicyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetPublicKey2020_05_31Result.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetResponseHeadersPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/GetResponseHeadersPolicyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/ListCachePolicies2020_05_31Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2020_05_31Result.h>
#include <aws/cloudfront/model/ListConflictingAliases2020_05_31Result.h>
#include <aws/cloudfront/model/ListContinuousDeploymentPolicies2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributions2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByCachePolicyId2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByOriginRequestPolicyId2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByResponseHeadersPolicyId2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2020_05_31Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2020_05_31Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2020_05_31Result.h>
#include <aws/cloudfront/model/ListFunctions2020_05_31Result.h>
#include <aws/cloudfront/model/ListInvalidations2020_05_31Result.h>
#include <aws/cloudfront/model/ListKeyGroups2020_05_31Result.h>
#include <aws/cloudfront/model/ListOriginAccessControls2020_05_31Result.h>
#include <aws/cloudfront/model/ListOriginRequestPolicies2020_05_31Result.h>
#include <aws/cloudfront/model/ListPublicKeys2020_05_31Result.h>
#include <aws/cloudfront/model/ListRealtimeLogConfigs2020_05_31Result.h>
#include <aws/cloudfront/model/ListResponseHeadersPolicies2020_05_31Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2020_05_31Result.h>
#include <aws/cloudfront/model/ListTagsForResource2020_05_31Result.h>
#include <aws/cloudfront/model/PublishFunction2020_05_31Result.h>
#include <aws/cloudfront/model/TestFunction2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateCachePolicy2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateContinuousDeploymentPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateDistributionWithStagingConfig2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateFunction2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateOriginAccessControl2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateOriginRequestPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/UpdatePublicKey2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateResponseHeadersPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2020_05_31Result.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in CloudFrontClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace CloudFront
  {
    using CloudFrontClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudFrontEndpointProviderBase = Aws::CloudFront::Endpoint::CloudFrontEndpointProviderBase;
    using CloudFrontEndpointProvider = Aws::CloudFront::Endpoint::CloudFrontEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudFrontClient header */
      class AssociateAlias2020_05_31Request;
      class CopyDistribution2020_05_31Request;
      class CreateCachePolicy2020_05_31Request;
      class CreateCloudFrontOriginAccessIdentity2020_05_31Request;
      class CreateContinuousDeploymentPolicy2020_05_31Request;
      class CreateDistribution2020_05_31Request;
      class CreateDistributionWithTags2020_05_31Request;
      class CreateFieldLevelEncryptionConfig2020_05_31Request;
      class CreateFieldLevelEncryptionProfile2020_05_31Request;
      class CreateFunction2020_05_31Request;
      class CreateInvalidation2020_05_31Request;
      class CreateKeyGroup2020_05_31Request;
      class CreateMonitoringSubscription2020_05_31Request;
      class CreateOriginAccessControl2020_05_31Request;
      class CreateOriginRequestPolicy2020_05_31Request;
      class CreatePublicKey2020_05_31Request;
      class CreateRealtimeLogConfig2020_05_31Request;
      class CreateResponseHeadersPolicy2020_05_31Request;
      class CreateStreamingDistribution2020_05_31Request;
      class CreateStreamingDistributionWithTags2020_05_31Request;
      class DeleteCachePolicy2020_05_31Request;
      class DeleteCloudFrontOriginAccessIdentity2020_05_31Request;
      class DeleteContinuousDeploymentPolicy2020_05_31Request;
      class DeleteDistribution2020_05_31Request;
      class DeleteFieldLevelEncryptionConfig2020_05_31Request;
      class DeleteFieldLevelEncryptionProfile2020_05_31Request;
      class DeleteFunction2020_05_31Request;
      class DeleteKeyGroup2020_05_31Request;
      class DeleteMonitoringSubscription2020_05_31Request;
      class DeleteOriginAccessControl2020_05_31Request;
      class DeleteOriginRequestPolicy2020_05_31Request;
      class DeletePublicKey2020_05_31Request;
      class DeleteRealtimeLogConfig2020_05_31Request;
      class DeleteResponseHeadersPolicy2020_05_31Request;
      class DeleteStreamingDistribution2020_05_31Request;
      class DescribeFunction2020_05_31Request;
      class GetCachePolicy2020_05_31Request;
      class GetCachePolicyConfig2020_05_31Request;
      class GetCloudFrontOriginAccessIdentity2020_05_31Request;
      class GetCloudFrontOriginAccessIdentityConfig2020_05_31Request;
      class GetContinuousDeploymentPolicy2020_05_31Request;
      class GetContinuousDeploymentPolicyConfig2020_05_31Request;
      class GetDistribution2020_05_31Request;
      class GetDistributionConfig2020_05_31Request;
      class GetFieldLevelEncryption2020_05_31Request;
      class GetFieldLevelEncryptionConfig2020_05_31Request;
      class GetFieldLevelEncryptionProfile2020_05_31Request;
      class GetFieldLevelEncryptionProfileConfig2020_05_31Request;
      class GetFunction2020_05_31Request;
      class GetInvalidation2020_05_31Request;
      class GetKeyGroup2020_05_31Request;
      class GetKeyGroupConfig2020_05_31Request;
      class GetMonitoringSubscription2020_05_31Request;
      class GetOriginAccessControl2020_05_31Request;
      class GetOriginAccessControlConfig2020_05_31Request;
      class GetOriginRequestPolicy2020_05_31Request;
      class GetOriginRequestPolicyConfig2020_05_31Request;
      class GetPublicKey2020_05_31Request;
      class GetPublicKeyConfig2020_05_31Request;
      class GetRealtimeLogConfig2020_05_31Request;
      class GetResponseHeadersPolicy2020_05_31Request;
      class GetResponseHeadersPolicyConfig2020_05_31Request;
      class GetStreamingDistribution2020_05_31Request;
      class GetStreamingDistributionConfig2020_05_31Request;
      class ListCachePolicies2020_05_31Request;
      class ListCloudFrontOriginAccessIdentities2020_05_31Request;
      class ListConflictingAliases2020_05_31Request;
      class ListContinuousDeploymentPolicies2020_05_31Request;
      class ListDistributions2020_05_31Request;
      class ListDistributionsByCachePolicyId2020_05_31Request;
      class ListDistributionsByKeyGroup2020_05_31Request;
      class ListDistributionsByOriginRequestPolicyId2020_05_31Request;
      class ListDistributionsByRealtimeLogConfig2020_05_31Request;
      class ListDistributionsByResponseHeadersPolicyId2020_05_31Request;
      class ListDistributionsByWebACLId2020_05_31Request;
      class ListFieldLevelEncryptionConfigs2020_05_31Request;
      class ListFieldLevelEncryptionProfiles2020_05_31Request;
      class ListFunctions2020_05_31Request;
      class ListInvalidations2020_05_31Request;
      class ListKeyGroups2020_05_31Request;
      class ListOriginAccessControls2020_05_31Request;
      class ListOriginRequestPolicies2020_05_31Request;
      class ListPublicKeys2020_05_31Request;
      class ListRealtimeLogConfigs2020_05_31Request;
      class ListResponseHeadersPolicies2020_05_31Request;
      class ListStreamingDistributions2020_05_31Request;
      class ListTagsForResource2020_05_31Request;
      class PublishFunction2020_05_31Request;
      class TagResource2020_05_31Request;
      class TestFunction2020_05_31Request;
      class UntagResource2020_05_31Request;
      class UpdateCachePolicy2020_05_31Request;
      class UpdateCloudFrontOriginAccessIdentity2020_05_31Request;
      class UpdateContinuousDeploymentPolicy2020_05_31Request;
      class UpdateDistribution2020_05_31Request;
      class UpdateDistributionWithStagingConfig2020_05_31Request;
      class UpdateFieldLevelEncryptionConfig2020_05_31Request;
      class UpdateFieldLevelEncryptionProfile2020_05_31Request;
      class UpdateFunction2020_05_31Request;
      class UpdateKeyGroup2020_05_31Request;
      class UpdateOriginAccessControl2020_05_31Request;
      class UpdateOriginRequestPolicy2020_05_31Request;
      class UpdatePublicKey2020_05_31Request;
      class UpdateRealtimeLogConfig2020_05_31Request;
      class UpdateResponseHeadersPolicy2020_05_31Request;
      class UpdateStreamingDistribution2020_05_31Request;
      /* End of service model forward declarations required in CloudFrontClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> AssociateAlias2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CopyDistribution2020_05_31Result, CloudFrontError> CopyDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateCachePolicy2020_05_31Result, CloudFrontError> CreateCachePolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateCloudFrontOriginAccessIdentity2020_05_31Result, CloudFrontError> CreateCloudFrontOriginAccessIdentity2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateContinuousDeploymentPolicy2020_05_31Result, CloudFrontError> CreateContinuousDeploymentPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateDistribution2020_05_31Result, CloudFrontError> CreateDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateDistributionWithTags2020_05_31Result, CloudFrontError> CreateDistributionWithTags2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionConfig2020_05_31Result, CloudFrontError> CreateFieldLevelEncryptionConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionProfile2020_05_31Result, CloudFrontError> CreateFieldLevelEncryptionProfile2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateFunction2020_05_31Result, CloudFrontError> CreateFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateInvalidation2020_05_31Result, CloudFrontError> CreateInvalidation2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateKeyGroup2020_05_31Result, CloudFrontError> CreateKeyGroup2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateMonitoringSubscription2020_05_31Result, CloudFrontError> CreateMonitoringSubscription2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateOriginAccessControl2020_05_31Result, CloudFrontError> CreateOriginAccessControl2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateOriginRequestPolicy2020_05_31Result, CloudFrontError> CreateOriginRequestPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreatePublicKey2020_05_31Result, CloudFrontError> CreatePublicKey2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateRealtimeLogConfig2020_05_31Result, CloudFrontError> CreateRealtimeLogConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateResponseHeadersPolicy2020_05_31Result, CloudFrontError> CreateResponseHeadersPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateStreamingDistribution2020_05_31Result, CloudFrontError> CreateStreamingDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<CreateStreamingDistributionWithTags2020_05_31Result, CloudFrontError> CreateStreamingDistributionWithTags2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteCachePolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteContinuousDeploymentPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteFieldLevelEncryptionConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteFieldLevelEncryptionProfile2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteKeyGroup2020_05_31Outcome;
      typedef Aws::Utils::Outcome<DeleteMonitoringSubscription2020_05_31Result, CloudFrontError> DeleteMonitoringSubscription2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteOriginAccessControl2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteOriginRequestPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeletePublicKey2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteRealtimeLogConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteResponseHeadersPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteStreamingDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<DescribeFunction2020_05_31Result, CloudFrontError> DescribeFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetCachePolicy2020_05_31Result, CloudFrontError> GetCachePolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetCachePolicyConfig2020_05_31Result, CloudFrontError> GetCachePolicyConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentity2020_05_31Result, CloudFrontError> GetCloudFrontOriginAccessIdentity2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2020_05_31Result, CloudFrontError> GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetContinuousDeploymentPolicy2020_05_31Result, CloudFrontError> GetContinuousDeploymentPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetContinuousDeploymentPolicyConfig2020_05_31Result, CloudFrontError> GetContinuousDeploymentPolicyConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetDistribution2020_05_31Result, CloudFrontError> GetDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetDistributionConfig2020_05_31Result, CloudFrontError> GetDistributionConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetFieldLevelEncryption2020_05_31Result, CloudFrontError> GetFieldLevelEncryption2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetFieldLevelEncryptionConfig2020_05_31Result, CloudFrontError> GetFieldLevelEncryptionConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfile2020_05_31Result, CloudFrontError> GetFieldLevelEncryptionProfile2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfileConfig2020_05_31Result, CloudFrontError> GetFieldLevelEncryptionProfileConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetFunction2020_05_31Result, CloudFrontError> GetFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetInvalidation2020_05_31Result, CloudFrontError> GetInvalidation2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetKeyGroup2020_05_31Result, CloudFrontError> GetKeyGroup2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetKeyGroupConfig2020_05_31Result, CloudFrontError> GetKeyGroupConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetMonitoringSubscription2020_05_31Result, CloudFrontError> GetMonitoringSubscription2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetOriginAccessControl2020_05_31Result, CloudFrontError> GetOriginAccessControl2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetOriginAccessControlConfig2020_05_31Result, CloudFrontError> GetOriginAccessControlConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetOriginRequestPolicy2020_05_31Result, CloudFrontError> GetOriginRequestPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetOriginRequestPolicyConfig2020_05_31Result, CloudFrontError> GetOriginRequestPolicyConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetPublicKey2020_05_31Result, CloudFrontError> GetPublicKey2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetPublicKeyConfig2020_05_31Result, CloudFrontError> GetPublicKeyConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetRealtimeLogConfig2020_05_31Result, CloudFrontError> GetRealtimeLogConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetResponseHeadersPolicy2020_05_31Result, CloudFrontError> GetResponseHeadersPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetResponseHeadersPolicyConfig2020_05_31Result, CloudFrontError> GetResponseHeadersPolicyConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetStreamingDistribution2020_05_31Result, CloudFrontError> GetStreamingDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<GetStreamingDistributionConfig2020_05_31Result, CloudFrontError> GetStreamingDistributionConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListCachePolicies2020_05_31Result, CloudFrontError> ListCachePolicies2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListCloudFrontOriginAccessIdentities2020_05_31Result, CloudFrontError> ListCloudFrontOriginAccessIdentities2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListConflictingAliases2020_05_31Result, CloudFrontError> ListConflictingAliases2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListContinuousDeploymentPolicies2020_05_31Result, CloudFrontError> ListContinuousDeploymentPolicies2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributions2020_05_31Result, CloudFrontError> ListDistributions2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributionsByCachePolicyId2020_05_31Result, CloudFrontError> ListDistributionsByCachePolicyId2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributionsByKeyGroup2020_05_31Result, CloudFrontError> ListDistributionsByKeyGroup2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributionsByOriginRequestPolicyId2020_05_31Result, CloudFrontError> ListDistributionsByOriginRequestPolicyId2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributionsByRealtimeLogConfig2020_05_31Result, CloudFrontError> ListDistributionsByRealtimeLogConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributionsByResponseHeadersPolicyId2020_05_31Result, CloudFrontError> ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListDistributionsByWebACLId2020_05_31Result, CloudFrontError> ListDistributionsByWebACLId2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListFieldLevelEncryptionConfigs2020_05_31Result, CloudFrontError> ListFieldLevelEncryptionConfigs2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListFieldLevelEncryptionProfiles2020_05_31Result, CloudFrontError> ListFieldLevelEncryptionProfiles2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListFunctions2020_05_31Result, CloudFrontError> ListFunctions2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListInvalidations2020_05_31Result, CloudFrontError> ListInvalidations2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListKeyGroups2020_05_31Result, CloudFrontError> ListKeyGroups2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListOriginAccessControls2020_05_31Result, CloudFrontError> ListOriginAccessControls2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListOriginRequestPolicies2020_05_31Result, CloudFrontError> ListOriginRequestPolicies2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListPublicKeys2020_05_31Result, CloudFrontError> ListPublicKeys2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListRealtimeLogConfigs2020_05_31Result, CloudFrontError> ListRealtimeLogConfigs2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListResponseHeadersPolicies2020_05_31Result, CloudFrontError> ListResponseHeadersPolicies2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListStreamingDistributions2020_05_31Result, CloudFrontError> ListStreamingDistributions2020_05_31Outcome;
      typedef Aws::Utils::Outcome<ListTagsForResource2020_05_31Result, CloudFrontError> ListTagsForResource2020_05_31Outcome;
      typedef Aws::Utils::Outcome<PublishFunction2020_05_31Result, CloudFrontError> PublishFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> TagResource2020_05_31Outcome;
      typedef Aws::Utils::Outcome<TestFunction2020_05_31Result, CloudFrontError> TestFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> UntagResource2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateCachePolicy2020_05_31Result, CloudFrontError> UpdateCachePolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2020_05_31Result, CloudFrontError> UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateContinuousDeploymentPolicy2020_05_31Result, CloudFrontError> UpdateContinuousDeploymentPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateDistribution2020_05_31Result, CloudFrontError> UpdateDistribution2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateDistributionWithStagingConfig2020_05_31Result, CloudFrontError> UpdateDistributionWithStagingConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionConfig2020_05_31Result, CloudFrontError> UpdateFieldLevelEncryptionConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionProfile2020_05_31Result, CloudFrontError> UpdateFieldLevelEncryptionProfile2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateFunction2020_05_31Result, CloudFrontError> UpdateFunction2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateKeyGroup2020_05_31Result, CloudFrontError> UpdateKeyGroup2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateOriginAccessControl2020_05_31Result, CloudFrontError> UpdateOriginAccessControl2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateOriginRequestPolicy2020_05_31Result, CloudFrontError> UpdateOriginRequestPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdatePublicKey2020_05_31Result, CloudFrontError> UpdatePublicKey2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateRealtimeLogConfig2020_05_31Result, CloudFrontError> UpdateRealtimeLogConfig2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateResponseHeadersPolicy2020_05_31Result, CloudFrontError> UpdateResponseHeadersPolicy2020_05_31Outcome;
      typedef Aws::Utils::Outcome<UpdateStreamingDistribution2020_05_31Result, CloudFrontError> UpdateStreamingDistribution2020_05_31Outcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAlias2020_05_31Outcome> AssociateAlias2020_05_31OutcomeCallable;
      typedef std::future<CopyDistribution2020_05_31Outcome> CopyDistribution2020_05_31OutcomeCallable;
      typedef std::future<CreateCachePolicy2020_05_31Outcome> CreateCachePolicy2020_05_31OutcomeCallable;
      typedef std::future<CreateCloudFrontOriginAccessIdentity2020_05_31Outcome> CreateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
      typedef std::future<CreateContinuousDeploymentPolicy2020_05_31Outcome> CreateContinuousDeploymentPolicy2020_05_31OutcomeCallable;
      typedef std::future<CreateDistribution2020_05_31Outcome> CreateDistribution2020_05_31OutcomeCallable;
      typedef std::future<CreateDistributionWithTags2020_05_31Outcome> CreateDistributionWithTags2020_05_31OutcomeCallable;
      typedef std::future<CreateFieldLevelEncryptionConfig2020_05_31Outcome> CreateFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
      typedef std::future<CreateFieldLevelEncryptionProfile2020_05_31Outcome> CreateFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
      typedef std::future<CreateFunction2020_05_31Outcome> CreateFunction2020_05_31OutcomeCallable;
      typedef std::future<CreateInvalidation2020_05_31Outcome> CreateInvalidation2020_05_31OutcomeCallable;
      typedef std::future<CreateKeyGroup2020_05_31Outcome> CreateKeyGroup2020_05_31OutcomeCallable;
      typedef std::future<CreateMonitoringSubscription2020_05_31Outcome> CreateMonitoringSubscription2020_05_31OutcomeCallable;
      typedef std::future<CreateOriginAccessControl2020_05_31Outcome> CreateOriginAccessControl2020_05_31OutcomeCallable;
      typedef std::future<CreateOriginRequestPolicy2020_05_31Outcome> CreateOriginRequestPolicy2020_05_31OutcomeCallable;
      typedef std::future<CreatePublicKey2020_05_31Outcome> CreatePublicKey2020_05_31OutcomeCallable;
      typedef std::future<CreateRealtimeLogConfig2020_05_31Outcome> CreateRealtimeLogConfig2020_05_31OutcomeCallable;
      typedef std::future<CreateResponseHeadersPolicy2020_05_31Outcome> CreateResponseHeadersPolicy2020_05_31OutcomeCallable;
      typedef std::future<CreateStreamingDistribution2020_05_31Outcome> CreateStreamingDistribution2020_05_31OutcomeCallable;
      typedef std::future<CreateStreamingDistributionWithTags2020_05_31Outcome> CreateStreamingDistributionWithTags2020_05_31OutcomeCallable;
      typedef std::future<DeleteCachePolicy2020_05_31Outcome> DeleteCachePolicy2020_05_31OutcomeCallable;
      typedef std::future<DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome> DeleteCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
      typedef std::future<DeleteContinuousDeploymentPolicy2020_05_31Outcome> DeleteContinuousDeploymentPolicy2020_05_31OutcomeCallable;
      typedef std::future<DeleteDistribution2020_05_31Outcome> DeleteDistribution2020_05_31OutcomeCallable;
      typedef std::future<DeleteFieldLevelEncryptionConfig2020_05_31Outcome> DeleteFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
      typedef std::future<DeleteFieldLevelEncryptionProfile2020_05_31Outcome> DeleteFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
      typedef std::future<DeleteFunction2020_05_31Outcome> DeleteFunction2020_05_31OutcomeCallable;
      typedef std::future<DeleteKeyGroup2020_05_31Outcome> DeleteKeyGroup2020_05_31OutcomeCallable;
      typedef std::future<DeleteMonitoringSubscription2020_05_31Outcome> DeleteMonitoringSubscription2020_05_31OutcomeCallable;
      typedef std::future<DeleteOriginAccessControl2020_05_31Outcome> DeleteOriginAccessControl2020_05_31OutcomeCallable;
      typedef std::future<DeleteOriginRequestPolicy2020_05_31Outcome> DeleteOriginRequestPolicy2020_05_31OutcomeCallable;
      typedef std::future<DeletePublicKey2020_05_31Outcome> DeletePublicKey2020_05_31OutcomeCallable;
      typedef std::future<DeleteRealtimeLogConfig2020_05_31Outcome> DeleteRealtimeLogConfig2020_05_31OutcomeCallable;
      typedef std::future<DeleteResponseHeadersPolicy2020_05_31Outcome> DeleteResponseHeadersPolicy2020_05_31OutcomeCallable;
      typedef std::future<DeleteStreamingDistribution2020_05_31Outcome> DeleteStreamingDistribution2020_05_31OutcomeCallable;
      typedef std::future<DescribeFunction2020_05_31Outcome> DescribeFunction2020_05_31OutcomeCallable;
      typedef std::future<GetCachePolicy2020_05_31Outcome> GetCachePolicy2020_05_31OutcomeCallable;
      typedef std::future<GetCachePolicyConfig2020_05_31Outcome> GetCachePolicyConfig2020_05_31OutcomeCallable;
      typedef std::future<GetCloudFrontOriginAccessIdentity2020_05_31Outcome> GetCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
      typedef std::future<GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome> GetCloudFrontOriginAccessIdentityConfig2020_05_31OutcomeCallable;
      typedef std::future<GetContinuousDeploymentPolicy2020_05_31Outcome> GetContinuousDeploymentPolicy2020_05_31OutcomeCallable;
      typedef std::future<GetContinuousDeploymentPolicyConfig2020_05_31Outcome> GetContinuousDeploymentPolicyConfig2020_05_31OutcomeCallable;
      typedef std::future<GetDistribution2020_05_31Outcome> GetDistribution2020_05_31OutcomeCallable;
      typedef std::future<GetDistributionConfig2020_05_31Outcome> GetDistributionConfig2020_05_31OutcomeCallable;
      typedef std::future<GetFieldLevelEncryption2020_05_31Outcome> GetFieldLevelEncryption2020_05_31OutcomeCallable;
      typedef std::future<GetFieldLevelEncryptionConfig2020_05_31Outcome> GetFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
      typedef std::future<GetFieldLevelEncryptionProfile2020_05_31Outcome> GetFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
      typedef std::future<GetFieldLevelEncryptionProfileConfig2020_05_31Outcome> GetFieldLevelEncryptionProfileConfig2020_05_31OutcomeCallable;
      typedef std::future<GetFunction2020_05_31Outcome> GetFunction2020_05_31OutcomeCallable;
      typedef std::future<GetInvalidation2020_05_31Outcome> GetInvalidation2020_05_31OutcomeCallable;
      typedef std::future<GetKeyGroup2020_05_31Outcome> GetKeyGroup2020_05_31OutcomeCallable;
      typedef std::future<GetKeyGroupConfig2020_05_31Outcome> GetKeyGroupConfig2020_05_31OutcomeCallable;
      typedef std::future<GetMonitoringSubscription2020_05_31Outcome> GetMonitoringSubscription2020_05_31OutcomeCallable;
      typedef std::future<GetOriginAccessControl2020_05_31Outcome> GetOriginAccessControl2020_05_31OutcomeCallable;
      typedef std::future<GetOriginAccessControlConfig2020_05_31Outcome> GetOriginAccessControlConfig2020_05_31OutcomeCallable;
      typedef std::future<GetOriginRequestPolicy2020_05_31Outcome> GetOriginRequestPolicy2020_05_31OutcomeCallable;
      typedef std::future<GetOriginRequestPolicyConfig2020_05_31Outcome> GetOriginRequestPolicyConfig2020_05_31OutcomeCallable;
      typedef std::future<GetPublicKey2020_05_31Outcome> GetPublicKey2020_05_31OutcomeCallable;
      typedef std::future<GetPublicKeyConfig2020_05_31Outcome> GetPublicKeyConfig2020_05_31OutcomeCallable;
      typedef std::future<GetRealtimeLogConfig2020_05_31Outcome> GetRealtimeLogConfig2020_05_31OutcomeCallable;
      typedef std::future<GetResponseHeadersPolicy2020_05_31Outcome> GetResponseHeadersPolicy2020_05_31OutcomeCallable;
      typedef std::future<GetResponseHeadersPolicyConfig2020_05_31Outcome> GetResponseHeadersPolicyConfig2020_05_31OutcomeCallable;
      typedef std::future<GetStreamingDistribution2020_05_31Outcome> GetStreamingDistribution2020_05_31OutcomeCallable;
      typedef std::future<GetStreamingDistributionConfig2020_05_31Outcome> GetStreamingDistributionConfig2020_05_31OutcomeCallable;
      typedef std::future<ListCachePolicies2020_05_31Outcome> ListCachePolicies2020_05_31OutcomeCallable;
      typedef std::future<ListCloudFrontOriginAccessIdentities2020_05_31Outcome> ListCloudFrontOriginAccessIdentities2020_05_31OutcomeCallable;
      typedef std::future<ListConflictingAliases2020_05_31Outcome> ListConflictingAliases2020_05_31OutcomeCallable;
      typedef std::future<ListContinuousDeploymentPolicies2020_05_31Outcome> ListContinuousDeploymentPolicies2020_05_31OutcomeCallable;
      typedef std::future<ListDistributions2020_05_31Outcome> ListDistributions2020_05_31OutcomeCallable;
      typedef std::future<ListDistributionsByCachePolicyId2020_05_31Outcome> ListDistributionsByCachePolicyId2020_05_31OutcomeCallable;
      typedef std::future<ListDistributionsByKeyGroup2020_05_31Outcome> ListDistributionsByKeyGroup2020_05_31OutcomeCallable;
      typedef std::future<ListDistributionsByOriginRequestPolicyId2020_05_31Outcome> ListDistributionsByOriginRequestPolicyId2020_05_31OutcomeCallable;
      typedef std::future<ListDistributionsByRealtimeLogConfig2020_05_31Outcome> ListDistributionsByRealtimeLogConfig2020_05_31OutcomeCallable;
      typedef std::future<ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome> ListDistributionsByResponseHeadersPolicyId2020_05_31OutcomeCallable;
      typedef std::future<ListDistributionsByWebACLId2020_05_31Outcome> ListDistributionsByWebACLId2020_05_31OutcomeCallable;
      typedef std::future<ListFieldLevelEncryptionConfigs2020_05_31Outcome> ListFieldLevelEncryptionConfigs2020_05_31OutcomeCallable;
      typedef std::future<ListFieldLevelEncryptionProfiles2020_05_31Outcome> ListFieldLevelEncryptionProfiles2020_05_31OutcomeCallable;
      typedef std::future<ListFunctions2020_05_31Outcome> ListFunctions2020_05_31OutcomeCallable;
      typedef std::future<ListInvalidations2020_05_31Outcome> ListInvalidations2020_05_31OutcomeCallable;
      typedef std::future<ListKeyGroups2020_05_31Outcome> ListKeyGroups2020_05_31OutcomeCallable;
      typedef std::future<ListOriginAccessControls2020_05_31Outcome> ListOriginAccessControls2020_05_31OutcomeCallable;
      typedef std::future<ListOriginRequestPolicies2020_05_31Outcome> ListOriginRequestPolicies2020_05_31OutcomeCallable;
      typedef std::future<ListPublicKeys2020_05_31Outcome> ListPublicKeys2020_05_31OutcomeCallable;
      typedef std::future<ListRealtimeLogConfigs2020_05_31Outcome> ListRealtimeLogConfigs2020_05_31OutcomeCallable;
      typedef std::future<ListResponseHeadersPolicies2020_05_31Outcome> ListResponseHeadersPolicies2020_05_31OutcomeCallable;
      typedef std::future<ListStreamingDistributions2020_05_31Outcome> ListStreamingDistributions2020_05_31OutcomeCallable;
      typedef std::future<ListTagsForResource2020_05_31Outcome> ListTagsForResource2020_05_31OutcomeCallable;
      typedef std::future<PublishFunction2020_05_31Outcome> PublishFunction2020_05_31OutcomeCallable;
      typedef std::future<TagResource2020_05_31Outcome> TagResource2020_05_31OutcomeCallable;
      typedef std::future<TestFunction2020_05_31Outcome> TestFunction2020_05_31OutcomeCallable;
      typedef std::future<UntagResource2020_05_31Outcome> UntagResource2020_05_31OutcomeCallable;
      typedef std::future<UpdateCachePolicy2020_05_31Outcome> UpdateCachePolicy2020_05_31OutcomeCallable;
      typedef std::future<UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome> UpdateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
      typedef std::future<UpdateContinuousDeploymentPolicy2020_05_31Outcome> UpdateContinuousDeploymentPolicy2020_05_31OutcomeCallable;
      typedef std::future<UpdateDistribution2020_05_31Outcome> UpdateDistribution2020_05_31OutcomeCallable;
      typedef std::future<UpdateDistributionWithStagingConfig2020_05_31Outcome> UpdateDistributionWithStagingConfig2020_05_31OutcomeCallable;
      typedef std::future<UpdateFieldLevelEncryptionConfig2020_05_31Outcome> UpdateFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
      typedef std::future<UpdateFieldLevelEncryptionProfile2020_05_31Outcome> UpdateFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
      typedef std::future<UpdateFunction2020_05_31Outcome> UpdateFunction2020_05_31OutcomeCallable;
      typedef std::future<UpdateKeyGroup2020_05_31Outcome> UpdateKeyGroup2020_05_31OutcomeCallable;
      typedef std::future<UpdateOriginAccessControl2020_05_31Outcome> UpdateOriginAccessControl2020_05_31OutcomeCallable;
      typedef std::future<UpdateOriginRequestPolicy2020_05_31Outcome> UpdateOriginRequestPolicy2020_05_31OutcomeCallable;
      typedef std::future<UpdatePublicKey2020_05_31Outcome> UpdatePublicKey2020_05_31OutcomeCallable;
      typedef std::future<UpdateRealtimeLogConfig2020_05_31Outcome> UpdateRealtimeLogConfig2020_05_31OutcomeCallable;
      typedef std::future<UpdateResponseHeadersPolicy2020_05_31Outcome> UpdateResponseHeadersPolicy2020_05_31OutcomeCallable;
      typedef std::future<UpdateStreamingDistribution2020_05_31Outcome> UpdateStreamingDistribution2020_05_31OutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudFrontClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudFrontClient*, const Model::AssociateAlias2020_05_31Request&, const Model::AssociateAlias2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAlias2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CopyDistribution2020_05_31Request&, const Model::CopyDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateCachePolicy2020_05_31Request&, const Model::CreateCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateContinuousDeploymentPolicy2020_05_31Request&, const Model::CreateContinuousDeploymentPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2020_05_31Request&, const Model::CreateDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistributionWithTags2020_05_31Request&, const Model::CreateDistributionWithTags2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionWithTags2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionConfig2020_05_31Request&, const Model::CreateFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionProfile2020_05_31Request&, const Model::CreateFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFunction2020_05_31Request&, const Model::CreateFunction2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2020_05_31Request&, const Model::CreateInvalidation2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateKeyGroup2020_05_31Request&, const Model::CreateKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateMonitoringSubscription2020_05_31Request&, const Model::CreateMonitoringSubscription2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitoringSubscription2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateOriginAccessControl2020_05_31Request&, const Model::CreateOriginAccessControl2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOriginAccessControl2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateOriginRequestPolicy2020_05_31Request&, const Model::CreateOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreatePublicKey2020_05_31Request&, const Model::CreatePublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateRealtimeLogConfig2020_05_31Request&, const Model::CreateRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateResponseHeadersPolicy2020_05_31Request&, const Model::CreateResponseHeadersPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResponseHeadersPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2020_05_31Request&, const Model::CreateStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistributionWithTags2020_05_31Request&, const Model::CreateStreamingDistributionWithTags2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCachePolicy2020_05_31Request&, const Model::DeleteCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteContinuousDeploymentPolicy2020_05_31Request&, const Model::DeleteContinuousDeploymentPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2020_05_31Request&, const Model::DeleteDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request&, const Model::DeleteFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request&, const Model::DeleteFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFunction2020_05_31Request&, const Model::DeleteFunction2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteKeyGroup2020_05_31Request&, const Model::DeleteKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteMonitoringSubscription2020_05_31Request&, const Model::DeleteMonitoringSubscription2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteOriginAccessControl2020_05_31Request&, const Model::DeleteOriginAccessControl2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginAccessControl2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteOriginRequestPolicy2020_05_31Request&, const Model::DeleteOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeletePublicKey2020_05_31Request&, const Model::DeletePublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteRealtimeLogConfig2020_05_31Request&, const Model::DeleteRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteResponseHeadersPolicy2020_05_31Request&, const Model::DeleteResponseHeadersPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResponseHeadersPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2020_05_31Request&, const Model::DeleteStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DescribeFunction2020_05_31Request&, const Model::DescribeFunction2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCachePolicy2020_05_31Request&, const Model::GetCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCachePolicyConfig2020_05_31Request&, const Model::GetCachePolicyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCachePolicyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::GetCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetContinuousDeploymentPolicy2020_05_31Request&, const Model::GetContinuousDeploymentPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetContinuousDeploymentPolicyConfig2020_05_31Request&, const Model::GetContinuousDeploymentPolicyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContinuousDeploymentPolicyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2020_05_31Request&, const Model::GetDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2020_05_31Request&, const Model::GetDistributionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryption2020_05_31Request&, const Model::GetFieldLevelEncryption2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryption2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionConfig2020_05_31Request&, const Model::GetFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfile2020_05_31Request&, const Model::GetFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request&, const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFunction2020_05_31Request&, Model::GetFunction2020_05_31Outcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2020_05_31Request&, const Model::GetInvalidation2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetKeyGroup2020_05_31Request&, const Model::GetKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetKeyGroupConfig2020_05_31Request&, const Model::GetKeyGroupConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyGroupConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetMonitoringSubscription2020_05_31Request&, const Model::GetMonitoringSubscription2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMonitoringSubscription2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetOriginAccessControl2020_05_31Request&, const Model::GetOriginAccessControl2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginAccessControl2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetOriginAccessControlConfig2020_05_31Request&, const Model::GetOriginAccessControlConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginAccessControlConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetOriginRequestPolicy2020_05_31Request&, const Model::GetOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetOriginRequestPolicyConfig2020_05_31Request&, const Model::GetOriginRequestPolicyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKey2020_05_31Request&, const Model::GetPublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKeyConfig2020_05_31Request&, const Model::GetPublicKeyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetRealtimeLogConfig2020_05_31Request&, const Model::GetRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetResponseHeadersPolicy2020_05_31Request&, const Model::GetResponseHeadersPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResponseHeadersPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetResponseHeadersPolicyConfig2020_05_31Request&, const Model::GetResponseHeadersPolicyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResponseHeadersPolicyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2020_05_31Request&, const Model::GetStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2020_05_31Request&, const Model::GetStreamingDistributionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCachePolicies2020_05_31Request&, const Model::ListCachePolicies2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCachePolicies2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request&, const Model::ListCloudFrontOriginAccessIdentities2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListConflictingAliases2020_05_31Request&, const Model::ListConflictingAliases2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConflictingAliases2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListContinuousDeploymentPolicies2020_05_31Request&, const Model::ListContinuousDeploymentPolicies2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContinuousDeploymentPolicies2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2020_05_31Request&, const Model::ListDistributions2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByCachePolicyId2020_05_31Request&, const Model::ListDistributionsByCachePolicyId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByKeyGroup2020_05_31Request&, const Model::ListDistributionsByKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request&, const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request&, const Model::ListDistributionsByRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByResponseHeadersPolicyId2020_05_31Request&, const Model::ListDistributionsByResponseHeadersPolicyId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByResponseHeadersPolicyId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByWebACLId2020_05_31Request&, const Model::ListDistributionsByWebACLId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionConfigs2020_05_31Request&, const Model::ListFieldLevelEncryptionConfigs2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionProfiles2020_05_31Request&, const Model::ListFieldLevelEncryptionProfiles2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFunctions2020_05_31Request&, const Model::ListFunctions2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctions2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2020_05_31Request&, const Model::ListInvalidations2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListKeyGroups2020_05_31Request&, const Model::ListKeyGroups2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyGroups2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListOriginAccessControls2020_05_31Request&, const Model::ListOriginAccessControls2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginAccessControls2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListOriginRequestPolicies2020_05_31Request&, const Model::ListOriginRequestPolicies2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginRequestPolicies2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListPublicKeys2020_05_31Request&, const Model::ListPublicKeys2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeys2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListRealtimeLogConfigs2020_05_31Request&, const Model::ListRealtimeLogConfigs2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListResponseHeadersPolicies2020_05_31Request&, const Model::ListResponseHeadersPolicies2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResponseHeadersPolicies2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2020_05_31Request&, const Model::ListStreamingDistributions2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListTagsForResource2020_05_31Request&, const Model::ListTagsForResource2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResource2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::PublishFunction2020_05_31Request&, const Model::PublishFunction2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PublishFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::TagResource2020_05_31Request&, const Model::TagResource2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResource2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::TestFunction2020_05_31Request&, const Model::TestFunction2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UntagResource2020_05_31Request&, const Model::UntagResource2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResource2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCachePolicy2020_05_31Request&, const Model::UpdateCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateContinuousDeploymentPolicy2020_05_31Request&, const Model::UpdateContinuousDeploymentPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContinuousDeploymentPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2020_05_31Request&, const Model::UpdateDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistributionWithStagingConfig2020_05_31Request&, const Model::UpdateDistributionWithStagingConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionWithStagingConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request&, const Model::UpdateFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request&, const Model::UpdateFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFunction2020_05_31Request&, const Model::UpdateFunction2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunction2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateKeyGroup2020_05_31Request&, const Model::UpdateKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateOriginAccessControl2020_05_31Request&, const Model::UpdateOriginAccessControl2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOriginAccessControl2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateOriginRequestPolicy2020_05_31Request&, const Model::UpdateOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdatePublicKey2020_05_31Request&, const Model::UpdatePublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateRealtimeLogConfig2020_05_31Request&, const Model::UpdateRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateResponseHeadersPolicy2020_05_31Request&, const Model::UpdateResponseHeadersPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResponseHeadersPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2020_05_31Request&, const Model::UpdateStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2020_05_31ResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudFront
} // namespace Aws
