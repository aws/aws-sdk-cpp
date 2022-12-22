/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/organizations/OrganizationsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/organizations/OrganizationsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OrganizationsClient header */
#include <aws/organizations/model/AcceptHandshakeResult.h>
#include <aws/organizations/model/CancelHandshakeResult.h>
#include <aws/organizations/model/CreateAccountResult.h>
#include <aws/organizations/model/CreateGovCloudAccountResult.h>
#include <aws/organizations/model/CreateOrganizationResult.h>
#include <aws/organizations/model/CreateOrganizationalUnitResult.h>
#include <aws/organizations/model/CreatePolicyResult.h>
#include <aws/organizations/model/DeclineHandshakeResult.h>
#include <aws/organizations/model/DescribeAccountResult.h>
#include <aws/organizations/model/DescribeCreateAccountStatusResult.h>
#include <aws/organizations/model/DescribeEffectivePolicyResult.h>
#include <aws/organizations/model/DescribeHandshakeResult.h>
#include <aws/organizations/model/DescribeOrganizationResult.h>
#include <aws/organizations/model/DescribeOrganizationalUnitResult.h>
#include <aws/organizations/model/DescribePolicyResult.h>
#include <aws/organizations/model/DescribeResourcePolicyResult.h>
#include <aws/organizations/model/DisablePolicyTypeResult.h>
#include <aws/organizations/model/EnableAllFeaturesResult.h>
#include <aws/organizations/model/EnablePolicyTypeResult.h>
#include <aws/organizations/model/InviteAccountToOrganizationResult.h>
#include <aws/organizations/model/ListAWSServiceAccessForOrganizationResult.h>
#include <aws/organizations/model/ListAccountsResult.h>
#include <aws/organizations/model/ListAccountsForParentResult.h>
#include <aws/organizations/model/ListChildrenResult.h>
#include <aws/organizations/model/ListCreateAccountStatusResult.h>
#include <aws/organizations/model/ListDelegatedAdministratorsResult.h>
#include <aws/organizations/model/ListDelegatedServicesForAccountResult.h>
#include <aws/organizations/model/ListHandshakesForAccountResult.h>
#include <aws/organizations/model/ListHandshakesForOrganizationResult.h>
#include <aws/organizations/model/ListOrganizationalUnitsForParentResult.h>
#include <aws/organizations/model/ListParentsResult.h>
#include <aws/organizations/model/ListPoliciesResult.h>
#include <aws/organizations/model/ListPoliciesForTargetResult.h>
#include <aws/organizations/model/ListRootsResult.h>
#include <aws/organizations/model/ListTagsForResourceResult.h>
#include <aws/organizations/model/ListTargetsForPolicyResult.h>
#include <aws/organizations/model/PutResourcePolicyResult.h>
#include <aws/organizations/model/UpdateOrganizationalUnitResult.h>
#include <aws/organizations/model/UpdatePolicyResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in OrganizationsClient header */

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

  namespace Organizations
  {
    using OrganizationsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OrganizationsEndpointProviderBase = Aws::Organizations::Endpoint::OrganizationsEndpointProviderBase;
    using OrganizationsEndpointProvider = Aws::Organizations::Endpoint::OrganizationsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OrganizationsClient header */
      class AcceptHandshakeRequest;
      class AttachPolicyRequest;
      class CancelHandshakeRequest;
      class CloseAccountRequest;
      class CreateAccountRequest;
      class CreateGovCloudAccountRequest;
      class CreateOrganizationRequest;
      class CreateOrganizationalUnitRequest;
      class CreatePolicyRequest;
      class DeclineHandshakeRequest;
      class DeleteOrganizationalUnitRequest;
      class DeletePolicyRequest;
      class DeregisterDelegatedAdministratorRequest;
      class DescribeAccountRequest;
      class DescribeCreateAccountStatusRequest;
      class DescribeEffectivePolicyRequest;
      class DescribeHandshakeRequest;
      class DescribeOrganizationalUnitRequest;
      class DescribePolicyRequest;
      class DetachPolicyRequest;
      class DisableAWSServiceAccessRequest;
      class DisablePolicyTypeRequest;
      class EnableAWSServiceAccessRequest;
      class EnableAllFeaturesRequest;
      class EnablePolicyTypeRequest;
      class InviteAccountToOrganizationRequest;
      class ListAWSServiceAccessForOrganizationRequest;
      class ListAccountsRequest;
      class ListAccountsForParentRequest;
      class ListChildrenRequest;
      class ListCreateAccountStatusRequest;
      class ListDelegatedAdministratorsRequest;
      class ListDelegatedServicesForAccountRequest;
      class ListHandshakesForAccountRequest;
      class ListHandshakesForOrganizationRequest;
      class ListOrganizationalUnitsForParentRequest;
      class ListParentsRequest;
      class ListPoliciesRequest;
      class ListPoliciesForTargetRequest;
      class ListRootsRequest;
      class ListTagsForResourceRequest;
      class ListTargetsForPolicyRequest;
      class MoveAccountRequest;
      class PutResourcePolicyRequest;
      class RegisterDelegatedAdministratorRequest;
      class RemoveAccountFromOrganizationRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateOrganizationalUnitRequest;
      class UpdatePolicyRequest;
      /* End of service model forward declarations required in OrganizationsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptHandshakeResult, OrganizationsError> AcceptHandshakeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> AttachPolicyOutcome;
      typedef Aws::Utils::Outcome<CancelHandshakeResult, OrganizationsError> CancelHandshakeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> CloseAccountOutcome;
      typedef Aws::Utils::Outcome<CreateAccountResult, OrganizationsError> CreateAccountOutcome;
      typedef Aws::Utils::Outcome<CreateGovCloudAccountResult, OrganizationsError> CreateGovCloudAccountOutcome;
      typedef Aws::Utils::Outcome<CreateOrganizationResult, OrganizationsError> CreateOrganizationOutcome;
      typedef Aws::Utils::Outcome<CreateOrganizationalUnitResult, OrganizationsError> CreateOrganizationalUnitOutcome;
      typedef Aws::Utils::Outcome<CreatePolicyResult, OrganizationsError> CreatePolicyOutcome;
      typedef Aws::Utils::Outcome<DeclineHandshakeResult, OrganizationsError> DeclineHandshakeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeleteOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeleteOrganizationalUnitOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeregisterDelegatedAdministratorOutcome;
      typedef Aws::Utils::Outcome<DescribeAccountResult, OrganizationsError> DescribeAccountOutcome;
      typedef Aws::Utils::Outcome<DescribeCreateAccountStatusResult, OrganizationsError> DescribeCreateAccountStatusOutcome;
      typedef Aws::Utils::Outcome<DescribeEffectivePolicyResult, OrganizationsError> DescribeEffectivePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeHandshakeResult, OrganizationsError> DescribeHandshakeOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationResult, OrganizationsError> DescribeOrganizationOutcome;
      typedef Aws::Utils::Outcome<DescribeOrganizationalUnitResult, OrganizationsError> DescribeOrganizationalUnitOutcome;
      typedef Aws::Utils::Outcome<DescribePolicyResult, OrganizationsError> DescribePolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeResourcePolicyResult, OrganizationsError> DescribeResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DetachPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DisableAWSServiceAccessOutcome;
      typedef Aws::Utils::Outcome<DisablePolicyTypeResult, OrganizationsError> DisablePolicyTypeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> EnableAWSServiceAccessOutcome;
      typedef Aws::Utils::Outcome<EnableAllFeaturesResult, OrganizationsError> EnableAllFeaturesOutcome;
      typedef Aws::Utils::Outcome<EnablePolicyTypeResult, OrganizationsError> EnablePolicyTypeOutcome;
      typedef Aws::Utils::Outcome<InviteAccountToOrganizationResult, OrganizationsError> InviteAccountToOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> LeaveOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListAWSServiceAccessForOrganizationResult, OrganizationsError> ListAWSServiceAccessForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListAccountsResult, OrganizationsError> ListAccountsOutcome;
      typedef Aws::Utils::Outcome<ListAccountsForParentResult, OrganizationsError> ListAccountsForParentOutcome;
      typedef Aws::Utils::Outcome<ListChildrenResult, OrganizationsError> ListChildrenOutcome;
      typedef Aws::Utils::Outcome<ListCreateAccountStatusResult, OrganizationsError> ListCreateAccountStatusOutcome;
      typedef Aws::Utils::Outcome<ListDelegatedAdministratorsResult, OrganizationsError> ListDelegatedAdministratorsOutcome;
      typedef Aws::Utils::Outcome<ListDelegatedServicesForAccountResult, OrganizationsError> ListDelegatedServicesForAccountOutcome;
      typedef Aws::Utils::Outcome<ListHandshakesForAccountResult, OrganizationsError> ListHandshakesForAccountOutcome;
      typedef Aws::Utils::Outcome<ListHandshakesForOrganizationResult, OrganizationsError> ListHandshakesForOrganizationOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationalUnitsForParentResult, OrganizationsError> ListOrganizationalUnitsForParentOutcome;
      typedef Aws::Utils::Outcome<ListParentsResult, OrganizationsError> ListParentsOutcome;
      typedef Aws::Utils::Outcome<ListPoliciesResult, OrganizationsError> ListPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListPoliciesForTargetResult, OrganizationsError> ListPoliciesForTargetOutcome;
      typedef Aws::Utils::Outcome<ListRootsResult, OrganizationsError> ListRootsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, OrganizationsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTargetsForPolicyResult, OrganizationsError> ListTargetsForPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> MoveAccountOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, OrganizationsError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> RegisterDelegatedAdministratorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> RemoveAccountFromOrganizationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateOrganizationalUnitResult, OrganizationsError> UpdateOrganizationalUnitOutcome;
      typedef Aws::Utils::Outcome<UpdatePolicyResult, OrganizationsError> UpdatePolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptHandshakeOutcome> AcceptHandshakeOutcomeCallable;
      typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
      typedef std::future<CancelHandshakeOutcome> CancelHandshakeOutcomeCallable;
      typedef std::future<CloseAccountOutcome> CloseAccountOutcomeCallable;
      typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
      typedef std::future<CreateGovCloudAccountOutcome> CreateGovCloudAccountOutcomeCallable;
      typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
      typedef std::future<CreateOrganizationalUnitOutcome> CreateOrganizationalUnitOutcomeCallable;
      typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
      typedef std::future<DeclineHandshakeOutcome> DeclineHandshakeOutcomeCallable;
      typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
      typedef std::future<DeleteOrganizationalUnitOutcome> DeleteOrganizationalUnitOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeregisterDelegatedAdministratorOutcome> DeregisterDelegatedAdministratorOutcomeCallable;
      typedef std::future<DescribeAccountOutcome> DescribeAccountOutcomeCallable;
      typedef std::future<DescribeCreateAccountStatusOutcome> DescribeCreateAccountStatusOutcomeCallable;
      typedef std::future<DescribeEffectivePolicyOutcome> DescribeEffectivePolicyOutcomeCallable;
      typedef std::future<DescribeHandshakeOutcome> DescribeHandshakeOutcomeCallable;
      typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
      typedef std::future<DescribeOrganizationalUnitOutcome> DescribeOrganizationalUnitOutcomeCallable;
      typedef std::future<DescribePolicyOutcome> DescribePolicyOutcomeCallable;
      typedef std::future<DescribeResourcePolicyOutcome> DescribeResourcePolicyOutcomeCallable;
      typedef std::future<DetachPolicyOutcome> DetachPolicyOutcomeCallable;
      typedef std::future<DisableAWSServiceAccessOutcome> DisableAWSServiceAccessOutcomeCallable;
      typedef std::future<DisablePolicyTypeOutcome> DisablePolicyTypeOutcomeCallable;
      typedef std::future<EnableAWSServiceAccessOutcome> EnableAWSServiceAccessOutcomeCallable;
      typedef std::future<EnableAllFeaturesOutcome> EnableAllFeaturesOutcomeCallable;
      typedef std::future<EnablePolicyTypeOutcome> EnablePolicyTypeOutcomeCallable;
      typedef std::future<InviteAccountToOrganizationOutcome> InviteAccountToOrganizationOutcomeCallable;
      typedef std::future<LeaveOrganizationOutcome> LeaveOrganizationOutcomeCallable;
      typedef std::future<ListAWSServiceAccessForOrganizationOutcome> ListAWSServiceAccessForOrganizationOutcomeCallable;
      typedef std::future<ListAccountsOutcome> ListAccountsOutcomeCallable;
      typedef std::future<ListAccountsForParentOutcome> ListAccountsForParentOutcomeCallable;
      typedef std::future<ListChildrenOutcome> ListChildrenOutcomeCallable;
      typedef std::future<ListCreateAccountStatusOutcome> ListCreateAccountStatusOutcomeCallable;
      typedef std::future<ListDelegatedAdministratorsOutcome> ListDelegatedAdministratorsOutcomeCallable;
      typedef std::future<ListDelegatedServicesForAccountOutcome> ListDelegatedServicesForAccountOutcomeCallable;
      typedef std::future<ListHandshakesForAccountOutcome> ListHandshakesForAccountOutcomeCallable;
      typedef std::future<ListHandshakesForOrganizationOutcome> ListHandshakesForOrganizationOutcomeCallable;
      typedef std::future<ListOrganizationalUnitsForParentOutcome> ListOrganizationalUnitsForParentOutcomeCallable;
      typedef std::future<ListParentsOutcome> ListParentsOutcomeCallable;
      typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
      typedef std::future<ListPoliciesForTargetOutcome> ListPoliciesForTargetOutcomeCallable;
      typedef std::future<ListRootsOutcome> ListRootsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTargetsForPolicyOutcome> ListTargetsForPolicyOutcomeCallable;
      typedef std::future<MoveAccountOutcome> MoveAccountOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RegisterDelegatedAdministratorOutcome> RegisterDelegatedAdministratorOutcomeCallable;
      typedef std::future<RemoveAccountFromOrganizationOutcome> RemoveAccountFromOrganizationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateOrganizationalUnitOutcome> UpdateOrganizationalUnitOutcomeCallable;
      typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OrganizationsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OrganizationsClient*, const Model::AcceptHandshakeRequest&, const Model::AcceptHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::AttachPolicyRequest&, const Model::AttachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachPolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CancelHandshakeRequest&, const Model::CancelHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CloseAccountRequest&, const Model::CloseAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloseAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateAccountRequest&, const Model::CreateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateGovCloudAccountRequest&, const Model::CreateGovCloudAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGovCloudAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateOrganizationRequest&, const Model::CreateOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateOrganizationalUnitRequest&, const Model::CreateOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeclineHandshakeRequest&, const Model::DeclineHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeleteOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeleteOrganizationalUnitRequest&, const Model::DeleteOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeregisterDelegatedAdministratorRequest&, const Model::DeregisterDelegatedAdministratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDelegatedAdministratorResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeAccountRequest&, const Model::DescribeAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeCreateAccountStatusRequest&, const Model::DescribeCreateAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCreateAccountStatusResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeEffectivePolicyRequest&, const Model::DescribeEffectivePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectivePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeHandshakeRequest&, const Model::DescribeHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeOrganizationalUnitRequest&, const Model::DescribeOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribePolicyRequest&, const Model::DescribePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DetachPolicyRequest&, const Model::DetachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachPolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DisableAWSServiceAccessRequest&, const Model::DisableAWSServiceAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAWSServiceAccessResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DisablePolicyTypeRequest&, const Model::DisablePolicyTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisablePolicyTypeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::EnableAWSServiceAccessRequest&, const Model::EnableAWSServiceAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAWSServiceAccessResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::EnableAllFeaturesRequest&, const Model::EnableAllFeaturesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAllFeaturesResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::EnablePolicyTypeRequest&, const Model::EnablePolicyTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnablePolicyTypeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::InviteAccountToOrganizationRequest&, const Model::InviteAccountToOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InviteAccountToOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::LeaveOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LeaveOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListAWSServiceAccessForOrganizationRequest&, const Model::ListAWSServiceAccessForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAWSServiceAccessForOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListAccountsRequest&, const Model::ListAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListAccountsForParentRequest&, const Model::ListAccountsForParentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccountsForParentResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListChildrenRequest&, const Model::ListChildrenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChildrenResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListCreateAccountStatusRequest&, const Model::ListCreateAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCreateAccountStatusResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListDelegatedAdministratorsRequest&, const Model::ListDelegatedAdministratorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDelegatedAdministratorsResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListDelegatedServicesForAccountRequest&, const Model::ListDelegatedServicesForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDelegatedServicesForAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListHandshakesForAccountRequest&, const Model::ListHandshakesForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHandshakesForAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListHandshakesForOrganizationRequest&, const Model::ListHandshakesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHandshakesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListOrganizationalUnitsForParentRequest&, const Model::ListOrganizationalUnitsForParentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationalUnitsForParentResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListParentsRequest&, const Model::ListParentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListParentsResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListPoliciesForTargetRequest&, const Model::ListPoliciesForTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesForTargetResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListRootsRequest&, const Model::ListRootsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRootsResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::ListTargetsForPolicyRequest&, const Model::ListTargetsForPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTargetsForPolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::MoveAccountRequest&, const Model::MoveAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MoveAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::RegisterDelegatedAdministratorRequest&, const Model::RegisterDelegatedAdministratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDelegatedAdministratorResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::RemoveAccountFromOrganizationRequest&, const Model::RemoveAccountFromOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAccountFromOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UpdateOrganizationalUnitRequest&, const Model::UpdateOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Organizations
} // namespace Aws
