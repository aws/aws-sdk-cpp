/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/awstransfer/TransferErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/awstransfer/TransferEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TransferClient header */
#include <aws/awstransfer/model/CreateAccessResult.h>
#include <aws/awstransfer/model/CreateAgreementResult.h>
#include <aws/awstransfer/model/CreateConnectorResult.h>
#include <aws/awstransfer/model/CreateProfileResult.h>
#include <aws/awstransfer/model/CreateServerResult.h>
#include <aws/awstransfer/model/CreateUserResult.h>
#include <aws/awstransfer/model/CreateWorkflowResult.h>
#include <aws/awstransfer/model/DescribeAccessResult.h>
#include <aws/awstransfer/model/DescribeAgreementResult.h>
#include <aws/awstransfer/model/DescribeCertificateResult.h>
#include <aws/awstransfer/model/DescribeConnectorResult.h>
#include <aws/awstransfer/model/DescribeExecutionResult.h>
#include <aws/awstransfer/model/DescribeHostKeyResult.h>
#include <aws/awstransfer/model/DescribeProfileResult.h>
#include <aws/awstransfer/model/DescribeSecurityPolicyResult.h>
#include <aws/awstransfer/model/DescribeServerResult.h>
#include <aws/awstransfer/model/DescribeUserResult.h>
#include <aws/awstransfer/model/DescribeWorkflowResult.h>
#include <aws/awstransfer/model/ImportCertificateResult.h>
#include <aws/awstransfer/model/ImportHostKeyResult.h>
#include <aws/awstransfer/model/ImportSshPublicKeyResult.h>
#include <aws/awstransfer/model/ListAccessesResult.h>
#include <aws/awstransfer/model/ListAgreementsResult.h>
#include <aws/awstransfer/model/ListCertificatesResult.h>
#include <aws/awstransfer/model/ListConnectorsResult.h>
#include <aws/awstransfer/model/ListExecutionsResult.h>
#include <aws/awstransfer/model/ListHostKeysResult.h>
#include <aws/awstransfer/model/ListProfilesResult.h>
#include <aws/awstransfer/model/ListSecurityPoliciesResult.h>
#include <aws/awstransfer/model/ListServersResult.h>
#include <aws/awstransfer/model/ListTagsForResourceResult.h>
#include <aws/awstransfer/model/ListUsersResult.h>
#include <aws/awstransfer/model/ListWorkflowsResult.h>
#include <aws/awstransfer/model/SendWorkflowStepStateResult.h>
#include <aws/awstransfer/model/StartFileTransferResult.h>
#include <aws/awstransfer/model/TestIdentityProviderResult.h>
#include <aws/awstransfer/model/UpdateAccessResult.h>
#include <aws/awstransfer/model/UpdateAgreementResult.h>
#include <aws/awstransfer/model/UpdateCertificateResult.h>
#include <aws/awstransfer/model/UpdateConnectorResult.h>
#include <aws/awstransfer/model/UpdateHostKeyResult.h>
#include <aws/awstransfer/model/UpdateProfileResult.h>
#include <aws/awstransfer/model/UpdateServerResult.h>
#include <aws/awstransfer/model/UpdateUserResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TransferClient header */

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

  namespace Transfer
  {
    using TransferClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TransferEndpointProviderBase = Aws::Transfer::Endpoint::TransferEndpointProviderBase;
    using TransferEndpointProvider = Aws::Transfer::Endpoint::TransferEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TransferClient header */
      class CreateAccessRequest;
      class CreateAgreementRequest;
      class CreateConnectorRequest;
      class CreateProfileRequest;
      class CreateServerRequest;
      class CreateUserRequest;
      class CreateWorkflowRequest;
      class DeleteAccessRequest;
      class DeleteAgreementRequest;
      class DeleteCertificateRequest;
      class DeleteConnectorRequest;
      class DeleteHostKeyRequest;
      class DeleteProfileRequest;
      class DeleteServerRequest;
      class DeleteSshPublicKeyRequest;
      class DeleteUserRequest;
      class DeleteWorkflowRequest;
      class DescribeAccessRequest;
      class DescribeAgreementRequest;
      class DescribeCertificateRequest;
      class DescribeConnectorRequest;
      class DescribeExecutionRequest;
      class DescribeHostKeyRequest;
      class DescribeProfileRequest;
      class DescribeSecurityPolicyRequest;
      class DescribeServerRequest;
      class DescribeUserRequest;
      class DescribeWorkflowRequest;
      class ImportCertificateRequest;
      class ImportHostKeyRequest;
      class ImportSshPublicKeyRequest;
      class ListAccessesRequest;
      class ListAgreementsRequest;
      class ListCertificatesRequest;
      class ListConnectorsRequest;
      class ListExecutionsRequest;
      class ListHostKeysRequest;
      class ListProfilesRequest;
      class ListSecurityPoliciesRequest;
      class ListServersRequest;
      class ListTagsForResourceRequest;
      class ListUsersRequest;
      class ListWorkflowsRequest;
      class SendWorkflowStepStateRequest;
      class StartFileTransferRequest;
      class StartServerRequest;
      class StopServerRequest;
      class TagResourceRequest;
      class TestIdentityProviderRequest;
      class UntagResourceRequest;
      class UpdateAccessRequest;
      class UpdateAgreementRequest;
      class UpdateCertificateRequest;
      class UpdateConnectorRequest;
      class UpdateHostKeyRequest;
      class UpdateProfileRequest;
      class UpdateServerRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in TransferClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateAccessResult, TransferError> CreateAccessOutcome;
      typedef Aws::Utils::Outcome<CreateAgreementResult, TransferError> CreateAgreementOutcome;
      typedef Aws::Utils::Outcome<CreateConnectorResult, TransferError> CreateConnectorOutcome;
      typedef Aws::Utils::Outcome<CreateProfileResult, TransferError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<CreateServerResult, TransferError> CreateServerOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, TransferError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<CreateWorkflowResult, TransferError> CreateWorkflowOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteAccessOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteAgreementOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteCertificateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteConnectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteHostKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteServerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteSshPublicKeyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> DeleteWorkflowOutcome;
      typedef Aws::Utils::Outcome<DescribeAccessResult, TransferError> DescribeAccessOutcome;
      typedef Aws::Utils::Outcome<DescribeAgreementResult, TransferError> DescribeAgreementOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificateResult, TransferError> DescribeCertificateOutcome;
      typedef Aws::Utils::Outcome<DescribeConnectorResult, TransferError> DescribeConnectorOutcome;
      typedef Aws::Utils::Outcome<DescribeExecutionResult, TransferError> DescribeExecutionOutcome;
      typedef Aws::Utils::Outcome<DescribeHostKeyResult, TransferError> DescribeHostKeyOutcome;
      typedef Aws::Utils::Outcome<DescribeProfileResult, TransferError> DescribeProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeSecurityPolicyResult, TransferError> DescribeSecurityPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeServerResult, TransferError> DescribeServerOutcome;
      typedef Aws::Utils::Outcome<DescribeUserResult, TransferError> DescribeUserOutcome;
      typedef Aws::Utils::Outcome<DescribeWorkflowResult, TransferError> DescribeWorkflowOutcome;
      typedef Aws::Utils::Outcome<ImportCertificateResult, TransferError> ImportCertificateOutcome;
      typedef Aws::Utils::Outcome<ImportHostKeyResult, TransferError> ImportHostKeyOutcome;
      typedef Aws::Utils::Outcome<ImportSshPublicKeyResult, TransferError> ImportSshPublicKeyOutcome;
      typedef Aws::Utils::Outcome<ListAccessesResult, TransferError> ListAccessesOutcome;
      typedef Aws::Utils::Outcome<ListAgreementsResult, TransferError> ListAgreementsOutcome;
      typedef Aws::Utils::Outcome<ListCertificatesResult, TransferError> ListCertificatesOutcome;
      typedef Aws::Utils::Outcome<ListConnectorsResult, TransferError> ListConnectorsOutcome;
      typedef Aws::Utils::Outcome<ListExecutionsResult, TransferError> ListExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListHostKeysResult, TransferError> ListHostKeysOutcome;
      typedef Aws::Utils::Outcome<ListProfilesResult, TransferError> ListProfilesOutcome;
      typedef Aws::Utils::Outcome<ListSecurityPoliciesResult, TransferError> ListSecurityPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListServersResult, TransferError> ListServersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TransferError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUsersResult, TransferError> ListUsersOutcome;
      typedef Aws::Utils::Outcome<ListWorkflowsResult, TransferError> ListWorkflowsOutcome;
      typedef Aws::Utils::Outcome<SendWorkflowStepStateResult, TransferError> SendWorkflowStepStateOutcome;
      typedef Aws::Utils::Outcome<StartFileTransferResult, TransferError> StartFileTransferOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> StartServerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> StopServerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestIdentityProviderResult, TransferError> TestIdentityProviderOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TransferError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccessResult, TransferError> UpdateAccessOutcome;
      typedef Aws::Utils::Outcome<UpdateAgreementResult, TransferError> UpdateAgreementOutcome;
      typedef Aws::Utils::Outcome<UpdateCertificateResult, TransferError> UpdateCertificateOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectorResult, TransferError> UpdateConnectorOutcome;
      typedef Aws::Utils::Outcome<UpdateHostKeyResult, TransferError> UpdateHostKeyOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResult, TransferError> UpdateProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateServerResult, TransferError> UpdateServerOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, TransferError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateAccessOutcome> CreateAccessOutcomeCallable;
      typedef std::future<CreateAgreementOutcome> CreateAgreementOutcomeCallable;
      typedef std::future<CreateConnectorOutcome> CreateConnectorOutcomeCallable;
      typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
      typedef std::future<CreateServerOutcome> CreateServerOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
      typedef std::future<DeleteAccessOutcome> DeleteAccessOutcomeCallable;
      typedef std::future<DeleteAgreementOutcome> DeleteAgreementOutcomeCallable;
      typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
      typedef std::future<DeleteConnectorOutcome> DeleteConnectorOutcomeCallable;
      typedef std::future<DeleteHostKeyOutcome> DeleteHostKeyOutcomeCallable;
      typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
      typedef std::future<DeleteServerOutcome> DeleteServerOutcomeCallable;
      typedef std::future<DeleteSshPublicKeyOutcome> DeleteSshPublicKeyOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
      typedef std::future<DescribeAccessOutcome> DescribeAccessOutcomeCallable;
      typedef std::future<DescribeAgreementOutcome> DescribeAgreementOutcomeCallable;
      typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
      typedef std::future<DescribeConnectorOutcome> DescribeConnectorOutcomeCallable;
      typedef std::future<DescribeExecutionOutcome> DescribeExecutionOutcomeCallable;
      typedef std::future<DescribeHostKeyOutcome> DescribeHostKeyOutcomeCallable;
      typedef std::future<DescribeProfileOutcome> DescribeProfileOutcomeCallable;
      typedef std::future<DescribeSecurityPolicyOutcome> DescribeSecurityPolicyOutcomeCallable;
      typedef std::future<DescribeServerOutcome> DescribeServerOutcomeCallable;
      typedef std::future<DescribeUserOutcome> DescribeUserOutcomeCallable;
      typedef std::future<DescribeWorkflowOutcome> DescribeWorkflowOutcomeCallable;
      typedef std::future<ImportCertificateOutcome> ImportCertificateOutcomeCallable;
      typedef std::future<ImportHostKeyOutcome> ImportHostKeyOutcomeCallable;
      typedef std::future<ImportSshPublicKeyOutcome> ImportSshPublicKeyOutcomeCallable;
      typedef std::future<ListAccessesOutcome> ListAccessesOutcomeCallable;
      typedef std::future<ListAgreementsOutcome> ListAgreementsOutcomeCallable;
      typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
      typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
      typedef std::future<ListExecutionsOutcome> ListExecutionsOutcomeCallable;
      typedef std::future<ListHostKeysOutcome> ListHostKeysOutcomeCallable;
      typedef std::future<ListProfilesOutcome> ListProfilesOutcomeCallable;
      typedef std::future<ListSecurityPoliciesOutcome> ListSecurityPoliciesOutcomeCallable;
      typedef std::future<ListServersOutcome> ListServersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUsersOutcome> ListUsersOutcomeCallable;
      typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
      typedef std::future<SendWorkflowStepStateOutcome> SendWorkflowStepStateOutcomeCallable;
      typedef std::future<StartFileTransferOutcome> StartFileTransferOutcomeCallable;
      typedef std::future<StartServerOutcome> StartServerOutcomeCallable;
      typedef std::future<StopServerOutcome> StopServerOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestIdentityProviderOutcome> TestIdentityProviderOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccessOutcome> UpdateAccessOutcomeCallable;
      typedef std::future<UpdateAgreementOutcome> UpdateAgreementOutcomeCallable;
      typedef std::future<UpdateCertificateOutcome> UpdateCertificateOutcomeCallable;
      typedef std::future<UpdateConnectorOutcome> UpdateConnectorOutcomeCallable;
      typedef std::future<UpdateHostKeyOutcome> UpdateHostKeyOutcomeCallable;
      typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
      typedef std::future<UpdateServerOutcome> UpdateServerOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TransferClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TransferClient*, const Model::CreateAccessRequest&, const Model::CreateAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::CreateAgreementRequest&, const Model::CreateAgreementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgreementResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::CreateConnectorRequest&, const Model::CreateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::CreateServerRequest&, const Model::CreateServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServerResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkflowResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteAccessRequest&, const Model::DeleteAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteAgreementRequest&, const Model::DeleteAgreementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgreementResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteConnectorRequest&, const Model::DeleteConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteHostKeyRequest&, const Model::DeleteHostKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHostKeyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteServerRequest&, const Model::DeleteServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServerResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteSshPublicKeyRequest&, const Model::DeleteSshPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSshPublicKeyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkflowResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeAccessRequest&, const Model::DescribeAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccessResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeAgreementRequest&, const Model::DescribeAgreementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgreementResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeConnectorRequest&, const Model::DescribeConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConnectorResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeExecutionRequest&, const Model::DescribeExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExecutionResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeHostKeyRequest&, const Model::DescribeHostKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHostKeyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeProfileRequest&, const Model::DescribeProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProfileResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeSecurityPolicyRequest&, const Model::DescribeSecurityPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecurityPolicyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeServerRequest&, const Model::DescribeServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServerResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeUserRequest&, const Model::DescribeUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::DescribeWorkflowRequest&, const Model::DescribeWorkflowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeWorkflowResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ImportCertificateRequest&, const Model::ImportCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCertificateResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ImportHostKeyRequest&, const Model::ImportHostKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportHostKeyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ImportSshPublicKeyRequest&, const Model::ImportSshPublicKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportSshPublicKeyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListAccessesRequest&, const Model::ListAccessesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessesResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListAgreementsRequest&, const Model::ListAgreementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgreementsResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListConnectorsRequest&, const Model::ListConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorsResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListExecutionsRequest&, const Model::ListExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExecutionsResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListHostKeysRequest&, const Model::ListHostKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHostKeysResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListProfilesRequest&, const Model::ListProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilesResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListSecurityPoliciesRequest&, const Model::ListSecurityPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecurityPoliciesResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListServersRequest&, const Model::ListServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServersResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListUsersRequest&, const Model::ListUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsersResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkflowsResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::SendWorkflowStepStateRequest&, const Model::SendWorkflowStepStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendWorkflowStepStateResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::StartFileTransferRequest&, const Model::StartFileTransferOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFileTransferResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::StartServerRequest&, const Model::StartServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartServerResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::StopServerRequest&, const Model::StopServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopServerResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::TestIdentityProviderRequest&, const Model::TestIdentityProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestIdentityProviderResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateAccessRequest&, const Model::UpdateAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateAgreementRequest&, const Model::UpdateAgreementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgreementResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateCertificateRequest&, const Model::UpdateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCertificateResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateConnectorRequest&, const Model::UpdateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectorResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateHostKeyRequest&, const Model::UpdateHostKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHostKeyResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateServerRequest&, const Model::UpdateServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerResponseReceivedHandler;
    typedef std::function<void(const TransferClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Transfer
} // namespace Aws
