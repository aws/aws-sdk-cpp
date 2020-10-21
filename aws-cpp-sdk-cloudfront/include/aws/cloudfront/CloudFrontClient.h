/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/cloudfront/model/CreateCachePolicy2020_05_31Result.h>
#include <aws/cloudfront/model/CreateCloudFrontOriginAccessIdentity2020_05_31Result.h>
#include <aws/cloudfront/model/CreateDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/CreateDistributionWithTags2020_05_31Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/CreateFieldLevelEncryptionProfile2020_05_31Result.h>
#include <aws/cloudfront/model/CreateInvalidation2020_05_31Result.h>
#include <aws/cloudfront/model/CreateKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/CreateMonitoringSubscription2020_05_31Result.h>
#include <aws/cloudfront/model/CreateOriginRequestPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/CreatePublicKey2020_05_31Result.h>
#include <aws/cloudfront/model/CreateRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/CreateStreamingDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/CreateStreamingDistributionWithTags2020_05_31Result.h>
#include <aws/cloudfront/model/DeleteMonitoringSubscription2020_05_31Result.h>
#include <aws/cloudfront/model/GetCachePolicy2020_05_31Result.h>
#include <aws/cloudfront/model/GetCachePolicyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentity2020_05_31Result.h>
#include <aws/cloudfront/model/GetCloudFrontOriginAccessIdentityConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/GetDistributionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryption2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfile2020_05_31Result.h>
#include <aws/cloudfront/model/GetFieldLevelEncryptionProfileConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetInvalidation2020_05_31Result.h>
#include <aws/cloudfront/model/GetKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/GetKeyGroupConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetMonitoringSubscription2020_05_31Result.h>
#include <aws/cloudfront/model/GetOriginRequestPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/GetOriginRequestPolicyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetPublicKey2020_05_31Result.h>
#include <aws/cloudfront/model/GetPublicKeyConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/GetStreamingDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/GetStreamingDistributionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/ListCachePolicies2020_05_31Result.h>
#include <aws/cloudfront/model/ListCloudFrontOriginAccessIdentities2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributions2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByCachePolicyId2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByOriginRequestPolicyId2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/ListDistributionsByWebACLId2020_05_31Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionConfigs2020_05_31Result.h>
#include <aws/cloudfront/model/ListFieldLevelEncryptionProfiles2020_05_31Result.h>
#include <aws/cloudfront/model/ListInvalidations2020_05_31Result.h>
#include <aws/cloudfront/model/ListKeyGroups2020_05_31Result.h>
#include <aws/cloudfront/model/ListOriginRequestPolicies2020_05_31Result.h>
#include <aws/cloudfront/model/ListPublicKeys2020_05_31Result.h>
#include <aws/cloudfront/model/ListRealtimeLogConfigs2020_05_31Result.h>
#include <aws/cloudfront/model/ListStreamingDistributions2020_05_31Result.h>
#include <aws/cloudfront/model/ListTagsForResource2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateCachePolicy2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateCloudFrontOriginAccessIdentity2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateDistribution2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionConfig2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateFieldLevelEncryptionProfile2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateKeyGroup2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateOriginRequestPolicy2020_05_31Result.h>
#include <aws/cloudfront/model/UpdatePublicKey2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateRealtimeLogConfig2020_05_31Result.h>
#include <aws/cloudfront/model/UpdateStreamingDistribution2020_05_31Result.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Xml
{
  class XmlDocument;
} // namespace Xml
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

namespace Model
{
        class CreateCachePolicy2020_05_31Request;
        class CreateCloudFrontOriginAccessIdentity2020_05_31Request;
        class CreateDistribution2020_05_31Request;
        class CreateDistributionWithTags2020_05_31Request;
        class CreateFieldLevelEncryptionConfig2020_05_31Request;
        class CreateFieldLevelEncryptionProfile2020_05_31Request;
        class CreateInvalidation2020_05_31Request;
        class CreateKeyGroup2020_05_31Request;
        class CreateMonitoringSubscription2020_05_31Request;
        class CreateOriginRequestPolicy2020_05_31Request;
        class CreatePublicKey2020_05_31Request;
        class CreateRealtimeLogConfig2020_05_31Request;
        class CreateStreamingDistribution2020_05_31Request;
        class CreateStreamingDistributionWithTags2020_05_31Request;
        class DeleteCachePolicy2020_05_31Request;
        class DeleteCloudFrontOriginAccessIdentity2020_05_31Request;
        class DeleteDistribution2020_05_31Request;
        class DeleteFieldLevelEncryptionConfig2020_05_31Request;
        class DeleteFieldLevelEncryptionProfile2020_05_31Request;
        class DeleteKeyGroup2020_05_31Request;
        class DeleteMonitoringSubscription2020_05_31Request;
        class DeleteOriginRequestPolicy2020_05_31Request;
        class DeletePublicKey2020_05_31Request;
        class DeleteRealtimeLogConfig2020_05_31Request;
        class DeleteStreamingDistribution2020_05_31Request;
        class GetCachePolicy2020_05_31Request;
        class GetCachePolicyConfig2020_05_31Request;
        class GetCloudFrontOriginAccessIdentity2020_05_31Request;
        class GetCloudFrontOriginAccessIdentityConfig2020_05_31Request;
        class GetDistribution2020_05_31Request;
        class GetDistributionConfig2020_05_31Request;
        class GetFieldLevelEncryption2020_05_31Request;
        class GetFieldLevelEncryptionConfig2020_05_31Request;
        class GetFieldLevelEncryptionProfile2020_05_31Request;
        class GetFieldLevelEncryptionProfileConfig2020_05_31Request;
        class GetInvalidation2020_05_31Request;
        class GetKeyGroup2020_05_31Request;
        class GetKeyGroupConfig2020_05_31Request;
        class GetMonitoringSubscription2020_05_31Request;
        class GetOriginRequestPolicy2020_05_31Request;
        class GetOriginRequestPolicyConfig2020_05_31Request;
        class GetPublicKey2020_05_31Request;
        class GetPublicKeyConfig2020_05_31Request;
        class GetRealtimeLogConfig2020_05_31Request;
        class GetStreamingDistribution2020_05_31Request;
        class GetStreamingDistributionConfig2020_05_31Request;
        class ListCachePolicies2020_05_31Request;
        class ListCloudFrontOriginAccessIdentities2020_05_31Request;
        class ListDistributions2020_05_31Request;
        class ListDistributionsByCachePolicyId2020_05_31Request;
        class ListDistributionsByKeyGroup2020_05_31Request;
        class ListDistributionsByOriginRequestPolicyId2020_05_31Request;
        class ListDistributionsByRealtimeLogConfig2020_05_31Request;
        class ListDistributionsByWebACLId2020_05_31Request;
        class ListFieldLevelEncryptionConfigs2020_05_31Request;
        class ListFieldLevelEncryptionProfiles2020_05_31Request;
        class ListInvalidations2020_05_31Request;
        class ListKeyGroups2020_05_31Request;
        class ListOriginRequestPolicies2020_05_31Request;
        class ListPublicKeys2020_05_31Request;
        class ListRealtimeLogConfigs2020_05_31Request;
        class ListStreamingDistributions2020_05_31Request;
        class ListTagsForResource2020_05_31Request;
        class TagResource2020_05_31Request;
        class UntagResource2020_05_31Request;
        class UpdateCachePolicy2020_05_31Request;
        class UpdateCloudFrontOriginAccessIdentity2020_05_31Request;
        class UpdateDistribution2020_05_31Request;
        class UpdateFieldLevelEncryptionConfig2020_05_31Request;
        class UpdateFieldLevelEncryptionProfile2020_05_31Request;
        class UpdateKeyGroup2020_05_31Request;
        class UpdateOriginRequestPolicy2020_05_31Request;
        class UpdatePublicKey2020_05_31Request;
        class UpdateRealtimeLogConfig2020_05_31Request;
        class UpdateStreamingDistribution2020_05_31Request;

        typedef Aws::Utils::Outcome<CreateCachePolicy2020_05_31Result, CloudFrontError> CreateCachePolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateCloudFrontOriginAccessIdentity2020_05_31Result, CloudFrontError> CreateCloudFrontOriginAccessIdentity2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateDistribution2020_05_31Result, CloudFrontError> CreateDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateDistributionWithTags2020_05_31Result, CloudFrontError> CreateDistributionWithTags2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionConfig2020_05_31Result, CloudFrontError> CreateFieldLevelEncryptionConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateFieldLevelEncryptionProfile2020_05_31Result, CloudFrontError> CreateFieldLevelEncryptionProfile2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateInvalidation2020_05_31Result, CloudFrontError> CreateInvalidation2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateKeyGroup2020_05_31Result, CloudFrontError> CreateKeyGroup2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateMonitoringSubscription2020_05_31Result, CloudFrontError> CreateMonitoringSubscription2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateOriginRequestPolicy2020_05_31Result, CloudFrontError> CreateOriginRequestPolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreatePublicKey2020_05_31Result, CloudFrontError> CreatePublicKey2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateRealtimeLogConfig2020_05_31Result, CloudFrontError> CreateRealtimeLogConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistribution2020_05_31Result, CloudFrontError> CreateStreamingDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<CreateStreamingDistributionWithTags2020_05_31Result, CloudFrontError> CreateStreamingDistributionWithTags2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteCachePolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteFieldLevelEncryptionConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteFieldLevelEncryptionProfile2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteKeyGroup2020_05_31Outcome;
        typedef Aws::Utils::Outcome<DeleteMonitoringSubscription2020_05_31Result, CloudFrontError> DeleteMonitoringSubscription2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteOriginRequestPolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeletePublicKey2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteRealtimeLogConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> DeleteStreamingDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetCachePolicy2020_05_31Result, CloudFrontError> GetCachePolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetCachePolicyConfig2020_05_31Result, CloudFrontError> GetCachePolicyConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentity2020_05_31Result, CloudFrontError> GetCloudFrontOriginAccessIdentity2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetCloudFrontOriginAccessIdentityConfig2020_05_31Result, CloudFrontError> GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetDistribution2020_05_31Result, CloudFrontError> GetDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetDistributionConfig2020_05_31Result, CloudFrontError> GetDistributionConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryption2020_05_31Result, CloudFrontError> GetFieldLevelEncryption2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionConfig2020_05_31Result, CloudFrontError> GetFieldLevelEncryptionConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfile2020_05_31Result, CloudFrontError> GetFieldLevelEncryptionProfile2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetFieldLevelEncryptionProfileConfig2020_05_31Result, CloudFrontError> GetFieldLevelEncryptionProfileConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetInvalidation2020_05_31Result, CloudFrontError> GetInvalidation2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetKeyGroup2020_05_31Result, CloudFrontError> GetKeyGroup2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetKeyGroupConfig2020_05_31Result, CloudFrontError> GetKeyGroupConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetMonitoringSubscription2020_05_31Result, CloudFrontError> GetMonitoringSubscription2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetOriginRequestPolicy2020_05_31Result, CloudFrontError> GetOriginRequestPolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetOriginRequestPolicyConfig2020_05_31Result, CloudFrontError> GetOriginRequestPolicyConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetPublicKey2020_05_31Result, CloudFrontError> GetPublicKey2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetPublicKeyConfig2020_05_31Result, CloudFrontError> GetPublicKeyConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetRealtimeLogConfig2020_05_31Result, CloudFrontError> GetRealtimeLogConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistribution2020_05_31Result, CloudFrontError> GetStreamingDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<GetStreamingDistributionConfig2020_05_31Result, CloudFrontError> GetStreamingDistributionConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListCachePolicies2020_05_31Result, CloudFrontError> ListCachePolicies2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListCloudFrontOriginAccessIdentities2020_05_31Result, CloudFrontError> ListCloudFrontOriginAccessIdentities2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListDistributions2020_05_31Result, CloudFrontError> ListDistributions2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByCachePolicyId2020_05_31Result, CloudFrontError> ListDistributionsByCachePolicyId2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByKeyGroup2020_05_31Result, CloudFrontError> ListDistributionsByKeyGroup2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByOriginRequestPolicyId2020_05_31Result, CloudFrontError> ListDistributionsByOriginRequestPolicyId2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByRealtimeLogConfig2020_05_31Result, CloudFrontError> ListDistributionsByRealtimeLogConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListDistributionsByWebACLId2020_05_31Result, CloudFrontError> ListDistributionsByWebACLId2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListFieldLevelEncryptionConfigs2020_05_31Result, CloudFrontError> ListFieldLevelEncryptionConfigs2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListFieldLevelEncryptionProfiles2020_05_31Result, CloudFrontError> ListFieldLevelEncryptionProfiles2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListInvalidations2020_05_31Result, CloudFrontError> ListInvalidations2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListKeyGroups2020_05_31Result, CloudFrontError> ListKeyGroups2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListOriginRequestPolicies2020_05_31Result, CloudFrontError> ListOriginRequestPolicies2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListPublicKeys2020_05_31Result, CloudFrontError> ListPublicKeys2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListRealtimeLogConfigs2020_05_31Result, CloudFrontError> ListRealtimeLogConfigs2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListStreamingDistributions2020_05_31Result, CloudFrontError> ListStreamingDistributions2020_05_31Outcome;
        typedef Aws::Utils::Outcome<ListTagsForResource2020_05_31Result, CloudFrontError> ListTagsForResource2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> TagResource2020_05_31Outcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, CloudFrontError> UntagResource2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateCachePolicy2020_05_31Result, CloudFrontError> UpdateCachePolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateCloudFrontOriginAccessIdentity2020_05_31Result, CloudFrontError> UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateDistribution2020_05_31Result, CloudFrontError> UpdateDistribution2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionConfig2020_05_31Result, CloudFrontError> UpdateFieldLevelEncryptionConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateFieldLevelEncryptionProfile2020_05_31Result, CloudFrontError> UpdateFieldLevelEncryptionProfile2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateKeyGroup2020_05_31Result, CloudFrontError> UpdateKeyGroup2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateOriginRequestPolicy2020_05_31Result, CloudFrontError> UpdateOriginRequestPolicy2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdatePublicKey2020_05_31Result, CloudFrontError> UpdatePublicKey2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateRealtimeLogConfig2020_05_31Result, CloudFrontError> UpdateRealtimeLogConfig2020_05_31Outcome;
        typedef Aws::Utils::Outcome<UpdateStreamingDistribution2020_05_31Result, CloudFrontError> UpdateStreamingDistribution2020_05_31Outcome;

