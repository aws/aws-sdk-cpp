/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/connectcampaignsv2/ConnectCampaignsV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ConnectCampaignsV2Client header */
#include <aws/connectcampaignsv2/model/CreateCampaignResult.h>
#include <aws/connectcampaignsv2/model/DescribeCampaignResult.h>
#include <aws/connectcampaignsv2/model/GetCampaignStateResult.h>
#include <aws/connectcampaignsv2/model/GetCampaignStateBatchResult.h>
#include <aws/connectcampaignsv2/model/GetConnectInstanceConfigResult.h>
#include <aws/connectcampaignsv2/model/GetInstanceCommunicationLimitsResult.h>
#include <aws/connectcampaignsv2/model/GetInstanceOnboardingJobStatusResult.h>
#include <aws/connectcampaignsv2/model/ListCampaignsResult.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsResult.h>
#include <aws/connectcampaignsv2/model/ListTagsForResourceResult.h>
#include <aws/connectcampaignsv2/model/PutOutboundRequestBatchResult.h>
#include <aws/connectcampaignsv2/model/PutProfileOutboundRequestBatchResult.h>
#include <aws/connectcampaignsv2/model/StartInstanceOnboardingJobResult.h>
#include <aws/connectcampaignsv2/model/ListCampaignsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ConnectCampaignsV2Client header */

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

  namespace ConnectCampaignsV2
  {
    using ConnectCampaignsV2ClientConfiguration = Aws::Client::GenericClientConfiguration;
    using ConnectCampaignsV2EndpointProviderBase = Aws::ConnectCampaignsV2::Endpoint::ConnectCampaignsV2EndpointProviderBase;
    using ConnectCampaignsV2EndpointProvider = Aws::ConnectCampaignsV2::Endpoint::ConnectCampaignsV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ConnectCampaignsV2Client header */
      class CreateCampaignRequest;
      class DeleteCampaignRequest;
      class DeleteCampaignChannelSubtypeConfigRequest;
      class DeleteCampaignCommunicationLimitsRequest;
      class DeleteCampaignCommunicationTimeRequest;
      class DeleteConnectInstanceConfigRequest;
      class DeleteConnectInstanceIntegrationRequest;
      class DeleteInstanceOnboardingJobRequest;
      class DescribeCampaignRequest;
      class GetCampaignStateRequest;
      class GetCampaignStateBatchRequest;
      class GetConnectInstanceConfigRequest;
      class GetInstanceCommunicationLimitsRequest;
      class GetInstanceOnboardingJobStatusRequest;
      class ListCampaignsRequest;
      class ListConnectInstanceIntegrationsRequest;
      class ListTagsForResourceRequest;
      class PauseCampaignRequest;
      class PutConnectInstanceIntegrationRequest;
      class PutInstanceCommunicationLimitsRequest;
      class PutOutboundRequestBatchRequest;
      class PutProfileOutboundRequestBatchRequest;
      class ResumeCampaignRequest;
      class StartCampaignRequest;
      class StartInstanceOnboardingJobRequest;
      class StopCampaignRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCampaignChannelSubtypeConfigRequest;
      class UpdateCampaignCommunicationLimitsRequest;
      class UpdateCampaignCommunicationTimeRequest;
      class UpdateCampaignFlowAssociationRequest;
      class UpdateCampaignNameRequest;
      class UpdateCampaignScheduleRequest;
      class UpdateCampaignSourceRequest;
      /* End of service model forward declarations required in ConnectCampaignsV2Client header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCampaignResult, ConnectCampaignsV2Error> CreateCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteCampaignChannelSubtypeConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteCampaignCommunicationLimitsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteCampaignCommunicationTimeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteConnectInstanceConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteConnectInstanceIntegrationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> DeleteInstanceOnboardingJobOutcome;
      typedef Aws::Utils::Outcome<DescribeCampaignResult, ConnectCampaignsV2Error> DescribeCampaignOutcome;
      typedef Aws::Utils::Outcome<GetCampaignStateResult, ConnectCampaignsV2Error> GetCampaignStateOutcome;
      typedef Aws::Utils::Outcome<GetCampaignStateBatchResult, ConnectCampaignsV2Error> GetCampaignStateBatchOutcome;
      typedef Aws::Utils::Outcome<GetConnectInstanceConfigResult, ConnectCampaignsV2Error> GetConnectInstanceConfigOutcome;
      typedef Aws::Utils::Outcome<GetInstanceCommunicationLimitsResult, ConnectCampaignsV2Error> GetInstanceCommunicationLimitsOutcome;
      typedef Aws::Utils::Outcome<GetInstanceOnboardingJobStatusResult, ConnectCampaignsV2Error> GetInstanceOnboardingJobStatusOutcome;
      typedef Aws::Utils::Outcome<ListCampaignsResult, ConnectCampaignsV2Error> ListCampaignsOutcome;
      typedef Aws::Utils::Outcome<ListConnectInstanceIntegrationsResult, ConnectCampaignsV2Error> ListConnectInstanceIntegrationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ConnectCampaignsV2Error> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> PauseCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> PutConnectInstanceIntegrationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> PutInstanceCommunicationLimitsOutcome;
      typedef Aws::Utils::Outcome<PutOutboundRequestBatchResult, ConnectCampaignsV2Error> PutOutboundRequestBatchOutcome;
      typedef Aws::Utils::Outcome<PutProfileOutboundRequestBatchResult, ConnectCampaignsV2Error> PutProfileOutboundRequestBatchOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> ResumeCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> StartCampaignOutcome;
      typedef Aws::Utils::Outcome<StartInstanceOnboardingJobResult, ConnectCampaignsV2Error> StartInstanceOnboardingJobOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> StopCampaignOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignChannelSubtypeConfigOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignCommunicationLimitsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignCommunicationTimeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignFlowAssociationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignScheduleOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ConnectCampaignsV2Error> UpdateCampaignSourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCampaignOutcome> CreateCampaignOutcomeCallable;
      typedef std::future<DeleteCampaignOutcome> DeleteCampaignOutcomeCallable;
      typedef std::future<DeleteCampaignChannelSubtypeConfigOutcome> DeleteCampaignChannelSubtypeConfigOutcomeCallable;
      typedef std::future<DeleteCampaignCommunicationLimitsOutcome> DeleteCampaignCommunicationLimitsOutcomeCallable;
      typedef std::future<DeleteCampaignCommunicationTimeOutcome> DeleteCampaignCommunicationTimeOutcomeCallable;
      typedef std::future<DeleteConnectInstanceConfigOutcome> DeleteConnectInstanceConfigOutcomeCallable;
      typedef std::future<DeleteConnectInstanceIntegrationOutcome> DeleteConnectInstanceIntegrationOutcomeCallable;
      typedef std::future<DeleteInstanceOnboardingJobOutcome> DeleteInstanceOnboardingJobOutcomeCallable;
      typedef std::future<DescribeCampaignOutcome> DescribeCampaignOutcomeCallable;
      typedef std::future<GetCampaignStateOutcome> GetCampaignStateOutcomeCallable;
      typedef std::future<GetCampaignStateBatchOutcome> GetCampaignStateBatchOutcomeCallable;
      typedef std::future<GetConnectInstanceConfigOutcome> GetConnectInstanceConfigOutcomeCallable;
      typedef std::future<GetInstanceCommunicationLimitsOutcome> GetInstanceCommunicationLimitsOutcomeCallable;
      typedef std::future<GetInstanceOnboardingJobStatusOutcome> GetInstanceOnboardingJobStatusOutcomeCallable;
      typedef std::future<ListCampaignsOutcome> ListCampaignsOutcomeCallable;
      typedef std::future<ListConnectInstanceIntegrationsOutcome> ListConnectInstanceIntegrationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PauseCampaignOutcome> PauseCampaignOutcomeCallable;
      typedef std::future<PutConnectInstanceIntegrationOutcome> PutConnectInstanceIntegrationOutcomeCallable;
      typedef std::future<PutInstanceCommunicationLimitsOutcome> PutInstanceCommunicationLimitsOutcomeCallable;
      typedef std::future<PutOutboundRequestBatchOutcome> PutOutboundRequestBatchOutcomeCallable;
      typedef std::future<PutProfileOutboundRequestBatchOutcome> PutProfileOutboundRequestBatchOutcomeCallable;
      typedef std::future<ResumeCampaignOutcome> ResumeCampaignOutcomeCallable;
      typedef std::future<StartCampaignOutcome> StartCampaignOutcomeCallable;
      typedef std::future<StartInstanceOnboardingJobOutcome> StartInstanceOnboardingJobOutcomeCallable;
      typedef std::future<StopCampaignOutcome> StopCampaignOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCampaignChannelSubtypeConfigOutcome> UpdateCampaignChannelSubtypeConfigOutcomeCallable;
      typedef std::future<UpdateCampaignCommunicationLimitsOutcome> UpdateCampaignCommunicationLimitsOutcomeCallable;
      typedef std::future<UpdateCampaignCommunicationTimeOutcome> UpdateCampaignCommunicationTimeOutcomeCallable;
      typedef std::future<UpdateCampaignFlowAssociationOutcome> UpdateCampaignFlowAssociationOutcomeCallable;
      typedef std::future<UpdateCampaignNameOutcome> UpdateCampaignNameOutcomeCallable;
      typedef std::future<UpdateCampaignScheduleOutcome> UpdateCampaignScheduleOutcomeCallable;
      typedef std::future<UpdateCampaignSourceOutcome> UpdateCampaignSourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ConnectCampaignsV2Client;

    /* Service model async handlers definitions */
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::CreateCampaignRequest&, const Model::CreateCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteCampaignRequest&, const Model::DeleteCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteCampaignChannelSubtypeConfigRequest&, const Model::DeleteCampaignChannelSubtypeConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignChannelSubtypeConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteCampaignCommunicationLimitsRequest&, const Model::DeleteCampaignCommunicationLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignCommunicationLimitsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteCampaignCommunicationTimeRequest&, const Model::DeleteCampaignCommunicationTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCampaignCommunicationTimeResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteConnectInstanceConfigRequest&, const Model::DeleteConnectInstanceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectInstanceConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteConnectInstanceIntegrationRequest&, const Model::DeleteConnectInstanceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectInstanceIntegrationResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DeleteInstanceOnboardingJobRequest&, const Model::DeleteInstanceOnboardingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceOnboardingJobResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::DescribeCampaignRequest&, const Model::DescribeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::GetCampaignStateRequest&, const Model::GetCampaignStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignStateResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::GetCampaignStateBatchRequest&, const Model::GetCampaignStateBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCampaignStateBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::GetConnectInstanceConfigRequest&, const Model::GetConnectInstanceConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectInstanceConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::GetInstanceCommunicationLimitsRequest&, const Model::GetInstanceCommunicationLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceCommunicationLimitsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::GetInstanceOnboardingJobStatusRequest&, const Model::GetInstanceOnboardingJobStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceOnboardingJobStatusResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::ListCampaignsRequest&, const Model::ListCampaignsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCampaignsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::ListConnectInstanceIntegrationsRequest&, const Model::ListConnectInstanceIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectInstanceIntegrationsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::PauseCampaignRequest&, const Model::PauseCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PauseCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::PutConnectInstanceIntegrationRequest&, const Model::PutConnectInstanceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConnectInstanceIntegrationResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::PutInstanceCommunicationLimitsRequest&, const Model::PutInstanceCommunicationLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInstanceCommunicationLimitsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::PutOutboundRequestBatchRequest&, const Model::PutOutboundRequestBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutOutboundRequestBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::PutProfileOutboundRequestBatchRequest&, const Model::PutProfileOutboundRequestBatchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutProfileOutboundRequestBatchResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::ResumeCampaignRequest&, const Model::ResumeCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResumeCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::StartCampaignRequest&, const Model::StartCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::StartInstanceOnboardingJobRequest&, const Model::StartInstanceOnboardingJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceOnboardingJobResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::StopCampaignRequest&, const Model::StopCampaignOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopCampaignResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignChannelSubtypeConfigRequest&, const Model::UpdateCampaignChannelSubtypeConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignChannelSubtypeConfigResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignCommunicationLimitsRequest&, const Model::UpdateCampaignCommunicationLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignCommunicationLimitsResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignCommunicationTimeRequest&, const Model::UpdateCampaignCommunicationTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignCommunicationTimeResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignFlowAssociationRequest&, const Model::UpdateCampaignFlowAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignFlowAssociationResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignNameRequest&, const Model::UpdateCampaignNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignNameResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignScheduleRequest&, const Model::UpdateCampaignScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignScheduleResponseReceivedHandler;
    typedef std::function<void(const ConnectCampaignsV2Client*, const Model::UpdateCampaignSourceRequest&, const Model::UpdateCampaignSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCampaignSourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ConnectCampaignsV2
} // namespace Aws
