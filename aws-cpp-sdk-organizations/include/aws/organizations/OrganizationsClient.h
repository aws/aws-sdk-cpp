/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/organizations/model/UpdateOrganizationalUnitResult.h>
#include <aws/organizations/model/UpdatePolicyResult.h>
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

namespace Model
{
        class AcceptHandshakeRequest;
        class AttachPolicyRequest;
        class CancelHandshakeRequest;
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
        class RegisterDelegatedAdministratorRequest;
        class RemoveAccountFromOrganizationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateOrganizationalUnitRequest;
        class UpdatePolicyRequest;

        typedef Aws::Utils::Outcome<AcceptHandshakeResult, OrganizationsError> AcceptHandshakeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> AttachPolicyOutcome;
        typedef Aws::Utils::Outcome<CancelHandshakeResult, OrganizationsError> CancelHandshakeOutcome;
        typedef Aws::Utils::Outcome<CreateAccountResult, OrganizationsError> CreateAccountOutcome;
        typedef Aws::Utils::Outcome<CreateGovCloudAccountResult, OrganizationsError> CreateGovCloudAccountOutcome;
        typedef Aws::Utils::Outcome<CreateOrganizationResult, OrganizationsError> CreateOrganizationOutcome;
        typedef Aws::Utils::Outcome<CreateOrganizationalUnitResult, OrganizationsError> CreateOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyResult, OrganizationsError> CreatePolicyOutcome;
        typedef Aws::Utils::Outcome<DeclineHandshakeResult, OrganizationsError> DeclineHandshakeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeleteOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeleteOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> DeregisterDelegatedAdministratorOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountResult, OrganizationsError> DescribeAccountOutcome;
        typedef Aws::Utils::Outcome<DescribeCreateAccountStatusResult, OrganizationsError> DescribeCreateAccountStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeEffectivePolicyResult, OrganizationsError> DescribeEffectivePolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeHandshakeResult, OrganizationsError> DescribeHandshakeOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationResult, OrganizationsError> DescribeOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationalUnitResult, OrganizationsError> DescribeOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<DescribePolicyResult, OrganizationsError> DescribePolicyOutcome;
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
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> RegisterDelegatedAdministratorOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> RemoveAccountFromOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, OrganizationsError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateOrganizationalUnitResult, OrganizationsError> UpdateOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<UpdatePolicyResult, OrganizationsError> UpdatePolicyOutcome;

