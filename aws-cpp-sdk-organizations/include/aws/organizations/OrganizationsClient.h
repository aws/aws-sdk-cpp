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
        class DescribeAccountRequest;
        class DescribeCreateAccountStatusRequest;
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
        class RemoveAccountFromOrganizationRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateOrganizationalUnitRequest;
        class UpdatePolicyRequest;

        typedef Aws::Utils::Outcome<AcceptHandshakeResult, Aws::Client::AWSError<OrganizationsErrors>> AcceptHandshakeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> AttachPolicyOutcome;
        typedef Aws::Utils::Outcome<CancelHandshakeResult, Aws::Client::AWSError<OrganizationsErrors>> CancelHandshakeOutcome;
        typedef Aws::Utils::Outcome<CreateAccountResult, Aws::Client::AWSError<OrganizationsErrors>> CreateAccountOutcome;
        typedef Aws::Utils::Outcome<CreateGovCloudAccountResult, Aws::Client::AWSError<OrganizationsErrors>> CreateGovCloudAccountOutcome;
        typedef Aws::Utils::Outcome<CreateOrganizationResult, Aws::Client::AWSError<OrganizationsErrors>> CreateOrganizationOutcome;
        typedef Aws::Utils::Outcome<CreateOrganizationalUnitResult, Aws::Client::AWSError<OrganizationsErrors>> CreateOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<CreatePolicyResult, Aws::Client::AWSError<OrganizationsErrors>> CreatePolicyOutcome;
        typedef Aws::Utils::Outcome<DeclineHandshakeResult, Aws::Client::AWSError<OrganizationsErrors>> DeclineHandshakeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> DeleteOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> DeleteOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> DeletePolicyOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountResult, Aws::Client::AWSError<OrganizationsErrors>> DescribeAccountOutcome;
        typedef Aws::Utils::Outcome<DescribeCreateAccountStatusResult, Aws::Client::AWSError<OrganizationsErrors>> DescribeCreateAccountStatusOutcome;
        typedef Aws::Utils::Outcome<DescribeHandshakeResult, Aws::Client::AWSError<OrganizationsErrors>> DescribeHandshakeOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationResult, Aws::Client::AWSError<OrganizationsErrors>> DescribeOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeOrganizationalUnitResult, Aws::Client::AWSError<OrganizationsErrors>> DescribeOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<DescribePolicyResult, Aws::Client::AWSError<OrganizationsErrors>> DescribePolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> DetachPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> DisableAWSServiceAccessOutcome;
        typedef Aws::Utils::Outcome<DisablePolicyTypeResult, Aws::Client::AWSError<OrganizationsErrors>> DisablePolicyTypeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> EnableAWSServiceAccessOutcome;
        typedef Aws::Utils::Outcome<EnableAllFeaturesResult, Aws::Client::AWSError<OrganizationsErrors>> EnableAllFeaturesOutcome;
        typedef Aws::Utils::Outcome<EnablePolicyTypeResult, Aws::Client::AWSError<OrganizationsErrors>> EnablePolicyTypeOutcome;
        typedef Aws::Utils::Outcome<InviteAccountToOrganizationResult, Aws::Client::AWSError<OrganizationsErrors>> InviteAccountToOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> LeaveOrganizationOutcome;
        typedef Aws::Utils::Outcome<ListAWSServiceAccessForOrganizationResult, Aws::Client::AWSError<OrganizationsErrors>> ListAWSServiceAccessForOrganizationOutcome;
        typedef Aws::Utils::Outcome<ListAccountsResult, Aws::Client::AWSError<OrganizationsErrors>> ListAccountsOutcome;
        typedef Aws::Utils::Outcome<ListAccountsForParentResult, Aws::Client::AWSError<OrganizationsErrors>> ListAccountsForParentOutcome;
        typedef Aws::Utils::Outcome<ListChildrenResult, Aws::Client::AWSError<OrganizationsErrors>> ListChildrenOutcome;
        typedef Aws::Utils::Outcome<ListCreateAccountStatusResult, Aws::Client::AWSError<OrganizationsErrors>> ListCreateAccountStatusOutcome;
        typedef Aws::Utils::Outcome<ListHandshakesForAccountResult, Aws::Client::AWSError<OrganizationsErrors>> ListHandshakesForAccountOutcome;
        typedef Aws::Utils::Outcome<ListHandshakesForOrganizationResult, Aws::Client::AWSError<OrganizationsErrors>> ListHandshakesForOrganizationOutcome;
        typedef Aws::Utils::Outcome<ListOrganizationalUnitsForParentResult, Aws::Client::AWSError<OrganizationsErrors>> ListOrganizationalUnitsForParentOutcome;
        typedef Aws::Utils::Outcome<ListParentsResult, Aws::Client::AWSError<OrganizationsErrors>> ListParentsOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesResult, Aws::Client::AWSError<OrganizationsErrors>> ListPoliciesOutcome;
        typedef Aws::Utils::Outcome<ListPoliciesForTargetResult, Aws::Client::AWSError<OrganizationsErrors>> ListPoliciesForTargetOutcome;
        typedef Aws::Utils::Outcome<ListRootsResult, Aws::Client::AWSError<OrganizationsErrors>> ListRootsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<OrganizationsErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ListTargetsForPolicyResult, Aws::Client::AWSError<OrganizationsErrors>> ListTargetsForPolicyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> MoveAccountOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> RemoveAccountFromOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OrganizationsErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateOrganizationalUnitResult, Aws::Client::AWSError<OrganizationsErrors>> UpdateOrganizationalUnitOutcome;
        typedef Aws::Utils::Outcome<UpdatePolicyResult, Aws::Client::AWSError<OrganizationsErrors>> UpdatePolicyOutcome;

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
        typedef std::future<DescribeAccountOutcome> DescribeAccountOutcomeCallable;
        typedef std::future<DescribeCreateAccountStatusOutcome> DescribeCreateAccountStatusOutcomeCallable;
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
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeAccountRequest&, const Model::DescribeAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::DescribeCreateAccountStatusRequest&, const Model::DescribeCreateAccountStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCreateAccountStatusResponseReceivedHandler;
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
    typedef std::function<void(const OrganizationsClient*, const Model::RemoveAccountFromOrganizationRequest&, const Model::RemoveAccountFromOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveAccountFromOrganizationResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UpdateOrganizationalUnitRequest&, const Model::UpdateOrganizationalUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOrganizationalUnitResponseReceivedHandler;
    typedef std::function<void(const OrganizationsClient*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePolicyResponseReceivedHandler;

  /**
   * <fullname>AWS Organizations API Reference</fullname> <p>AWS Organizations is a
   * web service that enables you to consolidate your multiple AWS accounts into an
   * <i>organization</i> and centrally manage your accounts and their resources.</p>
   * <p>This guide provides descriptions of the Organizations API. For more
   * information about using this service, see the <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_introduction.html">AWS
   * Organizations User Guide</a>.</p> <p> <b>API Version</b> </p> <p>This version of
   * the Organizations API Reference documents the Organizations API version
   * 2016-11-28.</p> <note> <p>As an alternative to using the API directly, you can
   * use one of the AWS SDKs, which consist of libraries and sample code for various
   * programming languages and platforms (Java, Ruby, .NET, iOS, Android, and more).
   * The SDKs provide a convenient way to create programmatic access to AWS
   * Organizations. For example, the SDKs take care of cryptographically signing
   * requests, managing errors, and retrying requests automatically. For more
   * information about the AWS SDKs, including how to download and install them, see
   * <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services</a>.</p>
   * </note> <p>We recommend that you use the AWS SDKs to make programmatic API calls
   * to Organizations. However, you also can use the Organizations Query API to make
   * direct calls to the Organizations web service. To learn more about the
   * Organizations Query API, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_query-requests.html">Making
   * Query Requests</a> in the <i>AWS Organizations User Guide</i>. Organizations
   * supports GET and POST requests for all actions. That is, the API does not
   * require you to use GET for some actions and POST for others. However, GET
   * requests are subject to the limitation size of a URL. Therefore, for operations
   * that require larger sizes, use a POST request.</p> <p> <b>Signing Requests</b>
   * </p> <p>When you send HTTP requests to AWS, you must sign the requests so that
   * AWS can identify who sent them. You sign requests with your AWS access key,
   * which consists of an access key ID and a secret access key. We strongly
   * recommend that you do not create an access key for your root account. Anyone who
   * has the access key for your root account has unrestricted access to all the
   * resources in your account. Instead, create an access key for an IAM user account
   * that has administrative privileges. As another option, use AWS Security Token
   * Service to generate temporary security credentials, and use those credentials to
   * sign requests. </p> <p>To sign requests, we recommend that you use <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4</a>. If you have an existing application that uses Signature Version
   * 2, you do not have to update it to use Signature Version 4. However, some
   * operations now require Signature Version 4. The documentation for operations
   * that require version 4 indicate this requirement. </p> <p>When you use the AWS
   * Command Line Interface (AWS CLI) or one of the AWS SDKs to make requests to AWS,
   * these tools automatically sign the requests for you with the access key that you
   * specify when you configure the tools.</p> <p>In this release, each organization
   * can have only one root. In a future release, a single organization will support
   * multiple roots.</p> <p> <b>Support and Feedback for AWS Organizations</b> </p>
   * <p>We welcome your feedback. Send your comments to <a
   * href="mailto:feedback-awsorganizations@amazon.com">feedback-awsorganizations@amazon.com</a>
   * or post your feedback and questions in the <a
   * href="http://forums.aws.amazon.com/forum.jspa?forumID=219">AWS Organizations
   * support forum</a>. For more information about the AWS support forums, see <a
   * href="http://forums.aws.amazon.com/help.jspa">Forums Help</a>.</p> <p>
   * <b>Endpoint to Call When Using the CLI or the AWS API</b> </p> <p>For the
   * current release of Organizations, you must specify the <code>us-east-1</code>
   * region for all AWS API and CLI calls. You can do this in the CLI by using these
   * parameters and commands:</p> <ul> <li> <p>Use the following parameter with each
   * command to specify both the endpoint and its region:</p> <p>
   * <code>--endpoint-url https://organizations.us-east-1.amazonaws.com</code> </p>
   * </li> <li> <p>Use the default endpoint, but configure your default region with
   * this command:</p> <p> <code>aws configure set default.region us-east-1</code>
   * </p> </li> <li> <p>Use the following parameter with each command to specify the
   * endpoint:</p> <p> <code>--region us-east-1</code> </p> </li> </ul> <p>For the
   * various SDKs used to call the APIs, see the documentation for the SDK of
   * interest to learn how to direct the requests to a specific endpoint. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">Regions
   * and Endpoints</a> in the <i>AWS General Reference</i>. </p> <p> <b>How examples
   * are presented</b> </p> <p>The JSON returned by the AWS Organizations service as
   * response to your requests is returned as a single long string without line
   * breaks or formatting whitespace. Both line breaks and whitespace are included in
   * the examples in this guide to improve readability. When example input parameters
   * also would result in long strings that would extend beyond the screen, we insert
   * line breaks to enhance readability. You should always submit the input as a
   * single JSON text string.</p> <p> <b>Recording API Requests</b> </p> <p>AWS
   * Organizations supports AWS CloudTrail, a service that records AWS API calls for
   * your AWS account and delivers log files to an Amazon S3 bucket. By using
   * information collected by AWS CloudTrail, you can determine which requests were
   * successfully made to Organizations, who made the request, when it was made, and
   * so on. For more about AWS Organizations and its support for AWS CloudTrail, see
   * <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html#orgs_cloudtrail-integration">Logging
   * AWS Organizations Events with AWS CloudTrail</a> in the <i>AWS Organizations
   * User Guide</i>. To learn more about CloudTrail, including how to turn it on and
   * find your log files, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS
   * CloudTrail User Guide</a>.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "Organizations"; }


        /**
         * <p>Sends a response to the originator of a handshake agreeing to the action
         * proposed by the handshake request. </p> <p>This operation can be called only by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account. </p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that AWS Organizations
         * can create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> </li> <li> <p> <b>Enable all features final confirmation</b>
         * handshake: only a principal from the master account.</p> <p>For more information
         * about invitations, see <a
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
         * proposed by the handshake request. </p> <p>This operation can be called only by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account. </p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that AWS Organizations
         * can create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> </li> <li> <p> <b>Enable all features final confirmation</b>
         * handshake: only a principal from the master account.</p> <p>For more information
         * about invitations, see <a
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
         * proposed by the handshake request. </p> <p>This operation can be called only by
         * the following principals when they also have the relevant IAM permissions:</p>
         * <ul> <li> <p> <b>Invitation to join</b> or <b>Approve all features request</b>
         * handshakes: only a principal from the member account. </p> <p>The user who calls
         * the API for an invitation to join must have the
         * <code>organizations:AcceptHandshake</code> permission. If you enabled all
         * features in the organization, the user must also have the
         * <code>iam:CreateServiceLinkedRole</code> permission so that AWS Organizations
         * can create the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integration_services.html#orgs_integration_service-linked-roles">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> </li> <li> <p> <b>Enable all features final confirmation</b>
         * handshake: only a principal from the master account.</p> <p>For more information
         * about invitations, see <a
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
         * account. How the policy affects accounts depends on the type of policy:</p> <ul>
         * <li> <p> <b>Service control policy (SCP)</b> - An SCP specifies what permissions
         * can be delegated to users in affected member accounts. The scope of influence
         * for a policy depends on what you attach the policy to:</p> <ul> <li> <p>If you
         * attach an SCP to a root, it affects all accounts in the organization</p> </li>
         * <li> <p>If you attach an SCP to an OU, it affects all accounts in that OU and in
         * any child OUs</p> </li> <li> <p>If you attach the policy directly to an account,
         * it affects only that account</p> </li> </ul> <p>SCPs are JSON policies that
         * specify the maximum permissions for an organization or organizational unit (OU).
         * When you attach one SCP to a higher level root or OU, and you also attach a
         * different SCP to a child OU or to an account, the child policy can further
         * restrict only the permissions that pass through the parent filter and are
         * available to the child. An SCP that is attached to a child can't grant a
         * permission that the paren't hasn't already granted. For example, imagine that
         * the parent SCP allows permissions A, B, C, D, and E. The child SCP allows C, D,
         * E, F, and G. The result is that the accounts affected by the child SCP are
         * allowed to use only C, D, and E. They can't use A or B because the child OU
         * filtered them out. They also can't use F and G because the parent OU filtered
         * them out. They can't be granted back by the child SCP; child SCPs can only
         * filter the permissions they receive from the parent SCP.</p> <p>AWS
         * Organizations attaches a default SCP named <code>"FullAWSAccess</code> to every
         * root, OU, and account. This default SCP allows all services and actions,
         * enabling any new child OU or account to inherit the permissions of the parent
         * root or OU. If you detach the default policy, you must replace it with a policy
         * that specifies the permissions that you want to allow in that OU or account.</p>
         * <p>For more information about how AWS Organizations policies permissions work,
         * see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">Using
         * Service Control Policies</a> in the <i>AWS Organizations User Guide.</i> </p>
         * </li> </ul> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy to a root, an organizational unit (OU), or an individual
         * account. How the policy affects accounts depends on the type of policy:</p> <ul>
         * <li> <p> <b>Service control policy (SCP)</b> - An SCP specifies what permissions
         * can be delegated to users in affected member accounts. The scope of influence
         * for a policy depends on what you attach the policy to:</p> <ul> <li> <p>If you
         * attach an SCP to a root, it affects all accounts in the organization</p> </li>
         * <li> <p>If you attach an SCP to an OU, it affects all accounts in that OU and in
         * any child OUs</p> </li> <li> <p>If you attach the policy directly to an account,
         * it affects only that account</p> </li> </ul> <p>SCPs are JSON policies that
         * specify the maximum permissions for an organization or organizational unit (OU).
         * When you attach one SCP to a higher level root or OU, and you also attach a
         * different SCP to a child OU or to an account, the child policy can further
         * restrict only the permissions that pass through the parent filter and are
         * available to the child. An SCP that is attached to a child can't grant a
         * permission that the paren't hasn't already granted. For example, imagine that
         * the parent SCP allows permissions A, B, C, D, and E. The child SCP allows C, D,
         * E, F, and G. The result is that the accounts affected by the child SCP are
         * allowed to use only C, D, and E. They can't use A or B because the child OU
         * filtered them out. They also can't use F and G because the parent OU filtered
         * them out. They can't be granted back by the child SCP; child SCPs can only
         * filter the permissions they receive from the parent SCP.</p> <p>AWS
         * Organizations attaches a default SCP named <code>"FullAWSAccess</code> to every
         * root, OU, and account. This default SCP allows all services and actions,
         * enabling any new child OU or account to inherit the permissions of the parent
         * root or OU. If you detach the default policy, you must replace it with a policy
         * that specifies the permissions that you want to allow in that OU or account.</p>
         * <p>For more information about how AWS Organizations policies permissions work,
         * see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">Using
         * Service Control Policies</a> in the <i>AWS Organizations User Guide.</i> </p>
         * </li> </ul> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request) const;

        /**
         * <p>Attaches a policy to a root, an organizational unit (OU), or an individual
         * account. How the policy affects accounts depends on the type of policy:</p> <ul>
         * <li> <p> <b>Service control policy (SCP)</b> - An SCP specifies what permissions
         * can be delegated to users in affected member accounts. The scope of influence
         * for a policy depends on what you attach the policy to:</p> <ul> <li> <p>If you
         * attach an SCP to a root, it affects all accounts in the organization</p> </li>
         * <li> <p>If you attach an SCP to an OU, it affects all accounts in that OU and in
         * any child OUs</p> </li> <li> <p>If you attach the policy directly to an account,
         * it affects only that account</p> </li> </ul> <p>SCPs are JSON policies that
         * specify the maximum permissions for an organization or organizational unit (OU).
         * When you attach one SCP to a higher level root or OU, and you also attach a
         * different SCP to a child OU or to an account, the child policy can further
         * restrict only the permissions that pass through the parent filter and are
         * available to the child. An SCP that is attached to a child can't grant a
         * permission that the paren't hasn't already granted. For example, imagine that
         * the parent SCP allows permissions A, B, C, D, and E. The child SCP allows C, D,
         * E, F, and G. The result is that the accounts affected by the child SCP are
         * allowed to use only C, D, and E. They can't use A or B because the child OU
         * filtered them out. They also can't use F and G because the parent OU filtered
         * them out. They can't be granted back by the child SCP; child SCPs can only
         * filter the permissions they receive from the parent SCP.</p> <p>AWS
         * Organizations attaches a default SCP named <code>"FullAWSAccess</code> to every
         * root, OU, and account. This default SCP allows all services and actions,
         * enabling any new child OU or account to inherit the permissions of the parent
         * root or OU. If you detach the default policy, you must replace it with a policy
         * that specifies the permissions that you want to allow in that OU or account.</p>
         * <p>For more information about how AWS Organizations policies permissions work,
         * see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">Using
         * Service Control Policies</a> in the <i>AWS Organizations User Guide.</i> </p>
         * </li> </ul> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AttachPolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>. </p> <p>This operation can be called only from the
         * account that originated the handshake. The recipient of the handshake can't
         * cancel it, but can use <a>DeclineHandshake</a> instead. After a handshake is
         * canceled, the recipient can no longer respond to that handshake.</p> <p>After
         * you cancel a handshake, it continues to appear in the results of relevant APIs
         * for only 30 days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CancelHandshake">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelHandshakeOutcome CancelHandshake(const Model::CancelHandshakeRequest& request) const;

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>. </p> <p>This operation can be called only from the
         * account that originated the handshake. The recipient of the handshake can't
         * cancel it, but can use <a>DeclineHandshake</a> instead. After a handshake is
         * canceled, the recipient can no longer respond to that handshake.</p> <p>After
         * you cancel a handshake, it continues to appear in the results of relevant APIs
         * for only 30 days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CancelHandshake">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelHandshakeOutcomeCallable CancelHandshakeCallable(const Model::CancelHandshakeRequest& request) const;

        /**
         * <p>Cancels a handshake. Canceling a handshake sets the handshake state to
         * <code>CANCELED</code>. </p> <p>This operation can be called only from the
         * account that originated the handshake. The recipient of the handshake can't
         * cancel it, but can use <a>DeclineHandshake</a> instead. After a handshake is
         * canceled, the recipient can no longer respond to that handshake.</p> <p>After
         * you cancel a handshake, it continues to appear in the results of relevant APIs
         * for only 30 days. After that, it's deleted.</p><p><h3>See Also:</h3>   <a
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
         * the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using AWS CloudTrail with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p/> <p>The user who calls the API to create an
         * account must have the <code>organizations:CreateAccount</code> permission. If
         * you enabled all features in the organization, AWS Organizations will create the
         * required service-linked role named <code>AWSServiceRoleForOrganizations</code>.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> <p>AWS Organizations preconfigures the new member account with a
         * role (named <code>OrganizationAccountAccessRole</code> by default) that grants
         * users in the master account administrator permissions in the new member account.
         * Principals in the master account can assume the role. AWS Organizations clones
         * the company name and address information for the new account from the
         * organization's master account.</p> <p>This operation can be called only from the
         * organization's master account.</p> <p>For more information about creating
         * accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <important> <ul> <li> <p>When you create an account in an
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
         * </important> <note> <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> </note><p><h3>See
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
         * the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using AWS CloudTrail with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p/> <p>The user who calls the API to create an
         * account must have the <code>organizations:CreateAccount</code> permission. If
         * you enabled all features in the organization, AWS Organizations will create the
         * required service-linked role named <code>AWSServiceRoleForOrganizations</code>.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> <p>AWS Organizations preconfigures the new member account with a
         * role (named <code>OrganizationAccountAccessRole</code> by default) that grants
         * users in the master account administrator permissions in the new member account.
         * Principals in the master account can assume the role. AWS Organizations clones
         * the company name and address information for the new account from the
         * organization's master account.</p> <p>This operation can be called only from the
         * organization's master account.</p> <p>For more information about creating
         * accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <important> <ul> <li> <p>When you create an account in an
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
         * </important> <note> <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> </note><p><h3>See
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
         * the request, do one of the following:</p> <ul> <li> <p>Use the
         * <code>OperationId</code> response element from this operation to provide as a
         * parameter to the <a>DescribeCreateAccountStatus</a> operation.</p> </li> <li>
         * <p>Check the AWS CloudTrail log for the <code>CreateAccountResult</code> event.
         * For information on using AWS CloudTrail with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_monitoring.html">Monitoring
         * the Activity in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p/> <p>The user who calls the API to create an
         * account must have the <code>organizations:CreateAccount</code> permission. If
         * you enabled all features in the organization, AWS Organizations will create the
         * required service-linked role named <code>AWSServiceRoleForOrganizations</code>.
         * For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide</i>.</p> <p>AWS Organizations preconfigures the new member account with a
         * role (named <code>OrganizationAccountAccessRole</code> by default) that grants
         * users in the master account administrator permissions in the new member account.
         * Principals in the master account can assume the role. AWS Organizations clones
         * the company name and address information for the new account from the
         * organization's master account.</p> <p>This operation can be called only from the
         * organization's master account.</p> <p>For more information about creating
         * accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <important> <ul> <li> <p>When you create an account in an
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
         * </important> <note> <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> </note><p><h3>See
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
         * account in the AWS GovCloud (US) Region that is associated with your master
         * account in the commercial Region. </p> </li> <li> <p>You call this action from
         * the master account of your organization in the commercial Region.</p> </li> <li>
         * <p>You have the <code>organizations:CreateGovCloudAccount</code> permission. AWS
         * Organizations creates the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>AWS automatically enables AWS CloudTrail for AWS
         * GovCloud (US) accounts, but you should also do the following:</p> <ul> <li>
         * <p>Verify that AWS CloudTrail is enabled to store logs.</p> </li> <li> <p>Create
         * an S3 bucket for AWS CloudTrail log storage.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * AWS CloudTrail Is Enabled</a> in the <i>AWS GovCloud User Guide</i>. </p> </li>
         * </ul> <p>You call this action from the master account of your organization in
         * the commercial Region to create a standalone AWS account in the AWS GovCloud
         * (US) Region. After the account is created, the master account of an organization
         * in the AWS GovCloud (US) Region can invite it to that organization. For more
         * information on inviting standalone accounts in the AWS GovCloud (US) to join an
         * organization, see <a
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
         * that allows the master account in the organization in the commercial Region to
         * assume it. An AWS GovCloud (US) account is then created and associated with the
         * commercial account that you just created. A role is created in the new AWS
         * GovCloud (US) account that can be assumed by the AWS GovCloud (US) account that
         * is associated with the master account of the commercial organization. For more
         * information and to view a diagram that explains how account access works, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <important> <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. Follow the
         * steps at <a
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
         * </important> <note> <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> </note><p><h3>See
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
         * account in the AWS GovCloud (US) Region that is associated with your master
         * account in the commercial Region. </p> </li> <li> <p>You call this action from
         * the master account of your organization in the commercial Region.</p> </li> <li>
         * <p>You have the <code>organizations:CreateGovCloudAccount</code> permission. AWS
         * Organizations creates the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>AWS automatically enables AWS CloudTrail for AWS
         * GovCloud (US) accounts, but you should also do the following:</p> <ul> <li>
         * <p>Verify that AWS CloudTrail is enabled to store logs.</p> </li> <li> <p>Create
         * an S3 bucket for AWS CloudTrail log storage.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * AWS CloudTrail Is Enabled</a> in the <i>AWS GovCloud User Guide</i>. </p> </li>
         * </ul> <p>You call this action from the master account of your organization in
         * the commercial Region to create a standalone AWS account in the AWS GovCloud
         * (US) Region. After the account is created, the master account of an organization
         * in the AWS GovCloud (US) Region can invite it to that organization. For more
         * information on inviting standalone accounts in the AWS GovCloud (US) to join an
         * organization, see <a
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
         * that allows the master account in the organization in the commercial Region to
         * assume it. An AWS GovCloud (US) account is then created and associated with the
         * commercial account that you just created. A role is created in the new AWS
         * GovCloud (US) account that can be assumed by the AWS GovCloud (US) account that
         * is associated with the master account of the commercial organization. For more
         * information and to view a diagram that explains how account access works, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <important> <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. Follow the
         * steps at <a
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
         * </important> <note> <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> </note><p><h3>See
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
         * account in the AWS GovCloud (US) Region that is associated with your master
         * account in the commercial Region. </p> </li> <li> <p>You call this action from
         * the master account of your organization in the commercial Region.</p> </li> <li>
         * <p>You have the <code>organizations:CreateGovCloudAccount</code> permission. AWS
         * Organizations creates the required service-linked role named
         * <code>AWSServiceRoleForOrganizations</code>. For more information, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html#orgs_integrate_services-using_slrs">AWS
         * Organizations and Service-Linked Roles</a> in the <i>AWS Organizations User
         * Guide.</i> </p> </li> </ul> <p>AWS automatically enables AWS CloudTrail for AWS
         * GovCloud (US) accounts, but you should also do the following:</p> <ul> <li>
         * <p>Verify that AWS CloudTrail is enabled to store logs.</p> </li> <li> <p>Create
         * an S3 bucket for AWS CloudTrail log storage.</p> <p>For more information, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/verifying-cloudtrail.html">Verifying
         * AWS CloudTrail Is Enabled</a> in the <i>AWS GovCloud User Guide</i>. </p> </li>
         * </ul> <p>You call this action from the master account of your organization in
         * the commercial Region to create a standalone AWS account in the AWS GovCloud
         * (US) Region. After the account is created, the master account of an organization
         * in the AWS GovCloud (US) Region can invite it to that organization. For more
         * information on inviting standalone accounts in the AWS GovCloud (US) to join an
         * organization, see <a
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
         * that allows the master account in the organization in the commercial Region to
         * assume it. An AWS GovCloud (US) account is then created and associated with the
         * commercial account that you just created. A role is created in the new AWS
         * GovCloud (US) account that can be assumed by the AWS GovCloud (US) account that
         * is associated with the master account of the commercial organization. For more
         * information and to view a diagram that explains how account access works, see <a
         * href="http://docs.aws.amazon.com/govcloud-us/latest/UserGuide/govcloud-organizations.html">AWS
         * Organizations</a> in the <i>AWS GovCloud User Guide.</i> </p> <p>For more
         * information about creating accounts, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_create.html">Creating
         * an AWS Account in Your Organization</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <important> <ul> <li> <p>When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required for the account to operate as a standalone account, such as
         * a payment method and signing the end user license agreement (EULA) is <i>not</i>
         * automatically collected. If you must remove an account from your organization
         * later, you can do so only after you provide the missing information. Follow the
         * steps at <a
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
         * </important> <note> <p>When you create a member account with this operation, you
         * can choose whether to create the account with the <b>IAM User and Role Access to
         * Billing Information</b> switch enabled. If you enable it, IAM users and roles
         * that have appropriate permissions can view billing information for the account.
         * If you disable it, only the account root user can access billing information.
         * For information about how to disable this switch for an account, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html">Granting
         * Access to Your Billing Information and Tools</a>.</p> </note><p><h3>See
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
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/orgs_getting-started_concepts.html#account">master
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's master
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and
         * you can't use organization policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationOutcome CreateOrganization(const Model::CreateOrganizationRequest& request) const;

        /**
         * <p>Creates an AWS organization. The account whose user is calling the
         * <code>CreateOrganization</code> operation automatically becomes the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/orgs_getting-started_concepts.html#account">master
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's master
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and
         * you can't use organization policies.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOrganizationOutcomeCallable CreateOrganizationCallable(const Model::CreateOrganizationRequest& request) const;

        /**
         * <p>Creates an AWS organization. The account whose user is calling the
         * <code>CreateOrganization</code> operation automatically becomes the <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/orgs_getting-started_concepts.html#account">master
         * account</a> of the new organization.</p> <p>This operation must be called using
         * credentials from the account that is to become the new organization's master
         * account. The principal must also have the relevant IAM permissions.</p> <p>By
         * default (or if you set the <code>FeatureSet</code> parameter to
         * <code>ALL</code>), the new organization is created with all features enabled and
         * service control policies automatically enabled in the root. If you instead
         * choose to create the organization supporting only the consolidated billing
         * features by setting the <code>FeatureSet</code> parameter to
         * <code>CONSOLIDATED_BILLING"</code>, no policy types are enabled by default, and
         * you can't use organization policies.</p><p><h3>See Also:</h3>   <a
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
         * service control policies, the limit is five. </p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * Organizational Units</a> in the <i>AWS Organizations User Guide.</i> </p>
         * <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOrganizationalUnitOutcome CreateOrganizationalUnit(const Model::CreateOrganizationalUnitRequest& request) const;

        /**
         * <p>Creates an organizational unit (OU) within a root or parent OU. An OU is a
         * container for accounts that enables you to organize your accounts to apply
         * policies according to your business requirements. The number of levels deep that
         * you can nest OUs is dependent upon the policy types enabled for that root. For
         * service control policies, the limit is five. </p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * Organizational Units</a> in the <i>AWS Organizations User Guide.</i> </p>
         * <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
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
         * service control policies, the limit is five. </p> <p>For more information about
         * OUs, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_ous.html">Managing
         * Organizational Units</a> in the <i>AWS Organizations User Guide.</i> </p>
         * <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
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
         * Organization Policies</a>.</p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * <p>Creates a policy of a specified type that you can attach to a root, an
         * organizational unit (OU), or an individual AWS account.</p> <p>For more
         * information about policies and their use, see <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies.html">Managing
         * Organization Policies</a>.</p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
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
         * Organization Policies</a>.</p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
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
         * credentials from the master account. The organization must be empty of member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationOutcome DeleteOrganization() const;

        /**
         * <p>Deletes the organization. You can delete an organization only by using
         * credentials from the master account. The organization must be empty of member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOrganizationOutcomeCallable DeleteOrganizationCallable() const;

        /**
         * <p>Deletes the organization. You can delete an organization only by using
         * credentials from the master account. The organization must be empty of member
         * accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOrganizationAsync(const DeleteOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Deletes an organizational unit (OU) from a root or another OU. You must first
         * remove all accounts and child OUs from the OU that you want to delete.</p>
         * <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeleteOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationalUnitOutcome DeleteOrganizationalUnit(const Model::DeleteOrganizationalUnitRequest& request) const;

        /**
         * <p>Deletes an organizational unit (OU) from a root or another OU. You must first
         * remove all accounts and child OUs from the OU that you want to delete.</p>
         * <p>This operation can be called only from the organization's master
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
         * <p>This operation can be called only from the organization's master
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
         * organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * <p>Deletes the specified policy from your organization. Before you perform this
         * operation, you must first detach the policy from all organizational units (OUs),
         * roots, and accounts.</p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
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
         * organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DeletePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves AWS Organizations-related information about the specified
         * account.</p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOutcome DescribeAccount(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves AWS Organizations-related information about the specified
         * account.</p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOutcomeCallable DescribeAccountCallable(const Model::DescribeAccountRequest& request) const;

        /**
         * <p>Retrieves AWS Organizations-related information about the specified
         * account.</p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAsync(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCreateAccountStatusOutcome DescribeCreateAccountStatus(const Model::DescribeCreateAccountStatusRequest& request) const;

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCreateAccountStatusOutcomeCallable DescribeCreateAccountStatusCallable(const Model::DescribeCreateAccountStatusRequest& request) const;

        /**
         * <p>Retrieves the current status of an asynchronous request to create an
         * account.</p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCreateAccountStatusAsync(const Model::DescribeCreateAccountStatusRequest& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * organization.</p> <note> <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOutcome DescribeOrganization() const;

        /**
         * <p>Retrieves information about the organization that the user's account belongs
         * to.</p> <p>This operation can be called from any account in the
         * organization.</p> <note> <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationOutcomeCallable DescribeOrganizationCallable() const;

        /**
         * <p>Retrieves information about the organization that the user's account belongs
         * to.</p> <p>This operation can be called from any account in the
         * organization.</p> <note> <p>Even if a policy type is shown as available in the
         * organization, you can disable it separately at the root level with
         * <a>DisablePolicyType</a>. Use <a>ListRoots</a> to see the status of policy types
         * for a specified root.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationAsync(const DescribeOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationalUnitOutcome DescribeOrganizationalUnit(const Model::DescribeOrganizationalUnitRequest& request) const;

        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOrganizationalUnitOutcomeCallable DescribeOrganizationalUnitCallable(const Model::DescribeOrganizationalUnitRequest& request) const;

        /**
         * <p>Retrieves information about an organizational unit (OU).</p> <p>This
         * operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribeOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOrganizationalUnitAsync(const Model::DescribeOrganizationalUnitRequest& request, const DescribeOrganizationalUnitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePolicyOutcome DescribePolicy(const Model::DescribePolicyRequest& request) const;

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePolicyOutcomeCallable DescribePolicyCallable(const Model::DescribePolicyRequest& request) const;

        /**
         * <p>Retrieves information about a policy.</p> <p>This operation can be called
         * only from the organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DescribePolicy">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePolicyAsync(const Model::DescribePolicyRequest& request, const DescribePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or account.
         * If the policy being detached is a service control policy (SCP), the changes to
         * permissions for IAM users and roles in affected accounts are immediate.</p> <p>
         * <b>Note:</b> Every root, OU, and account must have at least one SCP attached. If
         * you want to replace the default <code>FullAWSAccess</code> policy with one that
         * limits the permissions that can be delegated, you must attach the replacement
         * policy before you can remove the default one. This is the authorization strategy
         * of <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_whitelist">whitelisting</a>.
         * If you instead attach a second SCP and leave the <code>FullAWSAccess</code> SCP
         * still attached, and specify <code>"Effect": "Deny"</code> in the second SCP to
         * override the <code>"Effect": "Allow"</code> in the <code>FullAWSAccess</code>
         * policy (or any other attached SCP), you're using the authorization strategy of
         * <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_blacklist">blacklisting</a>.
         * </p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or account.
         * If the policy being detached is a service control policy (SCP), the changes to
         * permissions for IAM users and roles in affected accounts are immediate.</p> <p>
         * <b>Note:</b> Every root, OU, and account must have at least one SCP attached. If
         * you want to replace the default <code>FullAWSAccess</code> policy with one that
         * limits the permissions that can be delegated, you must attach the replacement
         * policy before you can remove the default one. This is the authorization strategy
         * of <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_whitelist">whitelisting</a>.
         * If you instead attach a second SCP and leave the <code>FullAWSAccess</code> SCP
         * still attached, and specify <code>"Effect": "Deny"</code> in the second SCP to
         * override the <code>"Effect": "Allow"</code> in the <code>FullAWSAccess</code>
         * policy (or any other attached SCP), you're using the authorization strategy of
         * <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_blacklist">blacklisting</a>.
         * </p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DetachPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request) const;

        /**
         * <p>Detaches a policy from a target root, organizational unit (OU), or account.
         * If the policy being detached is a service control policy (SCP), the changes to
         * permissions for IAM users and roles in affected accounts are immediate.</p> <p>
         * <b>Note:</b> Every root, OU, and account must have at least one SCP attached. If
         * you want to replace the default <code>FullAWSAccess</code> policy with one that
         * limits the permissions that can be delegated, you must attach the replacement
         * policy before you can remove the default one. This is the authorization strategy
         * of <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_whitelist">whitelisting</a>.
         * If you instead attach a second SCP and leave the <code>FullAWSAccess</code> SCP
         * still attached, and specify <code>"Effect": "Deny"</code> in the second SCP to
         * override the <code>"Effect": "Allow"</code> in the <code>FullAWSAccess</code>
         * policy (or any other attached SCP), you're using the authorization strategy of
         * <a
         * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_about-scps.html#orgs_policies_blacklist">blacklisting</a>.
         * </p> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
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
         * the service completes its clean-up from AWS Organizations.</p> <p/> <important>
         * <p>We recommend that you disable integration between AWS Organizations and the
         * specified AWS service by using the console or commands that are provided by the
         * specified service. Doing so ensures that the other service is aware that it can
         * clean up any resources that are required only for the integration. How the
         * service cleans up its resources in the organization's accounts depends on that
         * service. For more information, see the documentation for the other AWS
         * service.</p> </important> <p>After you perform the
         * <code>DisableAWSServiceAccess</code> operation, the specified service can no
         * longer perform operations in your organization's accounts unless the operations
         * are explicitly permitted by the IAM policies that are attached to your roles.
         * </p> <p>For more information about integrating other services with AWS
         * Organizations, including the list of services that work with Organizations, see
         * <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
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
         * the service completes its clean-up from AWS Organizations.</p> <p/> <important>
         * <p>We recommend that you disable integration between AWS Organizations and the
         * specified AWS service by using the console or commands that are provided by the
         * specified service. Doing so ensures that the other service is aware that it can
         * clean up any resources that are required only for the integration. How the
         * service cleans up its resources in the organization's accounts depends on that
         * service. For more information, see the documentation for the other AWS
         * service.</p> </important> <p>After you perform the
         * <code>DisableAWSServiceAccess</code> operation, the specified service can no
         * longer perform operations in your organization's accounts unless the operations
         * are explicitly permitted by the IAM policies that are attached to your roles.
         * </p> <p>For more information about integrating other services with AWS
         * Organizations, including the list of services that work with Organizations, see
         * <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
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
         * the service completes its clean-up from AWS Organizations.</p> <p/> <important>
         * <p>We recommend that you disable integration between AWS Organizations and the
         * specified AWS service by using the console or commands that are provided by the
         * specified service. Doing so ensures that the other service is aware that it can
         * clean up any resources that are required only for the integration. How the
         * service cleans up its resources in the organization's accounts depends on that
         * service. For more information, see the documentation for the other AWS
         * service.</p> </important> <p>After you perform the
         * <code>DisableAWSServiceAccess</code> operation, the specified service can no
         * longer perform operations in your organization's accounts unless the operations
         * are explicitly permitted by the IAM policies that are attached to your roles.
         * </p> <p>For more information about integrating other services with AWS
         * Organizations, including the list of services that work with Organizations, see
         * <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisableAWSServiceAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAWSServiceAccessAsync(const Model::DisableAWSServiceAccessRequest& request, const DisableAWSServiceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an organizational control policy type in a root. A policy of a
         * certain type can be attached to entities in a root only if that type is enabled
         * in the root. After you perform this operation, you no longer can attach policies
         * of the specified type to that root or to any organizational unit (OU) or account
         * in that root. You can undo this by using the <a>EnablePolicyType</a>
         * operation.</p> <p>This operation can be called only from the organization's
         * master account.</p> <note> <p>If you disable a policy type for a root, it still
         * shows as enabled for the organization if all features are enabled in that
         * organization. Use <a>ListRoots</a> to see the status of policy types for a
         * specified root. Use <a>DescribeOrganization</a> to see the status of policy
         * types in the organization.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisablePolicyType">AWS
         * API Reference</a></p>
         */
        virtual Model::DisablePolicyTypeOutcome DisablePolicyType(const Model::DisablePolicyTypeRequest& request) const;

        /**
         * <p>Disables an organizational control policy type in a root. A policy of a
         * certain type can be attached to entities in a root only if that type is enabled
         * in the root. After you perform this operation, you no longer can attach policies
         * of the specified type to that root or to any organizational unit (OU) or account
         * in that root. You can undo this by using the <a>EnablePolicyType</a>
         * operation.</p> <p>This operation can be called only from the organization's
         * master account.</p> <note> <p>If you disable a policy type for a root, it still
         * shows as enabled for the organization if all features are enabled in that
         * organization. Use <a>ListRoots</a> to see the status of policy types for a
         * specified root. Use <a>DescribeOrganization</a> to see the status of policy
         * types in the organization.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DisablePolicyType">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisablePolicyTypeOutcomeCallable DisablePolicyTypeCallable(const Model::DisablePolicyTypeRequest& request) const;

        /**
         * <p>Disables an organizational control policy type in a root. A policy of a
         * certain type can be attached to entities in a root only if that type is enabled
         * in the root. After you perform this operation, you no longer can attach policies
         * of the specified type to that root or to any organizational unit (OU) or account
         * in that root. You can undo this by using the <a>EnablePolicyType</a>
         * operation.</p> <p>This operation can be called only from the organization's
         * master account.</p> <note> <p>If you disable a policy type for a root, it still
         * shows as enabled for the organization if all features are enabled in that
         * organization. Use <a>ListRoots</a> to see the status of policy types for a
         * specified root. Use <a>DescribeOrganization</a> to see the status of policy
         * types in the organization.</p> </note><p><h3>See Also:</h3>   <a
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
         * <important> <p>We recommend that you enable integration between AWS
         * Organizations and the specified AWS service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other AWS
         * service.</p> </important> <p>For more information about enabling services to
         * integrate with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * master account and only if the organization has <a
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
         * <important> <p>We recommend that you enable integration between AWS
         * Organizations and the specified AWS service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other AWS
         * service.</p> </important> <p>For more information about enabling services to
         * integrate with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * master account and only if the organization has <a
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
         * <important> <p>We recommend that you enable integration between AWS
         * Organizations and the specified AWS service by using the console or commands
         * that are provided by the specified service. Doing so ensures that the service is
         * aware that it can create the resources that are required for the integration.
         * How the service creates those resources in the organization's accounts depends
         * on that service. For more information, see the documentation for the other AWS
         * service.</p> </important> <p>For more information about enabling services to
         * integrate with AWS Organizations, see <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_integrate_services.html">Integrating
         * AWS Organizations with Other AWS Services</a> in the <i>AWS Organizations User
         * Guide.</i> </p> <p>This operation can be called only from the organization's
         * master account and only if the organization has <a
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
         * Guide.</i> </p> <important> <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p> </important> <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the master account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The master account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's master account. </p><p><h3>See Also:</h3>   <a
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
         * Guide.</i> </p> <important> <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p> </important> <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the master account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The master account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's master account. </p><p><h3>See Also:</h3>   <a
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
         * Guide.</i> </p> <important> <p>This operation is required only for organizations
         * that were created explicitly with only the consolidated billing features
         * enabled. Calling this operation sends a handshake to every invited account in
         * the organization. The feature set change can be finalized and the additional
         * features enabled only after all administrators in the invited accounts approve
         * the change by accepting the handshake.</p> </important> <p>After you enable all
         * features, you can separately enable or disable individual policy types in a root
         * using <a>EnablePolicyType</a> and <a>DisablePolicyType</a>. To see the status of
         * policy types in a root, use <a>ListRoots</a>.</p> <p>After all invited member
         * accounts accept the handshake, you finalize the feature set change by accepting
         * the handshake that contains <code>"Action": "ENABLE_ALL_FEATURES"</code>. This
         * completes the change.</p> <p>After you enable all features in your organization,
         * the master account in the organization can apply policies on all member
         * accounts. These policies can restrict what users and even administrators in
         * those accounts can do. The master account can apply policies that prevent
         * accounts from leaving the organization. Ensure that your account administrators
         * are aware of this.</p> <p>This operation can be called only from the
         * organization's master account. </p><p><h3>See Also:</h3>   <a
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
         * operation.</p> <p>This operation can be called only from the organization's
         * master account.</p> <p>You can enable a policy type in a root only if that
         * policy type is available in the organization. Use <a>DescribeOrganization</a> to
         * view the status of available policy types in the organization.</p> <p>To view
         * the status of policy type in a root, use <a>ListRoots</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/EnablePolicyType">AWS
         * API Reference</a></p>
         */
        virtual Model::EnablePolicyTypeOutcome EnablePolicyType(const Model::EnablePolicyTypeRequest& request) const;

        /**
         * <p>Enables a policy type in a root. After you enable a policy type in a root,
         * you can attach policies of that type to the root, any organizational unit (OU),
         * or account in that root. You can undo this by using the <a>DisablePolicyType</a>
         * operation.</p> <p>This operation can be called only from the organization's
         * master account.</p> <p>You can enable a policy type in a root only if that
         * policy type is available in the organization. Use <a>DescribeOrganization</a> to
         * view the status of available policy types in the organization.</p> <p>To view
         * the status of policy type in a root, use <a>ListRoots</a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * operation.</p> <p>This operation can be called only from the organization's
         * master account.</p> <p>You can enable a policy type in a root only if that
         * policy type is available in the organization. Use <a>DescribeOrganization</a> to
         * view the status of available policy types in the organization.</p> <p>To view
         * the status of policy type in a root, use <a>ListRoots</a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <a>Handshake</a> whose details are in the response.</p> <important> <ul> <li>
         * <p>You can invite AWS accounts only from the same seller as the master account.
         * For example, if your organization's master account was created by Amazon
         * Internet Services Pvt. Ltd (AISPL), an AWS seller in India, you can invite only
         * other AISPL accounts to your organization. You can't combine accounts from AISPL
         * and AWS or from any other AWS seller. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
         * Billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * </ul> </important> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InviteAccountToOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::InviteAccountToOrganizationOutcome InviteAccountToOrganization(const Model::InviteAccountToOrganizationRequest& request) const;

        /**
         * <p>Sends an invitation to another account to join your organization as a member
         * account. AWS Organizations sends email on your behalf to the email address that
         * is associated with the other account's owner. The invitation is implemented as a
         * <a>Handshake</a> whose details are in the response.</p> <important> <ul> <li>
         * <p>You can invite AWS accounts only from the same seller as the master account.
         * For example, if your organization's master account was created by Amazon
         * Internet Services Pvt. Ltd (AISPL), an AWS seller in India, you can invite only
         * other AISPL accounts to your organization. You can't combine accounts from AISPL
         * and AWS or from any other AWS seller. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
         * Billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * </ul> </important> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
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
         * <a>Handshake</a> whose details are in the response.</p> <important> <ul> <li>
         * <p>You can invite AWS accounts only from the same seller as the master account.
         * For example, if your organization's master account was created by Amazon
         * Internet Services Pvt. Ltd (AISPL), an AWS seller in India, you can invite only
         * other AISPL accounts to your organization. You can't combine accounts from AISPL
         * and AWS or from any other AWS seller. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/useconsolidatedbilliing-India.html">Consolidated
         * Billing in India</a>.</p> </li> <li> <p>If you receive an exception that
         * indicates that you exceeded your account limits for the organization or that the
         * operation failed because your organization is still initializing, wait one hour
         * and then try again. If the error persists after an hour, contact <a
         * href="https://console.aws.amazon.com/support/home#/">AWS Support</a>.</p> </li>
         * </ul> </important> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InviteAccountToOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InviteAccountToOrganizationAsync(const Model::InviteAccountToOrganizationRequest& request, const InviteAccountToOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the master account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p> <important> <ul> <li>
         * <p>The master account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do, including preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization. </p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the AWS Organizations
         * console, API, or CLI commands, the information required of standalone accounts
         * is <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must accept the end user license agreement (EULA), choose a
         * support plan, provide and verify the required contact information, and provide a
         * current payment method. AWS uses the payment method to charge for any billable
         * (not free tier) AWS activity that occurs while the account isn't attached to an
         * organization. Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li> <p>You
         * can leave an organization only after you enable IAM user access to billing in
         * your account. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
         * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
         * Cost Management User Guide.</i> </p> </li> </ul> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/LeaveOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::LeaveOrganizationOutcome LeaveOrganization() const;

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the master account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p> <important> <ul> <li>
         * <p>The master account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do, including preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization. </p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the AWS Organizations
         * console, API, or CLI commands, the information required of standalone accounts
         * is <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must accept the end user license agreement (EULA), choose a
         * support plan, provide and verify the required contact information, and provide a
         * current payment method. AWS uses the payment method to charge for any billable
         * (not free tier) AWS activity that occurs while the account isn't attached to an
         * organization. Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li> <p>You
         * can leave an organization only after you enable IAM user access to billing in
         * your account. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
         * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
         * Cost Management User Guide.</i> </p> </li> </ul> </important><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/LeaveOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::LeaveOrganizationOutcomeCallable LeaveOrganizationCallable() const;

        /**
         * <p>Removes a member account from its parent organization. This version of the
         * operation is performed by the account that wants to leave. To remove a member
         * account as a user in the master account, use
         * <a>RemoveAccountFromOrganization</a> instead.</p> <p>This operation can be
         * called only from a member account in the organization.</p> <important> <ul> <li>
         * <p>The master account in an organization with all features enabled can set
         * service control policies (SCPs) that can restrict what administrators of member
         * accounts can do, including preventing them from successfully calling
         * <code>LeaveOrganization</code> and leaving the organization. </p> </li> <li>
         * <p>You can leave an organization as a member account only if the account is
         * configured with the information required to operate as a standalone account.
         * When you create an account in an organization using the AWS Organizations
         * console, API, or CLI commands, the information required of standalone accounts
         * is <i>not</i> automatically collected. For each account that you want to make
         * standalone, you must accept the end user license agreement (EULA), choose a
         * support plan, provide and verify the required contact information, and provide a
         * current payment method. AWS uses the payment method to charge for any billable
         * (not free tier) AWS activity that occurs while the account isn't attached to an
         * organization. Follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p> </li> <li> <p>You
         * can leave an organization only after you enable IAM user access to billing in
         * your account. For more information, see <a
         * href="http://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/grantaccess.html#ControllingAccessWebsite-Activate">Activating
         * Access to the Billing and Cost Management Console</a> in the <i>AWS Billing and
         * Cost Management User Guide.</i> </p> </li> </ul> </important><p><h3>See
         * Also:</h3>   <a
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
         * master account.</p><p><h3>See Also:</h3>   <a
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
         * master account.</p><p><h3>See Also:</h3>   <a
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
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAWSServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAWSServiceAccessForOrganizationAsync(const Model::ListAWSServiceAccessForOrganizationRequest& request, const ListAWSServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the accounts in the organization. To request only the accounts in a
         * specified root or organizational unit (OU), use the <a>ListAccountsForParent</a>
         * operation instead.</p> <note> <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccounts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountsOutcome ListAccounts(const Model::ListAccountsRequest& request) const;

        /**
         * <p>Lists all the accounts in the organization. To request only the accounts in a
         * specified root or organizational unit (OU), use the <a>ListAccountsForParent</a>
         * operation instead.</p> <note> <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
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
         * operation instead.</p> <note> <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
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
         * <note> <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
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
         * <note> <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
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
         * <note> <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListAccountsForParent">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAccountsForParentAsync(const Model::ListAccountsForParentRequest& request, const ListAccountsForParentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> <note>
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChildrenOutcome ListChildren(const Model::ListChildrenRequest& request) const;

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> <note>
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChildrenOutcomeCallable ListChildrenCallable(const Model::ListChildrenRequest& request) const;

        /**
         * <p>Lists all of the organizational units (OUs) or accounts that are contained in
         * the specified parent OU or root. This operation, along with <a>ListParents</a>
         * enables you to traverse the tree structure that makes up this root.</p> <note>
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListChildren">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChildrenAsync(const Model::ListChildrenRequest& request, const ListChildrenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCreateAccountStatusOutcome ListCreateAccountStatus(const Model::ListCreateAccountStatusRequest& request) const;

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCreateAccountStatusOutcomeCallable ListCreateAccountStatusCallable(const Model::ListCreateAccountStatusRequest& request) const;

        /**
         * <p>Lists the account creation requests that match the specified status that is
         * currently being tracked for the organization.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListCreateAccountStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCreateAccountStatusAsync(const Model::ListCreateAccountStatusRequest& request, const ListCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the current handshakes that are associated with the account of the
         * requesting user.</p> <p>Handshakes that are <code>ACCEPTED</code>,
         * <code>DECLINED</code>, or <code>CANCELED</code> appear in the results of this
         * API for only 30 days after changing to that state. After that, they're deleted
         * and no longer accessible.</p> <note> <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
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
         * and no longer accessible.</p> <note> <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
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
         * and no longer accessible.</p> <note> <p>Always check the <code>NextToken</code>
         * response parameter for a <code>null</code> value when calling a
         * <code>List*</code> operation. These operations can occasionally return an empty
         * set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
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
         * that, they're deleted and no longer accessible.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
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
         * that, they're deleted and no longer accessible.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
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
         * that, they're deleted and no longer accessible.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListHandshakesForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHandshakesForOrganizationAsync(const Model::ListHandshakesForOrganizationRequest& request, const ListHandshakesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p> <note> <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListOrganizationalUnitsForParent">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationalUnitsForParentOutcome ListOrganizationalUnitsForParent(const Model::ListOrganizationalUnitsForParentRequest& request) const;

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p> <note> <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListOrganizationalUnitsForParent">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOrganizationalUnitsForParentOutcomeCallable ListOrganizationalUnitsForParentCallable(const Model::ListOrganizationalUnitsForParentRequest& request) const;

        /**
         * <p>Lists the organizational units (OUs) in a parent organizational unit or
         * root.</p> <note> <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
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
         * this root.</p> <note> <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p> </note> <p>This operation can be called only from the
         * organization's master account.</p> <note> <p>In the current release, a child can
         * have only a single parent. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListParents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListParentsOutcome ListParents(const Model::ListParentsRequest& request) const;

        /**
         * <p>Lists the root or organizational units (OUs) that serve as the immediate
         * parent of the specified child OU or account. This operation, along with
         * <a>ListChildren</a> enables you to traverse the tree structure that makes up
         * this root.</p> <note> <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p> </note> <p>This operation can be called only from the
         * organization's master account.</p> <note> <p>In the current release, a child can
         * have only a single parent. </p> </note><p><h3>See Also:</h3>   <a
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
         * this root.</p> <note> <p>Always check the <code>NextToken</code> response
         * parameter for a <code>null</code> value when calling a <code>List*</code>
         * operation. These operations can occasionally return an empty set of results even
         * when there are more results available. The <code>NextToken</code> response
         * parameter value is <code>null</code> <i>only</i> when there are no more results
         * to display.</p> </note> <p>This operation can be called only from the
         * organization's master account.</p> <note> <p>In the current release, a child can
         * have only a single parent. </p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListParents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListParentsAsync(const Model::ListParentsRequest& request, const ListParentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p> <note> <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p> <note> <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * <p>Retrieves the list of all policies in an organization of a specified
         * type.</p> <note> <p>Always check the <code>NextToken</code> response parameter
         * for a <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPolicies">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the policies that are directly attached to the specified target root,
         * organizational unit (OU), or account. You must specify the policy type that you
         * want included in the returned list.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPoliciesForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesForTargetOutcome ListPoliciesForTarget(const Model::ListPoliciesForTargetRequest& request) const;

        /**
         * <p>Lists the policies that are directly attached to the specified target root,
         * organizational unit (OU), or account. You must specify the policy type that you
         * want included in the returned list.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
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
         * want included in the returned list.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListPoliciesForTarget">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesForTargetAsync(const Model::ListPoliciesForTargetRequest& request, const ListPoliciesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the roots that are defined in the current organization.</p> <note>
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p> <note> <p>Policy types can be enabled and disabled in roots. This
         * is distinct from whether they're available in the organization. When you enable
         * all features, you make policy types available for use in that organization.
         * Individual policy types can then be enabled and disabled in a root. To see the
         * availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRootsOutcome ListRoots(const Model::ListRootsRequest& request) const;

        /**
         * <p>Lists the roots that are defined in the current organization.</p> <note>
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p> <note> <p>Policy types can be enabled and disabled in roots. This
         * is distinct from whether they're available in the organization. When you enable
         * all features, you make policy types available for use in that organization.
         * Individual policy types can then be enabled and disabled in a root. To see the
         * availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRootsOutcomeCallable ListRootsCallable(const Model::ListRootsRequest& request) const;

        /**
         * <p>Lists the roots that are defined in the current organization.</p> <note>
         * <p>Always check the <code>NextToken</code> response parameter for a
         * <code>null</code> value when calling a <code>List*</code> operation. These
         * operations can occasionally return an empty set of results even when there are
         * more results available. The <code>NextToken</code> response parameter value is
         * <code>null</code> <i>only</i> when there are no more results to display.</p>
         * </note> <p>This operation can be called only from the organization's master
         * account.</p> <note> <p>Policy types can be enabled and disabled in roots. This
         * is distinct from whether they're available in the organization. When you enable
         * all features, you make policy types available for use in that organization.
         * Individual policy types can then be enabled and disabled in a root. To see the
         * availability of a policy type in an organization, use
         * <a>DescribeOrganization</a>.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListRoots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRootsAsync(const Model::ListRootsRequest& request, const ListRootsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for the specified resource. </p> <p>Currently, you can list tags
         * on an account in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for the specified resource. </p> <p>Currently, you can list tags
         * on an account in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for the specified resource. </p> <p>Currently, you can list tags
         * on an account in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * <p>Lists all the roots, organizational units (OUs), and accounts that the
         * specified policy is attached to.</p> <note> <p>Always check the
         * <code>NextToken</code> response parameter for a <code>null</code> value when
         * calling a <code>List*</code> operation. These operations can occasionally return
         * an empty set of results even when there are more results available. The
         * <code>NextToken</code> response parameter value is <code>null</code> <i>only</i>
         * when there are no more results to display.</p> </note> <p>This operation can be
         * called only from the organization's master account.</p><p><h3>See Also:</h3>  
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
         * be called only from the organization's master account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::MoveAccountOutcome MoveAccount(const Model::MoveAccountRequest& request) const;

        /**
         * <p>Moves an account from its current source parent root or organizational unit
         * (OU) to the specified destination parent root or OU.</p> <p>This operation can
         * be called only from the organization's master account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::MoveAccountOutcomeCallable MoveAccountCallable(const Model::MoveAccountRequest& request) const;

        /**
         * <p>Moves an account from its current source parent root or organizational unit
         * (OU) to the specified destination parent root or OU.</p> <p>This operation can
         * be called only from the organization's master account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/MoveAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void MoveAccountAsync(const Model::MoveAccountRequest& request, const MoveAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified account from the organization.</p> <p>The removed
         * account becomes a standalone account that isn't a member of any organization.
         * It's no longer subject to any policies and is responsible for its own bill
         * payments. The organization's master account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * master account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p> <important> <p>You can remove an account
         * from your organization only if the account is configured with the information
         * required to operate as a standalone account. When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required of standalone accounts is <i>not</i> automatically
         * collected. For an account that you want to make standalone, you must accept the
         * end user license agreement (EULA), choose a support plan, provide and verify the
         * required contact information, and provide a current payment method. AWS uses the
         * payment method to charge for any billable (not free tier) AWS activity that
         * occurs while the account isn't attached to an organization. To remove an account
         * that doesn't yet have this information, you must sign in as the member account
         * and follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RemoveAccountFromOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveAccountFromOrganizationOutcome RemoveAccountFromOrganization(const Model::RemoveAccountFromOrganizationRequest& request) const;

        /**
         * <p>Removes the specified account from the organization.</p> <p>The removed
         * account becomes a standalone account that isn't a member of any organization.
         * It's no longer subject to any policies and is responsible for its own bill
         * payments. The organization's master account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * master account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p> <important> <p>You can remove an account
         * from your organization only if the account is configured with the information
         * required to operate as a standalone account. When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required of standalone accounts is <i>not</i> automatically
         * collected. For an account that you want to make standalone, you must accept the
         * end user license agreement (EULA), choose a support plan, provide and verify the
         * required contact information, and provide a current payment method. AWS uses the
         * payment method to charge for any billable (not free tier) AWS activity that
         * occurs while the account isn't attached to an organization. To remove an account
         * that doesn't yet have this information, you must sign in as the member account
         * and follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p>
         * </important><p><h3>See Also:</h3>   <a
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
         * payments. The organization's master account is no longer charged for any
         * expenses accrued by the member account after it's removed from the
         * organization.</p> <p>This operation can be called only from the organization's
         * master account. Member accounts can remove themselves with
         * <a>LeaveOrganization</a> instead.</p> <important> <p>You can remove an account
         * from your organization only if the account is configured with the information
         * required to operate as a standalone account. When you create an account in an
         * organization using the AWS Organizations console, API, or CLI commands, the
         * information required of standalone accounts is <i>not</i> automatically
         * collected. For an account that you want to make standalone, you must accept the
         * end user license agreement (EULA), choose a support plan, provide and verify the
         * required contact information, and provide a current payment method. AWS uses the
         * payment method to charge for any billable (not free tier) AWS activity that
         * occurs while the account isn't attached to an organization. To remove an account
         * that doesn't yet have this information, you must sign in as the member account
         * and follow the steps at <a
         * href="http://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_remove.html#leave-without-all-info">
         * To leave an organization when all required account information has not yet been
         * provided</a> in the <i>AWS Organizations User Guide.</i> </p>
         * </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/RemoveAccountFromOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveAccountFromOrganizationAsync(const Model::RemoveAccountFromOrganizationRequest& request, const RemoveAccountFromOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * tag and untag accounts in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * tag and untag accounts in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified resource.</p> <p>Currently, you can
         * tag and untag accounts in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from the specified resource. </p> <p>Currently, you can tag and
         * untag accounts in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from the specified resource. </p> <p>Currently, you can tag and
         * untag accounts in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from the specified resource. </p> <p>Currently, you can tag and
         * untag accounts in AWS Organizations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached. </p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdateOrganizationalUnit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOrganizationalUnitOutcome UpdateOrganizationalUnit(const Model::UpdateOrganizationalUnitRequest& request) const;

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached. </p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdateOrganizationalUnit">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateOrganizationalUnitOutcomeCallable UpdateOrganizationalUnitCallable(const Model::UpdateOrganizationalUnitRequest& request) const;

        /**
         * <p>Renames the specified organizational unit (OU). The ID and ARN don't change.
         * The child OUs and accounts remain in place, and any attached policies of the OU
         * remain attached. </p> <p>This operation can be called only from the
         * organization's master account.</p><p><h3>See Also:</h3>   <a
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
         * master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/UpdatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

        /**
         * <p>Updates an existing policy with a new name, description, or content. If you
         * don't supply any parameter, that value remains unchanged. You can't change a
         * policy's type.</p> <p>This operation can be called only from the organization's
         * master account.</p><p><h3>See Also:</h3>   <a
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
         * master account.</p><p><h3>See Also:</h3>   <a
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
        void DescribeAccountAsyncHelper(const Model::DescribeAccountRequest& request, const DescribeAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCreateAccountStatusAsyncHelper(const Model::DescribeCreateAccountStatusRequest& request, const DescribeCreateAccountStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
