/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/backup-gateway/BackupGatewayErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/backup-gateway/BackupGatewayEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in BackupGatewayClient header */
#include <aws/backup-gateway/model/AssociateGatewayToServerResult.h>
#include <aws/backup-gateway/model/CreateGatewayResult.h>
#include <aws/backup-gateway/model/DeleteGatewayResult.h>
#include <aws/backup-gateway/model/DeleteHypervisorResult.h>
#include <aws/backup-gateway/model/DisassociateGatewayFromServerResult.h>
#include <aws/backup-gateway/model/GetBandwidthRateLimitScheduleResult.h>
#include <aws/backup-gateway/model/GetGatewayResult.h>
#include <aws/backup-gateway/model/GetHypervisorResult.h>
#include <aws/backup-gateway/model/GetHypervisorPropertyMappingsResult.h>
#include <aws/backup-gateway/model/GetVirtualMachineResult.h>
#include <aws/backup-gateway/model/ImportHypervisorConfigurationResult.h>
#include <aws/backup-gateway/model/ListGatewaysResult.h>
#include <aws/backup-gateway/model/ListHypervisorsResult.h>
#include <aws/backup-gateway/model/ListTagsForResourceResult.h>
#include <aws/backup-gateway/model/ListVirtualMachinesResult.h>
#include <aws/backup-gateway/model/PutBandwidthRateLimitScheduleResult.h>
#include <aws/backup-gateway/model/PutHypervisorPropertyMappingsResult.h>
#include <aws/backup-gateway/model/PutMaintenanceStartTimeResult.h>
#include <aws/backup-gateway/model/StartVirtualMachinesMetadataSyncResult.h>
#include <aws/backup-gateway/model/TagResourceResult.h>
#include <aws/backup-gateway/model/TestHypervisorConfigurationResult.h>
#include <aws/backup-gateway/model/UntagResourceResult.h>
#include <aws/backup-gateway/model/UpdateGatewayInformationResult.h>
#include <aws/backup-gateway/model/UpdateGatewaySoftwareNowResult.h>
#include <aws/backup-gateway/model/UpdateHypervisorResult.h>
/* End of service model headers required in BackupGatewayClient header */

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

  namespace BackupGateway
  {
    using BackupGatewayClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using BackupGatewayEndpointProviderBase = Aws::BackupGateway::Endpoint::BackupGatewayEndpointProviderBase;
    using BackupGatewayEndpointProvider = Aws::BackupGateway::Endpoint::BackupGatewayEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in BackupGatewayClient header */
      class AssociateGatewayToServerRequest;
      class CreateGatewayRequest;
      class DeleteGatewayRequest;
      class DeleteHypervisorRequest;
      class DisassociateGatewayFromServerRequest;
      class GetBandwidthRateLimitScheduleRequest;
      class GetGatewayRequest;
      class GetHypervisorRequest;
      class GetHypervisorPropertyMappingsRequest;
      class GetVirtualMachineRequest;
      class ImportHypervisorConfigurationRequest;
      class ListGatewaysRequest;
      class ListHypervisorsRequest;
      class ListTagsForResourceRequest;
      class ListVirtualMachinesRequest;
      class PutBandwidthRateLimitScheduleRequest;
      class PutHypervisorPropertyMappingsRequest;
      class PutMaintenanceStartTimeRequest;
      class StartVirtualMachinesMetadataSyncRequest;
      class TagResourceRequest;
      class TestHypervisorConfigurationRequest;
      class UntagResourceRequest;
      class UpdateGatewayInformationRequest;
      class UpdateGatewaySoftwareNowRequest;
      class UpdateHypervisorRequest;
      /* End of service model forward declarations required in BackupGatewayClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateGatewayToServerResult, BackupGatewayError> AssociateGatewayToServerOutcome;
      typedef Aws::Utils::Outcome<CreateGatewayResult, BackupGatewayError> CreateGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteGatewayResult, BackupGatewayError> DeleteGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteHypervisorResult, BackupGatewayError> DeleteHypervisorOutcome;
      typedef Aws::Utils::Outcome<DisassociateGatewayFromServerResult, BackupGatewayError> DisassociateGatewayFromServerOutcome;
      typedef Aws::Utils::Outcome<GetBandwidthRateLimitScheduleResult, BackupGatewayError> GetBandwidthRateLimitScheduleOutcome;
      typedef Aws::Utils::Outcome<GetGatewayResult, BackupGatewayError> GetGatewayOutcome;
      typedef Aws::Utils::Outcome<GetHypervisorResult, BackupGatewayError> GetHypervisorOutcome;
      typedef Aws::Utils::Outcome<GetHypervisorPropertyMappingsResult, BackupGatewayError> GetHypervisorPropertyMappingsOutcome;
      typedef Aws::Utils::Outcome<GetVirtualMachineResult, BackupGatewayError> GetVirtualMachineOutcome;
      typedef Aws::Utils::Outcome<ImportHypervisorConfigurationResult, BackupGatewayError> ImportHypervisorConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListGatewaysResult, BackupGatewayError> ListGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListHypervisorsResult, BackupGatewayError> ListHypervisorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, BackupGatewayError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVirtualMachinesResult, BackupGatewayError> ListVirtualMachinesOutcome;
      typedef Aws::Utils::Outcome<PutBandwidthRateLimitScheduleResult, BackupGatewayError> PutBandwidthRateLimitScheduleOutcome;
      typedef Aws::Utils::Outcome<PutHypervisorPropertyMappingsResult, BackupGatewayError> PutHypervisorPropertyMappingsOutcome;
      typedef Aws::Utils::Outcome<PutMaintenanceStartTimeResult, BackupGatewayError> PutMaintenanceStartTimeOutcome;
      typedef Aws::Utils::Outcome<StartVirtualMachinesMetadataSyncResult, BackupGatewayError> StartVirtualMachinesMetadataSyncOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, BackupGatewayError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TestHypervisorConfigurationResult, BackupGatewayError> TestHypervisorConfigurationOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, BackupGatewayError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewayInformationResult, BackupGatewayError> UpdateGatewayInformationOutcome;
      typedef Aws::Utils::Outcome<UpdateGatewaySoftwareNowResult, BackupGatewayError> UpdateGatewaySoftwareNowOutcome;
      typedef Aws::Utils::Outcome<UpdateHypervisorResult, BackupGatewayError> UpdateHypervisorOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateGatewayToServerOutcome> AssociateGatewayToServerOutcomeCallable;
      typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
      typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
      typedef std::future<DeleteHypervisorOutcome> DeleteHypervisorOutcomeCallable;
      typedef std::future<DisassociateGatewayFromServerOutcome> DisassociateGatewayFromServerOutcomeCallable;
      typedef std::future<GetBandwidthRateLimitScheduleOutcome> GetBandwidthRateLimitScheduleOutcomeCallable;
      typedef std::future<GetGatewayOutcome> GetGatewayOutcomeCallable;
      typedef std::future<GetHypervisorOutcome> GetHypervisorOutcomeCallable;
      typedef std::future<GetHypervisorPropertyMappingsOutcome> GetHypervisorPropertyMappingsOutcomeCallable;
      typedef std::future<GetVirtualMachineOutcome> GetVirtualMachineOutcomeCallable;
      typedef std::future<ImportHypervisorConfigurationOutcome> ImportHypervisorConfigurationOutcomeCallable;
      typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
      typedef std::future<ListHypervisorsOutcome> ListHypervisorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVirtualMachinesOutcome> ListVirtualMachinesOutcomeCallable;
      typedef std::future<PutBandwidthRateLimitScheduleOutcome> PutBandwidthRateLimitScheduleOutcomeCallable;
      typedef std::future<PutHypervisorPropertyMappingsOutcome> PutHypervisorPropertyMappingsOutcomeCallable;
      typedef std::future<PutMaintenanceStartTimeOutcome> PutMaintenanceStartTimeOutcomeCallable;
      typedef std::future<StartVirtualMachinesMetadataSyncOutcome> StartVirtualMachinesMetadataSyncOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TestHypervisorConfigurationOutcome> TestHypervisorConfigurationOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateGatewayInformationOutcome> UpdateGatewayInformationOutcomeCallable;
      typedef std::future<UpdateGatewaySoftwareNowOutcome> UpdateGatewaySoftwareNowOutcomeCallable;
      typedef std::future<UpdateHypervisorOutcome> UpdateHypervisorOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class BackupGatewayClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const BackupGatewayClient*, const Model::AssociateGatewayToServerRequest&, const Model::AssociateGatewayToServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateGatewayToServerResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::CreateGatewayRequest&, const Model::CreateGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGatewayResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::DeleteGatewayRequest&, const Model::DeleteGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGatewayResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::DeleteHypervisorRequest&, const Model::DeleteHypervisorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteHypervisorResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::DisassociateGatewayFromServerRequest&, const Model::DisassociateGatewayFromServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateGatewayFromServerResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::GetBandwidthRateLimitScheduleRequest&, const Model::GetBandwidthRateLimitScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBandwidthRateLimitScheduleResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::GetGatewayRequest&, const Model::GetGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGatewayResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::GetHypervisorRequest&, const Model::GetHypervisorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHypervisorResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::GetHypervisorPropertyMappingsRequest&, const Model::GetHypervisorPropertyMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHypervisorPropertyMappingsResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::GetVirtualMachineRequest&, const Model::GetVirtualMachineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVirtualMachineResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::ImportHypervisorConfigurationRequest&, const Model::ImportHypervisorConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportHypervisorConfigurationResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGatewaysResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::ListHypervisorsRequest&, const Model::ListHypervisorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHypervisorsResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::ListVirtualMachinesRequest&, const Model::ListVirtualMachinesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualMachinesResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::PutBandwidthRateLimitScheduleRequest&, const Model::PutBandwidthRateLimitScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutBandwidthRateLimitScheduleResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::PutHypervisorPropertyMappingsRequest&, const Model::PutHypervisorPropertyMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutHypervisorPropertyMappingsResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::PutMaintenanceStartTimeRequest&, const Model::PutMaintenanceStartTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMaintenanceStartTimeResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::StartVirtualMachinesMetadataSyncRequest&, const Model::StartVirtualMachinesMetadataSyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartVirtualMachinesMetadataSyncResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::TestHypervisorConfigurationRequest&, const Model::TestHypervisorConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestHypervisorConfigurationResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::UpdateGatewayInformationRequest&, const Model::UpdateGatewayInformationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewayInformationResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::UpdateGatewaySoftwareNowRequest&, const Model::UpdateGatewaySoftwareNowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGatewaySoftwareNowResponseReceivedHandler;
    typedef std::function<void(const BackupGatewayClient*, const Model::UpdateHypervisorRequest&, const Model::UpdateHypervisorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHypervisorResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace BackupGateway
} // namespace Aws