        typedef std::future<AcceptHandshakeOutcome> AcceptHandshakeOutcomeCallable;
        typedef std::future<AttachPolicyOutcome> AttachPolicyOutcomeCallable;
        typedef std::future<CancelHandshakeOutcome> CancelHandshakeOutcomeCallable;
        typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
        typedef std::future<CreateGovCloudAccountOutcome> CreateGovCloudAccountOutcomeCallable;
        typedef std::future<CreateOrganizationOutcome> CreateOrganizationOutcomeCallable;
        typedef std::future<CreateOrganizationalUnitOutcome> CreateOrganizationalUnitOutcomeCallable;
        typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
        typedef std::future<DeclineHandshakeOutcome> DeclineHandshakeOutcomeCallable;
        typedef std::future<DeleteOrganizationOutcome> DeleteOrganizationOutcomeCallable;
        typedef std::future<DeleteOrganizationalUnitOutcome> DeleteOrganizationalUnitOutcomeCallable;
        typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
        typedef std::future<DeregisterDelegatedAdministratorOutcome> DeregisterDelegatedAdministratorOutcomeCallable;
        typedef std::future<DescribeAccountOutcome> DescribeAccountOutcomeCallable;
        typedef std::future<DescribeCreateAccountStatusOutcome> DescribeCreateAccountStatusOutcomeCallable;
        typedef std::future<DescribeEffectivePolicyOutcome> DescribeEffectivePolicyOutcomeCallable;
        typedef std::future<DescribeHandshakeOutcome> DescribeHandshakeOutcomeCallable;
        typedef std::future<DescribeOrganizationOutcome> DescribeOrganizationOutcomeCallable;
        typedef std::future<DescribeOrganizationalUnitOutcome> DescribeOrganizationalUnitOutcomeCallable;
        typedef std::future<DescribePolicyOutcome> DescribePolicyOutcomeCallable;
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
        typedef std::future<RegisterDelegatedAdministratorOutcome> RegisterDelegatedAdministratorOutcomeCallable;
        typedef std::future<RemoveAccountFromOrganizationOutcome> RemoveAccountFromOrganizationOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateOrganizationalUnitOutcome> UpdateOrganizationalUnitOutcomeCallable;
        typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
} // namespace Model

  class OrganizationsClient;

    typedef std::function<void(const OrganizationsClient*, const Model::AcceptHandshakeRequest&, const Model::AcceptHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::AttachPolicyRequest&, const Model::AttachPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachPolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CancelHandshakeRequest&, const Model::CancelHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateAccountRequest&, const Model::CreateAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateGovCloudAccountRequest&, const Model::CreateGovCloudAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGovCloudAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateOrganizationRequest&, const Model::CreateOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreateOrganizationalUnitRequest&, const Model::CreateOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeclineHandshakeRequest&, const Model::DeclineHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeclineHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeleteOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeleteOrganizationalUnitRequest&, const Model::DeleteOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DeregisterDelegatedAdministratorRequest&, const Model::DeregisterDelegatedAdministratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDelegatedAdministratorResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeAccountRequest&, const Model::DescribeAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeCreateAccountStatusRequest&, const Model::DescribeCreateAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCreateAccountStatusResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeEffectivePolicyRequest&, const Model::DescribeEffectivePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEffectivePolicyResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeHandshakeRequest&, const Model::DescribeHandshakeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHandshakeResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeOrganizationalUnitRequest&, const Model::DescribeOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribePolicyRequest&, const Model::DescribePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePolicyResponseReceivedHandler;
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
    typedef std::function<void(const OrganizationsClient*, const Model::RegisterDelegatedAdministratorRequest&, const Model::RegisterDelegatedAdministratorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterDelegatedAdministratorResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::RemoveAccountFromOrganizationRequest&, const Model::RemoveAccountFromOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAccountFromOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UpdateOrganizationalUnitRequest&, const Model::UpdateOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePolicyResponseReceivedHandler;

  /**
   * <fullname>AWS Organizations</fullname>
   */
  class AWS_ORGANIZATIONS_API OrganizationsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OrganizationsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OrganizationsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OrganizationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~OrganizationsClient();


        /**
         * <p>Sends a response to the originator of a handshake agreeing to the action
         * proposed by the handshake request.</p> <p>This operation can be called only by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account.</p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that AWS Organizations
         * can create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> </li> <li> <p> <b>Enable all features final confirmation</b>
         * handshake: only a principal from the management account.</p> <p>For more
         * information about invitations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_invites.html">Inviting
         * an AWS Account to Join Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> For more information about requests to enable all features in the
         * organization, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * All Features in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>After you accept a handshake, it continues to
         * appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AcceptHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptHandshakeOutcome AcceptHandshake(const Model::AcceptHandshakeRequest& request) const;

        /**
         * <p>Sends a response to the originator of a handshake agreeing to the action
         * proposed by the handshake request.</p> <p>This operation can be called only by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account.</p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that AWS Organizations
         * can create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> </li> <li> <p> <b>Enable all features final confirmation</b>
         * handshake: only a principal from the management account.</p> <p>For more
         * information about invitations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_invites.html">Inviting
         * an AWS Account to Join Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> For more information about requests to enable all features in the
         * organization, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * All Features in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>After you accept a handshake, it continues to
         * appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AcceptHandshake">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptHandshakeOutcomeCallable AcceptHandshakeCallable(const Model::AcceptHandshakeRequest& request) const;

        /**
         * <p>Sends a response to the originator of a handshake agreeing to the action
         * proposed by the handshake request.</p> <p>This operation can be called only by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account.</p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that AWS Organizations
         * can create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> </li> <li> <p> <b>Enable all features final confirmation</b>
         * handshake: only a principal from the management account.</p> <p>For more
         * information about invitations, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_invites.html">Inviting
         * an AWS Account to Join Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> For more information about requests to enable all features in the
         * organization, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * All Features in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>After you accept a handshake, it continues to
         * appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AcceptHandshake">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptHandshakeAsync(const Model::AcceptHandshakeRequest& request, const AcceptHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a policy to a root, an organizational unit (OU), or an individual
         * account. How the policy affects accounts depends on the type of policy. Refer to
         * the <i>AWS Organizations User Guide</i> for information about each policy
         * type:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
         * </p> </li> </ul> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy to a root, an organizational unit (OU), or an individual
         * account. How the policy affects accounts depends on the type of policy. Refer to
         * the <i>AWS Organizations User Guide</i> for information about each policy
         * type:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
         * </p> </li> </ul> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy to a root, an organizational unit (OU), or an individual
         * account. How the policy affects accounts depends on the type of policy. Refer to
         * the <i>AWS Organizations User Guide</i> for information about each policy
         * type:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
         * </p> </li> </ul> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>.</p> <p>This operation can be called only from the account
         * that originated the handshake. The recipient of the handshake can't cancel it,
         * but can use <a>DeclineHandshake</a> instead. After a handshake is canceled, the
         * recipient can no longer respond to that handshake.</p> <p>After you cancel a
         * handshake, it continues to appear in the results of relevant APIs for only 30
         * days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CancelHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelHandshakeOutcome CancelHandshake(const Model::CancelHandshakeRequest& request) const;

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>.</p> <p>This operation can be called only from the account
         * that originated the handshake. The recipient of the handshake can't cancel it,
         * but can use <a>DeclineHandshake</a> instead. After a handshake is canceled, the
         * recipient can no longer respond to that handshake.</p> <p>After you cancel a
         * handshake, it continues to appear in the results of relevant APIs for only 30
         * days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CancelHandshake">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelHandshakeOutcomeCallable CancelHandshakeCallable(const Model::CancelHandshakeRequest& request) const;

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>.</p> <p>This operation can be called only from the account
         * that originated the handshake. The recipient of the handshake can't cancel it,
         * but can use <a>DeclineHandshake</a> instead. After a handshake is canceled, the
         * recipient can no longer respond to that handshake.</p> <p>After you cancel a
         * handshake, it continues to appear in the results of relevant APIs for only 30
         * days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CancelHandshake">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelHandshakeAsync(const Model::CancelHandshakeRequest& request, const CancelHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS account that is automatically a member of the organization
         * whose credentials made the request. This is an asynchronous request that AWS
         * performs in the background. Because <code>CreateAccount</code> operates
         * asynchronously, it can return a successful completion message even though
         * account initialization might still be in progress. You might need to wait a few
         * minutes before you can successfully access the account. To check the status of
         * the request, do one of the following:</p> <ul> <li> <p>Use the <code>Id</code>
         * member of the <code>CreateAccountStatus</code> response element from this
         * operation to provide as a parameter to the <a>DescribeCreateAccountStatus</a>
         * operation.</p> </li> <li> <p>Check the AWS CloudTrail log for the
         * <code>CreateAccountResult</code> event. For information on using AWS CloudTrail
         * with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>The user who calls the API to create an account
         * must have the <code>organizations:CreateAccount</code> permission. If you
         * enabled all features in the organization, AWS Organizations creates the required
         * service-linked role named <code>AWSServiceRoleForOrganizations</code>. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> <p>If the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>AWS Organizations
         * preconfigures the new member account with a role (named
         * <code>OrganizationAccountAccessRole</code> by default) that grants users in the
         * management account administrator permissions in the new member account.
         * Principals in the management account can assume the role. AWS Organizations
         * clones the company name and address information for the new account from the
         * organization's management account.</p> <p>This operation can be called only from
         * the organization's management account.</p> <p>For more information about
         * creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. Follow the
         * steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization as a member account</a> in the <i>AWS Organizations
         * User Guide</i>.</p> </li> <li> <p>If you get an exception that indicates that
         * you exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>If you get an exception that indicates that the operation failed because
         * your organization is still initializing, wait one hour and then try again. If
         * the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>Using <code>CreateAccount</code> to create multiple temporary accounts
         * isn't recommended. You can only close an account from the Billing and Cost
         * Management Console, and you must be signed in as the root user. For information
         * on the requirements and process for closing an account, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * an AWS Account</a> in the <i>AWS Organizations User Guide</i>.</p> </li> </ul>
         *   <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest& request) const;

        /**
         * <p>Creates an AWS account that is automatically a member of the organization
         * whose credentials made the request. This is an asynchronous request that AWS
         * performs in the background. Because <code>CreateAccount</code> operates
         * asynchronously, it can return a successful completion message even though
         * account initialization might still be in progress. You might need to wait a few
         * minutes before you can successfully access the account. To check the status of
         * the request, do one of the following:</p> <ul> <li> <p>Use the <code>Id</code>
         * member of the <code>CreateAccountStatus</code> response element from this
         * operation to provide as a parameter to the <a>DescribeCreateAccountStatus</a>
         * operation.</p> </li> <li> <p>Check the AWS CloudTrail log for the
         * <code>CreateAccountResult</code> event. For information on using AWS CloudTrail
         * with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>The user who calls the API to create an account
         * must have the <code>organizations:CreateAccount</code> permission. If you
         * enabled all features in the organization, AWS Organizations creates the required
         * service-linked role named <code>AWSServiceRoleForOrganizations</code>. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> <p>If the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>AWS Organizations
         * preconfigures the new member account with a role (named
         * <code>OrganizationAccountAccessRole</code> by default) that grants users in the
         * management account administrator permissions in the new member account.
         * Principals in the management account can assume the role. AWS Organizations
         * clones the company name and address information for the new account from the
         * organization's management account.</p> <p>This operation can be called only from
         * the organization's management account.</p> <p>For more information about
         * creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. Follow the
         * steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization as a member account</a> in the <i>AWS Organizations
         * User Guide</i>.</p> </li> <li> <p>If you get an exception that indicates that
         * you exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>If you get an exception that indicates that the operation failed because
         * your organization is still initializing, wait one hour and then try again. If
         * the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>Using <code>CreateAccount</code> to create multiple temporary accounts
         * isn't recommended. You can only close an account from the Billing and Cost
         * Management Console, and you must be signed in as the root user. For information
         * on the requirements and process for closing an account, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * an AWS Account</a> in the <i>AWS Organizations User Guide</i>.</p> </li> </ul>
         *   <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request) const;

        /**
         * <p>Creates an AWS account that is automatically a member of the organization
         * whose credentials made the request. This is an asynchronous request that AWS
         * performs in the background. Because <code>CreateAccount</code> operates
         * asynchronously, it can return a successful completion message even though
         * account initialization might still be in progress. You might need to wait a few
         * minutes before you can successfully access the account. To check the status of
         * the request, do one of the following:</p> <ul> <li> <p>Use the <code>Id</code>
         * member of the <code>CreateAccountStatus</code> response element from this
         * operation to provide as a parameter to the <a>DescribeCreateAccountStatus</a>
         * operation.</p> </li> <li> <p>Check the AWS CloudTrail log for the
         * <code>CreateAccountResult</code> event. For information on using AWS CloudTrail
         * with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>The user who calls the API to create an account
         * must have the <code>organizations:CreateAccount</code> permission. If you
         * enabled all features in the organization, AWS Organizations creates the required
         * service-linked role named <code>AWSServiceRoleForOrganizations</code>. For more
         * information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> <p>If the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>AWS Organizations
         * preconfigures the new member account with a role (named
         * <code>OrganizationAccountAccessRole</code> by default) that grants users in the
         * management account administrator permissions in the new member account.
         * Principals in the management account can assume the role. AWS Organizations
         * clones the company name and address information for the new account from the
         * organization's management account.</p> <p>This operation can be called only from
         * the organization's management account.</p> <p>For more information about
         * creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. Follow the
         * steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization as a member account</a> in the <i>AWS Organizations
         * User Guide</i>.</p> </li> <li> <p>If you get an exception that indicates that
         * you exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>If you get an exception that indicates that the operation failed because
         * your organization is still initializing, wait one hour and then try again. If
         * the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>Using <code>CreateAccount</code> to create multiple temporary accounts
         * isn't recommended. You can only close an account from the Billing and Cost
         * Management Console, and you must be signed in as the root user. For information
         * on the requirements and process for closing an account, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * an AWS Account</a> in the <i>AWS Organizations User Guide</i>.</p> </li> </ul>
         *   <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action is available if all of the following are true:</p> <ul> <li>
         * <p>You're authorized to create accounts in the AWS GovCloud (US) Region. For
         * more information on the AWS GovCloud (US) Region, see the <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/welcome.html">
         * <i>AWS GovCloud User Guide</i>.</a> </p> </li> <li> <p>You already have an
         * account in the AWS GovCloud (US) Region that is paired with a management account
         * of an organization in the commercial Region.</p> </li> <li> <p>You call this
         * action from the management account of your organization in the commercial
         * Region.</p> </li> <li> <p>You have the
         * <code>organizations:CreateGovCloudAccount</code> permission. </p> </li> </ul>
         * <p>AWS Organizations automatically creates the required service-linked role
         * named <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>AWS automatically enables AWS CloudTrail for AWS GovCloud
         * (US) accounts, but you should also do the following:</p> <ul> <li> <p>Verify
         * that AWS CloudTrail is enabled to store logs.</p> </li> <li> <p>Create an S3
         * bucket for AWS CloudTrail log storage.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * AWS CloudTrail Is Enabled</a> in the <i>AWS GovCloud User Guide</i>. </p> </li>
         * </ul> <p>If the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission. The tags are attached to the
         * commercial account associated with the GovCloud account, rather than the
         * GovCloud account itself. To add tags to the GovCloud account, call the
         * <a>TagResource</a> operation in the GovCloud Region after the new GovCloud
         * account exists.</p> <p>You call this action from the management account of your
         * organization in the commercial Region to create a standalone AWS account in the
         * AWS GovCloud (US) Region. After the account is created, the management account
         * of an organization in the AWS GovCloud (US) Region can invite it to that
         * organization. For more information on inviting standalone accounts in the AWS
         * GovCloud (US) to join an organization, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>Calling
         * <code>CreateGovCloudAccount</code> is an asynchronous request that AWS performs
         * in the background. Because <code>CreateGovCloudAccount</code> operates
         * asynchronously, it can return a successful completion message even though
         * account initialization might still be in progress. You might need to wait a few
         * minutes before you can successfully access the account. To check the status of
         * the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using AWS CloudTrail with Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p/> <p>When you call the
         * <code>CreateGovCloudAccount</code> action, you create two accounts: a standalone
         * account in the AWS GovCloud (US) Region and an associated account in the
         * commercial Region for billing and support purposes. The account in the
         * commercial Region is automatically a member of the organization whose
         * credentials made the request. Both accounts are associated with the same email
         * address.</p> <p>A role is created in the new account in the commercial Region
         * that allows the management account in the organization in the commercial Region
         * to assume it. An AWS GovCloud (US) account is then created and associated with
         * the commercial account that you just created. A role is also created in the new
         * AWS GovCloud (US) account that can be assumed by the AWS GovCloud (US) account
         * that is associated with the management account of the commercial organization.
         * For more information and to view a diagram that explains how account access
         * works, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account is
         * <i>not</i> automatically collected. This includes a payment method and signing
         * the end user license agreement (EULA). If you must remove an account from your
         * organization later, you can do so only after you provide the missing
         * information. Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization as a member account</a> in the <i>AWS Organizations
         * User Guide.</i> </p> </li> <li> <p>If you get an exception that indicates that
         * you exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>If you get an exception that indicates that the operation failed because
         * your organization is still initializing, wait one hour and then try again. If
         * the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>Using <code>CreateGovCloudAccount</code> to create multiple temporary
         * accounts isn't recommended. You can only close an account from the AWS Billing
         * and Cost Management console, and you must be signed in as the root user. For
         * information on the requirements and process for closing an account, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * an AWS Account</a> in the <i>AWS Organizations User Guide</i>.</p> </li> </ul>
         *   <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateGovCloudAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGovCloudAccountOutcome CreateGovCloudAccount(const Model::CreateGovCloudAccountRequest& request) const;

        /**
         * <p>This action is available if all of the following are true:</p> <ul> <li>
         * <p>You're authorized to create accounts in the AWS GovCloud (US) Region. For
         * more information on the AWS GovCloud (US) Region, see the <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/welcome.html">
         * <i>AWS GovCloud User Guide</i>.</a> </p> </li> <li> <p>You already have an
         * account in the AWS GovCloud (US) Region that is paired with a management account
         * of an organization in the commercial Region.</p> </li> <li> <p>You call this
         * action from the management account of your organization in the commercial
         * Region.</p> </li> <li> <p>You have the
         * <code>organizations:CreateGovCloudAccount</code> permission. </p> </li> </ul>
         * <p>AWS Organizations automatically creates the required service-linked role
         * named <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>AWS automatically enables AWS CloudTrail for AWS GovCloud
         * (US) accounts, but you should also do the following:</p> <ul> <li> <p>Verify
         * that AWS CloudTrail is enabled to store logs.</p> </li> <li> <p>Create an S3
         * bucket for AWS CloudTrail log storage.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * AWS CloudTrail Is Enabled</a> in the <i>AWS GovCloud User Guide</i>. </p> </li>
         * </ul> <p>If the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission. The tags are attached to the
         * commercial account associated with the GovCloud account, rather than the
         * GovCloud account itself. To add tags to the GovCloud account, call the
         * <a>TagResource</a> operation in the GovCloud Region after the new GovCloud
         * account exists.</p> <p>You call this action from the management account of your
         * organization in the commercial Region to create a standalone AWS account in the
         * AWS GovCloud (US) Region. After the account is created, the management account
         * of an organization in the AWS GovCloud (US) Region can invite it to that
         * organization. For more information on inviting standalone accounts in the AWS
         * GovCloud (US) to join an organization, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>Calling
         * <code>CreateGovCloudAccount</code> is an asynchronous request that AWS performs
         * in the background. Because <code>CreateGovCloudAccount</code> operates
         * asynchronously, it can return a successful completion message even though
         * account initialization might still be in progress. You might need to wait a few
         * minutes before you can successfully access the account. To check the status of
         * the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using AWS CloudTrail with Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p/> <p>When you call the
         * <code>CreateGovCloudAccount</code> action, you create two accounts: a standalone
         * account in the AWS GovCloud (US) Region and an associated account in the
         * commercial Region for billing and support purposes. The account in the
         * commercial Region is automatically a member of the organization whose
         * credentials made the request. Both accounts are associated with the same email
         * address.</p> <p>A role is created in the new account in the commercial Region
         * that allows the management account in the organization in the commercial Region
         * to assume it. An AWS GovCloud (US) account is then created and associated with
         * the commercial account that you just created. A role is also created in the new
         * AWS GovCloud (US) account that can be assumed by the AWS GovCloud (US) account
         * that is associated with the management account of the commercial organization.
         * For more information and to view a diagram that explains how account access
         * works, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account is
         * <i>not</i> automatically collected. This includes a payment method and signing
         * the end user license agreement (EULA). If you must remove an account from your
         * organization later, you can do so only after you provide the missing
         * information. Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization as a member account</a> in the <i>AWS Organizations
         * User Guide.</i> </p> </li> <li> <p>If you get an exception that indicates that
         * you exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>If you get an exception that indicates that the operation failed because
         * your organization is still initializing, wait one hour and then try again. If
         * the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>Using <code>CreateGovCloudAccount</code> to create multiple temporary
         * accounts isn't recommended. You can only close an account from the AWS Billing
         * and Cost Management console, and you must be signed in as the root user. For
         * information on the requirements and process for closing an account, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * an AWS Account</a> in the <i>AWS Organizations User Guide</i>.</p> </li> </ul>
         *   <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateGovCloudAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGovCloudAccountOutcomeCallable CreateGovCloudAccountCallable(const Model::CreateGovCloudAccountRequest& request) const;

        /**
         * <p>This action is available if all of the following are true:</p> <ul> <li>
         * <p>You're authorized to create accounts in the AWS GovCloud (US) Region. For
         * more information on the AWS GovCloud (US) Region, see the <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/welcome.html">
         * <i>AWS GovCloud User Guide</i>.</a> </p> </li> <li> <p>You already have an
         * account in the AWS GovCloud (US) Region that is paired with a management account
         * of an organization in the commercial Region.</p> </li> <li> <p>You call this
         * action from the management account of your organization in the commercial
         * Region.</p> </li> <li> <p>You have the
         * <code>organizations:CreateGovCloudAccount</code> permission. </p> </li> </ul>
         * <p>AWS Organizations automatically creates the required service-linked role
         * named <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>AWS automatically enables AWS CloudTrail for AWS GovCloud
         * (US) accounts, but you should also do the following:</p> <ul> <li> <p>Verify
         * that AWS CloudTrail is enabled to store logs.</p> </li> <li> <p>Create an S3
         * bucket for AWS CloudTrail log storage.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * AWS CloudTrail Is Enabled</a> in the <i>AWS GovCloud User Guide</i>. </p> </li>
         * </ul> <p>If the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission. The tags are attached to the
         * commercial account associated with the GovCloud account, rather than the
         * GovCloud account itself. To add tags to the GovCloud account, call the
         * <a>TagResource</a> operation in the GovCloud Region after the new GovCloud
         * account exists.</p> <p>You call this action from the management account of your
         * organization in the commercial Region to create a standalone AWS account in the
         * AWS GovCloud (US) Region. After the account is created, the management account
         * of an organization in the AWS GovCloud (US) Region can invite it to that
         * organization. For more information on inviting standalone accounts in the AWS
         * GovCloud (US) to join an organization, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>Calling
         * <code>CreateGovCloudAccount</code> is an asynchronous request that AWS performs
         * in the background. Because <code>CreateGovCloudAccount</code> operates
         * asynchronously, it can return a successful completion message even though
         * account initialization might still be in progress. You might need to wait a few
         * minutes before you can successfully access the account. To check the status of
         * the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using AWS CloudTrail with Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p/> <p>When you call the
         * <code>CreateGovCloudAccount</code> action, you create two accounts: a standalone
         * account in the AWS GovCloud (US) Region and an associated account in the
         * commercial Region for billing and support purposes. The account in the
         * commercial Region is automatically a member of the organization whose
         * credentials made the request. Both accounts are associated with the same email
         * address.</p> <p>A role is created in the new account in the commercial Region
         * that allows the management account in the organization in the commercial Region
         * to assume it. An AWS GovCloud (US) account is then created and associated with
         * the commercial account that you just created. A role is also created in the new
         * AWS GovCloud (US) account that can be assumed by the AWS GovCloud (US) account
         * that is associated with the management account of the commercial organization.
         * For more information and to view a diagram that explains how account access
         * works, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account is
         * <i>not</i> automatically collected. This includes a payment method and signing
         * the end user license agreement (EULA). If you must remove an account from your
         * organization later, you can do so only after you provide the missing
         * information. Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization as a member account</a> in the <i>AWS Organizations
         * User Guide.</i> </p> </li> <li> <p>If you get an exception that indicates that
         * you exceeded your account limits for the organization, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>If you get an exception that indicates that the operation failed because
         * your organization is still initializing, wait one hour and then try again. If
         * the error persists, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * <li> <p>Using <code>CreateGovCloudAccount</code> to create multiple temporary
         * accounts isn't recommended. You can only close an account from the AWS Billing
         * and Cost Management console, and you must be signed in as the root user. For
         * information on the requirements and process for closing an account, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_close.html">Closing
         * an AWS Account</a> in the <i>AWS Organizations User Guide</i>.</p> </li> </ul>
         *   <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateGovCloudAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGovCloudAccountAsync(const Model::CreateGovCloudAccountRequest& request, const CreateGovCloudAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS organization. The account whose user is calling the
         * <code>CreateOrganization</code> operation automatically becomes the <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">management
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's management
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and
         * you can't use organization policies</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest& request) const;

        /**
         * <p>Creates an AWS organization. The account whose user is calling the
         * <code>CreateOrganization</code> operation automatically becomes the <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">management
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's management
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and
         * you can't use organization policies</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request) const;

        /**
         * <p>Creates an AWS organization. The account whose user is calling the
         * <code>CreateOrganization</code> operation automatically becomes the <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_getting-started_concepts.html#account">management
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's management
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and
         * you can't use organization policies</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOrganizationAsync(const Model::CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an organizational unit (OU) within a root or parent OU. An OU is a
         * container for accounts that enables you to organize your accounts to apply
         * policies according to your business requirements. The number of levels deep that
         * you can nest OUs is dependent upon the policy types enabled for that root. For
         * service control policies, the limit is five.</p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * Organizational Units</a> in the <i>AWS Organizations User Guide.</i> </p> <p>If
         * the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>This operation can be
         * called only from the organization's management account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationalUnitOutcome CreateOrganizationalUnit(const Model::CreateOrganizationalUnitRequest& request) const;

        /**
         * <p>Creates an organizational unit (OU) within a root or parent OU. An OU is a
         * container for accounts that enables you to organize your accounts to apply
         * policies according to your business requirements. The number of levels deep that
         * you can nest OUs is dependent upon the policy types enabled for that root. For
         * service control policies, the limit is five.</p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * Organizational Units</a> in the <i>AWS Organizations User Guide.</i> </p> <p>If
         * the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>This operation can be
         * called only from the organization's management account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOrganizationalUnitOutcomeCallable CreateOrganizationalUnitCallable(const Model::CreateOrganizationalUnitRequest& request) const;

        /**
         * <p>Creates an organizational unit (OU) within a root or parent OU. An OU is a
         * container for accounts that enables you to organize your accounts to apply
         * policies according to your business requirements. The number of levels deep that
         * you can nest OUs is dependent upon the policy types enabled for that root. For
         * service control policies, the limit is five.</p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * Organizational Units</a> in the <i>AWS Organizations User Guide.</i> </p> <p>If
         * the request includes tags, then the requester must have the
         * <code>organizations:TagResource</code> permission.</p> <p>This operation can be
         * called only from the organization's management account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOrganizationalUnitAsync(const Model::CreateOrganizationalUnitRequest& request, const CreateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a policy of a specified type that you can attach to a root, an
         * organizational unit (OU), or an individual AWS account.</p> <p>For more
         * information about policies and their use, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing
         * Organization Policies</a>.</p> <p>If the request includes tags, then the
         * requester must have the <code>organizations:TagResource</code> permission.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a policy of a specified type that you can attach to a root, an
         * organizational unit (OU), or an individual AWS account.</p> <p>For more
         * information about policies and their use, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing
         * Organization Policies</a>.</p> <p>If the request includes tags, then the
         * requester must have the <code>organizations:TagResource</code> permission.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreatePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a policy of a specified type that you can attach to a root, an
         * organizational unit (OU), or an individual AWS account.</p> <p>For more
         * information about policies and their use, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing
         * Organization Policies</a>.</p> <p>If the request includes tags, then the
         * requester must have the <code>organizations:TagResource</code> permission.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreatePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Declines a handshake request. This sets the handshake state to
         * <code>DECLINED</code> and effectively deactivates the request.</p> <p>This
         * operation can be called only from the account that received the handshake. The
         * originator of the handshake can use <a>CancelHandshake</a> instead. The
         * originator can't reactivate a declined request, but can reinitiate the process
         * with a new handshake request.</p> <p>After you decline a handshake, it continues
         * to appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeclineHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::DeclineHandshakeOutcome DeclineHandshake(const Model::DeclineHandshakeRequest& request) const;

        /**
         * <p>Declines a handshake request. This sets the handshake state to
         * <code>DECLINED</code> and effectively deactivates the request.</p> <p>This
         * operation can be called only from the account that received the handshake. The
         * originator of the handshake can use <a>CancelHandshake</a> instead. The
         * originator can't reactivate a declined request, but can reinitiate the process
         * with a new handshake request.</p> <p>After you decline a handshake, it continues
         * to appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeclineHandshake">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeclineHandshakeOutcomeCallable DeclineHandshakeCallable(const Model::DeclineHandshakeRequest& request) const;

        /**
         * <p>Declines a handshake request. This sets the handshake state to
         * <code>DECLINED</code> and effectively deactivates the request.</p> <p>This
         * operation can be called only from the account that received the handshake. The
         * originator of the handshake can use <a>CancelHandshake</a> instead. The
         * originator can't reactivate a declined request, but can reinitiate the process
         * with a new handshake request.</p> <p>After you decline a handshake, it continues
         * to appear in the results of relevant APIs for only 30 days. After that, it's
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeclineHandshake">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeclineHandshakeAsync(const Model::DeclineHandshakeRequest& request, const DeclineHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the organization. You can delete an organization only by using
         * credentials from the management account. The organization must be empty of
         * member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationOutcome DeleteOrganization() const;

        /**
         * <p>Deletes the organization. You can delete an organization only by using
         * credentials from the management account. The organization must be empty of
         * member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOrganizationOutcomeCallable DeleteOrganizationCallable() const;

        /**
         * <p>Deletes the organization. You can delete an organization only by using
         * credentials from the management account. The organization must be empty of
         * member accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOrganizationAsync(const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Deletes an organizational unit (OU) from a root or another OU. You must first
         * remove all accounts and child OUs from the OU that you want to delete.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationalUnitOutcome DeleteOrganizationalUnit(const Model::DeleteOrganizationalUnitRequest& request) const;

        /**
         * <p>Deletes an organizational unit (OU) from a root or another OU. You must first
         * remove all accounts and child OUs from the OU that you want to delete.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOrganizationalUnitOutcomeCallable DeleteOrganizationalUnitCallable(const Model::DeleteOrganizationalUnitRequest& request) const;

        /**
         * <p>Deletes an organizational unit (OU) from a root or another OU. You must first
         * remove all accounts and child OUs from the OU that you want to delete.</p>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOrganizationalUnitAsync(const Model::DeleteOrganizationalUnitRequest& request, const DeleteOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified policy from your organization. Before you perform this
         * operation, you must first detach the policy from all organizational units (OUs),
         * roots, and accounts.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy from your organization. Before you perform this
         * operation, you must first detach the policy from all organizational units (OUs),
         * roots, and accounts.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy from your organization. Before you perform this
         * operation, you must first detach the policy from all organizational units (OUs),
         * roots, and accounts.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified member AWS account as a delegated administrator for the
         * specified AWS service.</p>  <p>Deregistering a delegated
         * administrator can have unintended impacts on the functionality of the enabled
         * AWS service. See the documentation for the enabled service before you deregister
         * a delegated administrator so that you understand any potential impacts.</p>
         *  <p>You can run this action only for AWS services that support this
         * feature. For a current list of services that support it, see the column
         * <i>Supports Delegated Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrated-services-list.html">AWS
         * Services that you can use with AWS Organizations</a> in the <i>AWS Organizations
         * User Guide.</i> </p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeregisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterDelegatedAdministratorOutcome DeregisterDelegatedAdministrator(const Model::DeregisterDelegatedAdministratorRequest& request) const;

        /**
         * <p>Removes the specified member AWS account as a delegated administrator for the
         * specified AWS service.</p>  <p>Deregistering a delegated
         * administrator can have unintended impacts on the functionality of the enabled
         * AWS service. See the documentation for the enabled service before you deregister
         * a delegated administrator so that you understand any potential impacts.</p>
         *  <p>You can run this action only for AWS services that support this
         * feature. For a current list of services that support it, see the column
         * <i>Supports Delegated Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrated-services-list.html">AWS
         * Services that you can use with AWS Organizations</a> in the <i>AWS Organizations
         * User Guide.</i> </p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeregisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterDelegatedAdministratorOutcomeCallable DeregisterDelegatedAdministratorCallable(const Model::DeregisterDelegatedAdministratorRequest& request) const;

        /**
         * <p>Removes the specified member AWS account as a delegated administrator for the
         * specified AWS service.</p>  <p>Deregistering a delegated
         * administrator can have unintended impacts on the functionality of the enabled
         * AWS service. See the documentation for the enabled service before you deregister
         * a delegated administrator so that you understand any potential impacts.</p>
         *  <p>You can run this action only for AWS services that support this
         * feature. For a current list of services that support it, see the column
         * <i>Supports Delegated Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrated-services-list.html">AWS
         * Services that you can use with AWS Organizations</a> in the <i>AWS Organizations
         * User Guide.</i> </p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeregisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterDelegatedAdministratorAsync(const Model::DeregisterDelegatedAdministratorRequest& request, const DeregisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves AWS Organizations-related information about the specified
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves AWS Organizations-related information about the specified
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOutcomeCallable DescribeAccountCallable(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves AWS Organizations-related information about the specified
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAsync(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCreateAccountStatusOutcome DescribeCreateAccountStatus(const Model::DescribeCreateAccountStatusRequest& request) const;

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCreateAccountStatusOutcomeCallable DescribeCreateAccountStatusCallable(const Model::DescribeCreateAccountStatusRequest& request) const;

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCreateAccountStatusAsync(const Model::DescribeCreateAccountStatusRequest& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the contents of the effective policy for specified policy type and
         * account. The effective policy is the aggregation of any policies of the
         * specified type that the account inherits, plus any policy of that type that is
         * directly attached to the account.</p> <p>This operation applies only to policy
         * types <i>other</i> than service control policies (SCPs).</p> <p>For more
         * information about policy inheritance, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies-inheritance.html">How
         * Policy Inheritance Works</a> in the <i>AWS Organizations User Guide</i>.</p>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeEffectivePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEffectivePolicyOutcome DescribeEffectivePolicy(const Model::DescribeEffectivePolicyRequest& request) const;

        /**
         * <p>Returns the contents of the effective policy for specified policy type and
         * account. The effective policy is the aggregation of any policies of the
         * specified type that the account inherits, plus any policy of that type that is
         * directly attached to the account.</p> <p>This operation applies only to policy
         * types <i>other</i> than service control policies (SCPs).</p> <p>For more
         * information about policy inheritance, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies-inheritance.html">How
         * Policy Inheritance Works</a> in the <i>AWS Organizations User Guide</i>.</p>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeEffectivePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEffectivePolicyOutcomeCallable DescribeEffectivePolicyCallable(const Model::DescribeEffectivePolicyRequest& request) const;

        /**
         * <p>Returns the contents of the effective policy for specified policy type and
         * account. The effective policy is the aggregation of any policies of the
         * specified type that the account inherits, plus any policy of that type that is
         * directly attached to the account.</p> <p>This operation applies only to policy
         * types <i>other</i> than service control policies (SCPs).</p> <p>For more
         * information about policy inheritance, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies-inheritance.html">How
         * Policy Inheritance Works</a> in the <i>AWS Organizations User Guide</i>.</p>
         * <p>This operation can be called only from the organization's management account
         * or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeEffectivePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEffectivePolicyAsync(const Model::DescribeEffectivePolicyRequest& request, const DescribeEffectivePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a previously requested handshake. The handshake
         * ID comes from the response to the original <a>InviteAccountToOrganization</a>
         * operation that generated the handshake.</p> <p>You can access handshakes that
         * are <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> for
         * only 30 days after they change to that state. They're then deleted and no longer
         * accessible.</p> <p>This operation can be called from any account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHandshakeOutcome DescribeHandshake(const Model::DescribeHandshakeRequest& request) const;

        /**
         * <p>Retrieves information about a previously requested handshake. The handshake
         * ID comes from the response to the original <a>InviteAccountToOrganization</a>
         * operation that generated the handshake.</p> <p>You can access handshakes that
         * are <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> for
         * only 30 days after they change to that state. They're then deleted and no longer
         * accessible.</p> <p>This operation can be called from any account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeHandshake">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHandshakeOutcomeCallable DescribeHandshakeCallable(const Model::DescribeHandshakeRequest& request) const;

        /**
         * <p>Retrieves information about a previously requested handshake. The handshake
         * ID comes from the response to the original <a>InviteAccountToOrganization</a>
         * operation that generated the handshake.</p> <p>You can access handshakes that
         * are <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> for
         * only 30 days after they change to that state. They're then deleted and no longer
         * accessible.</p> <p>This operation can be called from any account in the
         * organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeHandshake">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHandshakeAsync(const Model::DescribeHandshakeRequest& request, const DescribeHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about the organization that the user's account belongs
         * to.</p> <p>This operation can be called from any account in the
         * organization.</p>  <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization() const;

        /**
         * <p>Retrieves information about the organization that the user's account belongs
         * to.</p> <p>This operation can be called from any account in the
         * organization.</p>  <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationOutcomeCallable DescribeOrganizationCallable() const;

        /**
         * <p>Retrieves information about the organization that the user's account belongs
         * to.</p> <p>This operation can be called from any account in the
         * organization.</p>  <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationAsync(const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's management account or by a
         * member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationalUnitOutcome DescribeOrganizationalUnit(const Model::DescribeOrganizationalUnitRequest& request) const;

        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's management account or by a
         * member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationalUnitOutcomeCallable DescribeOrganizationalUnitCallable(const Model::DescribeOrganizationalUnitRequest& request) const;

        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's management account or by a
         * member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationalUnitAsync(const Model::DescribeOrganizationalUnitRequest& request, const DescribeOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's management account or by a member account that is a
         * delegated administrator for an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePolicyOutcome DescribePolicy(const Model::DescribePolicyRequest& request) const;

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's management account or by a member account that is a
         * delegated administrator for an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePolicyOutcomeCallable DescribePolicyCallable(const Model::DescribePolicyRequest& request) const;

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's management account or by a member account that is a
         * delegated administrator for an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePolicyAsync(const Model::DescribePolicyRequest& request, const DescribePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or
         * account.</p>  <p>If the policy being detached is a service control
         * policy (SCP), the changes to permissions for AWS Identity and Access Management
         * (IAM) users and roles in affected accounts are immediate.</p> 
         * <p>Every root, OU, and account must have at least one SCP attached. If you want
         * to replace the default <code>FullAWSAccess</code> policy with an SCP that limits
         * the permissions that can be delegated, you must attach the replacement SCP
         * before you can remove the default SCP. This is the authorization strategy of an
         * "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_allowlist">allow
         * list</a>". If you instead attach a second SCP and leave the
         * <code>FullAWSAccess</code> SCP still attached, and specify <code>"Effect":
         * "Deny"</code> in the second SCP to override the <code>"Effect": "Allow"</code>
         * in the <code>FullAWSAccess</code> policy (or any other attached SCP), you're
         * using the authorization strategy of a "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_denylist">deny
         * list</a>".</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or
         * account.</p>  <p>If the policy being detached is a service control
         * policy (SCP), the changes to permissions for AWS Identity and Access Management
         * (IAM) users and roles in affected accounts are immediate.</p> 
         * <p>Every root, OU, and account must have at least one SCP attached. If you want
         * to replace the default <code>FullAWSAccess</code> policy with an SCP that limits
         * the permissions that can be delegated, you must attach the replacement SCP
         * before you can remove the default SCP. This is the authorization strategy of an
         * "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_allowlist">allow
         * list</a>". If you instead attach a second SCP and leave the
         * <code>FullAWSAccess</code> SCP still attached, and specify <code>"Effect":
         * "Deny"</code> in the second SCP to override the <code>"Effect": "Allow"</code>
         * in the <code>FullAWSAccess</code> policy (or any other attached SCP), you're
         * using the authorization strategy of a "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_denylist">deny
         * list</a>".</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or
         * account.</p>  <p>If the policy being detached is a service control
         * policy (SCP), the changes to permissions for AWS Identity and Access Management
         * (IAM) users and roles in affected accounts are immediate.</p> 
         * <p>Every root, OU, and account must have at least one SCP attached. If you want
         * to replace the default <code>FullAWSAccess</code> policy with an SCP that limits
         * the permissions that can be delegated, you must attach the replacement SCP
         * before you can remove the default SCP. This is the authorization strategy of an
         * "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_allowlist">allow
         * list</a>". If you instead attach a second SCP and leave the
         * <code>FullAWSAccess</code> SCP still attached, and specify <code>"Effect":
         * "Deny"</code> in the second SCP to override the <code>"Effect": "Allow"</code>
         * in the <code>FullAWSAccess</code> policy (or any other attached SCP), you're
         * using the authorization strategy of a "<a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/SCP_strategies.html#orgs_policies_denylist">deny
         * list</a>".</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the integration of an AWS service (the service that is specified by
         * <code>ServicePrincipal</code>) with AWS Organizations. When you disable
         * integration, the specified service no longer can create a <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in <i>new</i> accounts in your organization. This means the service
         * can't perform operations on your behalf on any new accounts in your
         * organization. The service can still perform operations in older accounts until
         * the service completes its clean-up from AWS Organizations.</p> <p/> 
         * <p>We recommend that you disable integration between AWS Organizations and the
         * specified AWS service by using the console or commands that are provided by the
         * specified service. Doing so ensures that the other service is aware that it can
         * clean up any resources that are required only for the integration. How the
         * service cleans up its resources in the organization's accounts depends on that
         * service. For more information, see the documentation for the other AWS
         * service.</p>  <p>After you perform the
         * <code>DisableAWSServiceAccess</code> operation, the specified service can no
         * longer perform operations in your organization's accounts unless the operations
         * are explicitly permitted by the IAM policies that are attached to your
         * roles.</p> <p>For more information about integrating other services with AWS
         * Organizations, including the list of services that work with Organizations, see
         * <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisableAWSServiceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAWSServiceAccessOutcome DisableAWSServiceAccess(const Model::DisableAWSServiceAccessRequest& request) const;

        /**
         * <p>Disables the integration of an AWS service (the service that is specified by
         * <code>ServicePrincipal</code>) with AWS Organizations. When you disable
         * integration, the specified service no longer can create a <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in <i>new</i> accounts in your organization. This means the service
         * can't perform operations on your behalf on any new accounts in your
         * organization. The service can still perform operations in older accounts until
         * the service completes its clean-up from AWS Organizations.</p> <p/> 
         * <p>We recommend that you disable integration between AWS Organizations and the
         * specified AWS service by using the console or commands that are provided by the
         * specified service. Doing so ensures that the other service is aware that it can
         * clean up any resources that are required only for the integration. How the
         * service cleans up its resources in the organization's accounts depends on that
         * service. For more information, see the documentation for the other AWS
         * service.</p>  <p>After you perform the
         * <code>DisableAWSServiceAccess</code> operation, the specified service can no
         * longer perform operations in your organization's accounts unless the operations
         * are explicitly permitted by the IAM policies that are attached to your
         * roles.</p> <p>For more information about integrating other services with AWS
         * Organizations, including the list of services that work with Organizations, see
         * <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisableAWSServiceAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAWSServiceAccessOutcomeCallable DisableAWSServiceAccessCallable(const Model::DisableAWSServiceAccessRequest& request) const;

        /**
         * <p>Disables the integration of an AWS service (the service that is specified by
         * <code>ServicePrincipal</code>) with AWS Organizations. When you disable
         * integration, the specified service no longer can create a <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in <i>new</i> accounts in your organization. This means the service
         * can't perform operations on your behalf on any new accounts in your
         * organization. The service can still perform operations in older accounts until
         * the service completes its clean-up from AWS Organizations.</p> <p/> 
         * <p>We recommend that you disable integration between AWS Organizations and the
         * specified AWS service by using the console or commands that are provided by the
         * specified service. Doing so ensures that the other service is aware that it can
         * clean up any resources that are required only for the integration. How the
         * service cleans up its resources in the organization's accounts depends on that
         * service. For more information, see the documentation for the other AWS
         * service.</p>  <p>After you perform the
         * <code>DisableAWSServiceAccess</code> operation, the specified service can no
         * longer perform operations in your organization's accounts unless the operations
         * are explicitly permitted by the IAM policies that are attached to your
         * roles.</p> <p>For more information about integrating other services with AWS
         * Organizations, including the list of services that work with Organizations, see
         * <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisableAWSServiceAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAWSServiceAccessAsync(const Model::DisableAWSServiceAccessRequest& request, const DisableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an organizational policy type in a root. A policy of a certain type
         * can be attached to entities in a root only if that type is enabled in the root.
         * After you perform this operation, you no longer can attach policies of the
         * specified type to that root or to any organizational unit (OU) or account in
         * that root. You can undo this by using the <a>EnablePolicyType</a> operation.</p>
         * <p>This is an asynchronous request that AWS performs in the background. If you
         * disable a policy type for a root, it still appears enabled for the organization
         * if <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
         * features</a> are enabled for the organization. AWS recommends that you first use
         * <a>ListRoots</a> to see the status of policy types for a specified root, and
         * then use this operation.</p> <p>This operation can be called only from the
         * organization's management account.</p> <p> To view the status of available
         * policy types in the organization, use <a>DescribeOrganization</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisablePolicyType">AWS
         * API Reference</a></p>
         */
        virtual Model::DisablePolicyTypeOutcome DisablePolicyType(const Model::DisablePolicyTypeRequest& request) const;

        /**
         * <p>Disables an organizational policy type in a root. A policy of a certain type
         * can be attached to entities in a root only if that type is enabled in the root.
         * After you perform this operation, you no longer can attach policies of the
         * specified type to that root or to any organizational unit (OU) or account in
         * that root. You can undo this by using the <a>EnablePolicyType</a> operation.</p>
         * <p>This is an asynchronous request that AWS performs in the background. If you
         * disable a policy type for a root, it still appears enabled for the organization
         * if <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
         * features</a> are enabled for the organization. AWS recommends that you first use
         * <a>ListRoots</a> to see the status of policy types for a specified root, and
         * then use this operation.</p> <p>This operation can be called only from the
         * organization's management account.</p> <p> To view the status of available
         * policy types in the organization, use <a>DescribeOrganization</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisablePolicyType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisablePolicyTypeOutcomeCallable DisablePolicyTypeCallable(const Model::DisablePolicyTypeRequest& request) const;

        /**
         * <p>Disables an organizational policy type in a root. A policy of a certain type
         * can be attached to entities in a root only if that type is enabled in the root.
         * After you perform this operation, you no longer can attach policies of the
         * specified type to that root or to any organizational unit (OU) or account in
         * that root. You can undo this by using the <a>EnablePolicyType</a> operation.</p>
         * <p>This is an asynchronous request that AWS performs in the background. If you
         * disable a policy type for a root, it still appears enabled for the organization
         * if <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">all
         * features</a> are enabled for the organization. AWS recommends that you first use
         * <a>ListRoots</a> to see the status of policy types for a specified root, and
         * then use this operation.</p> <p>This operation can be called only from the
         * organization's management account.</p> <p> To view the status of available
         * policy types in the organization, use <a>DescribeOrganization</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisablePolicyType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisablePolicyTypeAsync(const Model::DisablePolicyTypeRequest& request, const DisablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the integration of an AWS service (the service that is specified by
         * <code>ServicePrincipal</code>) with AWS Organizations. When you enable
         * integration, you allow the specified service to create a <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in all the accounts in your organization. This allows the service to
         * perform operations on your behalf in your organization and its accounts.</p>
         *  <p>We recommend that you enable integration between AWS
         * Organizations and the specified AWS service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other AWS
         * service.</p>  <p>For more information about enabling services to
         * integrate with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account and only if the organization has <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">enabled
         * all features</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAWSServiceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAWSServiceAccessOutcome EnableAWSServiceAccess(const Model::EnableAWSServiceAccessRequest& request) const;

        /**
         * <p>Enables the integration of an AWS service (the service that is specified by
         * <code>ServicePrincipal</code>) with AWS Organizations. When you enable
         * integration, you allow the specified service to create a <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in all the accounts in your organization. This allows the service to
         * perform operations on your behalf in your organization and its accounts.</p>
         *  <p>We recommend that you enable integration between AWS
         * Organizations and the specified AWS service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other AWS
         * service.</p>  <p>For more information about enabling services to
         * integrate with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account and only if the organization has <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">enabled
         * all features</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAWSServiceAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAWSServiceAccessOutcomeCallable EnableAWSServiceAccessCallable(const Model::EnableAWSServiceAccessRequest& request) const;

        /**
         * <p>Enables the integration of an AWS service (the service that is specified by
         * <code>ServicePrincipal</code>) with AWS Organizations. When you enable
         * integration, you allow the specified service to create a <a
         * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html">service-linked
         * role</a> in all the accounts in your organization. This allows the service to
         * perform operations on your behalf in your organization and its accounts.</p>
         *  <p>We recommend that you enable integration between AWS
         * Organizations and the specified AWS service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other AWS
         * service.</p>  <p>For more information about enabling services to
         * integrate with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account and only if the organization has <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">enabled
         * all features</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAWSServiceAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAWSServiceAccessAsync(const Model::EnableAWSServiceAccessRequest& request, const EnableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables all features in an organization. This enables the use of organization
         * policies that can restrict the services and actions that can be called in each
         * account. Until you enable all features, you have access only to consolidated
         * billing, and you can't use any of the advanced account administration features
         * that AWS Organizations supports. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * All Features in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p>  <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the management account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The management account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAllFeatures">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAllFeaturesOutcome EnableAllFeatures(const Model::EnableAllFeaturesRequest& request) const;

        /**
         * <p>Enables all features in an organization. This enables the use of organization
         * policies that can restrict the services and actions that can be called in each
         * account. Until you enable all features, you have access only to consolidated
         * billing, and you can't use any of the advanced account administration features
         * that AWS Organizations supports. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * All Features in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p>  <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the management account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The management account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAllFeatures">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAllFeaturesOutcomeCallable EnableAllFeaturesCallable(const Model::EnableAllFeaturesRequest& request) const;

        /**
         * <p>Enables all features in an organization. This enables the use of organization
         * policies that can restrict the services and actions that can be called in each
         * account. Until you enable all features, you have access only to consolidated
         * billing, and you can't use any of the advanced account administration features
         * that AWS Organizations supports. For more information, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
         * All Features in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p>  <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p>  <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the management account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The management account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnableAllFeatures">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAllFeaturesAsync(const Model::EnableAllFeaturesRequest& request, const EnableAllFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables a policy type in a root. After you enable a policy type in a root,
         * you can attach policies of that type to the root, any organizational unit (OU),
         * or account in that root. You can undo this by using the <a>DisablePolicyType</a>
         * operation.</p> <p>This is an asynchronous request that AWS performs in the
         * background. AWS recommends that you first use <a>ListRoots</a> to see the status
         * of policy types for a specified root, and then use this operation.</p> <p>This
         * operation can be called only from the organization's management account.</p>
         * <p>You can enable a policy type in a root only if that policy type is available
         * in the organization. To view the status of available policy types in the
         * organization, use <a>DescribeOrganization</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnablePolicyType">AWS
         * API Reference</a></p>
         */
        virtual Model::EnablePolicyTypeOutcome EnablePolicyType(const Model::EnablePolicyTypeRequest& request) const;

        /**
         * <p>Enables a policy type in a root. After you enable a policy type in a root,
         * you can attach policies of that type to the root, any organizational unit (OU),
         * or account in that root. You can undo this by using the <a>DisablePolicyType</a>
         * operation.</p> <p>This is an asynchronous request that AWS performs in the
         * background. AWS recommends that you first use <a>ListRoots</a> to see the status
         * of policy types for a specified root, and then use this operation.</p> <p>This
         * operation can be called only from the organization's management account.</p>
         * <p>You can enable a policy type in a root only if that policy type is available
         * in the organization. To view the status of available policy types in the
         * organization, use <a>DescribeOrganization</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnablePolicyType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnablePolicyTypeOutcomeCallable EnablePolicyTypeCallable(const Model::EnablePolicyTypeRequest& request) const;

        /**
         * <p>Enables a policy type in a root. After you enable a policy type in a root,
         * you can attach policies of that type to the root, any organizational unit (OU),
         * or account in that root. You can undo this by using the <a>DisablePolicyType</a>
         * operation.</p> <p>This is an asynchronous request that AWS performs in the
         * background. AWS recommends that you first use <a>ListRoots</a> to see the status
         * of policy types for a specified root, and then use this operation.</p> <p>This
         * operation can be called only from the organization's management account.</p>
         * <p>You can enable a policy type in a root only if that policy type is available
         * in the organization. To view the status of available policy types in the
         * organization, use <a>DescribeOrganization</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnablePolicyType">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnablePolicyTypeAsync(const Model::EnablePolicyTypeRequest& request, const EnablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends an invitation to another account to join your organization as a member
         * account. AWS Organizations sends email on your behalf to the email address that
         * is associated with the other account's owner. The invitation is implemented as a
         * <a>Handshake</a> whose details are in the response.</p>  <ul> <li>
         * <p>You can invite AWS accounts only from the same seller as the management
         * account. For example, if your organization's management account was created by
         * Amazon Internet Services Pvt. Ltd (AISPL), an AWS seller in India, you can
         * invite only other AISPL accounts to your organization. You can't combine
         * accounts from AISPL and AWS or from any other AWS seller. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
         * Billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * </ul>  <p>If the request includes tags, then the requester must have
         * the <code>organizations:TagResource</code> permission.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InviteAccountToOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteAccountToOrganizationOutcome InviteAccountToOrganization(const Model::InviteAccountToOrganizationRequest& request) const;

        /**
         * <p>Sends an invitation to another account to join your organization as a member
         * account. AWS Organizations sends email on your behalf to the email address that
         * is associated with the other account's owner. The invitation is implemented as a
         * <a>Handshake</a> whose details are in the response.</p>  <ul> <li>
         * <p>You can invite AWS accounts only from the same seller as the management
         * account. For example, if your organization's management account was created by
         * Amazon Internet Services Pvt. Ltd (AISPL), an AWS seller in India, you can
         * invite only other AISPL accounts to your organization. You can't combine
         * accounts from AISPL and AWS or from any other AWS seller. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
         * Billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * </ul>  <p>If the request includes tags, then the requester must have
         * the <code>organizations:TagResource</code> permission.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InviteAccountToOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InviteAccountToOrganizationOutcomeCallable InviteAccountToOrganizationCallable(const Model::InviteAccountToOrganizationRequest& request) const;

        /**
         * <p>Sends an invitation to another account to join your organization as a member
         * account. AWS Organizations sends email on your behalf to the email address that
         * is associated with the other account's owner. The invitation is implemented as a
         * <a>Handshake</a> whose details are in the response.</p>  <ul> <li>
         * <p>You can invite AWS accounts only from the same seller as the management
         * account. For example, if your organization's management account was created by
         * Amazon Internet Services Pvt. Ltd (AISPL), an AWS seller in India, you can
         * invite only other AISPL accounts to your organization. You can't combine
         * accounts from AISPL and AWS or from any other AWS seller. For more information,
         * see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
         * Billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * </ul>  <p>If the request includes tags, then the requester must have
         * the <code>organizations:TagResource</code> permission.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InviteAccountToOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteAccountToOrganizationAsync(const Model::InviteAccountToOrganizationRequest& request, const InviteAccountToOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the management account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p>  <ul> <li>
         * <p>The management account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do. This includes preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization.</p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the AWS Organizations
         * console, API, or CLI commands, the information required of standalone accounts
         * is <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must perform the following steps. If any of the steps are
         * already completed for this account, that step doesn't appear.</p> <ul> <li>
         * <p>Choose a support plan</p> </li> <li> <p>Provide and verify the required
         * contact information</p> </li> <li> <p>Provide a current payment method</p> </li>
         * </ul> <p>AWS uses the payment method to charge for any billable (not free tier)
         * AWS activity that occurs while the account isn't attached to an organization.
         * Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li> <p>You
         * can leave an organization only after you enable IAM user access to billing in
         * your account. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
         * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
         * Cost Management User Guide.</i> </p> </li> <li> <p>After the account leaves the
         * organization, all tags that were attached to the account object in the
         * organization are deleted. AWS accounts outside of an organization do not support
         * tags.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/LeaveOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::LeaveOrganizationOutcome LeaveOrganization() const;

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the management account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p>  <ul> <li>
         * <p>The management account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do. This includes preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization.</p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the AWS Organizations
         * console, API, or CLI commands, the information required of standalone accounts
         * is <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must perform the following steps. If any of the steps are
         * already completed for this account, that step doesn't appear.</p> <ul> <li>
         * <p>Choose a support plan</p> </li> <li> <p>Provide and verify the required
         * contact information</p> </li> <li> <p>Provide a current payment method</p> </li>
         * </ul> <p>AWS uses the payment method to charge for any billable (not free tier)
         * AWS activity that occurs while the account isn't attached to an organization.
         * Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li> <p>You
         * can leave an organization only after you enable IAM user access to billing in
         * your account. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
         * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
         * Cost Management User Guide.</i> </p> </li> <li> <p>After the account leaves the
         * organization, all tags that were attached to the account object in the
         * organization are deleted. AWS accounts outside of an organization do not support
         * tags.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/LeaveOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LeaveOrganizationOutcomeCallable LeaveOrganizationCallable() const;

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the management account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p>  <ul> <li>
         * <p>The management account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do. This includes preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization.</p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the AWS Organizations
         * console, API, or CLI commands, the information required of standalone accounts
         * is <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must perform the following steps. If any of the steps are
         * already completed for this account, that step doesn't appear.</p> <ul> <li>
         * <p>Choose a support plan</p> </li> <li> <p>Provide and verify the required
         * contact information</p> </li> <li> <p>Provide a current payment method</p> </li>
         * </ul> <p>AWS uses the payment method to charge for any billable (not free tier)
         * AWS activity that occurs while the account isn't attached to an organization.
         * Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li> <p>You
         * can leave an organization only after you enable IAM user access to billing in
         * your account. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
         * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
         * Cost Management User Guide.</i> </p> </li> <li> <p>After the account leaves the
         * organization, all tags that were attached to the account object in the
         * organization are deleted. AWS accounts outside of an organization do not support
         * tags.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/LeaveOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void LeaveOrganizationAsync(const LeaveOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Returns a list of the AWS services that you enabled to integrate with your
         * organization. After a service on this list creates the resources that it
         * requires for the integration, it can perform operations on your organization and
         * its accounts.</p> <p>For more information about integrating other services with
         * AWS Organizations, including the list of services that currently work with
         * Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAWSServiceAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAWSServiceAccessForOrganizationOutcome ListAWSServiceAccessForOrganization(const Model::ListAWSServiceAccessForOrganizationRequest& request) const;

        /**
         * <p>Returns a list of the AWS services that you enabled to integrate with your
         * organization. After a service on this list creates the resources that it
         * requires for the integration, it can perform operations on your organization and
         * its accounts.</p> <p>For more information about integrating other services with
         * AWS Organizations, including the list of services that currently work with
         * Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAWSServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAWSServiceAccessForOrganizationOutcomeCallable ListAWSServiceAccessForOrganizationCallable(const Model::ListAWSServiceAccessForOrganizationRequest& request) const;

        /**
         * <p>Returns a list of the AWS services that you enabled to integrate with your
         * organization. After a service on this list creates the resources that it
         * requires for the integration, it can perform operations on your organization and
         * its accounts.</p> <p>For more information about integrating other services with
         * AWS Organizations, including the list of services that currently work with
         * Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAWSServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAWSServiceAccessForOrganizationAsync(const Model::ListAWSServiceAccessForOrganizationRequest& request, const ListAWSServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the accounts in the organization. To request only the accounts in a
         * specified root or organizational unit (OU), use the <a>ListAccountsForParent</a>
         * operation instead.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists all the accounts in the organization. To request only the accounts in a
         * specified root or organizational unit (OU), use the <a>ListAccountsForParent</a>
         * operation instead.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccounts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsOutcomeCallable ListAccountsCallable(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists all the accounts in the organization. To request only the accounts in a
         * specified root or organizational unit (OU), use the <a>ListAccountsForParent</a>
         * operation instead.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccounts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsAsync(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the accounts in an organization that are contained by the specified
         * target root or organizational unit (OU). If you specify the root, you get a list
         * of all the accounts that aren't in any OU. If you specify an OU, you get a list
         * of all the accounts in only that OU and not in any child OUs. To get a list of
         * all accounts in the organization, use the <a>ListAccounts</a> operation.</p>
         *  <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccountsForParent">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsForParentOutcome ListAccountsForParent(const Model::ListAccountsForParentRequest& request) const;

        /**
         * <p>Lists the accounts in an organization that are contained by the specified
         * target root or organizational unit (OU). If you specify the root, you get a list
         * of all the accounts that aren't in any OU. If you specify an OU, you get a list
         * of all the accounts in only that OU and not in any child OUs. To get a list of
         * all accounts in the organization, use the <a>ListAccounts</a> operation.</p>
         *  <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccountsForParent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAccountsForParentOutcomeCallable ListAccountsForParentCallable(const Model::ListAccountsForParentRequest& request) const;

        /**
         * <p>Lists the accounts in an organization that are contained by the specified
         * target root or organizational unit (OU). If you specify the root, you get a list
         * of all the accounts that aren't in any OU. If you specify an OU, you get a list
         * of all the accounts in only that OU and not in any child OUs. To get a list of
         * all accounts in the organization, use the <a>ListAccounts</a> operation.</p>
         *  <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccountsForParent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsForParentAsync(const Model::ListAccountsForParentRequest& request, const ListAccountsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChildrenOutcome ListChildren(const Model::ListChildrenRequest& request) const;

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChildrenOutcomeCallable ListChildrenCallable(const Model::ListChildrenRequest& request) const;

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChildrenAsync(const Model::ListChildrenRequest& request, const ListChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCreateAccountStatusOutcome ListCreateAccountStatus(const Model::ListCreateAccountStatusRequest& request) const;

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCreateAccountStatusOutcomeCallable ListCreateAccountStatusCallable(const Model::ListCreateAccountStatusRequest& request) const;

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCreateAccountStatusAsync(const Model::ListCreateAccountStatusRequest& request, const ListCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AWS accounts that are designated as delegated administrators in
         * this organization.</p> <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedAdministrators">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedAdministratorsOutcome ListDelegatedAdministrators(const Model::ListDelegatedAdministratorsRequest& request) const;

        /**
         * <p>Lists the AWS accounts that are designated as delegated administrators in
         * this organization.</p> <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedAdministrators">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDelegatedAdministratorsOutcomeCallable ListDelegatedAdministratorsCallable(const Model::ListDelegatedAdministratorsRequest& request) const;

        /**
         * <p>Lists the AWS accounts that are designated as delegated administrators in
         * this organization.</p> <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedAdministrators">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDelegatedAdministratorsAsync(const Model::ListDelegatedAdministratorsRequest& request, const ListDelegatedAdministratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the AWS services for which the specified account is a delegated
         * administrator.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedServicesForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDelegatedServicesForAccountOutcome ListDelegatedServicesForAccount(const Model::ListDelegatedServicesForAccountRequest& request) const;

        /**
         * <p>List the AWS services for which the specified account is a delegated
         * administrator.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedServicesForAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDelegatedServicesForAccountOutcomeCallable ListDelegatedServicesForAccountCallable(const Model::ListDelegatedServicesForAccountRequest& request) const;

        /**
         * <p>List the AWS services for which the specified account is a delegated
         * administrator.</p> <p>This operation can be called only from the organization's
         * management account or by a member account that is a delegated administrator for
         * an AWS service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListDelegatedServicesForAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDelegatedServicesForAccountAsync(const Model::ListDelegatedServicesForAccountRequest& request, const ListDelegatedServicesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the current handshakes that are associated with the account of the
         * requesting user.</p> <p>Handshakes that are <code>ACCEPTED</code>,
         * <code>DECLINED</code>, or <code>CANCELED</code> appear in the results of this
         * API for only 30 days after changing to that state. After that, they're deleted
         * and no longer accessible.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called from any account in the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHandshakesForAccountOutcome ListHandshakesForAccount(const Model::ListHandshakesForAccountRequest& request) const;

        /**
         * <p>Lists the current handshakes that are associated with the account of the
         * requesting user.</p> <p>Handshakes that are <code>ACCEPTED</code>,
         * <code>DECLINED</code>, or <code>CANCELED</code> appear in the results of this
         * API for only 30 days after changing to that state. After that, they're deleted
         * and no longer accessible.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called from any account in the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHandshakesForAccountOutcomeCallable ListHandshakesForAccountCallable(const Model::ListHandshakesForAccountRequest& request) const;

        /**
         * <p>Lists the current handshakes that are associated with the account of the
         * requesting user.</p> <p>Handshakes that are <code>ACCEPTED</code>,
         * <code>DECLINED</code>, or <code>CANCELED</code> appear in the results of this
         * API for only 30 days after changing to that state. After that, they're deleted
         * and no longer accessible.</p>  <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called from any account in the organization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHandshakesForAccountAsync(const Model::ListHandshakesForAccountRequest& request, const ListHandshakesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the handshakes that are associated with the organization that the
         * requesting user is part of. The <code>ListHandshakesForOrganization</code>
         * operation returns a list of handshake structures. Each structure contains
         * details and status about a handshake.</p> <p>Handshakes that are
         * <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> appear in
         * the results of this API for only 30 days after changing to that state. After
         * that, they're deleted and no longer accessible.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHandshakesForOrganizationOutcome ListHandshakesForOrganization(const Model::ListHandshakesForOrganizationRequest& request) const;

        /**
         * <p>Lists the handshakes that are associated with the organization that the
         * requesting user is part of. The <code>ListHandshakesForOrganization</code>
         * operation returns a list of handshake structures. Each structure contains
         * details and status about a handshake.</p> <p>Handshakes that are
         * <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> appear in
         * the results of this API for only 30 days after changing to that state. After
         * that, they're deleted and no longer accessible.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHandshakesForOrganizationOutcomeCallable ListHandshakesForOrganizationCallable(const Model::ListHandshakesForOrganizationRequest& request) const;

        /**
         * <p>Lists the handshakes that are associated with the organization that the
         * requesting user is part of. The <code>ListHandshakesForOrganization</code>
         * operation returns a list of handshake structures. Each structure contains
         * details and status about a handshake.</p> <p>Handshakes that are
         * <code>ACCEPTED</code>, <code>DECLINED</code>, or <code>CANCELED</code> appear in
         * the results of this API for only 30 days after changing to that state. After
         * that, they're deleted and no longer accessible.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHandshakesForOrganizationAsync(const Model::ListHandshakesForOrganizationRequest& request, const ListHandshakesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListOrganizationalUnitsForParent">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationalUnitsForParentOutcome ListOrganizationalUnitsForParent(const Model::ListOrganizationalUnitsForParentRequest& request) const;

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListOrganizationalUnitsForParent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationalUnitsForParentOutcomeCallable ListOrganizationalUnitsForParentCallable(const Model::ListOrganizationalUnitsForParentRequest& request) const;

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListOrganizationalUnitsForParent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOrganizationalUnitsForParentAsync(const Model::ListOrganizationalUnitsForParentRequest& request, const ListOrganizationalUnitsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the root or organizational units (OUs) that serve as the immediate
         * parent of the specified child OU or account. This operation, along with
         * <a>ListChildren</a> enables you to traverse the tree structure that makes up
         * this root.</p>  <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p>  <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an AWS service.</p>  <p>In the current release, a child
         * can have only a single parent.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListParents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParentsOutcome ListParents(const Model::ListParentsRequest& request) const;

        /**
         * <p>Lists the root or organizational units (OUs) that serve as the immediate
         * parent of the specified child OU or account. This operation, along with
         * <a>ListChildren</a> enables you to traverse the tree structure that makes up
         * this root.</p>  <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p>  <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an AWS service.</p>  <p>In the current release, a child
         * can have only a single parent.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListParents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListParentsOutcomeCallable ListParentsCallable(const Model::ListParentsRequest& request) const;

        /**
         * <p>Lists the root or organizational units (OUs) that serve as the immediate
         * parent of the specified child OU or account. This operation, along with
         * <a>ListChildren</a> enables you to traverse the tree structure that makes up
         * this root.</p>  <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p>  <p>This operation can be called only from the
         * organization's management account or by a member account that is a delegated
         * administrator for an AWS service.</p>  <p>In the current release, a child
         * can have only a single parent.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListParents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListParentsAsync(const Model::ListParentsRequest& request, const ListParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p>  <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the policies that are directly attached to the specified target root,
         * organizational unit (OU), or account. You must specify the policy type that you
         * want included in the returned list.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPoliciesForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesForTargetOutcome ListPoliciesForTarget(const Model::ListPoliciesForTargetRequest& request) const;

        /**
         * <p>Lists the policies that are directly attached to the specified target root,
         * organizational unit (OU), or account. You must specify the policy type that you
         * want included in the returned list.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPoliciesForTarget">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesForTargetOutcomeCallable ListPoliciesForTargetCallable(const Model::ListPoliciesForTargetRequest& request) const;

        /**
         * <p>Lists the policies that are directly attached to the specified target root,
         * organizational unit (OU), or account. You must specify the policy type that you
         * want included in the returned list.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPoliciesForTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesForTargetAsync(const Model::ListPoliciesForTargetRequest& request, const ListPoliciesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the roots that are defined in the current organization.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p>  <p>Policy types can be enabled and disabled in roots. This
         * is distinct from whether they're available in the organization. When you enable
         * all features, you make policy types available for use in that organization.
         * Individual policy types can then be enabled and disabled in a root. To see the
         * availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRootsOutcome ListRoots(const Model::ListRootsRequest& request) const;

        /**
         * <p>Lists the roots that are defined in the current organization.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p>  <p>Policy types can be enabled and disabled in roots. This
         * is distinct from whether they're available in the organization. When you enable
         * all features, you make policy types available for use in that organization.
         * Individual policy types can then be enabled and disabled in a root. To see the
         * availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRootsOutcomeCallable ListRootsCallable(const Model::ListRootsRequest& request) const;

        /**
         * <p>Lists the roots that are defined in the current organization.</p> 
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         *  <p>This operation can be called only from the organization's management
         * account or by a member account that is a delegated administrator for an AWS
         * service.</p>  <p>Policy types can be enabled and disabled in roots. This
         * is distinct from whether they're available in the organization. When you enable
         * all features, you make policy types available for use in that organization.
         * Individual policy types can then be enabled and disabled in a root. To see the
         * availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRootsAsync(const Model::ListRootsRequest& request, const ListRootsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags that are attached to the specified resource.</p> <p>You can attach
         * tags to the following resources in AWS Organizations.</p> <ul> <li> <p>AWS
         * account</p> </li> <li> <p>Organization root</p> </li> <li> <p>Organizational
         * unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul> <p>This operation
         * can be called only from the organization's management account or by a member
         * account that is a delegated administrator for an AWS service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags that are attached to the specified resource.</p> <p>You can attach
         * tags to the following resources in AWS Organizations.</p> <ul> <li> <p>AWS
         * account</p> </li> <li> <p>Organization root</p> </li> <li> <p>Organizational
         * unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul> <p>This operation
         * can be called only from the organization's management account or by a member
         * account that is a delegated administrator for an AWS service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags that are attached to the specified resource.</p> <p>You can attach
         * tags to the following resources in AWS Organizations.</p> <ul> <li> <p>AWS
         * account</p> </li> <li> <p>Organization root</p> </li> <li> <p>Organizational
         * unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul> <p>This operation
         * can be called only from the organization's management account or by a member
         * account that is a delegated administrator for an AWS service.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p>  <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p>  <p>This operation can be
         * called only from the organization's management account or by a member account
         * that is a delegated administrator for an AWS service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsForPolicyAsync(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Moves an account from its current source parent root or organizational unit
         * (OU) to the specified destination parent root or OU.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveAccountOutcome MoveAccount(const Model::MoveAccountRequest& request) const;

        /**
         * <p>Moves an account from its current source parent root or organizational unit
         * (OU) to the specified destination parent root or OU.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MoveAccountOutcomeCallable MoveAccountCallable(const Model::MoveAccountRequest& request) const;

        /**
         * <p>Moves an account from its current source parent root or organizational unit
         * (OU) to the specified destination parent root or OU.</p> <p>This operation can
         * be called only from the organization's management account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MoveAccountAsync(const Model::MoveAccountRequest& request, const MoveAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the specified member account to administer the Organizations features
         * of the specified AWS service. It grants read-only access to AWS Organizations
         * service data. The account still requires IAM permissions to access and
         * administer the AWS service.</p> <p>You can run this action only for AWS services
         * that support this feature. For a current list of services that support it, see
         * the column <i>Supports Delegated Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrated-services-list.html">AWS
         * Services that you can use with AWS Organizations</a> in the <i>AWS Organizations
         * User Guide.</i> </p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RegisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDelegatedAdministratorOutcome RegisterDelegatedAdministrator(const Model::RegisterDelegatedAdministratorRequest& request) const;

        /**
         * <p>Enables the specified member account to administer the Organizations features
         * of the specified AWS service. It grants read-only access to AWS Organizations
         * service data. The account still requires IAM permissions to access and
         * administer the AWS service.</p> <p>You can run this action only for AWS services
         * that support this feature. For a current list of services that support it, see
         * the column <i>Supports Delegated Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrated-services-list.html">AWS
         * Services that you can use with AWS Organizations</a> in the <i>AWS Organizations
         * User Guide.</i> </p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RegisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterDelegatedAdministratorOutcomeCallable RegisterDelegatedAdministratorCallable(const Model::RegisterDelegatedAdministratorRequest& request) const;

        /**
         * <p>Enables the specified member account to administer the Organizations features
         * of the specified AWS service. It grants read-only access to AWS Organizations
         * service data. The account still requires IAM permissions to access and
         * administer the AWS service.</p> <p>You can run this action only for AWS services
         * that support this feature. For a current list of services that support it, see
         * the column <i>Supports Delegated Administrator</i> in the table at <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrated-services-list.html">AWS
         * Services that you can use with AWS Organizations</a> in the <i>AWS Organizations
         * User Guide.</i> </p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RegisterDelegatedAdministrator">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterDelegatedAdministratorAsync(const Model::RegisterDelegatedAdministratorRequest& request, const RegisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified account from the organization.</p> <p>The removed
         * account becomes a standalone account that isn't a member of any organization.
         * It's no longer subject to any policies and is responsible for its own bill
         * payments. The organization's management account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * management account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p>  <ul> <li> <p>You can remove an
         * account from your organization only if the account is configured with the
         * information required to operate as a standalone account. When you create an
         * account in an organization using the AWS Organizations console, API, or CLI
         * commands, the information required of standalone accounts is <i>not</i>
         * automatically collected. For an account that you want to make standalone, you
         * must choose a support plan, provide and verify the required contact information,
         * and provide a current payment method. AWS uses the payment method to charge for
         * any billable (not free tier) AWS activity that occurs while the account isn't
         * attached to an organization. To remove an account that doesn't yet have this
         * information, you must sign in as the member account and follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
         * <p>After the account leaves the organization, all tags that were attached to the
         * account object in the organization are deleted. AWS accounts outside of an
         * organization do not support tags.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RemoveAccountFromOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAccountFromOrganizationOutcome RemoveAccountFromOrganization(const Model::RemoveAccountFromOrganizationRequest& request) const;

        /**
         * <p>Removes the specified account from the organization.</p> <p>The removed
         * account becomes a standalone account that isn't a member of any organization.
         * It's no longer subject to any policies and is responsible for its own bill
         * payments. The organization's management account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * management account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p>  <ul> <li> <p>You can remove an
         * account from your organization only if the account is configured with the
         * information required to operate as a standalone account. When you create an
         * account in an organization using the AWS Organizations console, API, or CLI
         * commands, the information required of standalone accounts is <i>not</i>
         * automatically collected. For an account that you want to make standalone, you
         * must choose a support plan, provide and verify the required contact information,
         * and provide a current payment method. AWS uses the payment method to charge for
         * any billable (not free tier) AWS activity that occurs while the account isn't
         * attached to an organization. To remove an account that doesn't yet have this
         * information, you must sign in as the member account and follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
         * <p>After the account leaves the organization, all tags that were attached to the
         * account object in the organization are deleted. AWS accounts outside of an
         * organization do not support tags.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RemoveAccountFromOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveAccountFromOrganizationOutcomeCallable RemoveAccountFromOrganizationCallable(const Model::RemoveAccountFromOrganizationRequest& request) const;

        /**
         * <p>Removes the specified account from the organization.</p> <p>The removed
         * account becomes a standalone account that isn't a member of any organization.
         * It's no longer subject to any policies and is responsible for its own bill
         * payments. The organization's management account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * management account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p>  <ul> <li> <p>You can remove an
         * account from your organization only if the account is configured with the
         * information required to operate as a standalone account. When you create an
         * account in an organization using the AWS Organizations console, API, or CLI
         * commands, the information required of standalone accounts is <i>not</i>
         * automatically collected. For an account that you want to make standalone, you
         * must choose a support plan, provide and verify the required contact information,
         * and provide a current payment method. AWS uses the payment method to charge for
         * any billable (not free tier) AWS activity that occurs while the account isn't
         * attached to an organization. To remove an account that doesn't yet have this
         * information, you must sign in as the member account and follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li>
         * <p>After the account leaves the organization, all tags that were attached to the
         * account object in the organization are deleted. AWS accounts outside of an
         * organization do not support tags.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RemoveAccountFromOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAccountFromOrganizationAsync(const Model::RemoveAccountFromOrganizationRequest& request, const RemoveAccountFromOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * attach tags to the following resources in AWS Organizations.</p> <ul> <li>
         * <p>AWS account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * attach tags to the following resources in AWS Organizations.</p> <ul> <li>
         * <p>AWS account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * attach tags to the following resources in AWS Organizations.</p> <ul> <li>
         * <p>AWS account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes any tags with the specified keys from the specified resource.</p>
         * <p>You can attach tags to the following resources in AWS Organizations.</p> <ul>
         * <li> <p>AWS account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes any tags with the specified keys from the specified resource.</p>
         * <p>You can attach tags to the following resources in AWS Organizations.</p> <ul>
         * <li> <p>AWS account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes any tags with the specified keys from the specified resource.</p>
         * <p>You can attach tags to the following resources in AWS Organizations.</p> <ul>
         * <li> <p>AWS account</p> </li> <li> <p>Organization root</p> </li> <li>
         * <p>Organizational unit (OU)</p> </li> <li> <p>Policy (any type)</p> </li> </ul>
         * <p>This operation can be called only from the organization's management
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationalUnitOutcome UpdateOrganizationalUnit(const Model::UpdateOrganizationalUnitRequest& request) const;

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdateOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationalUnitOutcomeCallable UpdateOrganizationalUnitCallable(const Model::UpdateOrganizationalUnitRequest& request) const;

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached.</p> <p>This operation can be called only from the
         * organization's management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdateOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateOrganizationalUnitAsync(const Model::UpdateOrganizationalUnitRequest& request, const UpdateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing policy with a new name, description, or content. If you
         * don't supply any parameter, that value remains unchanged. You can't change a
         * policy's type.</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

        /**
         * <p>Updates an existing policy with a new name, description, or content. If you
         * don't supply any parameter, that value remains unchanged. You can't change a
         * policy's type.</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdatePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePolicyOutcomeCallable UpdatePolicyCallable(const Model::UpdatePolicyRequest& request) const;

        /**
         * <p>Updates an existing policy with a new name, description, or content. If you
         * don't supply any parameter, that value remains unchanged. You can't change a
         * policy's type.</p> <p>This operation can be called only from the organization's
         * management account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdatePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePolicyAsync(const Model::UpdatePolicyRequest& request, const UpdatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AcceptHandshakeAsyncHelper(const Model::AcceptHandshakeRequest& request, const AcceptHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachPolicyAsyncHelper(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelHandshakeAsyncHelper(const Model::CancelHandshakeRequest& request, const CancelHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAccountAsyncHelper(const Model::CreateAccountRequest& request, const CreateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGovCloudAccountAsyncHelper(const Model::CreateGovCloudAccountRequest& request, const CreateGovCloudAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOrganizationAsyncHelper(const Model::CreateOrganizationRequest& request, const CreateOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateOrganizationalUnitAsyncHelper(const Model::CreateOrganizationalUnitRequest& request, const CreateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePolicyAsyncHelper(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeclineHandshakeAsyncHelper(const Model::DeclineHandshakeRequest& request, const DeclineHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOrganizationAsyncHelper(const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteOrganizationalUnitAsyncHelper(const Model::DeleteOrganizationalUnitRequest& request, const DeleteOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePolicyAsyncHelper(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterDelegatedAdministratorAsyncHelper(const Model::DeregisterDelegatedAdministratorRequest& request, const DeregisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountAsyncHelper(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCreateAccountStatusAsyncHelper(const Model::DescribeCreateAccountStatusRequest& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEffectivePolicyAsyncHelper(const Model::DescribeEffectivePolicyRequest& request, const DescribeEffectivePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHandshakeAsyncHelper(const Model::DescribeHandshakeRequest& request, const DescribeHandshakeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationAsyncHelper(const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOrganizationalUnitAsyncHelper(const Model::DescribeOrganizationalUnitRequest& request, const DescribeOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePolicyAsyncHelper(const Model::DescribePolicyRequest& request, const DescribePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachPolicyAsyncHelper(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAWSServiceAccessAsyncHelper(const Model::DisableAWSServiceAccessRequest& request, const DisableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisablePolicyTypeAsyncHelper(const Model::DisablePolicyTypeRequest& request, const DisablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAWSServiceAccessAsyncHelper(const Model::EnableAWSServiceAccessRequest& request, const EnableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAllFeaturesAsyncHelper(const Model::EnableAllFeaturesRequest& request, const EnableAllFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnablePolicyTypeAsyncHelper(const Model::EnablePolicyTypeRequest& request, const EnablePolicyTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InviteAccountToOrganizationAsyncHelper(const Model::InviteAccountToOrganizationRequest& request, const InviteAccountToOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void LeaveOrganizationAsyncHelper(const LeaveOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAWSServiceAccessForOrganizationAsyncHelper(const Model::ListAWSServiceAccessForOrganizationRequest& request, const ListAWSServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountsAsyncHelper(const Model::ListAccountsRequest& request, const ListAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAccountsForParentAsyncHelper(const Model::ListAccountsForParentRequest& request, const ListAccountsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChildrenAsyncHelper(const Model::ListChildrenRequest& request, const ListChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCreateAccountStatusAsyncHelper(const Model::ListCreateAccountStatusRequest& request, const ListCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDelegatedAdministratorsAsyncHelper(const Model::ListDelegatedAdministratorsRequest& request, const ListDelegatedAdministratorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDelegatedServicesForAccountAsyncHelper(const Model::ListDelegatedServicesForAccountRequest& request, const ListDelegatedServicesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHandshakesForAccountAsyncHelper(const Model::ListHandshakesForAccountRequest& request, const ListHandshakesForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListHandshakesForOrganizationAsyncHelper(const Model::ListHandshakesForOrganizationRequest& request, const ListHandshakesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListOrganizationalUnitsForParentAsyncHelper(const Model::ListOrganizationalUnitsForParentRequest& request, const ListOrganizationalUnitsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListParentsAsyncHelper(const Model::ListParentsRequest& request, const ListParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesAsyncHelper(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPoliciesForTargetAsyncHelper(const Model::ListPoliciesForTargetRequest& request, const ListPoliciesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRootsAsyncHelper(const Model::ListRootsRequest& request, const ListRootsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTargetsForPolicyAsyncHelper(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void MoveAccountAsyncHelper(const Model::MoveAccountRequest& request, const MoveAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterDelegatedAdministratorAsyncHelper(const Model::RegisterDelegatedAdministratorRequest& request, const RegisterDelegatedAdministratorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveAccountFromOrganizationAsyncHelper(const Model::RemoveAccountFromOrganizationRequest& request, const RemoveAccountFromOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateOrganizationalUnitAsyncHelper(const Model::UpdateOrganizationalUnitRequest& request, const UpdateOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePolicyAsyncHelper(const Model::UpdatePolicyRequest& request, const UpdatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Organizations
} // namespace Aws