        typedef std::future<CreateCachePolicy2020_05_31Outcome> CreateCachePolicy2020_05_31OutcomeCallable;
        typedef std::future<CreateCloudFrontOriginAccessIdentity2020_05_31Outcome> CreateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
        typedef std::future<CreateDistribution2020_05_31Outcome> CreateDistribution2020_05_31OutcomeCallable;
        typedef std::future<CreateDistributionWithTags2020_05_31Outcome> CreateDistributionWithTags2020_05_31OutcomeCallable;
        typedef std::future<CreateFieldLevelEncryptionConfig2020_05_31Outcome> CreateFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
        typedef std::future<CreateFieldLevelEncryptionProfile2020_05_31Outcome> CreateFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
        typedef std::future<CreateInvalidation2020_05_31Outcome> CreateInvalidation2020_05_31OutcomeCallable;
        typedef std::future<CreateKeyGroup2020_05_31Outcome> CreateKeyGroup2020_05_31OutcomeCallable;
        typedef std::future<CreateMonitoringSubscription2020_05_31Outcome> CreateMonitoringSubscription2020_05_31OutcomeCallable;
        typedef std::future<CreateOriginRequestPolicy2020_05_31Outcome> CreateOriginRequestPolicy2020_05_31OutcomeCallable;
        typedef std::future<CreatePublicKey2020_05_31Outcome> CreatePublicKey2020_05_31OutcomeCallable;
        typedef std::future<CreateRealtimeLogConfig2020_05_31Outcome> CreateRealtimeLogConfig2020_05_31OutcomeCallable;
        typedef std::future<CreateStreamingDistribution2020_05_31Outcome> CreateStreamingDistribution2020_05_31OutcomeCallable;
        typedef std::future<CreateStreamingDistributionWithTags2020_05_31Outcome> CreateStreamingDistributionWithTags2020_05_31OutcomeCallable;
        typedef std::future<DeleteCachePolicy2020_05_31Outcome> DeleteCachePolicy2020_05_31OutcomeCallable;
        typedef std::future<DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome> DeleteCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
        typedef std::future<DeleteDistribution2020_05_31Outcome> DeleteDistribution2020_05_31OutcomeCallable;
        typedef std::future<DeleteFieldLevelEncryptionConfig2020_05_31Outcome> DeleteFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
        typedef std::future<DeleteFieldLevelEncryptionProfile2020_05_31Outcome> DeleteFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
        typedef std::future<DeleteKeyGroup2020_05_31Outcome> DeleteKeyGroup2020_05_31OutcomeCallable;
        typedef std::future<DeleteMonitoringSubscription2020_05_31Outcome> DeleteMonitoringSubscription2020_05_31OutcomeCallable;
        typedef std::future<DeleteOriginRequestPolicy2020_05_31Outcome> DeleteOriginRequestPolicy2020_05_31OutcomeCallable;
        typedef std::future<DeletePublicKey2020_05_31Outcome> DeletePublicKey2020_05_31OutcomeCallable;
        typedef std::future<DeleteRealtimeLogConfig2020_05_31Outcome> DeleteRealtimeLogConfig2020_05_31OutcomeCallable;
        typedef std::future<DeleteStreamingDistribution2020_05_31Outcome> DeleteStreamingDistribution2020_05_31OutcomeCallable;
        typedef std::future<GetCachePolicy2020_05_31Outcome> GetCachePolicy2020_05_31OutcomeCallable;
        typedef std::future<GetCachePolicyConfig2020_05_31Outcome> GetCachePolicyConfig2020_05_31OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentity2020_05_31Outcome> GetCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
        typedef std::future<GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome> GetCloudFrontOriginAccessIdentityConfig2020_05_31OutcomeCallable;
        typedef std::future<GetDistribution2020_05_31Outcome> GetDistribution2020_05_31OutcomeCallable;
        typedef std::future<GetDistributionConfig2020_05_31Outcome> GetDistributionConfig2020_05_31OutcomeCallable;
        typedef std::future<GetFieldLevelEncryption2020_05_31Outcome> GetFieldLevelEncryption2020_05_31OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionConfig2020_05_31Outcome> GetFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionProfile2020_05_31Outcome> GetFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
        typedef std::future<GetFieldLevelEncryptionProfileConfig2020_05_31Outcome> GetFieldLevelEncryptionProfileConfig2020_05_31OutcomeCallable;
        typedef std::future<GetInvalidation2020_05_31Outcome> GetInvalidation2020_05_31OutcomeCallable;
        typedef std::future<GetKeyGroup2020_05_31Outcome> GetKeyGroup2020_05_31OutcomeCallable;
        typedef std::future<GetKeyGroupConfig2020_05_31Outcome> GetKeyGroupConfig2020_05_31OutcomeCallable;
        typedef std::future<GetMonitoringSubscription2020_05_31Outcome> GetMonitoringSubscription2020_05_31OutcomeCallable;
        typedef std::future<GetOriginRequestPolicy2020_05_31Outcome> GetOriginRequestPolicy2020_05_31OutcomeCallable;
        typedef std::future<GetOriginRequestPolicyConfig2020_05_31Outcome> GetOriginRequestPolicyConfig2020_05_31OutcomeCallable;
        typedef std::future<GetPublicKey2020_05_31Outcome> GetPublicKey2020_05_31OutcomeCallable;
        typedef std::future<GetPublicKeyConfig2020_05_31Outcome> GetPublicKeyConfig2020_05_31OutcomeCallable;
        typedef std::future<GetRealtimeLogConfig2020_05_31Outcome> GetRealtimeLogConfig2020_05_31OutcomeCallable;
        typedef std::future<GetStreamingDistribution2020_05_31Outcome> GetStreamingDistribution2020_05_31OutcomeCallable;
        typedef std::future<GetStreamingDistributionConfig2020_05_31Outcome> GetStreamingDistributionConfig2020_05_31OutcomeCallable;
        typedef std::future<ListCachePolicies2020_05_31Outcome> ListCachePolicies2020_05_31OutcomeCallable;
        typedef std::future<ListCloudFrontOriginAccessIdentities2020_05_31Outcome> ListCloudFrontOriginAccessIdentities2020_05_31OutcomeCallable;
        typedef std::future<ListDistributions2020_05_31Outcome> ListDistributions2020_05_31OutcomeCallable;
        typedef std::future<ListDistributionsByCachePolicyId2020_05_31Outcome> ListDistributionsByCachePolicyId2020_05_31OutcomeCallable;
        typedef std::future<ListDistributionsByKeyGroup2020_05_31Outcome> ListDistributionsByKeyGroup2020_05_31OutcomeCallable;
        typedef std::future<ListDistributionsByOriginRequestPolicyId2020_05_31Outcome> ListDistributionsByOriginRequestPolicyId2020_05_31OutcomeCallable;
        typedef std::future<ListDistributionsByRealtimeLogConfig2020_05_31Outcome> ListDistributionsByRealtimeLogConfig2020_05_31OutcomeCallable;
        typedef std::future<ListDistributionsByWebACLId2020_05_31Outcome> ListDistributionsByWebACLId2020_05_31OutcomeCallable;
        typedef std::future<ListFieldLevelEncryptionConfigs2020_05_31Outcome> ListFieldLevelEncryptionConfigs2020_05_31OutcomeCallable;
        typedef std::future<ListFieldLevelEncryptionProfiles2020_05_31Outcome> ListFieldLevelEncryptionProfiles2020_05_31OutcomeCallable;
        typedef std::future<ListInvalidations2020_05_31Outcome> ListInvalidations2020_05_31OutcomeCallable;
        typedef std::future<ListKeyGroups2020_05_31Outcome> ListKeyGroups2020_05_31OutcomeCallable;
        typedef std::future<ListOriginRequestPolicies2020_05_31Outcome> ListOriginRequestPolicies2020_05_31OutcomeCallable;
        typedef std::future<ListPublicKeys2020_05_31Outcome> ListPublicKeys2020_05_31OutcomeCallable;
        typedef std::future<ListRealtimeLogConfigs2020_05_31Outcome> ListRealtimeLogConfigs2020_05_31OutcomeCallable;
        typedef std::future<ListStreamingDistributions2020_05_31Outcome> ListStreamingDistributions2020_05_31OutcomeCallable;
        typedef std::future<ListTagsForResource2020_05_31Outcome> ListTagsForResource2020_05_31OutcomeCallable;
        typedef std::future<TagResource2020_05_31Outcome> TagResource2020_05_31OutcomeCallable;
        typedef std::future<UntagResource2020_05_31Outcome> UntagResource2020_05_31OutcomeCallable;
        typedef std::future<UpdateCachePolicy2020_05_31Outcome> UpdateCachePolicy2020_05_31OutcomeCallable;
        typedef std::future<UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome> UpdateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable;
        typedef std::future<UpdateDistribution2020_05_31Outcome> UpdateDistribution2020_05_31OutcomeCallable;
        typedef std::future<UpdateFieldLevelEncryptionConfig2020_05_31Outcome> UpdateFieldLevelEncryptionConfig2020_05_31OutcomeCallable;
        typedef std::future<UpdateFieldLevelEncryptionProfile2020_05_31Outcome> UpdateFieldLevelEncryptionProfile2020_05_31OutcomeCallable;
        typedef std::future<UpdateKeyGroup2020_05_31Outcome> UpdateKeyGroup2020_05_31OutcomeCallable;
        typedef std::future<UpdateOriginRequestPolicy2020_05_31Outcome> UpdateOriginRequestPolicy2020_05_31OutcomeCallable;
        typedef std::future<UpdatePublicKey2020_05_31Outcome> UpdatePublicKey2020_05_31OutcomeCallable;
        typedef std::future<UpdateRealtimeLogConfig2020_05_31Outcome> UpdateRealtimeLogConfig2020_05_31OutcomeCallable;
        typedef std::future<UpdateStreamingDistribution2020_05_31Outcome> UpdateStreamingDistribution2020_05_31OutcomeCallable;
} // namespace Model

  class CloudFrontClient;

    typedef std::function<void(const CloudFrontClient*, const Model::CreateCachePolicy2020_05_31Request&, const Model::CreateCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistribution2020_05_31Request&, const Model::CreateDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateDistributionWithTags2020_05_31Request&, const Model::CreateDistributionWithTags2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionWithTags2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionConfig2020_05_31Request&, const Model::CreateFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateFieldLevelEncryptionProfile2020_05_31Request&, const Model::CreateFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateInvalidation2020_05_31Request&, const Model::CreateInvalidation2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvalidation2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateKeyGroup2020_05_31Request&, const Model::CreateKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateMonitoringSubscription2020_05_31Request&, const Model::CreateMonitoringSubscription2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMonitoringSubscription2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateOriginRequestPolicy2020_05_31Request&, const Model::CreateOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreatePublicKey2020_05_31Request&, const Model::CreatePublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateRealtimeLogConfig2020_05_31Request&, const Model::CreateRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistribution2020_05_31Request&, const Model::CreateStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::CreateStreamingDistributionWithTags2020_05_31Request&, const Model::CreateStreamingDistributionWithTags2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCachePolicy2020_05_31Request&, const Model::DeleteCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteDistribution2020_05_31Request&, const Model::DeleteDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request&, const Model::DeleteFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request&, const Model::DeleteFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteKeyGroup2020_05_31Request&, const Model::DeleteKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteMonitoringSubscription2020_05_31Request&, const Model::DeleteMonitoringSubscription2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteOriginRequestPolicy2020_05_31Request&, const Model::DeleteOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeletePublicKey2020_05_31Request&, const Model::DeletePublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteRealtimeLogConfig2020_05_31Request&, const Model::DeleteRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::DeleteStreamingDistribution2020_05_31Request&, const Model::DeleteStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamingDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCachePolicy2020_05_31Request&, const Model::GetCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCachePolicyConfig2020_05_31Request&, const Model::GetCachePolicyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCachePolicyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::GetCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request&, const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistribution2020_05_31Request&, const Model::GetDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetDistributionConfig2020_05_31Request&, const Model::GetDistributionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryption2020_05_31Request&, const Model::GetFieldLevelEncryption2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryption2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionConfig2020_05_31Request&, const Model::GetFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfile2020_05_31Request&, const Model::GetFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request&, const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetInvalidation2020_05_31Request&, const Model::GetInvalidation2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvalidation2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetKeyGroup2020_05_31Request&, const Model::GetKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetKeyGroupConfig2020_05_31Request&, const Model::GetKeyGroupConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyGroupConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetMonitoringSubscription2020_05_31Request&, const Model::GetMonitoringSubscription2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMonitoringSubscription2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetOriginRequestPolicy2020_05_31Request&, const Model::GetOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetOriginRequestPolicyConfig2020_05_31Request&, const Model::GetOriginRequestPolicyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKey2020_05_31Request&, const Model::GetPublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetPublicKeyConfig2020_05_31Request&, const Model::GetPublicKeyConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetRealtimeLogConfig2020_05_31Request&, const Model::GetRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistribution2020_05_31Request&, const Model::GetStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::GetStreamingDistributionConfig2020_05_31Request&, const Model::GetStreamingDistributionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCachePolicies2020_05_31Request&, const Model::ListCachePolicies2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCachePolicies2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request&, const Model::ListCloudFrontOriginAccessIdentities2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributions2020_05_31Request&, const Model::ListDistributions2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributions2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByCachePolicyId2020_05_31Request&, const Model::ListDistributionsByCachePolicyId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByKeyGroup2020_05_31Request&, const Model::ListDistributionsByKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request&, const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request&, const Model::ListDistributionsByRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListDistributionsByWebACLId2020_05_31Request&, const Model::ListDistributionsByWebACLId2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionConfigs2020_05_31Request&, const Model::ListFieldLevelEncryptionConfigs2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListFieldLevelEncryptionProfiles2020_05_31Request&, const Model::ListFieldLevelEncryptionProfiles2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListInvalidations2020_05_31Request&, const Model::ListInvalidations2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvalidations2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListKeyGroups2020_05_31Request&, const Model::ListKeyGroups2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeyGroups2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListOriginRequestPolicies2020_05_31Request&, const Model::ListOriginRequestPolicies2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginRequestPolicies2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListPublicKeys2020_05_31Request&, const Model::ListPublicKeys2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPublicKeys2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListRealtimeLogConfigs2020_05_31Request&, const Model::ListRealtimeLogConfigs2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListStreamingDistributions2020_05_31Request&, const Model::ListStreamingDistributions2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamingDistributions2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::ListTagsForResource2020_05_31Request&, const Model::ListTagsForResource2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResource2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::TagResource2020_05_31Request&, const Model::TagResource2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResource2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UntagResource2020_05_31Request&, const Model::UntagResource2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResource2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCachePolicy2020_05_31Request&, const Model::UpdateCachePolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCachePolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request&, const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateDistribution2020_05_31Request&, const Model::UpdateDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistribution2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request&, const Model::UpdateFieldLevelEncryptionConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request&, const Model::UpdateFieldLevelEncryptionProfile2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateKeyGroup2020_05_31Request&, const Model::UpdateKeyGroup2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateKeyGroup2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateOriginRequestPolicy2020_05_31Request&, const Model::UpdateOriginRequestPolicy2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdatePublicKey2020_05_31Request&, const Model::UpdatePublicKey2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicKey2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateRealtimeLogConfig2020_05_31Request&, const Model::UpdateRealtimeLogConfig2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler;
    typedef std::function<void(const CloudFrontClient*, const Model::UpdateStreamingDistribution2020_05_31Request&, const Model::UpdateStreamingDistribution2020_05_31Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStreamingDistribution2020_05_31ResponseReceivedHandler;

  /**
   * <fullname>Amazon CloudFront</fullname> <p>This is the <i>Amazon CloudFront API
   * Reference</i>. This guide is for developers who need detailed information about
   * CloudFront API actions, data types, and errors. For detailed information about
   * CloudFront features, see the <i>Amazon CloudFront Developer Guide</i>.</p>
   */
  class AWS_CLOUDFRONT_API CloudFrontClient : public Aws::Client::AWSXMLClient
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudFrontClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudFrontClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~CloudFrontClient();


        /**
         * <p>Creates a cache policy.</p> <p>After you create a cache policy, you can
         * attach it to one or more cache behaviors. When it’s attached to a cache
         * behavior, the cache policy determines the following:</p> <ul> <li> <p>The values
         * that CloudFront includes in the <i>cache key</i>. These values can include HTTP
         * headers, cookies, and URL query strings. CloudFront uses the cache key to find
         * an object in its cache that it can return to the viewer.</p> </li> <li> <p>The
         * default, minimum, and maximum time to live (TTL) values that you want objects to
         * stay in the CloudFront cache.</p> </li> </ul> <p>The headers, cookies, and query
         * strings that are included in the cache key are automatically included in
         * requests that CloudFront sends to the origin. CloudFront sends a request when it
         * can’t find an object in its cache that matches the request’s cache key. If you
         * want to send values to the origin but <i>not</i> include them in the cache key,
         * use <code>OriginRequestPolicy</code>.</p> <p>For more information about cache
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html">Controlling
         * the cache key</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCachePolicy2020_05_31Outcome CreateCachePolicy2020_05_31(const Model::CreateCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Creates a cache policy.</p> <p>After you create a cache policy, you can
         * attach it to one or more cache behaviors. When it’s attached to a cache
         * behavior, the cache policy determines the following:</p> <ul> <li> <p>The values
         * that CloudFront includes in the <i>cache key</i>. These values can include HTTP
         * headers, cookies, and URL query strings. CloudFront uses the cache key to find
         * an object in its cache that it can return to the viewer.</p> </li> <li> <p>The
         * default, minimum, and maximum time to live (TTL) values that you want objects to
         * stay in the CloudFront cache.</p> </li> </ul> <p>The headers, cookies, and query
         * strings that are included in the cache key are automatically included in
         * requests that CloudFront sends to the origin. CloudFront sends a request when it
         * can’t find an object in its cache that matches the request’s cache key. If you
         * want to send values to the origin but <i>not</i> include them in the cache key,
         * use <code>OriginRequestPolicy</code>.</p> <p>For more information about cache
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html">Controlling
         * the cache key</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCachePolicy2020_05_31OutcomeCallable CreateCachePolicy2020_05_31Callable(const Model::CreateCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Creates a cache policy.</p> <p>After you create a cache policy, you can
         * attach it to one or more cache behaviors. When it’s attached to a cache
         * behavior, the cache policy determines the following:</p> <ul> <li> <p>The values
         * that CloudFront includes in the <i>cache key</i>. These values can include HTTP
         * headers, cookies, and URL query strings. CloudFront uses the cache key to find
         * an object in its cache that it can return to the viewer.</p> </li> <li> <p>The
         * default, minimum, and maximum time to live (TTL) values that you want objects to
         * stay in the CloudFront cache.</p> </li> </ul> <p>The headers, cookies, and query
         * strings that are included in the cache key are automatically included in
         * requests that CloudFront sends to the origin. CloudFront sends a request when it
         * can’t find an object in its cache that matches the request’s cache key. If you
         * want to send values to the origin but <i>not</i> include them in the cache key,
         * use <code>OriginRequestPolicy</code>.</p> <p>For more information about cache
         * policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-the-cache-key.html">Controlling
         * the cache key</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCachePolicy2020_05_31Async(const Model::CreateCachePolicy2020_05_31Request& request, const CreateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2020_05_31Outcome CreateCloudFrontOriginAccessIdentity2020_05_31(const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable CreateCloudFrontOriginAccessIdentity2020_05_31Callable(const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Creates a new origin access identity. If you're using Amazon S3 for your
         * origin, you can use an origin access identity to require users to access your
         * content using a CloudFront URL instead of the Amazon S3 URL. For more
         * information about how to use origin access identities, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * Private Content through CloudFront</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFrontOriginAccessIdentity2020_05_31Async(const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request& request, const CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p>  <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
         * follow the steps included in the documentation to get the current configuration
         * and then make your updates. This helps to make sure that you include all of the
         * required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistribution2020_05_31Outcome CreateDistribution2020_05_31(const Model::CreateDistribution2020_05_31Request& request) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p>  <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
         * follow the steps included in the documentation to get the current configuration
         * and then make your updates. This helps to make sure that you include all of the
         * required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistribution2020_05_31OutcomeCallable CreateDistribution2020_05_31Callable(const Model::CreateDistribution2020_05_31Request& request) const;

        /**
         * <p>Creates a new web distribution. You create a CloudFront distribution to tell
         * CloudFront where you want content to be delivered from, and the details about
         * how to track and manage content delivery. Send a <code>POST</code> request to
         * the <code>/<i>CloudFront API version</i>/distribution</code>/<code>distribution
         * ID</code> resource.</p>  <p>When you update a distribution, there are
         * more required fields than when you create a distribution. When you update your
         * distribution by using <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_UpdateDistribution.html">UpdateDistribution</a>,
         * follow the steps included in the documentation to get the current configuration
         * and then make your updates. This helps to make sure that you include all of the
         * required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistribution2020_05_31Async(const Model::CreateDistribution2020_05_31Request& request, const CreateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionWithTags2020_05_31Outcome CreateDistributionWithTags2020_05_31(const Model::CreateDistributionWithTags2020_05_31Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionWithTags2020_05_31OutcomeCallable CreateDistributionWithTags2020_05_31Callable(const Model::CreateDistributionWithTags2020_05_31Request& request) const;

        /**
         * <p>Create a new distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionWithTags2020_05_31Async(const Model::CreateDistributionWithTags2020_05_31Request& request, const CreateDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionConfig2020_05_31Outcome CreateFieldLevelEncryptionConfig2020_05_31(const Model::CreateFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldLevelEncryptionConfig2020_05_31OutcomeCallable CreateFieldLevelEncryptionConfig2020_05_31Callable(const Model::CreateFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Create a new field-level encryption configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldLevelEncryptionConfig2020_05_31Async(const Model::CreateFieldLevelEncryptionConfig2020_05_31Request& request, const CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldLevelEncryptionProfile2020_05_31Outcome CreateFieldLevelEncryptionProfile2020_05_31(const Model::CreateFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFieldLevelEncryptionProfile2020_05_31OutcomeCallable CreateFieldLevelEncryptionProfile2020_05_31Callable(const Model::CreateFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Create a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFieldLevelEncryptionProfile2020_05_31Async(const Model::CreateFieldLevelEncryptionProfile2020_05_31Request& request, const CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateInvalidation2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInvalidation2020_05_31Outcome CreateInvalidation2020_05_31(const Model::CreateInvalidation2020_05_31Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateInvalidation2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInvalidation2020_05_31OutcomeCallable CreateInvalidation2020_05_31Callable(const Model::CreateInvalidation2020_05_31Request& request) const;

        /**
         * <p>Create a new invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateInvalidation2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInvalidation2020_05_31Async(const Model::CreateInvalidation2020_05_31Request& request, const CreateInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a key group that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront
         * signed URLs and signed cookies</a>.</p> <p>To create a key group, you must
         * specify at least one public key for the key group. After you create a key group,
         * you can reference it from one or more cache behaviors. When you reference a key
         * group in a cache behavior, CloudFront requires signed URLs or signed cookies for
         * all requests that match the cache behavior. The URLs or cookies must be signed
         * with a private key whose corresponding public key is in the key group. The
         * signed URL or cookie contains information about which public key CloudFront
         * should use to verify the signature. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * private content</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyGroup2020_05_31Outcome CreateKeyGroup2020_05_31(const Model::CreateKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Creates a key group that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront
         * signed URLs and signed cookies</a>.</p> <p>To create a key group, you must
         * specify at least one public key for the key group. After you create a key group,
         * you can reference it from one or more cache behaviors. When you reference a key
         * group in a cache behavior, CloudFront requires signed URLs or signed cookies for
         * all requests that match the cache behavior. The URLs or cookies must be signed
         * with a private key whose corresponding public key is in the key group. The
         * signed URL or cookie contains information about which public key CloudFront
         * should use to verify the signature. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * private content</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyGroup2020_05_31OutcomeCallable CreateKeyGroup2020_05_31Callable(const Model::CreateKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Creates a key group that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">CloudFront
         * signed URLs and signed cookies</a>.</p> <p>To create a key group, you must
         * specify at least one public key for the key group. After you create a key group,
         * you can reference it from one or more cache behaviors. When you reference a key
         * group in a cache behavior, CloudFront requires signed URLs or signed cookies for
         * all requests that match the cache behavior. The URLs or cookies must be signed
         * with a private key whose corresponding public key is in the key group. The
         * signed URL or cookie contains information about which public key CloudFront
         * should use to verify the signature. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">Serving
         * private content</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyGroup2020_05_31Async(const Model::CreateKeyGroup2020_05_31Request& request, const CreateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables additional CloudWatch metrics for the specified CloudFront
         * distribution. The additional metrics incur an additional cost.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/viewing-cloudfront-metrics.html#monitoring-console.distributions-additional">Viewing
         * additional CloudFront distribution metrics</a> in the <i>Amazon CloudFront
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitoringSubscription2020_05_31Outcome CreateMonitoringSubscription2020_05_31(const Model::CreateMonitoringSubscription2020_05_31Request& request) const;

        /**
         * <p>Enables additional CloudWatch metrics for the specified CloudFront
         * distribution. The additional metrics incur an additional cost.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/viewing-cloudfront-metrics.html#monitoring-console.distributions-additional">Viewing
         * additional CloudFront distribution metrics</a> in the <i>Amazon CloudFront
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMonitoringSubscription2020_05_31OutcomeCallable CreateMonitoringSubscription2020_05_31Callable(const Model::CreateMonitoringSubscription2020_05_31Request& request) const;

        /**
         * <p>Enables additional CloudWatch metrics for the specified CloudFront
         * distribution. The additional metrics incur an additional cost.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/viewing-cloudfront-metrics.html#monitoring-console.distributions-additional">Viewing
         * additional CloudFront distribution metrics</a> in the <i>Amazon CloudFront
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMonitoringSubscription2020_05_31Async(const Model::CreateMonitoringSubscription2020_05_31Request& request, const CreateMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an origin request policy.</p> <p>After you create an origin request
         * policy, you can attach it to one or more cache behaviors. When it’s attached to
         * a cache behavior, the origin request policy determines the values that
         * CloudFront includes in requests that it sends to the origin. Each request that
         * CloudFront sends to the origin includes the following:</p> <ul> <li> <p>The
         * request body and the URL path (without the domain name) from the viewer
         * request.</p> </li> <li> <p>The headers that CloudFront automatically includes in
         * every origin request, including <code>Host</code>, <code>User-Agent</code>, and
         * <code>X-Amz-Cf-Id</code>.</p> </li> <li> <p>All HTTP headers, cookies, and URL
         * query strings that are specified in the cache policy or the origin request
         * policy. These can include items from the viewer request and, in the case of
         * headers, additional ones that are added by CloudFront.</p> </li> </ul>
         * <p>CloudFront sends a request when it can’t find a valid object in its cache
         * that matches the request. If you want to send values to the origin and also
         * include them in the cache key, use <code>CachePolicy</code>.</p> <p>For more
         * information about origin request policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html">Controlling
         * origin requests</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOriginRequestPolicy2020_05_31Outcome CreateOriginRequestPolicy2020_05_31(const Model::CreateOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Creates an origin request policy.</p> <p>After you create an origin request
         * policy, you can attach it to one or more cache behaviors. When it’s attached to
         * a cache behavior, the origin request policy determines the values that
         * CloudFront includes in requests that it sends to the origin. Each request that
         * CloudFront sends to the origin includes the following:</p> <ul> <li> <p>The
         * request body and the URL path (without the domain name) from the viewer
         * request.</p> </li> <li> <p>The headers that CloudFront automatically includes in
         * every origin request, including <code>Host</code>, <code>User-Agent</code>, and
         * <code>X-Amz-Cf-Id</code>.</p> </li> <li> <p>All HTTP headers, cookies, and URL
         * query strings that are specified in the cache policy or the origin request
         * policy. These can include items from the viewer request and, in the case of
         * headers, additional ones that are added by CloudFront.</p> </li> </ul>
         * <p>CloudFront sends a request when it can’t find a valid object in its cache
         * that matches the request. If you want to send values to the origin and also
         * include them in the cache key, use <code>CachePolicy</code>.</p> <p>For more
         * information about origin request policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html">Controlling
         * origin requests</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOriginRequestPolicy2020_05_31OutcomeCallable CreateOriginRequestPolicy2020_05_31Callable(const Model::CreateOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Creates an origin request policy.</p> <p>After you create an origin request
         * policy, you can attach it to one or more cache behaviors. When it’s attached to
         * a cache behavior, the origin request policy determines the values that
         * CloudFront includes in requests that it sends to the origin. Each request that
         * CloudFront sends to the origin includes the following:</p> <ul> <li> <p>The
         * request body and the URL path (without the domain name) from the viewer
         * request.</p> </li> <li> <p>The headers that CloudFront automatically includes in
         * every origin request, including <code>Host</code>, <code>User-Agent</code>, and
         * <code>X-Amz-Cf-Id</code>.</p> </li> <li> <p>All HTTP headers, cookies, and URL
         * query strings that are specified in the cache policy or the origin request
         * policy. These can include items from the viewer request and, in the case of
         * headers, additional ones that are added by CloudFront.</p> </li> </ul>
         * <p>CloudFront sends a request when it can’t find a valid object in its cache
         * that matches the request. If you want to send values to the origin and also
         * include them in the cache key, use <code>CachePolicy</code>.</p> <p>For more
         * information about origin request policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/controlling-origin-requests.html">Controlling
         * origin requests</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOriginRequestPolicy2020_05_31Async(const Model::CreateOriginRequestPolicy2020_05_31Request& request, const CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads a public key to CloudFront that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
         * URLs and signed cookies</a>, or with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
         * encryption</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePublicKey2020_05_31Outcome CreatePublicKey2020_05_31(const Model::CreatePublicKey2020_05_31Request& request) const;

        /**
         * <p>Uploads a public key to CloudFront that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
         * URLs and signed cookies</a>, or with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
         * encryption</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePublicKey2020_05_31OutcomeCallable CreatePublicKey2020_05_31Callable(const Model::CreatePublicKey2020_05_31Request& request) const;

        /**
         * <p>Uploads a public key to CloudFront that you can use with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/PrivateContent.html">signed
         * URLs and signed cookies</a>, or with <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/field-level-encryption.html">field-level
         * encryption</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePublicKey2020_05_31Async(const Model::CreatePublicKey2020_05_31Request& request, const CreatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a real-time log configuration.</p> <p>After you create a real-time
         * log configuration, you can attach it to one or more cache behaviors to send
         * real-time log data to the specified Amazon Kinesis data stream.</p> <p>For more
         * information about real-time log configurations, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
         * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRealtimeLogConfig2020_05_31Outcome CreateRealtimeLogConfig2020_05_31(const Model::CreateRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Creates a real-time log configuration.</p> <p>After you create a real-time
         * log configuration, you can attach it to one or more cache behaviors to send
         * real-time log data to the specified Amazon Kinesis data stream.</p> <p>For more
         * information about real-time log configurations, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
         * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRealtimeLogConfig2020_05_31OutcomeCallable CreateRealtimeLogConfig2020_05_31Callable(const Model::CreateRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Creates a real-time log configuration.</p> <p>After you create a real-time
         * log configuration, you can attach it to one or more cache behaviors to send
         * real-time log data to the specified Amazon Kinesis data stream.</p> <p>For more
         * information about real-time log configurations, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/real-time-logs.html">Real-time
         * logs</a> in the <i>Amazon CloudFront Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRealtimeLogConfig2020_05_31Async(const Model::CreateRealtimeLogConfig2020_05_31Request& request, const CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new RTMP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         *  <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistribution2020_05_31Outcome CreateStreamingDistribution2020_05_31(const Model::CreateStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Creates a new RTMP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         *  <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistribution2020_05_31OutcomeCallable CreateStreamingDistribution2020_05_31Callable(const Model::CreateStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Creates a new RTMP distribution. An RTMP distribution is similar to a web
         * distribution, but an RTMP distribution streams media files using the Adobe
         * Real-Time Messaging Protocol (RTMP) instead of serving files using HTTP. </p>
         * <p>To create a new distribution, submit a <code>POST</code> request to the
         * <i>CloudFront API version</i>/distribution resource. The request body must
         * include a document with a <i>StreamingDistributionConfig</i> element. The
         * response echoes the <code>StreamingDistributionConfig</code> element and returns
         * other information about the RTMP distribution.</p> <p>To get the status of your
         * request, use the <i>GET StreamingDistribution</i> API action. When the value of
         * <code>Enabled</code> is <code>true</code> and the value of <code>Status</code>
         * is <code>Deployed</code>, your distribution is ready. A distribution usually
         * deploys in less than 15 minutes.</p> <p>For more information about web
         * distributions, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-rtmp.html">Working
         * with RTMP Distributions</a> in the <i>Amazon CloudFront Developer Guide</i>.</p>
         *  <p>Beginning with the 2012-05-05 version of the CloudFront API, we
         * made substantial changes to the format of the XML document that you include in
         * the request body when you create or update a web distribution or an RTMP
         * distribution, and when you invalidate objects. With previous versions of the
         * API, we discovered that it was too easy to accidentally delete one or more
         * values for an element that accepts multiple values, for example, CNAMEs and
         * trusted signers. Our changes for the 2012-05-05 release are intended to prevent
         * these accidental deletions and to notify you when there's a mismatch between the
         * number of values you say you're specifying in the <code>Quantity</code> element
         * and the number of values specified.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistribution2020_05_31Async(const Model::CreateStreamingDistribution2020_05_31Request& request, const CreateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingDistributionWithTags2020_05_31Outcome CreateStreamingDistributionWithTags2020_05_31(const Model::CreateStreamingDistributionWithTags2020_05_31Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingDistributionWithTags2020_05_31OutcomeCallable CreateStreamingDistributionWithTags2020_05_31Callable(const Model::CreateStreamingDistributionWithTags2020_05_31Request& request) const;

        /**
         * <p>Create a new streaming distribution with tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CreateStreamingDistributionWithTags2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingDistributionWithTags2020_05_31Async(const Model::CreateStreamingDistributionWithTags2020_05_31Request& request, const CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a cache policy.</p> <p>You cannot delete a cache policy if it’s
         * attached to a cache behavior. First update your distributions to remove the
         * cache policy from all cache behaviors, then delete the cache policy.</p> <p>To
         * delete a cache policy, you must provide the policy’s identifier and version. To
         * get these values, you can use <code>ListCachePolicies</code> or
         * <code>GetCachePolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCachePolicy2020_05_31Outcome DeleteCachePolicy2020_05_31(const Model::DeleteCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Deletes a cache policy.</p> <p>You cannot delete a cache policy if it’s
         * attached to a cache behavior. First update your distributions to remove the
         * cache policy from all cache behaviors, then delete the cache policy.</p> <p>To
         * delete a cache policy, you must provide the policy’s identifier and version. To
         * get these values, you can use <code>ListCachePolicies</code> or
         * <code>GetCachePolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCachePolicy2020_05_31OutcomeCallable DeleteCachePolicy2020_05_31Callable(const Model::DeleteCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Deletes a cache policy.</p> <p>You cannot delete a cache policy if it’s
         * attached to a cache behavior. First update your distributions to remove the
         * cache policy from all cache behaviors, then delete the cache policy.</p> <p>To
         * delete a cache policy, you must provide the policy’s identifier and version. To
         * get these values, you can use <code>ListCachePolicies</code> or
         * <code>GetCachePolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCachePolicy2020_05_31Async(const Model::DeleteCachePolicy2020_05_31Request& request, const DeleteCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Outcome DeleteCloudFrontOriginAccessIdentity2020_05_31(const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable DeleteCloudFrontOriginAccessIdentity2020_05_31Callable(const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Delete an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCloudFrontOriginAccessIdentity2020_05_31Async(const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request, const DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistribution2020_05_31Outcome DeleteDistribution2020_05_31(const Model::DeleteDistribution2020_05_31Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistribution2020_05_31OutcomeCallable DeleteDistribution2020_05_31Callable(const Model::DeleteDistribution2020_05_31Request& request) const;

        /**
         * <p>Delete a distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistribution2020_05_31Async(const Model::DeleteDistribution2020_05_31Request& request, const DeleteDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2020_05_31Outcome DeleteFieldLevelEncryptionConfig2020_05_31(const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFieldLevelEncryptionConfig2020_05_31OutcomeCallable DeleteFieldLevelEncryptionConfig2020_05_31Callable(const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Remove a field-level encryption configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFieldLevelEncryptionConfig2020_05_31Async(const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request& request, const DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2020_05_31Outcome DeleteFieldLevelEncryptionProfile2020_05_31(const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFieldLevelEncryptionProfile2020_05_31OutcomeCallable DeleteFieldLevelEncryptionProfile2020_05_31Callable(const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Remove a field-level encryption profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFieldLevelEncryptionProfile2020_05_31Async(const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request& request, const DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a key group.</p> <p>You cannot delete a key group that is referenced
         * in a cache behavior. First update your distributions to remove the key group
         * from all cache behaviors, then delete the key group.</p> <p>To delete a key
         * group, you must provide the key group’s identifier and version. To get these
         * values, use <code>ListKeyGroups</code> followed by <code>GetKeyGroup</code> or
         * <code>GetKeyGroupConfig</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyGroup2020_05_31Outcome DeleteKeyGroup2020_05_31(const Model::DeleteKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Deletes a key group.</p> <p>You cannot delete a key group that is referenced
         * in a cache behavior. First update your distributions to remove the key group
         * from all cache behaviors, then delete the key group.</p> <p>To delete a key
         * group, you must provide the key group’s identifier and version. To get these
         * values, use <code>ListKeyGroups</code> followed by <code>GetKeyGroup</code> or
         * <code>GetKeyGroupConfig</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeyGroup2020_05_31OutcomeCallable DeleteKeyGroup2020_05_31Callable(const Model::DeleteKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Deletes a key group.</p> <p>You cannot delete a key group that is referenced
         * in a cache behavior. First update your distributions to remove the key group
         * from all cache behaviors, then delete the key group.</p> <p>To delete a key
         * group, you must provide the key group’s identifier and version. To get these
         * values, use <code>ListKeyGroups</code> followed by <code>GetKeyGroup</code> or
         * <code>GetKeyGroupConfig</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKeyGroup2020_05_31Async(const Model::DeleteKeyGroup2020_05_31Request& request, const DeleteKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables additional CloudWatch metrics for the specified CloudFront
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitoringSubscription2020_05_31Outcome DeleteMonitoringSubscription2020_05_31(const Model::DeleteMonitoringSubscription2020_05_31Request& request) const;

        /**
         * <p>Disables additional CloudWatch metrics for the specified CloudFront
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMonitoringSubscription2020_05_31OutcomeCallable DeleteMonitoringSubscription2020_05_31Callable(const Model::DeleteMonitoringSubscription2020_05_31Request& request) const;

        /**
         * <p>Disables additional CloudWatch metrics for the specified CloudFront
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMonitoringSubscription2020_05_31Async(const Model::DeleteMonitoringSubscription2020_05_31Request& request, const DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an origin request policy.</p> <p>You cannot delete an origin request
         * policy if it’s attached to any cache behaviors. First update your distributions
         * to remove the origin request policy from all cache behaviors, then delete the
         * origin request policy.</p> <p>To delete an origin request policy, you must
         * provide the policy’s identifier and version. To get the identifier, you can use
         * <code>ListOriginRequestPolicies</code> or
         * <code>GetOriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOriginRequestPolicy2020_05_31Outcome DeleteOriginRequestPolicy2020_05_31(const Model::DeleteOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Deletes an origin request policy.</p> <p>You cannot delete an origin request
         * policy if it’s attached to any cache behaviors. First update your distributions
         * to remove the origin request policy from all cache behaviors, then delete the
         * origin request policy.</p> <p>To delete an origin request policy, you must
         * provide the policy’s identifier and version. To get the identifier, you can use
         * <code>ListOriginRequestPolicies</code> or
         * <code>GetOriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOriginRequestPolicy2020_05_31OutcomeCallable DeleteOriginRequestPolicy2020_05_31Callable(const Model::DeleteOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Deletes an origin request policy.</p> <p>You cannot delete an origin request
         * policy if it’s attached to any cache behaviors. First update your distributions
         * to remove the origin request policy from all cache behaviors, then delete the
         * origin request policy.</p> <p>To delete an origin request policy, you must
         * provide the policy’s identifier and version. To get the identifier, you can use
         * <code>ListOriginRequestPolicies</code> or
         * <code>GetOriginRequestPolicy</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOriginRequestPolicy2020_05_31Async(const Model::DeleteOriginRequestPolicy2020_05_31Request& request, const DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeletePublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePublicKey2020_05_31Outcome DeletePublicKey2020_05_31(const Model::DeletePublicKey2020_05_31Request& request) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeletePublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePublicKey2020_05_31OutcomeCallable DeletePublicKey2020_05_31Callable(const Model::DeletePublicKey2020_05_31Request& request) const;

        /**
         * <p>Remove a public key you previously added to CloudFront.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeletePublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePublicKey2020_05_31Async(const Model::DeletePublicKey2020_05_31Request& request, const DeletePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a real-time log configuration.</p> <p>You cannot delete a real-time
         * log configuration if it’s attached to a cache behavior. First update your
         * distributions to remove the real-time log configuration from all cache
         * behaviors, then delete the real-time log configuration.</p> <p>To delete a
         * real-time log configuration, you can provide the configuration’s name or its
         * Amazon Resource Name (ARN). You must provide at least one. If you provide both,
         * CloudFront uses the name to identify the real-time log configuration to
         * delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRealtimeLogConfig2020_05_31Outcome DeleteRealtimeLogConfig2020_05_31(const Model::DeleteRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Deletes a real-time log configuration.</p> <p>You cannot delete a real-time
         * log configuration if it’s attached to a cache behavior. First update your
         * distributions to remove the real-time log configuration from all cache
         * behaviors, then delete the real-time log configuration.</p> <p>To delete a
         * real-time log configuration, you can provide the configuration’s name or its
         * Amazon Resource Name (ARN). You must provide at least one. If you provide both,
         * CloudFront uses the name to identify the real-time log configuration to
         * delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRealtimeLogConfig2020_05_31OutcomeCallable DeleteRealtimeLogConfig2020_05_31Callable(const Model::DeleteRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Deletes a real-time log configuration.</p> <p>You cannot delete a real-time
         * log configuration if it’s attached to a cache behavior. First update your
         * distributions to remove the real-time log configuration from all cache
         * behaviors, then delete the real-time log configuration.</p> <p>To delete a
         * real-time log configuration, you can provide the configuration’s name or its
         * Amazon Resource Name (ARN). You must provide at least one. If you provide both,
         * CloudFront uses the name to identify the real-time log configuration to
         * delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRealtimeLogConfig2020_05_31Async(const Model::DeleteRealtimeLogConfig2020_05_31Request& request, const DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingDistribution2020_05_31Outcome DeleteStreamingDistribution2020_05_31(const Model::DeleteStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingDistribution2020_05_31OutcomeCallable DeleteStreamingDistribution2020_05_31Callable(const Model::DeleteStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Delete a streaming distribution. To delete an RTMP distribution using the
         * CloudFront API, perform the following steps.</p> <p> <b>To delete an RTMP
         * distribution using the CloudFront API</b>:</p> <ol> <li> <p>Disable the RTMP
         * distribution.</p> </li> <li> <p>Submit a <code>GET Streaming Distribution
         * Config</code> request to get the current configuration and the <code>Etag</code>
         * header for the distribution. </p> </li> <li> <p>Update the XML document that was
         * returned in the response to your <code>GET Streaming Distribution Config</code>
         * request to change the value of <code>Enabled</code> to <code>false</code>.</p>
         * </li> <li> <p>Submit a <code>PUT Streaming Distribution Config</code> request to
         * update the configuration for your distribution. In the request body, include the
         * XML document that you updated in Step 3. Then set the value of the HTTP
         * <code>If-Match</code> header to the value of the <code>ETag</code> header that
         * CloudFront returned when you submitted the <code>GET Streaming Distribution
         * Config</code> request in Step 2.</p> </li> <li> <p>Review the response to the
         * <code>PUT Streaming Distribution Config</code> request to confirm that the
         * distribution was successfully disabled.</p> </li> <li> <p>Submit a <code>GET
         * Streaming Distribution Config</code> request to confirm that your changes have
         * propagated. When propagation is complete, the value of <code>Status</code> is
         * <code>Deployed</code>.</p> </li> <li> <p>Submit a <code>DELETE Streaming
         * Distribution</code> request. Set the value of the HTTP <code>If-Match</code>
         * header to the value of the <code>ETag</code> header that CloudFront returned
         * when you submitted the <code>GET Streaming Distribution Config</code> request in
         * Step 2.</p> </li> <li> <p>Review the response to your <code>DELETE Streaming
         * Distribution</code> request to confirm that the distribution was successfully
         * deleted.</p> </li> </ol> <p>For information about deleting a distribution using
         * the CloudFront console, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/HowToDeleteDistribution.html">Deleting
         * a Distribution</a> in the <i>Amazon CloudFront Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DeleteStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingDistribution2020_05_31Async(const Model::DeleteStreamingDistribution2020_05_31Request& request, const DeleteStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a cache policy, including the following metadata:</p> <ul> <li> <p>The
         * policy’s identifier.</p> </li> <li> <p>The date and time when the policy was
         * last modified.</p> </li> </ul> <p>To get a cache policy, you must provide the
         * policy’s identifier. If the cache policy is attached to a distribution’s cache
         * behavior, you can get the policy’s identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the cache
         * policy is not attached to a cache behavior, you can get the identifier using
         * <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCachePolicy2020_05_31Outcome GetCachePolicy2020_05_31(const Model::GetCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Gets a cache policy, including the following metadata:</p> <ul> <li> <p>The
         * policy’s identifier.</p> </li> <li> <p>The date and time when the policy was
         * last modified.</p> </li> </ul> <p>To get a cache policy, you must provide the
         * policy’s identifier. If the cache policy is attached to a distribution’s cache
         * behavior, you can get the policy’s identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the cache
         * policy is not attached to a cache behavior, you can get the identifier using
         * <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCachePolicy2020_05_31OutcomeCallable GetCachePolicy2020_05_31Callable(const Model::GetCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Gets a cache policy, including the following metadata:</p> <ul> <li> <p>The
         * policy’s identifier.</p> </li> <li> <p>The date and time when the policy was
         * last modified.</p> </li> </ul> <p>To get a cache policy, you must provide the
         * policy’s identifier. If the cache policy is attached to a distribution’s cache
         * behavior, you can get the policy’s identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the cache
         * policy is not attached to a cache behavior, you can get the identifier using
         * <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCachePolicy2020_05_31Async(const Model::GetCachePolicy2020_05_31Request& request, const GetCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a cache policy configuration.</p> <p>To get a cache policy
         * configuration, you must provide the policy’s identifier. If the cache policy is
         * attached to a distribution’s cache behavior, you can get the policy’s identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * cache policy is not attached to a cache behavior, you can get the identifier
         * using <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCachePolicyConfig2020_05_31Outcome GetCachePolicyConfig2020_05_31(const Model::GetCachePolicyConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a cache policy configuration.</p> <p>To get a cache policy
         * configuration, you must provide the policy’s identifier. If the cache policy is
         * attached to a distribution’s cache behavior, you can get the policy’s identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * cache policy is not attached to a cache behavior, you can get the identifier
         * using <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCachePolicyConfig2020_05_31OutcomeCallable GetCachePolicyConfig2020_05_31Callable(const Model::GetCachePolicyConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a cache policy configuration.</p> <p>To get a cache policy
         * configuration, you must provide the policy’s identifier. If the cache policy is
         * attached to a distribution’s cache behavior, you can get the policy’s identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * cache policy is not attached to a cache behavior, you can get the identifier
         * using <code>ListCachePolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCachePolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCachePolicyConfig2020_05_31Async(const Model::GetCachePolicyConfig2020_05_31Request& request, const GetCachePolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2020_05_31Outcome GetCloudFrontOriginAccessIdentity2020_05_31(const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable GetCloudFrontOriginAccessIdentity2020_05_31Callable(const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Get the information about an origin access identity. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentity2020_05_31Async(const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request& request, const GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentityConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Outcome GetCloudFrontOriginAccessIdentityConfig2020_05_31(const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentityConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31OutcomeCallable GetCloudFrontOriginAccessIdentityConfig2020_05_31Callable(const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request) const;

        /**
         * <p>Get the configuration information about an origin access identity.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetCloudFrontOriginAccessIdentityConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFrontOriginAccessIdentityConfig2020_05_31Async(const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request, const GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistribution2020_05_31Outcome GetDistribution2020_05_31(const Model::GetDistribution2020_05_31Request& request) const;

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistribution2020_05_31OutcomeCallable GetDistribution2020_05_31Callable(const Model::GetDistribution2020_05_31Request& request) const;

        /**
         * <p>Get the information about a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistribution2020_05_31Async(const Model::GetDistribution2020_05_31Request& request, const GetDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionConfig2020_05_31Outcome GetDistributionConfig2020_05_31(const Model::GetDistributionConfig2020_05_31Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionConfig2020_05_31OutcomeCallable GetDistributionConfig2020_05_31Callable(const Model::GetDistributionConfig2020_05_31Request& request) const;

        /**
         * <p>Get the configuration information about a distribution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionConfig2020_05_31Async(const Model::GetDistributionConfig2020_05_31Request& request, const GetDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryption2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryption2020_05_31Outcome GetFieldLevelEncryption2020_05_31(const Model::GetFieldLevelEncryption2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryption2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryption2020_05_31OutcomeCallable GetFieldLevelEncryption2020_05_31Callable(const Model::GetFieldLevelEncryption2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryption2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryption2020_05_31Async(const Model::GetFieldLevelEncryption2020_05_31Request& request, const GetFieldLevelEncryption2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionConfig2020_05_31Outcome GetFieldLevelEncryptionConfig2020_05_31(const Model::GetFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionConfig2020_05_31OutcomeCallable GetFieldLevelEncryptionConfig2020_05_31Callable(const Model::GetFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption configuration information.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionConfig2020_05_31Async(const Model::GetFieldLevelEncryptionConfig2020_05_31Request& request, const GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfile2020_05_31Outcome GetFieldLevelEncryptionProfile2020_05_31(const Model::GetFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionProfile2020_05_31OutcomeCallable GetFieldLevelEncryptionProfile2020_05_31Callable(const Model::GetFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption profile information.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionProfile2020_05_31Async(const Model::GetFieldLevelEncryptionProfile2020_05_31Request& request, const GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfileConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2020_05_31Outcome GetFieldLevelEncryptionProfileConfig2020_05_31(const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfileConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFieldLevelEncryptionProfileConfig2020_05_31OutcomeCallable GetFieldLevelEncryptionProfileConfig2020_05_31Callable(const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request& request) const;

        /**
         * <p>Get the field-level encryption profile configuration
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetFieldLevelEncryptionProfileConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFieldLevelEncryptionProfileConfig2020_05_31Async(const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request& request, const GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetInvalidation2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInvalidation2020_05_31Outcome GetInvalidation2020_05_31(const Model::GetInvalidation2020_05_31Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetInvalidation2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInvalidation2020_05_31OutcomeCallable GetInvalidation2020_05_31Callable(const Model::GetInvalidation2020_05_31Request& request) const;

        /**
         * <p>Get the information about an invalidation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetInvalidation2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInvalidation2020_05_31Async(const Model::GetInvalidation2020_05_31Request& request, const GetInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a key group, including the date and time when the key group was last
         * modified.</p> <p>To get a key group, you must provide the key group��s
         * identifier. If the key group is referenced in a distribution’s cache behavior,
         * you can get the key group’s identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the key group is not referenced in a cache
         * behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyGroup2020_05_31Outcome GetKeyGroup2020_05_31(const Model::GetKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Gets a key group, including the date and time when the key group was last
         * modified.</p> <p>To get a key group, you must provide the key group��s
         * identifier. If the key group is referenced in a distribution’s cache behavior,
         * you can get the key group’s identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the key group is not referenced in a cache
         * behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyGroup2020_05_31OutcomeCallable GetKeyGroup2020_05_31Callable(const Model::GetKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Gets a key group, including the date and time when the key group was last
         * modified.</p> <p>To get a key group, you must provide the key group��s
         * identifier. If the key group is referenced in a distribution’s cache behavior,
         * you can get the key group’s identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the key group is not referenced in a cache
         * behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyGroup2020_05_31Async(const Model::GetKeyGroup2020_05_31Request& request, const GetKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a key group configuration.</p> <p>To get a key group configuration, you
         * must provide the key group’s identifier. If the key group is referenced in a
         * distribution’s cache behavior, you can get the key group’s identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the key group
         * is not referenced in a cache behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroupConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyGroupConfig2020_05_31Outcome GetKeyGroupConfig2020_05_31(const Model::GetKeyGroupConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a key group configuration.</p> <p>To get a key group configuration, you
         * must provide the key group’s identifier. If the key group is referenced in a
         * distribution’s cache behavior, you can get the key group’s identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the key group
         * is not referenced in a cache behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroupConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyGroupConfig2020_05_31OutcomeCallable GetKeyGroupConfig2020_05_31Callable(const Model::GetKeyGroupConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a key group configuration.</p> <p>To get a key group configuration, you
         * must provide the key group’s identifier. If the key group is referenced in a
         * distribution’s cache behavior, you can get the key group’s identifier using
         * <code>ListDistributions</code> or <code>GetDistribution</code>. If the key group
         * is not referenced in a cache behavior, you can get the identifier using
         * <code>ListKeyGroups</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetKeyGroupConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyGroupConfig2020_05_31Async(const Model::GetKeyGroupConfig2020_05_31Request& request, const GetKeyGroupConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about whether additional CloudWatch metrics are enabled for
         * the specified CloudFront distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMonitoringSubscription2020_05_31Outcome GetMonitoringSubscription2020_05_31(const Model::GetMonitoringSubscription2020_05_31Request& request) const;

        /**
         * <p>Gets information about whether additional CloudWatch metrics are enabled for
         * the specified CloudFront distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMonitoringSubscription2020_05_31OutcomeCallable GetMonitoringSubscription2020_05_31Callable(const Model::GetMonitoringSubscription2020_05_31Request& request) const;

        /**
         * <p>Gets information about whether additional CloudWatch metrics are enabled for
         * the specified CloudFront distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetMonitoringSubscription2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMonitoringSubscription2020_05_31Async(const Model::GetMonitoringSubscription2020_05_31Request& request, const GetMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an origin request policy, including the following metadata:</p> <ul>
         * <li> <p>The policy’s identifier.</p> </li> <li> <p>The date and time when the
         * policy was last modified.</p> </li> </ul> <p>To get an origin request policy,
         * you must provide the policy’s identifier. If the origin request policy is
         * attached to a distribution’s cache behavior, you can get the policy’s identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * origin request policy is not attached to a cache behavior, you can get the
         * identifier using <code>ListOriginRequestPolicies</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginRequestPolicy2020_05_31Outcome GetOriginRequestPolicy2020_05_31(const Model::GetOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Gets an origin request policy, including the following metadata:</p> <ul>
         * <li> <p>The policy’s identifier.</p> </li> <li> <p>The date and time when the
         * policy was last modified.</p> </li> </ul> <p>To get an origin request policy,
         * you must provide the policy’s identifier. If the origin request policy is
         * attached to a distribution’s cache behavior, you can get the policy’s identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * origin request policy is not attached to a cache behavior, you can get the
         * identifier using <code>ListOriginRequestPolicies</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOriginRequestPolicy2020_05_31OutcomeCallable GetOriginRequestPolicy2020_05_31Callable(const Model::GetOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Gets an origin request policy, including the following metadata:</p> <ul>
         * <li> <p>The policy’s identifier.</p> </li> <li> <p>The date and time when the
         * policy was last modified.</p> </li> </ul> <p>To get an origin request policy,
         * you must provide the policy’s identifier. If the origin request policy is
         * attached to a distribution’s cache behavior, you can get the policy’s identifier
         * using <code>ListDistributions</code> or <code>GetDistribution</code>. If the
         * origin request policy is not attached to a cache behavior, you can get the
         * identifier using <code>ListOriginRequestPolicies</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOriginRequestPolicy2020_05_31Async(const Model::GetOriginRequestPolicy2020_05_31Request& request, const GetOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an origin request policy configuration.</p> <p>To get an origin request
         * policy configuration, you must provide the policy’s identifier. If the origin
         * request policy is attached to a distribution’s cache behavior, you can get the
         * policy’s identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the origin request policy is not attached to a
         * cache behavior, you can get the identifier using
         * <code>ListOriginRequestPolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOriginRequestPolicyConfig2020_05_31Outcome GetOriginRequestPolicyConfig2020_05_31(const Model::GetOriginRequestPolicyConfig2020_05_31Request& request) const;

        /**
         * <p>Gets an origin request policy configuration.</p> <p>To get an origin request
         * policy configuration, you must provide the policy’s identifier. If the origin
         * request policy is attached to a distribution’s cache behavior, you can get the
         * policy’s identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the origin request policy is not attached to a
         * cache behavior, you can get the identifier using
         * <code>ListOriginRequestPolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOriginRequestPolicyConfig2020_05_31OutcomeCallable GetOriginRequestPolicyConfig2020_05_31Callable(const Model::GetOriginRequestPolicyConfig2020_05_31Request& request) const;

        /**
         * <p>Gets an origin request policy configuration.</p> <p>To get an origin request
         * policy configuration, you must provide the policy’s identifier. If the origin
         * request policy is attached to a distribution’s cache behavior, you can get the
         * policy’s identifier using <code>ListDistributions</code> or
         * <code>GetDistribution</code>. If the origin request policy is not attached to a
         * cache behavior, you can get the identifier using
         * <code>ListOriginRequestPolicies</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetOriginRequestPolicyConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOriginRequestPolicyConfig2020_05_31Async(const Model::GetOriginRequestPolicyConfig2020_05_31Request& request, const GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKey2020_05_31Outcome GetPublicKey2020_05_31(const Model::GetPublicKey2020_05_31Request& request) const;

        /**
         * <p>Gets a public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKey2020_05_31OutcomeCallable GetPublicKey2020_05_31Callable(const Model::GetPublicKey2020_05_31Request& request) const;

        /**
         * <p>Gets a public key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKey2020_05_31Async(const Model::GetPublicKey2020_05_31Request& request, const GetPublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a public key configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKeyConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPublicKeyConfig2020_05_31Outcome GetPublicKeyConfig2020_05_31(const Model::GetPublicKeyConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a public key configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKeyConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPublicKeyConfig2020_05_31OutcomeCallable GetPublicKeyConfig2020_05_31Callable(const Model::GetPublicKeyConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a public key configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetPublicKeyConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPublicKeyConfig2020_05_31Async(const Model::GetPublicKeyConfig2020_05_31Request& request, const GetPublicKeyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a real-time log configuration.</p> <p>To get a real-time log
         * configuration, you can provide the configuration’s name or its Amazon Resource
         * Name (ARN). You must provide at least one. If you provide both, CloudFront uses
         * the name to identify the real-time log configuration to get.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRealtimeLogConfig2020_05_31Outcome GetRealtimeLogConfig2020_05_31(const Model::GetRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a real-time log configuration.</p> <p>To get a real-time log
         * configuration, you can provide the configuration’s name or its Amazon Resource
         * Name (ARN). You must provide at least one. If you provide both, CloudFront uses
         * the name to identify the real-time log configuration to get.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRealtimeLogConfig2020_05_31OutcomeCallable GetRealtimeLogConfig2020_05_31Callable(const Model::GetRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a real-time log configuration.</p> <p>To get a real-time log
         * configuration, you can provide the configuration’s name or its Amazon Resource
         * Name (ARN). You must provide at least one. If you provide both, CloudFront uses
         * the name to identify the real-time log configuration to get.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRealtimeLogConfig2020_05_31Async(const Model::GetRealtimeLogConfig2020_05_31Request& request, const GetRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistribution2020_05_31Outcome GetStreamingDistribution2020_05_31(const Model::GetStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistribution2020_05_31OutcomeCallable GetStreamingDistribution2020_05_31Callable(const Model::GetStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Gets information about a specified RTMP distribution, including the
         * distribution configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistribution2020_05_31Async(const Model::GetStreamingDistribution2020_05_31Request& request, const GetStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingDistributionConfig2020_05_31Outcome GetStreamingDistributionConfig2020_05_31(const Model::GetStreamingDistributionConfig2020_05_31Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingDistributionConfig2020_05_31OutcomeCallable GetStreamingDistributionConfig2020_05_31Callable(const Model::GetStreamingDistributionConfig2020_05_31Request& request) const;

        /**
         * <p>Get the configuration information about a streaming distribution.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/GetStreamingDistributionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingDistributionConfig2020_05_31Async(const Model::GetStreamingDistributionConfig2020_05_31Request& request, const GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of cache policies.</p> <p>You can optionally apply a filter to
         * return only the managed policies created by AWS, or only the custom policies
         * created in your AWS account.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCachePolicies2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCachePolicies2020_05_31Outcome ListCachePolicies2020_05_31(const Model::ListCachePolicies2020_05_31Request& request) const;

        /**
         * <p>Gets a list of cache policies.</p> <p>You can optionally apply a filter to
         * return only the managed policies created by AWS, or only the custom policies
         * created in your AWS account.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCachePolicies2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCachePolicies2020_05_31OutcomeCallable ListCachePolicies2020_05_31Callable(const Model::ListCachePolicies2020_05_31Request& request) const;

        /**
         * <p>Gets a list of cache policies.</p> <p>You can optionally apply a filter to
         * return only the managed policies created by AWS, or only the custom policies
         * created in your AWS account.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCachePolicies2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCachePolicies2020_05_31Async(const Model::ListCachePolicies2020_05_31Request& request, const ListCachePolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCloudFrontOriginAccessIdentities2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2020_05_31Outcome ListCloudFrontOriginAccessIdentities2020_05_31(const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCloudFrontOriginAccessIdentities2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCloudFrontOriginAccessIdentities2020_05_31OutcomeCallable ListCloudFrontOriginAccessIdentities2020_05_31Callable(const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request& request) const;

        /**
         * <p>Lists origin access identities.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListCloudFrontOriginAccessIdentities2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCloudFrontOriginAccessIdentities2020_05_31Async(const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request& request, const ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributions2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributions2020_05_31Outcome ListDistributions2020_05_31(const Model::ListDistributions2020_05_31Request& request) const;

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributions2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributions2020_05_31OutcomeCallable ListDistributions2020_05_31Callable(const Model::ListDistributions2020_05_31Request& request) const;

        /**
         * <p>List CloudFront distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributions2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributions2020_05_31Async(const Model::ListDistributions2020_05_31Request& request, const ListDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that’s associated with the specified cache policy.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByCachePolicyId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByCachePolicyId2020_05_31Outcome ListDistributionsByCachePolicyId2020_05_31(const Model::ListDistributionsByCachePolicyId2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that’s associated with the specified cache policy.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByCachePolicyId2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByCachePolicyId2020_05_31OutcomeCallable ListDistributionsByCachePolicyId2020_05_31Callable(const Model::ListDistributionsByCachePolicyId2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that’s associated with the specified cache policy.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByCachePolicyId2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByCachePolicyId2020_05_31Async(const Model::ListDistributionsByCachePolicyId2020_05_31Request& request, const ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that references the specified key group.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByKeyGroup2020_05_31Outcome ListDistributionsByKeyGroup2020_05_31(const Model::ListDistributionsByKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that references the specified key group.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByKeyGroup2020_05_31OutcomeCallable ListDistributionsByKeyGroup2020_05_31Callable(const Model::ListDistributionsByKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that references the specified key group.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByKeyGroup2020_05_31Async(const Model::ListDistributionsByKeyGroup2020_05_31Request& request, const ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that’s associated with the specified origin request policy.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByOriginRequestPolicyId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByOriginRequestPolicyId2020_05_31Outcome ListDistributionsByOriginRequestPolicyId2020_05_31(const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that’s associated with the specified origin request policy.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByOriginRequestPolicyId2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByOriginRequestPolicyId2020_05_31OutcomeCallable ListDistributionsByOriginRequestPolicyId2020_05_31Callable(const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distribution IDs for distributions that have a cache behavior
         * that’s associated with the specified origin request policy.</p> <p>You can
         * optionally specify the maximum number of items to receive in the response. If
         * the total number of items in the list exceeds the maximum that you specify, or
         * the default maximum, the response is paginated. To get the next page of items,
         * send a subsequent request that specifies the <code>NextMarker</code> value from
         * the current response as the <code>Marker</code> value in the subsequent
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByOriginRequestPolicyId2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByOriginRequestPolicyId2020_05_31Async(const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request& request, const ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of distributions that have a cache behavior that’s associated
         * with the specified real-time log configuration.</p> <p>You can specify the
         * real-time log configuration by its name or its Amazon Resource Name (ARN). You
         * must provide at least one. If you provide both, CloudFront uses the name to
         * identify the real-time log configuration to list distributions for.</p> <p>You
         * can optionally specify the maximum number of items to receive in the response.
         * If the total number of items in the list exceeds the maximum that you specify,
         * or the default maximum, the response is paginated. To get the next page of
         * items, send a subsequent request that specifies the <code>NextMarker</code>
         * value from the current response as the <code>Marker</code> value in the
         * subsequent request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByRealtimeLogConfig2020_05_31Outcome ListDistributionsByRealtimeLogConfig2020_05_31(const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distributions that have a cache behavior that’s associated
         * with the specified real-time log configuration.</p> <p>You can specify the
         * real-time log configuration by its name or its Amazon Resource Name (ARN). You
         * must provide at least one. If you provide both, CloudFront uses the name to
         * identify the real-time log configuration to list distributions for.</p> <p>You
         * can optionally specify the maximum number of items to receive in the response.
         * If the total number of items in the list exceeds the maximum that you specify,
         * or the default maximum, the response is paginated. To get the next page of
         * items, send a subsequent request that specifies the <code>NextMarker</code>
         * value from the current response as the <code>Marker</code> value in the
         * subsequent request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByRealtimeLogConfig2020_05_31OutcomeCallable ListDistributionsByRealtimeLogConfig2020_05_31Callable(const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Gets a list of distributions that have a cache behavior that’s associated
         * with the specified real-time log configuration.</p> <p>You can specify the
         * real-time log configuration by its name or its Amazon Resource Name (ARN). You
         * must provide at least one. If you provide both, CloudFront uses the name to
         * identify the real-time log configuration to list distributions for.</p> <p>You
         * can optionally specify the maximum number of items to receive in the response.
         * If the total number of items in the list exceeds the maximum that you specify,
         * or the default maximum, the response is paginated. To get the next page of
         * items, send a subsequent request that specifies the <code>NextMarker</code>
         * value from the current response as the <code>Marker</code> value in the
         * subsequent request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByRealtimeLogConfig2020_05_31Async(const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request& request, const ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByWebACLId2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDistributionsByWebACLId2020_05_31Outcome ListDistributionsByWebACLId2020_05_31(const Model::ListDistributionsByWebACLId2020_05_31Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByWebACLId2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDistributionsByWebACLId2020_05_31OutcomeCallable ListDistributionsByWebACLId2020_05_31Callable(const Model::ListDistributionsByWebACLId2020_05_31Request& request) const;

        /**
         * <p>List the distributions that are associated with a specified AWS WAF web ACL.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListDistributionsByWebACLId2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDistributionsByWebACLId2020_05_31Async(const Model::ListDistributionsByWebACLId2020_05_31Request& request, const ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionConfigs2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionConfigs2020_05_31Outcome ListFieldLevelEncryptionConfigs2020_05_31(const Model::ListFieldLevelEncryptionConfigs2020_05_31Request& request) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionConfigs2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldLevelEncryptionConfigs2020_05_31OutcomeCallable ListFieldLevelEncryptionConfigs2020_05_31Callable(const Model::ListFieldLevelEncryptionConfigs2020_05_31Request& request) const;

        /**
         * <p>List all field-level encryption configurations that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionConfigs2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldLevelEncryptionConfigs2020_05_31Async(const Model::ListFieldLevelEncryptionConfigs2020_05_31Request& request, const ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionProfiles2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldLevelEncryptionProfiles2020_05_31Outcome ListFieldLevelEncryptionProfiles2020_05_31(const Model::ListFieldLevelEncryptionProfiles2020_05_31Request& request) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionProfiles2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFieldLevelEncryptionProfiles2020_05_31OutcomeCallable ListFieldLevelEncryptionProfiles2020_05_31Callable(const Model::ListFieldLevelEncryptionProfiles2020_05_31Request& request) const;

        /**
         * <p>Request a list of field-level encryption profiles that have been created in
         * CloudFront for this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListFieldLevelEncryptionProfiles2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFieldLevelEncryptionProfiles2020_05_31Async(const Model::ListFieldLevelEncryptionProfiles2020_05_31Request& request, const ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListInvalidations2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInvalidations2020_05_31Outcome ListInvalidations2020_05_31(const Model::ListInvalidations2020_05_31Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListInvalidations2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInvalidations2020_05_31OutcomeCallable ListInvalidations2020_05_31Callable(const Model::ListInvalidations2020_05_31Request& request) const;

        /**
         * <p>Lists invalidation batches. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListInvalidations2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInvalidations2020_05_31Async(const Model::ListInvalidations2020_05_31Request& request, const ListInvalidations2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of key groups.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListKeyGroups2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListKeyGroups2020_05_31Outcome ListKeyGroups2020_05_31(const Model::ListKeyGroups2020_05_31Request& request) const;

        /**
         * <p>Gets a list of key groups.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListKeyGroups2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListKeyGroups2020_05_31OutcomeCallable ListKeyGroups2020_05_31Callable(const Model::ListKeyGroups2020_05_31Request& request) const;

        /**
         * <p>Gets a list of key groups.</p> <p>You can optionally specify the maximum
         * number of items to receive in the response. If the total number of items in the
         * list exceeds the maximum that you specify, or the default maximum, the response
         * is paginated. To get the next page of items, send a subsequent request that
         * specifies the <code>NextMarker</code> value from the current response as the
         * <code>Marker</code> value in the subsequent request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListKeyGroups2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListKeyGroups2020_05_31Async(const Model::ListKeyGroups2020_05_31Request& request, const ListKeyGroups2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of origin request policies.</p> <p>You can optionally apply a
         * filter to return only the managed policies created by AWS, or only the custom
         * policies created in your AWS account.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListOriginRequestPolicies2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOriginRequestPolicies2020_05_31Outcome ListOriginRequestPolicies2020_05_31(const Model::ListOriginRequestPolicies2020_05_31Request& request) const;

        /**
         * <p>Gets a list of origin request policies.</p> <p>You can optionally apply a
         * filter to return only the managed policies created by AWS, or only the custom
         * policies created in your AWS account.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListOriginRequestPolicies2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOriginRequestPolicies2020_05_31OutcomeCallable ListOriginRequestPolicies2020_05_31Callable(const Model::ListOriginRequestPolicies2020_05_31Request& request) const;

        /**
         * <p>Gets a list of origin request policies.</p> <p>You can optionally apply a
         * filter to return only the managed policies created by AWS, or only the custom
         * policies created in your AWS account.</p> <p>You can optionally specify the
         * maximum number of items to receive in the response. If the total number of items
         * in the list exceeds the maximum that you specify, or the default maximum, the
         * response is paginated. To get the next page of items, send a subsequent request
         * that specifies the <code>NextMarker</code> value from the current response as
         * the <code>Marker</code> value in the subsequent request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListOriginRequestPolicies2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOriginRequestPolicies2020_05_31Async(const Model::ListOriginRequestPolicies2020_05_31Request& request, const ListOriginRequestPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListPublicKeys2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPublicKeys2020_05_31Outcome ListPublicKeys2020_05_31(const Model::ListPublicKeys2020_05_31Request& request) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListPublicKeys2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPublicKeys2020_05_31OutcomeCallable ListPublicKeys2020_05_31Callable(const Model::ListPublicKeys2020_05_31Request& request) const;

        /**
         * <p>List all public keys that have been added to CloudFront for this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListPublicKeys2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPublicKeys2020_05_31Async(const Model::ListPublicKeys2020_05_31Request& request, const ListPublicKeys2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of real-time log configurations.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListRealtimeLogConfigs2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRealtimeLogConfigs2020_05_31Outcome ListRealtimeLogConfigs2020_05_31(const Model::ListRealtimeLogConfigs2020_05_31Request& request) const;

        /**
         * <p>Gets a list of real-time log configurations.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListRealtimeLogConfigs2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRealtimeLogConfigs2020_05_31OutcomeCallable ListRealtimeLogConfigs2020_05_31Callable(const Model::ListRealtimeLogConfigs2020_05_31Request& request) const;

        /**
         * <p>Gets a list of real-time log configurations.</p> <p>You can optionally
         * specify the maximum number of items to receive in the response. If the total
         * number of items in the list exceeds the maximum that you specify, or the default
         * maximum, the response is paginated. To get the next page of items, send a
         * subsequent request that specifies the <code>NextMarker</code> value from the
         * current response as the <code>Marker</code> value in the subsequent request.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListRealtimeLogConfigs2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRealtimeLogConfigs2020_05_31Async(const Model::ListRealtimeLogConfigs2020_05_31Request& request, const ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListStreamingDistributions2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingDistributions2020_05_31Outcome ListStreamingDistributions2020_05_31(const Model::ListStreamingDistributions2020_05_31Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListStreamingDistributions2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingDistributions2020_05_31OutcomeCallable ListStreamingDistributions2020_05_31Callable(const Model::ListStreamingDistributions2020_05_31Request& request) const;

        /**
         * <p>List streaming distributions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListStreamingDistributions2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingDistributions2020_05_31Async(const Model::ListStreamingDistributions2020_05_31Request& request, const ListStreamingDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListTagsForResource2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResource2020_05_31Outcome ListTagsForResource2020_05_31(const Model::ListTagsForResource2020_05_31Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListTagsForResource2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResource2020_05_31OutcomeCallable ListTagsForResource2020_05_31Callable(const Model::ListTagsForResource2020_05_31Request& request) const;

        /**
         * <p>List tags for a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ListTagsForResource2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResource2020_05_31Async(const Model::ListTagsForResource2020_05_31Request& request, const ListTagsForResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TagResource2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResource2020_05_31Outcome TagResource2020_05_31(const Model::TagResource2020_05_31Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TagResource2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResource2020_05_31OutcomeCallable TagResource2020_05_31Callable(const Model::TagResource2020_05_31Request& request) const;

        /**
         * <p>Add tags to a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TagResource2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResource2020_05_31Async(const Model::TagResource2020_05_31Request& request, const TagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UntagResource2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResource2020_05_31Outcome UntagResource2020_05_31(const Model::UntagResource2020_05_31Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UntagResource2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResource2020_05_31OutcomeCallable UntagResource2020_05_31Callable(const Model::UntagResource2020_05_31Request& request) const;

        /**
         * <p>Remove tags from a CloudFront resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UntagResource2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResource2020_05_31Async(const Model::UntagResource2020_05_31Request& request, const UntagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a cache policy configuration.</p> <p>When you update a cache policy
         * configuration, all the fields are updated with the values provided in the
         * request. You cannot update some fields independent of others. To update a cache
         * policy configuration:</p> <ol> <li> <p>Use <code>GetCachePolicyConfig</code> to
         * get the current configuration.</p> </li> <li> <p>Locally modify the fields in
         * the cache policy configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateCachePolicy</code> by providing the entire cache policy
         * configuration, including the fields that you modified and those that you
         * didn’t.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCachePolicy2020_05_31Outcome UpdateCachePolicy2020_05_31(const Model::UpdateCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Updates a cache policy configuration.</p> <p>When you update a cache policy
         * configuration, all the fields are updated with the values provided in the
         * request. You cannot update some fields independent of others. To update a cache
         * policy configuration:</p> <ol> <li> <p>Use <code>GetCachePolicyConfig</code> to
         * get the current configuration.</p> </li> <li> <p>Locally modify the fields in
         * the cache policy configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateCachePolicy</code> by providing the entire cache policy
         * configuration, including the fields that you modified and those that you
         * didn’t.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCachePolicy2020_05_31OutcomeCallable UpdateCachePolicy2020_05_31Callable(const Model::UpdateCachePolicy2020_05_31Request& request) const;

        /**
         * <p>Updates a cache policy configuration.</p> <p>When you update a cache policy
         * configuration, all the fields are updated with the values provided in the
         * request. You cannot update some fields independent of others. To update a cache
         * policy configuration:</p> <ol> <li> <p>Use <code>GetCachePolicyConfig</code> to
         * get the current configuration.</p> </li> <li> <p>Locally modify the fields in
         * the cache policy configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateCachePolicy</code> by providing the entire cache policy
         * configuration, including the fields that you modified and those that you
         * didn’t.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCachePolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCachePolicy2020_05_31Async(const Model::UpdateCachePolicy2020_05_31Request& request, const UpdateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Outcome UpdateCloudFrontOriginAccessIdentity2020_05_31(const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCloudFrontOriginAccessIdentity2020_05_31OutcomeCallable UpdateCloudFrontOriginAccessIdentity2020_05_31Callable(const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request) const;

        /**
         * <p>Update an origin access identity. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateCloudFrontOriginAccessIdentity2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCloudFrontOriginAccessIdentity2020_05_31Async(const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request, const UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration for a web distribution. </p>  <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p>  <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
         * request to get the current configuration and an <code>Etag</code> header for the
         * distribution.</p>  <p>If you update the distribution again, you must get a
         * new <code>Etag</code> header.</p>  </li> <li> <p>Update the XML document
         * that was returned in the response to your <code>GetDistributionConfig</code>
         * request to include your changes. </p>  <p>When you edit the XML file,
         * be aware of the following:</p> <ul> <li> <p>You must strip out the ETag
         * parameter that is returned.</p> </li> <li> <p>Additional fields are required
         * when you update a distribution. There may be fields included in the XML file for
         * features that you haven't configured for your distribution. This is expected and
         * required to successfully update the distribution.</p> </li> <li> <p>You can't
         * change the value of <code>CallerReference</code>. If you try to change this
         * value, CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li>
         * <p>The new configuration replaces the existing configuration; the values that
         * you specify in an <code>UpdateDistribution</code> request are not merged into
         * your existing configuration. When you add, delete, or replace values in an
         * element that allows multiple values (for example, <code>CNAME</code>), you must
         * specify all of the values that you want to appear in the updated distribution.
         * In addition, you must update the corresponding <code>Quantity</code>
         * element.</p> </li> </ul>  </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * request to confirm that your changes have propagated. When propagation is
         * complete, the value of <code>Status</code> is <code>Deployed</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistribution2020_05_31Outcome UpdateDistribution2020_05_31(const Model::UpdateDistribution2020_05_31Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. </p>  <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p>  <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
         * request to get the current configuration and an <code>Etag</code> header for the
         * distribution.</p>  <p>If you update the distribution again, you must get a
         * new <code>Etag</code> header.</p>  </li> <li> <p>Update the XML document
         * that was returned in the response to your <code>GetDistributionConfig</code>
         * request to include your changes. </p>  <p>When you edit the XML file,
         * be aware of the following:</p> <ul> <li> <p>You must strip out the ETag
         * parameter that is returned.</p> </li> <li> <p>Additional fields are required
         * when you update a distribution. There may be fields included in the XML file for
         * features that you haven't configured for your distribution. This is expected and
         * required to successfully update the distribution.</p> </li> <li> <p>You can't
         * change the value of <code>CallerReference</code>. If you try to change this
         * value, CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li>
         * <p>The new configuration replaces the existing configuration; the values that
         * you specify in an <code>UpdateDistribution</code> request are not merged into
         * your existing configuration. When you add, delete, or replace values in an
         * element that allows multiple values (for example, <code>CNAME</code>), you must
         * specify all of the values that you want to appear in the updated distribution.
         * In addition, you must update the corresponding <code>Quantity</code>
         * element.</p> </li> </ul>  </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * request to confirm that your changes have propagated. When propagation is
         * complete, the value of <code>Status</code> is <code>Deployed</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistribution2020_05_31OutcomeCallable UpdateDistribution2020_05_31Callable(const Model::UpdateDistribution2020_05_31Request& request) const;

        /**
         * <p>Updates the configuration for a web distribution. </p>  <p>When
         * you update a distribution, there are more required fields than when you create a
         * distribution. When you update your distribution by using this API action, follow
         * the steps here to get the current configuration and then make your updates, to
         * make sure that you include all of the required fields. To view a summary, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-overview-required-fields.html">Required
         * Fields for Create Distribution and Update Distribution</a> in the <i>Amazon
         * CloudFront Developer Guide</i>.</p>  <p>The update process includes
         * getting the current distribution configuration, updating the XML document that
         * is returned to make your changes, and then submitting an
         * <code>UpdateDistribution</code> request to make the updates.</p> <p>For
         * information about updating a distribution using the CloudFront console instead,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/distribution-web-creating-console.html">Creating
         * a Distribution</a> in the <i>Amazon CloudFront Developer Guide</i>.</p> <p>
         * <b>To update a web distribution using the CloudFront API</b> </p> <ol> <li>
         * <p>Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistributionConfig.html">GetDistributionConfig</a>
         * request to get the current configuration and an <code>Etag</code> header for the
         * distribution.</p>  <p>If you update the distribution again, you must get a
         * new <code>Etag</code> header.</p>  </li> <li> <p>Update the XML document
         * that was returned in the response to your <code>GetDistributionConfig</code>
         * request to include your changes. </p>  <p>When you edit the XML file,
         * be aware of the following:</p> <ul> <li> <p>You must strip out the ETag
         * parameter that is returned.</p> </li> <li> <p>Additional fields are required
         * when you update a distribution. There may be fields included in the XML file for
         * features that you haven't configured for your distribution. This is expected and
         * required to successfully update the distribution.</p> </li> <li> <p>You can't
         * change the value of <code>CallerReference</code>. If you try to change this
         * value, CloudFront returns an <code>IllegalUpdate</code> error. </p> </li> <li>
         * <p>The new configuration replaces the existing configuration; the values that
         * you specify in an <code>UpdateDistribution</code> request are not merged into
         * your existing configuration. When you add, delete, or replace values in an
         * element that allows multiple values (for example, <code>CNAME</code>), you must
         * specify all of the values that you want to appear in the updated distribution.
         * In addition, you must update the corresponding <code>Quantity</code>
         * element.</p> </li> </ul>  </li> <li> <p>Submit an
         * <code>UpdateDistribution</code> request to update the configuration for your
         * distribution:</p> <ul> <li> <p>In the request body, include the XML document
         * that you updated in Step 2. The request body must include an XML document with a
         * <code>DistributionConfig</code> element.</p> </li> <li> <p>Set the value of the
         * HTTP <code>If-Match</code> header to the value of the <code>ETag</code> header
         * that CloudFront returned when you submitted the
         * <code>GetDistributionConfig</code> request in Step 1.</p> </li> </ul> </li> <li>
         * <p>Review the response to the <code>UpdateDistribution</code> request to confirm
         * that the configuration was successfully updated.</p> </li> <li> <p>Optional:
         * Submit a <a
         * href="https://docs.aws.amazon.com/cloudfront/latest/APIReference/API_GetDistribution.html">GetDistribution</a>
         * request to confirm that your changes have propagated. When propagation is
         * complete, the value of <code>Status</code> is <code>Deployed</code>.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistribution2020_05_31Async(const Model::UpdateDistribution2020_05_31Request& request, const UpdateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2020_05_31Outcome UpdateFieldLevelEncryptionConfig2020_05_31(const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldLevelEncryptionConfig2020_05_31OutcomeCallable UpdateFieldLevelEncryptionConfig2020_05_31Callable(const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request& request) const;

        /**
         * <p>Update a field-level encryption configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldLevelEncryptionConfig2020_05_31Async(const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request& request, const UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2020_05_31Outcome UpdateFieldLevelEncryptionProfile2020_05_31(const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFieldLevelEncryptionProfile2020_05_31OutcomeCallable UpdateFieldLevelEncryptionProfile2020_05_31Callable(const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request& request) const;

        /**
         * <p>Update a field-level encryption profile. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateFieldLevelEncryptionProfile2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFieldLevelEncryptionProfile2020_05_31Async(const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request& request, const UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a key group.</p> <p>When you update a key group, all the fields are
         * updated with the values provided in the request. You cannot update some fields
         * independent of others. To update a key group:</p> <ol> <li> <p>Get the current
         * key group with <code>GetKeyGroup</code> or <code>GetKeyGroupConfig</code>.</p>
         * </li> <li> <p>Locally modify the fields in the key group that you want to
         * update. For example, add or remove public key IDs.</p> </li> <li> <p>Call
         * <code>UpdateKeyGroup</code> with the entire key group object, including the
         * fields that you modified and those that you didn’t.</p> </li> </ol><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateKeyGroup2020_05_31Outcome UpdateKeyGroup2020_05_31(const Model::UpdateKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Updates a key group.</p> <p>When you update a key group, all the fields are
         * updated with the values provided in the request. You cannot update some fields
         * independent of others. To update a key group:</p> <ol> <li> <p>Get the current
         * key group with <code>GetKeyGroup</code> or <code>GetKeyGroupConfig</code>.</p>
         * </li> <li> <p>Locally modify the fields in the key group that you want to
         * update. For example, add or remove public key IDs.</p> </li> <li> <p>Call
         * <code>UpdateKeyGroup</code> with the entire key group object, including the
         * fields that you modified and those that you didn’t.</p> </li> </ol><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateKeyGroup2020_05_31OutcomeCallable UpdateKeyGroup2020_05_31Callable(const Model::UpdateKeyGroup2020_05_31Request& request) const;

        /**
         * <p>Updates a key group.</p> <p>When you update a key group, all the fields are
         * updated with the values provided in the request. You cannot update some fields
         * independent of others. To update a key group:</p> <ol> <li> <p>Get the current
         * key group with <code>GetKeyGroup</code> or <code>GetKeyGroupConfig</code>.</p>
         * </li> <li> <p>Locally modify the fields in the key group that you want to
         * update. For example, add or remove public key IDs.</p> </li> <li> <p>Call
         * <code>UpdateKeyGroup</code> with the entire key group object, including the
         * fields that you modified and those that you didn’t.</p> </li> </ol><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateKeyGroup2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateKeyGroup2020_05_31Async(const Model::UpdateKeyGroup2020_05_31Request& request, const UpdateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an origin request policy configuration.</p> <p>When you update an
         * origin request policy configuration, all the fields are updated with the values
         * provided in the request. You cannot update some fields independent of others. To
         * update an origin request policy configuration:</p> <ol> <li> <p>Use
         * <code>GetOriginRequestPolicyConfig</code> to get the current configuration.</p>
         * </li> <li> <p>Locally modify the fields in the origin request policy
         * configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateOriginRequestPolicy</code> by providing the entire origin request
         * policy configuration, including the fields that you modified and those that you
         * didn’t.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOriginRequestPolicy2020_05_31Outcome UpdateOriginRequestPolicy2020_05_31(const Model::UpdateOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Updates an origin request policy configuration.</p> <p>When you update an
         * origin request policy configuration, all the fields are updated with the values
         * provided in the request. You cannot update some fields independent of others. To
         * update an origin request policy configuration:</p> <ol> <li> <p>Use
         * <code>GetOriginRequestPolicyConfig</code> to get the current configuration.</p>
         * </li> <li> <p>Locally modify the fields in the origin request policy
         * configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateOriginRequestPolicy</code> by providing the entire origin request
         * policy configuration, including the fields that you modified and those that you
         * didn’t.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOriginRequestPolicy2020_05_31OutcomeCallable UpdateOriginRequestPolicy2020_05_31Callable(const Model::UpdateOriginRequestPolicy2020_05_31Request& request) const;

        /**
         * <p>Updates an origin request policy configuration.</p> <p>When you update an
         * origin request policy configuration, all the fields are updated with the values
         * provided in the request. You cannot update some fields independent of others. To
         * update an origin request policy configuration:</p> <ol> <li> <p>Use
         * <code>GetOriginRequestPolicyConfig</code> to get the current configuration.</p>
         * </li> <li> <p>Locally modify the fields in the origin request policy
         * configuration that you want to update.</p> </li> <li> <p>Call
         * <code>UpdateOriginRequestPolicy</code> by providing the entire origin request
         * policy configuration, including the fields that you modified and those that you
         * didn’t.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateOriginRequestPolicy2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOriginRequestPolicy2020_05_31Async(const Model::UpdateOriginRequestPolicy2020_05_31Request& request, const UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePublicKey2020_05_31Outcome UpdatePublicKey2020_05_31(const Model::UpdatePublicKey2020_05_31Request& request) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePublicKey2020_05_31OutcomeCallable UpdatePublicKey2020_05_31Callable(const Model::UpdatePublicKey2020_05_31Request& request) const;

        /**
         * <p>Update public key information. Note that the only value you can change is the
         * comment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdatePublicKey2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePublicKey2020_05_31Async(const Model::UpdatePublicKey2020_05_31Request& request, const UpdatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a real-time log configuration.</p> <p>When you update a real-time log
         * configuration, all the parameters are updated with the values provided in the
         * request. You cannot update some parameters independent of others. To update a
         * real-time log configuration:</p> <ol> <li> <p>Call
         * <code>GetRealtimeLogConfig</code> to get the current real-time log
         * configuration.</p> </li> <li> <p>Locally modify the parameters in the real-time
         * log configuration that you want to update.</p> </li> <li> <p>Call this API
         * (<code>UpdateRealtimeLogConfig</code>) by providing the entire real-time log
         * configuration, including the parameters that you modified and those that you
         * didn’t.</p> </li> </ol> <p>You cannot update a real-time log configuration’s
         * <code>Name</code> or <code>ARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRealtimeLogConfig2020_05_31Outcome UpdateRealtimeLogConfig2020_05_31(const Model::UpdateRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Updates a real-time log configuration.</p> <p>When you update a real-time log
         * configuration, all the parameters are updated with the values provided in the
         * request. You cannot update some parameters independent of others. To update a
         * real-time log configuration:</p> <ol> <li> <p>Call
         * <code>GetRealtimeLogConfig</code> to get the current real-time log
         * configuration.</p> </li> <li> <p>Locally modify the parameters in the real-time
         * log configuration that you want to update.</p> </li> <li> <p>Call this API
         * (<code>UpdateRealtimeLogConfig</code>) by providing the entire real-time log
         * configuration, including the parameters that you modified and those that you
         * didn’t.</p> </li> </ol> <p>You cannot update a real-time log configuration’s
         * <code>Name</code> or <code>ARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRealtimeLogConfig2020_05_31OutcomeCallable UpdateRealtimeLogConfig2020_05_31Callable(const Model::UpdateRealtimeLogConfig2020_05_31Request& request) const;

        /**
         * <p>Updates a real-time log configuration.</p> <p>When you update a real-time log
         * configuration, all the parameters are updated with the values provided in the
         * request. You cannot update some parameters independent of others. To update a
         * real-time log configuration:</p> <ol> <li> <p>Call
         * <code>GetRealtimeLogConfig</code> to get the current real-time log
         * configuration.</p> </li> <li> <p>Locally modify the parameters in the real-time
         * log configuration that you want to update.</p> </li> <li> <p>Call this API
         * (<code>UpdateRealtimeLogConfig</code>) by providing the entire real-time log
         * configuration, including the parameters that you modified and those that you
         * didn’t.</p> </li> </ol> <p>You cannot update a real-time log configuration’s
         * <code>Name</code> or <code>ARN</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateRealtimeLogConfig2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRealtimeLogConfig2020_05_31Async(const Model::UpdateRealtimeLogConfig2020_05_31Request& request, const UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingDistribution2020_05_31Outcome UpdateStreamingDistribution2020_05_31(const Model::UpdateStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingDistribution2020_05_31OutcomeCallable UpdateStreamingDistribution2020_05_31Callable(const Model::UpdateStreamingDistribution2020_05_31Request& request) const;

        /**
         * <p>Update a streaming distribution. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/UpdateStreamingDistribution2020_05_31">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingDistribution2020_05_31Async(const Model::UpdateStreamingDistribution2020_05_31Request& request, const UpdateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
  private:
        void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateCachePolicy2020_05_31AsyncHelper(const Model::CreateCachePolicy2020_05_31Request& request, const CreateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const Model::CreateCloudFrontOriginAccessIdentity2020_05_31Request& request, const CreateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistribution2020_05_31AsyncHelper(const Model::CreateDistribution2020_05_31Request& request, const CreateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistributionWithTags2020_05_31AsyncHelper(const Model::CreateDistributionWithTags2020_05_31Request& request, const CreateDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFieldLevelEncryptionConfig2020_05_31AsyncHelper(const Model::CreateFieldLevelEncryptionConfig2020_05_31Request& request, const CreateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFieldLevelEncryptionProfile2020_05_31AsyncHelper(const Model::CreateFieldLevelEncryptionProfile2020_05_31Request& request, const CreateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInvalidation2020_05_31AsyncHelper(const Model::CreateInvalidation2020_05_31Request& request, const CreateInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateKeyGroup2020_05_31AsyncHelper(const Model::CreateKeyGroup2020_05_31Request& request, const CreateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMonitoringSubscription2020_05_31AsyncHelper(const Model::CreateMonitoringSubscription2020_05_31Request& request, const CreateMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOriginRequestPolicy2020_05_31AsyncHelper(const Model::CreateOriginRequestPolicy2020_05_31Request& request, const CreateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePublicKey2020_05_31AsyncHelper(const Model::CreatePublicKey2020_05_31Request& request, const CreatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRealtimeLogConfig2020_05_31AsyncHelper(const Model::CreateRealtimeLogConfig2020_05_31Request& request, const CreateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistribution2020_05_31AsyncHelper(const Model::CreateStreamingDistribution2020_05_31Request& request, const CreateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamingDistributionWithTags2020_05_31AsyncHelper(const Model::CreateStreamingDistributionWithTags2020_05_31Request& request, const CreateStreamingDistributionWithTags2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCachePolicy2020_05_31AsyncHelper(const Model::DeleteCachePolicy2020_05_31Request& request, const DeleteCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const Model::DeleteCloudFrontOriginAccessIdentity2020_05_31Request& request, const DeleteCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistribution2020_05_31AsyncHelper(const Model::DeleteDistribution2020_05_31Request& request, const DeleteDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFieldLevelEncryptionConfig2020_05_31AsyncHelper(const Model::DeleteFieldLevelEncryptionConfig2020_05_31Request& request, const DeleteFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFieldLevelEncryptionProfile2020_05_31AsyncHelper(const Model::DeleteFieldLevelEncryptionProfile2020_05_31Request& request, const DeleteFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteKeyGroup2020_05_31AsyncHelper(const Model::DeleteKeyGroup2020_05_31Request& request, const DeleteKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMonitoringSubscription2020_05_31AsyncHelper(const Model::DeleteMonitoringSubscription2020_05_31Request& request, const DeleteMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOriginRequestPolicy2020_05_31AsyncHelper(const Model::DeleteOriginRequestPolicy2020_05_31Request& request, const DeleteOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePublicKey2020_05_31AsyncHelper(const Model::DeletePublicKey2020_05_31Request& request, const DeletePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRealtimeLogConfig2020_05_31AsyncHelper(const Model::DeleteRealtimeLogConfig2020_05_31Request& request, const DeleteRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamingDistribution2020_05_31AsyncHelper(const Model::DeleteStreamingDistribution2020_05_31Request& request, const DeleteStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCachePolicy2020_05_31AsyncHelper(const Model::GetCachePolicy2020_05_31Request& request, const GetCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCachePolicyConfig2020_05_31AsyncHelper(const Model::GetCachePolicyConfig2020_05_31Request& request, const GetCachePolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const Model::GetCloudFrontOriginAccessIdentity2020_05_31Request& request, const GetCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFrontOriginAccessIdentityConfig2020_05_31AsyncHelper(const Model::GetCloudFrontOriginAccessIdentityConfig2020_05_31Request& request, const GetCloudFrontOriginAccessIdentityConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistribution2020_05_31AsyncHelper(const Model::GetDistribution2020_05_31Request& request, const GetDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionConfig2020_05_31AsyncHelper(const Model::GetDistributionConfig2020_05_31Request& request, const GetDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryption2020_05_31AsyncHelper(const Model::GetFieldLevelEncryption2020_05_31Request& request, const GetFieldLevelEncryption2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionConfig2020_05_31AsyncHelper(const Model::GetFieldLevelEncryptionConfig2020_05_31Request& request, const GetFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionProfile2020_05_31AsyncHelper(const Model::GetFieldLevelEncryptionProfile2020_05_31Request& request, const GetFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFieldLevelEncryptionProfileConfig2020_05_31AsyncHelper(const Model::GetFieldLevelEncryptionProfileConfig2020_05_31Request& request, const GetFieldLevelEncryptionProfileConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInvalidation2020_05_31AsyncHelper(const Model::GetInvalidation2020_05_31Request& request, const GetInvalidation2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetKeyGroup2020_05_31AsyncHelper(const Model::GetKeyGroup2020_05_31Request& request, const GetKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetKeyGroupConfig2020_05_31AsyncHelper(const Model::GetKeyGroupConfig2020_05_31Request& request, const GetKeyGroupConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMonitoringSubscription2020_05_31AsyncHelper(const Model::GetMonitoringSubscription2020_05_31Request& request, const GetMonitoringSubscription2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOriginRequestPolicy2020_05_31AsyncHelper(const Model::GetOriginRequestPolicy2020_05_31Request& request, const GetOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOriginRequestPolicyConfig2020_05_31AsyncHelper(const Model::GetOriginRequestPolicyConfig2020_05_31Request& request, const GetOriginRequestPolicyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicKey2020_05_31AsyncHelper(const Model::GetPublicKey2020_05_31Request& request, const GetPublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPublicKeyConfig2020_05_31AsyncHelper(const Model::GetPublicKeyConfig2020_05_31Request& request, const GetPublicKeyConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRealtimeLogConfig2020_05_31AsyncHelper(const Model::GetRealtimeLogConfig2020_05_31Request& request, const GetRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistribution2020_05_31AsyncHelper(const Model::GetStreamingDistribution2020_05_31Request& request, const GetStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamingDistributionConfig2020_05_31AsyncHelper(const Model::GetStreamingDistributionConfig2020_05_31Request& request, const GetStreamingDistributionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCachePolicies2020_05_31AsyncHelper(const Model::ListCachePolicies2020_05_31Request& request, const ListCachePolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCloudFrontOriginAccessIdentities2020_05_31AsyncHelper(const Model::ListCloudFrontOriginAccessIdentities2020_05_31Request& request, const ListCloudFrontOriginAccessIdentities2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributions2020_05_31AsyncHelper(const Model::ListDistributions2020_05_31Request& request, const ListDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByCachePolicyId2020_05_31AsyncHelper(const Model::ListDistributionsByCachePolicyId2020_05_31Request& request, const ListDistributionsByCachePolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByKeyGroup2020_05_31AsyncHelper(const Model::ListDistributionsByKeyGroup2020_05_31Request& request, const ListDistributionsByKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByOriginRequestPolicyId2020_05_31AsyncHelper(const Model::ListDistributionsByOriginRequestPolicyId2020_05_31Request& request, const ListDistributionsByOriginRequestPolicyId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByRealtimeLogConfig2020_05_31AsyncHelper(const Model::ListDistributionsByRealtimeLogConfig2020_05_31Request& request, const ListDistributionsByRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDistributionsByWebACLId2020_05_31AsyncHelper(const Model::ListDistributionsByWebACLId2020_05_31Request& request, const ListDistributionsByWebACLId2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFieldLevelEncryptionConfigs2020_05_31AsyncHelper(const Model::ListFieldLevelEncryptionConfigs2020_05_31Request& request, const ListFieldLevelEncryptionConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFieldLevelEncryptionProfiles2020_05_31AsyncHelper(const Model::ListFieldLevelEncryptionProfiles2020_05_31Request& request, const ListFieldLevelEncryptionProfiles2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInvalidations2020_05_31AsyncHelper(const Model::ListInvalidations2020_05_31Request& request, const ListInvalidations2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListKeyGroups2020_05_31AsyncHelper(const Model::ListKeyGroups2020_05_31Request& request, const ListKeyGroups2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOriginRequestPolicies2020_05_31AsyncHelper(const Model::ListOriginRequestPolicies2020_05_31Request& request, const ListOriginRequestPolicies2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPublicKeys2020_05_31AsyncHelper(const Model::ListPublicKeys2020_05_31Request& request, const ListPublicKeys2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRealtimeLogConfigs2020_05_31AsyncHelper(const Model::ListRealtimeLogConfigs2020_05_31Request& request, const ListRealtimeLogConfigs2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamingDistributions2020_05_31AsyncHelper(const Model::ListStreamingDistributions2020_05_31Request& request, const ListStreamingDistributions2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResource2020_05_31AsyncHelper(const Model::ListTagsForResource2020_05_31Request& request, const ListTagsForResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResource2020_05_31AsyncHelper(const Model::TagResource2020_05_31Request& request, const TagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResource2020_05_31AsyncHelper(const Model::UntagResource2020_05_31Request& request, const UntagResource2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCachePolicy2020_05_31AsyncHelper(const Model::UpdateCachePolicy2020_05_31Request& request, const UpdateCachePolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCloudFrontOriginAccessIdentity2020_05_31AsyncHelper(const Model::UpdateCloudFrontOriginAccessIdentity2020_05_31Request& request, const UpdateCloudFrontOriginAccessIdentity2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistribution2020_05_31AsyncHelper(const Model::UpdateDistribution2020_05_31Request& request, const UpdateDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFieldLevelEncryptionConfig2020_05_31AsyncHelper(const Model::UpdateFieldLevelEncryptionConfig2020_05_31Request& request, const UpdateFieldLevelEncryptionConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFieldLevelEncryptionProfile2020_05_31AsyncHelper(const Model::UpdateFieldLevelEncryptionProfile2020_05_31Request& request, const UpdateFieldLevelEncryptionProfile2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateKeyGroup2020_05_31AsyncHelper(const Model::UpdateKeyGroup2020_05_31Request& request, const UpdateKeyGroup2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOriginRequestPolicy2020_05_31AsyncHelper(const Model::UpdateOriginRequestPolicy2020_05_31Request& request, const UpdateOriginRequestPolicy2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePublicKey2020_05_31AsyncHelper(const Model::UpdatePublicKey2020_05_31Request& request, const UpdatePublicKey2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRealtimeLogConfig2020_05_31AsyncHelper(const Model::UpdateRealtimeLogConfig2020_05_31Request& request, const UpdateRealtimeLogConfig2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStreamingDistribution2020_05_31AsyncHelper(const Model::UpdateStreamingDistribution2020_05_31Request& request, const UpdateStreamingDistribution2020_05_31ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

        Aws::String m_uri;
        Aws::String m_configScheme;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace CloudFront
} // namespace Aws
