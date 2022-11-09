/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/shield/ShieldErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/shield/ShieldEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ShieldClient header */
#include <aws/shield/model/AssociateDRTLogBucketResult.h>
#include <aws/shield/model/AssociateDRTRoleResult.h>
#include <aws/shield/model/AssociateHealthCheckResult.h>
#include <aws/shield/model/AssociateProactiveEngagementDetailsResult.h>
#include <aws/shield/model/CreateProtectionResult.h>
#include <aws/shield/model/CreateProtectionGroupResult.h>
#include <aws/shield/model/CreateSubscriptionResult.h>
#include <aws/shield/model/DeleteProtectionResult.h>
#include <aws/shield/model/DeleteProtectionGroupResult.h>
#include <aws/shield/model/DescribeAttackResult.h>
#include <aws/shield/model/DescribeAttackStatisticsResult.h>
#include <aws/shield/model/DescribeDRTAccessResult.h>
#include <aws/shield/model/DescribeEmergencyContactSettingsResult.h>
#include <aws/shield/model/DescribeProtectionResult.h>
#include <aws/shield/model/DescribeProtectionGroupResult.h>
#include <aws/shield/model/DescribeSubscriptionResult.h>
#include <aws/shield/model/DisableApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/DisableProactiveEngagementResult.h>
#include <aws/shield/model/DisassociateDRTLogBucketResult.h>
#include <aws/shield/model/DisassociateDRTRoleResult.h>
#include <aws/shield/model/DisassociateHealthCheckResult.h>
#include <aws/shield/model/EnableApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/EnableProactiveEngagementResult.h>
#include <aws/shield/model/GetSubscriptionStateResult.h>
#include <aws/shield/model/ListAttacksResult.h>
#include <aws/shield/model/ListProtectionGroupsResult.h>
#include <aws/shield/model/ListProtectionsResult.h>
#include <aws/shield/model/ListResourcesInProtectionGroupResult.h>
#include <aws/shield/model/ListTagsForResourceResult.h>
#include <aws/shield/model/TagResourceResult.h>
#include <aws/shield/model/UntagResourceResult.h>
#include <aws/shield/model/UpdateApplicationLayerAutomaticResponseResult.h>
#include <aws/shield/model/UpdateEmergencyContactSettingsResult.h>
#include <aws/shield/model/UpdateProtectionGroupResult.h>
#include <aws/shield/model/UpdateSubscriptionResult.h>
/* End of service model headers required in ShieldClient header */

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

  namespace Shield
  {
    using ShieldClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ShieldEndpointProviderBase = Aws::Shield::Endpoint::ShieldEndpointProviderBase;
    using ShieldEndpointProvider = Aws::Shield::Endpoint::ShieldEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ShieldClient header */
      class AssociateDRTLogBucketRequest;
      class AssociateDRTRoleRequest;
      class AssociateHealthCheckRequest;
      class AssociateProactiveEngagementDetailsRequest;
      class CreateProtectionRequest;
      class CreateProtectionGroupRequest;
      class CreateSubscriptionRequest;
      class DeleteProtectionRequest;
      class DeleteProtectionGroupRequest;
      class DescribeAttackRequest;
      class DescribeAttackStatisticsRequest;
      class DescribeDRTAccessRequest;
      class DescribeEmergencyContactSettingsRequest;
      class DescribeProtectionRequest;
      class DescribeProtectionGroupRequest;
      class DescribeSubscriptionRequest;
      class DisableApplicationLayerAutomaticResponseRequest;
      class DisableProactiveEngagementRequest;
      class DisassociateDRTLogBucketRequest;
      class DisassociateDRTRoleRequest;
      class DisassociateHealthCheckRequest;
      class EnableApplicationLayerAutomaticResponseRequest;
      class EnableProactiveEngagementRequest;
      class GetSubscriptionStateRequest;
      class ListAttacksRequest;
      class ListProtectionGroupsRequest;
      class ListProtectionsRequest;
      class ListResourcesInProtectionGroupRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationLayerAutomaticResponseRequest;
      class UpdateEmergencyContactSettingsRequest;
      class UpdateProtectionGroupRequest;
      class UpdateSubscriptionRequest;
      /* End of service model forward declarations required in ShieldClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateDRTLogBucketResult, ShieldError> AssociateDRTLogBucketOutcome;
      typedef Aws::Utils::Outcome<AssociateDRTRoleResult, ShieldError> AssociateDRTRoleOutcome;
      typedef Aws::Utils::Outcome<AssociateHealthCheckResult, ShieldError> AssociateHealthCheckOutcome;
      typedef Aws::Utils::Outcome<AssociateProactiveEngagementDetailsResult, ShieldError> AssociateProactiveEngagementDetailsOutcome;
      typedef Aws::Utils::Outcome<CreateProtectionResult, ShieldError> CreateProtectionOutcome;
      typedef Aws::Utils::Outcome<CreateProtectionGroupResult, ShieldError> CreateProtectionGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionResult, ShieldError> CreateSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteProtectionResult, ShieldError> DeleteProtectionOutcome;
      typedef Aws::Utils::Outcome<DeleteProtectionGroupResult, ShieldError> DeleteProtectionGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeAttackResult, ShieldError> DescribeAttackOutcome;
      typedef Aws::Utils::Outcome<DescribeAttackStatisticsResult, ShieldError> DescribeAttackStatisticsOutcome;
      typedef Aws::Utils::Outcome<DescribeDRTAccessResult, ShieldError> DescribeDRTAccessOutcome;
      typedef Aws::Utils::Outcome<DescribeEmergencyContactSettingsResult, ShieldError> DescribeEmergencyContactSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeProtectionResult, ShieldError> DescribeProtectionOutcome;
      typedef Aws::Utils::Outcome<DescribeProtectionGroupResult, ShieldError> DescribeProtectionGroupOutcome;
      typedef Aws::Utils::Outcome<DescribeSubscriptionResult, ShieldError> DescribeSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DisableApplicationLayerAutomaticResponseResult, ShieldError> DisableApplicationLayerAutomaticResponseOutcome;
      typedef Aws::Utils::Outcome<DisableProactiveEngagementResult, ShieldError> DisableProactiveEngagementOutcome;
      typedef Aws::Utils::Outcome<DisassociateDRTLogBucketResult, ShieldError> DisassociateDRTLogBucketOutcome;
      typedef Aws::Utils::Outcome<DisassociateDRTRoleResult, ShieldError> DisassociateDRTRoleOutcome;
      typedef Aws::Utils::Outcome<DisassociateHealthCheckResult, ShieldError> DisassociateHealthCheckOutcome;
      typedef Aws::Utils::Outcome<EnableApplicationLayerAutomaticResponseResult, ShieldError> EnableApplicationLayerAutomaticResponseOutcome;
      typedef Aws::Utils::Outcome<EnableProactiveEngagementResult, ShieldError> EnableProactiveEngagementOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionStateResult, ShieldError> GetSubscriptionStateOutcome;
      typedef Aws::Utils::Outcome<ListAttacksResult, ShieldError> ListAttacksOutcome;
      typedef Aws::Utils::Outcome<ListProtectionGroupsResult, ShieldError> ListProtectionGroupsOutcome;
      typedef Aws::Utils::Outcome<ListProtectionsResult, ShieldError> ListProtectionsOutcome;
      typedef Aws::Utils::Outcome<ListResourcesInProtectionGroupResult, ShieldError> ListResourcesInProtectionGroupOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ShieldError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ShieldError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ShieldError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationLayerAutomaticResponseResult, ShieldError> UpdateApplicationLayerAutomaticResponseOutcome;
      typedef Aws::Utils::Outcome<UpdateEmergencyContactSettingsResult, ShieldError> UpdateEmergencyContactSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateProtectionGroupResult, ShieldError> UpdateProtectionGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionResult, ShieldError> UpdateSubscriptionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateDRTLogBucketOutcome> AssociateDRTLogBucketOutcomeCallable;
      typedef std::future<AssociateDRTRoleOutcome> AssociateDRTRoleOutcomeCallable;
      typedef std::future<AssociateHealthCheckOutcome> AssociateHealthCheckOutcomeCallable;
      typedef std::future<AssociateProactiveEngagementDetailsOutcome> AssociateProactiveEngagementDetailsOutcomeCallable;
      typedef std::future<CreateProtectionOutcome> CreateProtectionOutcomeCallable;
      typedef std::future<CreateProtectionGroupOutcome> CreateProtectionGroupOutcomeCallable;
      typedef std::future<CreateSubscriptionOutcome> CreateSubscriptionOutcomeCallable;
      typedef std::future<DeleteProtectionOutcome> DeleteProtectionOutcomeCallable;
      typedef std::future<DeleteProtectionGroupOutcome> DeleteProtectionGroupOutcomeCallable;
      typedef std::future<DescribeAttackOutcome> DescribeAttackOutcomeCallable;
      typedef std::future<DescribeAttackStatisticsOutcome> DescribeAttackStatisticsOutcomeCallable;
      typedef std::future<DescribeDRTAccessOutcome> DescribeDRTAccessOutcomeCallable;
      typedef std::future<DescribeEmergencyContactSettingsOutcome> DescribeEmergencyContactSettingsOutcomeCallable;
      typedef std::future<DescribeProtectionOutcome> DescribeProtectionOutcomeCallable;
      typedef std::future<DescribeProtectionGroupOutcome> DescribeProtectionGroupOutcomeCallable;
      typedef std::future<DescribeSubscriptionOutcome> DescribeSubscriptionOutcomeCallable;
      typedef std::future<DisableApplicationLayerAutomaticResponseOutcome> DisableApplicationLayerAutomaticResponseOutcomeCallable;
      typedef std::future<DisableProactiveEngagementOutcome> DisableProactiveEngagementOutcomeCallable;
      typedef std::future<DisassociateDRTLogBucketOutcome> DisassociateDRTLogBucketOutcomeCallable;
      typedef std::future<DisassociateDRTRoleOutcome> DisassociateDRTRoleOutcomeCallable;
      typedef std::future<DisassociateHealthCheckOutcome> DisassociateHealthCheckOutcomeCallable;
      typedef std::future<EnableApplicationLayerAutomaticResponseOutcome> EnableApplicationLayerAutomaticResponseOutcomeCallable;
      typedef std::future<EnableProactiveEngagementOutcome> EnableProactiveEngagementOutcomeCallable;
      typedef std::future<GetSubscriptionStateOutcome> GetSubscriptionStateOutcomeCallable;
      typedef std::future<ListAttacksOutcome> ListAttacksOutcomeCallable;
      typedef std::future<ListProtectionGroupsOutcome> ListProtectionGroupsOutcomeCallable;
      typedef std::future<ListProtectionsOutcome> ListProtectionsOutcomeCallable;
      typedef std::future<ListResourcesInProtectionGroupOutcome> ListResourcesInProtectionGroupOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationLayerAutomaticResponseOutcome> UpdateApplicationLayerAutomaticResponseOutcomeCallable;
      typedef std::future<UpdateEmergencyContactSettingsOutcome> UpdateEmergencyContactSettingsOutcomeCallable;
      typedef std::future<UpdateProtectionGroupOutcome> UpdateProtectionGroupOutcomeCallable;
      typedef std::future<UpdateSubscriptionOutcome> UpdateSubscriptionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ShieldClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ShieldClient*, const Model::AssociateDRTLogBucketRequest&, const Model::AssociateDRTLogBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDRTLogBucketResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateDRTRoleRequest&, const Model::AssociateDRTRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDRTRoleResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateHealthCheckRequest&, const Model::AssociateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::AssociateProactiveEngagementDetailsRequest&, const Model::AssociateProactiveEngagementDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProactiveEngagementDetailsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateProtectionRequest&, const Model::CreateProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateProtectionGroupRequest&, const Model::CreateProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::CreateSubscriptionRequest&, const Model::CreateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteProtectionRequest&, const Model::DeleteProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DeleteProtectionGroupRequest&, const Model::DeleteProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeAttackRequest&, const Model::DescribeAttackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttackResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeAttackStatisticsRequest&, const Model::DescribeAttackStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAttackStatisticsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeDRTAccessRequest&, const Model::DescribeDRTAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDRTAccessResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeEmergencyContactSettingsRequest&, const Model::DescribeEmergencyContactSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEmergencyContactSettingsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeProtectionRequest&, const Model::DescribeProtectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeProtectionGroupRequest&, const Model::DescribeProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DescribeSubscriptionRequest&, const Model::DescribeSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubscriptionResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisableApplicationLayerAutomaticResponseRequest&, const Model::DisableApplicationLayerAutomaticResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableApplicationLayerAutomaticResponseResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisableProactiveEngagementRequest&, const Model::DisableProactiveEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableProactiveEngagementResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateDRTLogBucketRequest&, const Model::DisassociateDRTLogBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDRTLogBucketResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateDRTRoleRequest&, const Model::DisassociateDRTRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDRTRoleResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::DisassociateHealthCheckRequest&, const Model::DisassociateHealthCheckOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateHealthCheckResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::EnableApplicationLayerAutomaticResponseRequest&, const Model::EnableApplicationLayerAutomaticResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableApplicationLayerAutomaticResponseResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::EnableProactiveEngagementRequest&, const Model::EnableProactiveEngagementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableProactiveEngagementResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::GetSubscriptionStateRequest&, const Model::GetSubscriptionStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionStateResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListAttacksRequest&, const Model::ListAttacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttacksResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListProtectionGroupsRequest&, const Model::ListProtectionGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectionGroupsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListProtectionsRequest&, const Model::ListProtectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProtectionsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListResourcesInProtectionGroupRequest&, const Model::ListResourcesInProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesInProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateApplicationLayerAutomaticResponseRequest&, const Model::UpdateApplicationLayerAutomaticResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationLayerAutomaticResponseResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateEmergencyContactSettingsRequest&, const Model::UpdateEmergencyContactSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEmergencyContactSettingsResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateProtectionGroupRequest&, const Model::UpdateProtectionGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProtectionGroupResponseReceivedHandler;
    typedef std::function<void(const ShieldClient*, const Model::UpdateSubscriptionRequest&, const Model::UpdateSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Shield
} // namespace Aws
