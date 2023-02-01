/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ds/DirectoryServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ds/DirectoryServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DirectoryServiceClient header */
#include <aws/ds/model/AcceptSharedDirectoryResult.h>
#include <aws/ds/model/AddIpRoutesResult.h>
#include <aws/ds/model/AddRegionResult.h>
#include <aws/ds/model/AddTagsToResourceResult.h>
#include <aws/ds/model/CancelSchemaExtensionResult.h>
#include <aws/ds/model/ConnectDirectoryResult.h>
#include <aws/ds/model/CreateAliasResult.h>
#include <aws/ds/model/CreateComputerResult.h>
#include <aws/ds/model/CreateConditionalForwarderResult.h>
#include <aws/ds/model/CreateDirectoryResult.h>
#include <aws/ds/model/CreateLogSubscriptionResult.h>
#include <aws/ds/model/CreateMicrosoftADResult.h>
#include <aws/ds/model/CreateSnapshotResult.h>
#include <aws/ds/model/CreateTrustResult.h>
#include <aws/ds/model/DeleteConditionalForwarderResult.h>
#include <aws/ds/model/DeleteDirectoryResult.h>
#include <aws/ds/model/DeleteLogSubscriptionResult.h>
#include <aws/ds/model/DeleteSnapshotResult.h>
#include <aws/ds/model/DeleteTrustResult.h>
#include <aws/ds/model/DeregisterCertificateResult.h>
#include <aws/ds/model/DeregisterEventTopicResult.h>
#include <aws/ds/model/DescribeCertificateResult.h>
#include <aws/ds/model/DescribeClientAuthenticationSettingsResult.h>
#include <aws/ds/model/DescribeConditionalForwardersResult.h>
#include <aws/ds/model/DescribeDirectoriesResult.h>
#include <aws/ds/model/DescribeDomainControllersResult.h>
#include <aws/ds/model/DescribeEventTopicsResult.h>
#include <aws/ds/model/DescribeLDAPSSettingsResult.h>
#include <aws/ds/model/DescribeRegionsResult.h>
#include <aws/ds/model/DescribeSettingsResult.h>
#include <aws/ds/model/DescribeSharedDirectoriesResult.h>
#include <aws/ds/model/DescribeSnapshotsResult.h>
#include <aws/ds/model/DescribeTrustsResult.h>
#include <aws/ds/model/DescribeUpdateDirectoryResult.h>
#include <aws/ds/model/DisableClientAuthenticationResult.h>
#include <aws/ds/model/DisableLDAPSResult.h>
#include <aws/ds/model/DisableRadiusResult.h>
#include <aws/ds/model/DisableSsoResult.h>
#include <aws/ds/model/EnableClientAuthenticationResult.h>
#include <aws/ds/model/EnableLDAPSResult.h>
#include <aws/ds/model/EnableRadiusResult.h>
#include <aws/ds/model/EnableSsoResult.h>
#include <aws/ds/model/GetDirectoryLimitsResult.h>
#include <aws/ds/model/GetSnapshotLimitsResult.h>
#include <aws/ds/model/ListCertificatesResult.h>
#include <aws/ds/model/ListIpRoutesResult.h>
#include <aws/ds/model/ListLogSubscriptionsResult.h>
#include <aws/ds/model/ListSchemaExtensionsResult.h>
#include <aws/ds/model/ListTagsForResourceResult.h>
#include <aws/ds/model/RegisterCertificateResult.h>
#include <aws/ds/model/RegisterEventTopicResult.h>
#include <aws/ds/model/RejectSharedDirectoryResult.h>
#include <aws/ds/model/RemoveIpRoutesResult.h>
#include <aws/ds/model/RemoveRegionResult.h>
#include <aws/ds/model/RemoveTagsFromResourceResult.h>
#include <aws/ds/model/ResetUserPasswordResult.h>
#include <aws/ds/model/RestoreFromSnapshotResult.h>
#include <aws/ds/model/ShareDirectoryResult.h>
#include <aws/ds/model/StartSchemaExtensionResult.h>
#include <aws/ds/model/UnshareDirectoryResult.h>
#include <aws/ds/model/UpdateConditionalForwarderResult.h>
#include <aws/ds/model/UpdateDirectorySetupResult.h>
#include <aws/ds/model/UpdateNumberOfDomainControllersResult.h>
#include <aws/ds/model/UpdateRadiusResult.h>
#include <aws/ds/model/UpdateSettingsResult.h>
#include <aws/ds/model/UpdateTrustResult.h>
#include <aws/ds/model/VerifyTrustResult.h>
/* End of service model headers required in DirectoryServiceClient header */

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

  namespace DirectoryService
  {
    using DirectoryServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DirectoryServiceEndpointProviderBase = Aws::DirectoryService::Endpoint::DirectoryServiceEndpointProviderBase;
    using DirectoryServiceEndpointProvider = Aws::DirectoryService::Endpoint::DirectoryServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DirectoryServiceClient header */
      class AcceptSharedDirectoryRequest;
      class AddIpRoutesRequest;
      class AddRegionRequest;
      class AddTagsToResourceRequest;
      class CancelSchemaExtensionRequest;
      class ConnectDirectoryRequest;
      class CreateAliasRequest;
      class CreateComputerRequest;
      class CreateConditionalForwarderRequest;
      class CreateDirectoryRequest;
      class CreateLogSubscriptionRequest;
      class CreateMicrosoftADRequest;
      class CreateSnapshotRequest;
      class CreateTrustRequest;
      class DeleteConditionalForwarderRequest;
      class DeleteDirectoryRequest;
      class DeleteLogSubscriptionRequest;
      class DeleteSnapshotRequest;
      class DeleteTrustRequest;
      class DeregisterCertificateRequest;
      class DeregisterEventTopicRequest;
      class DescribeCertificateRequest;
      class DescribeClientAuthenticationSettingsRequest;
      class DescribeConditionalForwardersRequest;
      class DescribeDirectoriesRequest;
      class DescribeDomainControllersRequest;
      class DescribeEventTopicsRequest;
      class DescribeLDAPSSettingsRequest;
      class DescribeRegionsRequest;
      class DescribeSettingsRequest;
      class DescribeSharedDirectoriesRequest;
      class DescribeSnapshotsRequest;
      class DescribeTrustsRequest;
      class DescribeUpdateDirectoryRequest;
      class DisableClientAuthenticationRequest;
      class DisableLDAPSRequest;
      class DisableRadiusRequest;
      class DisableSsoRequest;
      class EnableClientAuthenticationRequest;
      class EnableLDAPSRequest;
      class EnableRadiusRequest;
      class EnableSsoRequest;
      class GetDirectoryLimitsRequest;
      class GetSnapshotLimitsRequest;
      class ListCertificatesRequest;
      class ListIpRoutesRequest;
      class ListLogSubscriptionsRequest;
      class ListSchemaExtensionsRequest;
      class ListTagsForResourceRequest;
      class RegisterCertificateRequest;
      class RegisterEventTopicRequest;
      class RejectSharedDirectoryRequest;
      class RemoveIpRoutesRequest;
      class RemoveRegionRequest;
      class RemoveTagsFromResourceRequest;
      class ResetUserPasswordRequest;
      class RestoreFromSnapshotRequest;
      class ShareDirectoryRequest;
      class StartSchemaExtensionRequest;
      class UnshareDirectoryRequest;
      class UpdateConditionalForwarderRequest;
      class UpdateDirectorySetupRequest;
      class UpdateNumberOfDomainControllersRequest;
      class UpdateRadiusRequest;
      class UpdateSettingsRequest;
      class UpdateTrustRequest;
      class VerifyTrustRequest;
      /* End of service model forward declarations required in DirectoryServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptSharedDirectoryResult, DirectoryServiceError> AcceptSharedDirectoryOutcome;
      typedef Aws::Utils::Outcome<AddIpRoutesResult, DirectoryServiceError> AddIpRoutesOutcome;
      typedef Aws::Utils::Outcome<AddRegionResult, DirectoryServiceError> AddRegionOutcome;
      typedef Aws::Utils::Outcome<AddTagsToResourceResult, DirectoryServiceError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<CancelSchemaExtensionResult, DirectoryServiceError> CancelSchemaExtensionOutcome;
      typedef Aws::Utils::Outcome<ConnectDirectoryResult, DirectoryServiceError> ConnectDirectoryOutcome;
      typedef Aws::Utils::Outcome<CreateAliasResult, DirectoryServiceError> CreateAliasOutcome;
      typedef Aws::Utils::Outcome<CreateComputerResult, DirectoryServiceError> CreateComputerOutcome;
      typedef Aws::Utils::Outcome<CreateConditionalForwarderResult, DirectoryServiceError> CreateConditionalForwarderOutcome;
      typedef Aws::Utils::Outcome<CreateDirectoryResult, DirectoryServiceError> CreateDirectoryOutcome;
      typedef Aws::Utils::Outcome<CreateLogSubscriptionResult, DirectoryServiceError> CreateLogSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateMicrosoftADResult, DirectoryServiceError> CreateMicrosoftADOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, DirectoryServiceError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateTrustResult, DirectoryServiceError> CreateTrustOutcome;
      typedef Aws::Utils::Outcome<DeleteConditionalForwarderResult, DirectoryServiceError> DeleteConditionalForwarderOutcome;
      typedef Aws::Utils::Outcome<DeleteDirectoryResult, DirectoryServiceError> DeleteDirectoryOutcome;
      typedef Aws::Utils::Outcome<DeleteLogSubscriptionResult, DirectoryServiceError> DeleteLogSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteSnapshotResult, DirectoryServiceError> DeleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteTrustResult, DirectoryServiceError> DeleteTrustOutcome;
      typedef Aws::Utils::Outcome<DeregisterCertificateResult, DirectoryServiceError> DeregisterCertificateOutcome;
      typedef Aws::Utils::Outcome<DeregisterEventTopicResult, DirectoryServiceError> DeregisterEventTopicOutcome;
      typedef Aws::Utils::Outcome<DescribeCertificateResult, DirectoryServiceError> DescribeCertificateOutcome;
      typedef Aws::Utils::Outcome<DescribeClientAuthenticationSettingsResult, DirectoryServiceError> DescribeClientAuthenticationSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeConditionalForwardersResult, DirectoryServiceError> DescribeConditionalForwardersOutcome;
      typedef Aws::Utils::Outcome<DescribeDirectoriesResult, DirectoryServiceError> DescribeDirectoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainControllersResult, DirectoryServiceError> DescribeDomainControllersOutcome;
      typedef Aws::Utils::Outcome<DescribeEventTopicsResult, DirectoryServiceError> DescribeEventTopicsOutcome;
      typedef Aws::Utils::Outcome<DescribeLDAPSSettingsResult, DirectoryServiceError> DescribeLDAPSSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeRegionsResult, DirectoryServiceError> DescribeRegionsOutcome;
      typedef Aws::Utils::Outcome<DescribeSettingsResult, DirectoryServiceError> DescribeSettingsOutcome;
      typedef Aws::Utils::Outcome<DescribeSharedDirectoriesResult, DirectoryServiceError> DescribeSharedDirectoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotsResult, DirectoryServiceError> DescribeSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeTrustsResult, DirectoryServiceError> DescribeTrustsOutcome;
      typedef Aws::Utils::Outcome<DescribeUpdateDirectoryResult, DirectoryServiceError> DescribeUpdateDirectoryOutcome;
      typedef Aws::Utils::Outcome<DisableClientAuthenticationResult, DirectoryServiceError> DisableClientAuthenticationOutcome;
      typedef Aws::Utils::Outcome<DisableLDAPSResult, DirectoryServiceError> DisableLDAPSOutcome;
      typedef Aws::Utils::Outcome<DisableRadiusResult, DirectoryServiceError> DisableRadiusOutcome;
      typedef Aws::Utils::Outcome<DisableSsoResult, DirectoryServiceError> DisableSsoOutcome;
      typedef Aws::Utils::Outcome<EnableClientAuthenticationResult, DirectoryServiceError> EnableClientAuthenticationOutcome;
      typedef Aws::Utils::Outcome<EnableLDAPSResult, DirectoryServiceError> EnableLDAPSOutcome;
      typedef Aws::Utils::Outcome<EnableRadiusResult, DirectoryServiceError> EnableRadiusOutcome;
      typedef Aws::Utils::Outcome<EnableSsoResult, DirectoryServiceError> EnableSsoOutcome;
      typedef Aws::Utils::Outcome<GetDirectoryLimitsResult, DirectoryServiceError> GetDirectoryLimitsOutcome;
      typedef Aws::Utils::Outcome<GetSnapshotLimitsResult, DirectoryServiceError> GetSnapshotLimitsOutcome;
      typedef Aws::Utils::Outcome<ListCertificatesResult, DirectoryServiceError> ListCertificatesOutcome;
      typedef Aws::Utils::Outcome<ListIpRoutesResult, DirectoryServiceError> ListIpRoutesOutcome;
      typedef Aws::Utils::Outcome<ListLogSubscriptionsResult, DirectoryServiceError> ListLogSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListSchemaExtensionsResult, DirectoryServiceError> ListSchemaExtensionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DirectoryServiceError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterCertificateResult, DirectoryServiceError> RegisterCertificateOutcome;
      typedef Aws::Utils::Outcome<RegisterEventTopicResult, DirectoryServiceError> RegisterEventTopicOutcome;
      typedef Aws::Utils::Outcome<RejectSharedDirectoryResult, DirectoryServiceError> RejectSharedDirectoryOutcome;
      typedef Aws::Utils::Outcome<RemoveIpRoutesResult, DirectoryServiceError> RemoveIpRoutesOutcome;
      typedef Aws::Utils::Outcome<RemoveRegionResult, DirectoryServiceError> RemoveRegionOutcome;
      typedef Aws::Utils::Outcome<RemoveTagsFromResourceResult, DirectoryServiceError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetUserPasswordResult, DirectoryServiceError> ResetUserPasswordOutcome;
      typedef Aws::Utils::Outcome<RestoreFromSnapshotResult, DirectoryServiceError> RestoreFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<ShareDirectoryResult, DirectoryServiceError> ShareDirectoryOutcome;
      typedef Aws::Utils::Outcome<StartSchemaExtensionResult, DirectoryServiceError> StartSchemaExtensionOutcome;
      typedef Aws::Utils::Outcome<UnshareDirectoryResult, DirectoryServiceError> UnshareDirectoryOutcome;
      typedef Aws::Utils::Outcome<UpdateConditionalForwarderResult, DirectoryServiceError> UpdateConditionalForwarderOutcome;
      typedef Aws::Utils::Outcome<UpdateDirectorySetupResult, DirectoryServiceError> UpdateDirectorySetupOutcome;
      typedef Aws::Utils::Outcome<UpdateNumberOfDomainControllersResult, DirectoryServiceError> UpdateNumberOfDomainControllersOutcome;
      typedef Aws::Utils::Outcome<UpdateRadiusResult, DirectoryServiceError> UpdateRadiusOutcome;
      typedef Aws::Utils::Outcome<UpdateSettingsResult, DirectoryServiceError> UpdateSettingsOutcome;
      typedef Aws::Utils::Outcome<UpdateTrustResult, DirectoryServiceError> UpdateTrustOutcome;
      typedef Aws::Utils::Outcome<VerifyTrustResult, DirectoryServiceError> VerifyTrustOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptSharedDirectoryOutcome> AcceptSharedDirectoryOutcomeCallable;
      typedef std::future<AddIpRoutesOutcome> AddIpRoutesOutcomeCallable;
      typedef std::future<AddRegionOutcome> AddRegionOutcomeCallable;
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<CancelSchemaExtensionOutcome> CancelSchemaExtensionOutcomeCallable;
      typedef std::future<ConnectDirectoryOutcome> ConnectDirectoryOutcomeCallable;
      typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
      typedef std::future<CreateComputerOutcome> CreateComputerOutcomeCallable;
      typedef std::future<CreateConditionalForwarderOutcome> CreateConditionalForwarderOutcomeCallable;
      typedef std::future<CreateDirectoryOutcome> CreateDirectoryOutcomeCallable;
      typedef std::future<CreateLogSubscriptionOutcome> CreateLogSubscriptionOutcomeCallable;
      typedef std::future<CreateMicrosoftADOutcome> CreateMicrosoftADOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateTrustOutcome> CreateTrustOutcomeCallable;
      typedef std::future<DeleteConditionalForwarderOutcome> DeleteConditionalForwarderOutcomeCallable;
      typedef std::future<DeleteDirectoryOutcome> DeleteDirectoryOutcomeCallable;
      typedef std::future<DeleteLogSubscriptionOutcome> DeleteLogSubscriptionOutcomeCallable;
      typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
      typedef std::future<DeleteTrustOutcome> DeleteTrustOutcomeCallable;
      typedef std::future<DeregisterCertificateOutcome> DeregisterCertificateOutcomeCallable;
      typedef std::future<DeregisterEventTopicOutcome> DeregisterEventTopicOutcomeCallable;
      typedef std::future<DescribeCertificateOutcome> DescribeCertificateOutcomeCallable;
      typedef std::future<DescribeClientAuthenticationSettingsOutcome> DescribeClientAuthenticationSettingsOutcomeCallable;
      typedef std::future<DescribeConditionalForwardersOutcome> DescribeConditionalForwardersOutcomeCallable;
      typedef std::future<DescribeDirectoriesOutcome> DescribeDirectoriesOutcomeCallable;
      typedef std::future<DescribeDomainControllersOutcome> DescribeDomainControllersOutcomeCallable;
      typedef std::future<DescribeEventTopicsOutcome> DescribeEventTopicsOutcomeCallable;
      typedef std::future<DescribeLDAPSSettingsOutcome> DescribeLDAPSSettingsOutcomeCallable;
      typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
      typedef std::future<DescribeSettingsOutcome> DescribeSettingsOutcomeCallable;
      typedef std::future<DescribeSharedDirectoriesOutcome> DescribeSharedDirectoriesOutcomeCallable;
      typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
      typedef std::future<DescribeTrustsOutcome> DescribeTrustsOutcomeCallable;
      typedef std::future<DescribeUpdateDirectoryOutcome> DescribeUpdateDirectoryOutcomeCallable;
      typedef std::future<DisableClientAuthenticationOutcome> DisableClientAuthenticationOutcomeCallable;
      typedef std::future<DisableLDAPSOutcome> DisableLDAPSOutcomeCallable;
      typedef std::future<DisableRadiusOutcome> DisableRadiusOutcomeCallable;
      typedef std::future<DisableSsoOutcome> DisableSsoOutcomeCallable;
      typedef std::future<EnableClientAuthenticationOutcome> EnableClientAuthenticationOutcomeCallable;
      typedef std::future<EnableLDAPSOutcome> EnableLDAPSOutcomeCallable;
      typedef std::future<EnableRadiusOutcome> EnableRadiusOutcomeCallable;
      typedef std::future<EnableSsoOutcome> EnableSsoOutcomeCallable;
      typedef std::future<GetDirectoryLimitsOutcome> GetDirectoryLimitsOutcomeCallable;
      typedef std::future<GetSnapshotLimitsOutcome> GetSnapshotLimitsOutcomeCallable;
      typedef std::future<ListCertificatesOutcome> ListCertificatesOutcomeCallable;
      typedef std::future<ListIpRoutesOutcome> ListIpRoutesOutcomeCallable;
      typedef std::future<ListLogSubscriptionsOutcome> ListLogSubscriptionsOutcomeCallable;
      typedef std::future<ListSchemaExtensionsOutcome> ListSchemaExtensionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterCertificateOutcome> RegisterCertificateOutcomeCallable;
      typedef std::future<RegisterEventTopicOutcome> RegisterEventTopicOutcomeCallable;
      typedef std::future<RejectSharedDirectoryOutcome> RejectSharedDirectoryOutcomeCallable;
      typedef std::future<RemoveIpRoutesOutcome> RemoveIpRoutesOutcomeCallable;
      typedef std::future<RemoveRegionOutcome> RemoveRegionOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetUserPasswordOutcome> ResetUserPasswordOutcomeCallable;
      typedef std::future<RestoreFromSnapshotOutcome> RestoreFromSnapshotOutcomeCallable;
      typedef std::future<ShareDirectoryOutcome> ShareDirectoryOutcomeCallable;
      typedef std::future<StartSchemaExtensionOutcome> StartSchemaExtensionOutcomeCallable;
      typedef std::future<UnshareDirectoryOutcome> UnshareDirectoryOutcomeCallable;
      typedef std::future<UpdateConditionalForwarderOutcome> UpdateConditionalForwarderOutcomeCallable;
      typedef std::future<UpdateDirectorySetupOutcome> UpdateDirectorySetupOutcomeCallable;
      typedef std::future<UpdateNumberOfDomainControllersOutcome> UpdateNumberOfDomainControllersOutcomeCallable;
      typedef std::future<UpdateRadiusOutcome> UpdateRadiusOutcomeCallable;
      typedef std::future<UpdateSettingsOutcome> UpdateSettingsOutcomeCallable;
      typedef std::future<UpdateTrustOutcome> UpdateTrustOutcomeCallable;
      typedef std::future<VerifyTrustOutcome> VerifyTrustOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DirectoryServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DirectoryServiceClient*, const Model::AcceptSharedDirectoryRequest&, const Model::AcceptSharedDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptSharedDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::AddIpRoutesRequest&, const Model::AddIpRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddIpRoutesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::AddRegionRequest&, const Model::AddRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRegionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CancelSchemaExtensionRequest&, const Model::CancelSchemaExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSchemaExtensionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ConnectDirectoryRequest&, const Model::ConnectDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConnectDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateComputerRequest&, const Model::CreateComputerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputerResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateConditionalForwarderRequest&, const Model::CreateConditionalForwarderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConditionalForwarderResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateDirectoryRequest&, const Model::CreateDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateLogSubscriptionRequest&, const Model::CreateLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateMicrosoftADRequest&, const Model::CreateMicrosoftADOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMicrosoftADResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateTrustRequest&, const Model::CreateTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteConditionalForwarderRequest&, const Model::DeleteConditionalForwarderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConditionalForwarderResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteDirectoryRequest&, const Model::DeleteDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteLogSubscriptionRequest&, const Model::DeleteLogSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLogSubscriptionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteTrustRequest&, const Model::DeleteTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeregisterCertificateRequest&, const Model::DeregisterCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterCertificateResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeregisterEventTopicRequest&, const Model::DeregisterEventTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterEventTopicResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeCertificateRequest&, const Model::DescribeCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCertificateResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeClientAuthenticationSettingsRequest&, const Model::DescribeClientAuthenticationSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClientAuthenticationSettingsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeConditionalForwardersRequest&, const Model::DescribeConditionalForwardersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConditionalForwardersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeDirectoriesRequest&, const Model::DescribeDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectoriesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeDomainControllersRequest&, const Model::DescribeDomainControllersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainControllersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeEventTopicsRequest&, const Model::DescribeEventTopicsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventTopicsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeLDAPSSettingsRequest&, const Model::DescribeLDAPSSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLDAPSSettingsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeRegionsRequest&, const Model::DescribeRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegionsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeSettingsRequest&, const Model::DescribeSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSettingsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeSharedDirectoriesRequest&, const Model::DescribeSharedDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSharedDirectoriesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeTrustsRequest&, const Model::DescribeTrustsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeUpdateDirectoryRequest&, const Model::DescribeUpdateDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUpdateDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableClientAuthenticationRequest&, const Model::DisableClientAuthenticationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableClientAuthenticationResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableLDAPSRequest&, const Model::DisableLDAPSOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableLDAPSResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableRadiusRequest&, const Model::DisableRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableSsoRequest&, const Model::DisableSsoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSsoResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableClientAuthenticationRequest&, const Model::EnableClientAuthenticationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableClientAuthenticationResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableLDAPSRequest&, const Model::EnableLDAPSOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableLDAPSResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableRadiusRequest&, const Model::EnableRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableSsoRequest&, const Model::EnableSsoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSsoResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::GetDirectoryLimitsRequest&, const Model::GetDirectoryLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDirectoryLimitsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::GetSnapshotLimitsRequest&, const Model::GetSnapshotLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotLimitsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListCertificatesRequest&, const Model::ListCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCertificatesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListIpRoutesRequest&, const Model::ListIpRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIpRoutesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListLogSubscriptionsRequest&, const Model::ListLogSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLogSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListSchemaExtensionsRequest&, const Model::ListSchemaExtensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaExtensionsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RegisterCertificateRequest&, const Model::RegisterCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCertificateResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RegisterEventTopicRequest&, const Model::RegisterEventTopicOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterEventTopicResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RejectSharedDirectoryRequest&, const Model::RejectSharedDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectSharedDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RemoveIpRoutesRequest&, const Model::RemoveIpRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveIpRoutesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RemoveRegionRequest&, const Model::RemoveRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRegionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ResetUserPasswordRequest&, const Model::ResetUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetUserPasswordResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RestoreFromSnapshotRequest&, const Model::RestoreFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::ShareDirectoryRequest&, const Model::ShareDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ShareDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::StartSchemaExtensionRequest&, const Model::StartSchemaExtensionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSchemaExtensionResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UnshareDirectoryRequest&, const Model::UnshareDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnshareDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateConditionalForwarderRequest&, const Model::UpdateConditionalForwarderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConditionalForwarderResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateDirectorySetupRequest&, const Model::UpdateDirectorySetupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDirectorySetupResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateNumberOfDomainControllersRequest&, const Model::UpdateNumberOfDomainControllersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNumberOfDomainControllersResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateRadiusRequest&, const Model::UpdateRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateSettingsRequest&, const Model::UpdateSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSettingsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateTrustRequest&, const Model::UpdateTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::VerifyTrustRequest&, const Model::VerifyTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyTrustResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DirectoryService
} // namespace Aws
