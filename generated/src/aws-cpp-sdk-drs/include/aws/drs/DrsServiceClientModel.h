﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/drs/DrsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/drs/DrsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DrsClient header */
#include <aws/drs/model/AssociateSourceNetworkStackResult.h>
#include <aws/drs/model/CreateExtendedSourceServerResult.h>
#include <aws/drs/model/CreateLaunchConfigurationTemplateResult.h>
#include <aws/drs/model/CreateReplicationConfigurationTemplateResult.h>
#include <aws/drs/model/CreateSourceNetworkResult.h>
#include <aws/drs/model/DeleteJobResult.h>
#include <aws/drs/model/DeleteLaunchActionResult.h>
#include <aws/drs/model/DeleteLaunchConfigurationTemplateResult.h>
#include <aws/drs/model/DeleteReplicationConfigurationTemplateResult.h>
#include <aws/drs/model/DeleteSourceNetworkResult.h>
#include <aws/drs/model/DeleteSourceServerResult.h>
#include <aws/drs/model/DescribeJobLogItemsResult.h>
#include <aws/drs/model/DescribeJobsResult.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesResult.h>
#include <aws/drs/model/DescribeRecoveryInstancesResult.h>
#include <aws/drs/model/DescribeRecoverySnapshotsResult.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesResult.h>
#include <aws/drs/model/DescribeSourceNetworksResult.h>
#include <aws/drs/model/DescribeSourceServersResult.h>
#include <aws/drs/model/DisconnectSourceServerResult.h>
#include <aws/drs/model/ExportSourceNetworkCfnTemplateResult.h>
#include <aws/drs/model/GetFailbackReplicationConfigurationResult.h>
#include <aws/drs/model/GetLaunchConfigurationResult.h>
#include <aws/drs/model/GetReplicationConfigurationResult.h>
#include <aws/drs/model/InitializeServiceResult.h>
#include <aws/drs/model/ListExtensibleSourceServersResult.h>
#include <aws/drs/model/ListLaunchActionsResult.h>
#include <aws/drs/model/ListStagingAccountsResult.h>
#include <aws/drs/model/ListTagsForResourceResult.h>
#include <aws/drs/model/PutLaunchActionResult.h>
#include <aws/drs/model/ReverseReplicationResult.h>
#include <aws/drs/model/StartFailbackLaunchResult.h>
#include <aws/drs/model/StartRecoveryResult.h>
#include <aws/drs/model/StartReplicationResult.h>
#include <aws/drs/model/StartSourceNetworkRecoveryResult.h>
#include <aws/drs/model/StartSourceNetworkReplicationResult.h>
#include <aws/drs/model/StopReplicationResult.h>
#include <aws/drs/model/StopSourceNetworkReplicationResult.h>
#include <aws/drs/model/TerminateRecoveryInstancesResult.h>
#include <aws/drs/model/UpdateLaunchConfigurationResult.h>
#include <aws/drs/model/UpdateLaunchConfigurationTemplateResult.h>
#include <aws/drs/model/UpdateReplicationConfigurationResult.h>
#include <aws/drs/model/UpdateReplicationConfigurationTemplateResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in DrsClient header */

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

  namespace drs
  {
    using DrsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DrsEndpointProviderBase = Aws::drs::Endpoint::DrsEndpointProviderBase;
    using DrsEndpointProvider = Aws::drs::Endpoint::DrsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DrsClient header */
      class AssociateSourceNetworkStackRequest;
      class CreateExtendedSourceServerRequest;
      class CreateLaunchConfigurationTemplateRequest;
      class CreateReplicationConfigurationTemplateRequest;
      class CreateSourceNetworkRequest;
      class DeleteJobRequest;
      class DeleteLaunchActionRequest;
      class DeleteLaunchConfigurationTemplateRequest;
      class DeleteRecoveryInstanceRequest;
      class DeleteReplicationConfigurationTemplateRequest;
      class DeleteSourceNetworkRequest;
      class DeleteSourceServerRequest;
      class DescribeJobLogItemsRequest;
      class DescribeJobsRequest;
      class DescribeLaunchConfigurationTemplatesRequest;
      class DescribeRecoveryInstancesRequest;
      class DescribeRecoverySnapshotsRequest;
      class DescribeReplicationConfigurationTemplatesRequest;
      class DescribeSourceNetworksRequest;
      class DescribeSourceServersRequest;
      class DisconnectRecoveryInstanceRequest;
      class DisconnectSourceServerRequest;
      class ExportSourceNetworkCfnTemplateRequest;
      class GetFailbackReplicationConfigurationRequest;
      class GetLaunchConfigurationRequest;
      class GetReplicationConfigurationRequest;
      class InitializeServiceRequest;
      class ListExtensibleSourceServersRequest;
      class ListLaunchActionsRequest;
      class ListStagingAccountsRequest;
      class ListTagsForResourceRequest;
      class PutLaunchActionRequest;
      class ReverseReplicationRequest;
      class StartFailbackLaunchRequest;
      class StartRecoveryRequest;
      class StartReplicationRequest;
      class StartSourceNetworkRecoveryRequest;
      class StartSourceNetworkReplicationRequest;
      class StopFailbackRequest;
      class StopReplicationRequest;
      class StopSourceNetworkReplicationRequest;
      class TagResourceRequest;
      class TerminateRecoveryInstancesRequest;
      class UntagResourceRequest;
      class UpdateFailbackReplicationConfigurationRequest;
      class UpdateLaunchConfigurationRequest;
      class UpdateLaunchConfigurationTemplateRequest;
      class UpdateReplicationConfigurationRequest;
      class UpdateReplicationConfigurationTemplateRequest;
      /* End of service model forward declarations required in DrsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateSourceNetworkStackResult, DrsError> AssociateSourceNetworkStackOutcome;
      typedef Aws::Utils::Outcome<CreateExtendedSourceServerResult, DrsError> CreateExtendedSourceServerOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchConfigurationTemplateResult, DrsError> CreateLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationConfigurationTemplateResult, DrsError> CreateReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateSourceNetworkResult, DrsError> CreateSourceNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteJobResult, DrsError> DeleteJobOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchActionResult, DrsError> DeleteLaunchActionOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchConfigurationTemplateResult, DrsError> DeleteLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> DeleteRecoveryInstanceOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationConfigurationTemplateResult, DrsError> DeleteReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceNetworkResult, DrsError> DeleteSourceNetworkOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceServerResult, DrsError> DeleteSourceServerOutcome;
      typedef Aws::Utils::Outcome<DescribeJobLogItemsResult, DrsError> DescribeJobLogItemsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobsResult, DrsError> DescribeJobsOutcome;
      typedef Aws::Utils::Outcome<DescribeLaunchConfigurationTemplatesResult, DrsError> DescribeLaunchConfigurationTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeRecoveryInstancesResult, DrsError> DescribeRecoveryInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeRecoverySnapshotsResult, DrsError> DescribeRecoverySnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationConfigurationTemplatesResult, DrsError> DescribeReplicationConfigurationTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSourceNetworksResult, DrsError> DescribeSourceNetworksOutcome;
      typedef Aws::Utils::Outcome<DescribeSourceServersResult, DrsError> DescribeSourceServersOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> DisconnectRecoveryInstanceOutcome;
      typedef Aws::Utils::Outcome<DisconnectSourceServerResult, DrsError> DisconnectSourceServerOutcome;
      typedef Aws::Utils::Outcome<ExportSourceNetworkCfnTemplateResult, DrsError> ExportSourceNetworkCfnTemplateOutcome;
      typedef Aws::Utils::Outcome<GetFailbackReplicationConfigurationResult, DrsError> GetFailbackReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetLaunchConfigurationResult, DrsError> GetLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetReplicationConfigurationResult, DrsError> GetReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<InitializeServiceResult, DrsError> InitializeServiceOutcome;
      typedef Aws::Utils::Outcome<ListExtensibleSourceServersResult, DrsError> ListExtensibleSourceServersOutcome;
      typedef Aws::Utils::Outcome<ListLaunchActionsResult, DrsError> ListLaunchActionsOutcome;
      typedef Aws::Utils::Outcome<ListStagingAccountsResult, DrsError> ListStagingAccountsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DrsError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutLaunchActionResult, DrsError> PutLaunchActionOutcome;
      typedef Aws::Utils::Outcome<ReverseReplicationResult, DrsError> ReverseReplicationOutcome;
      typedef Aws::Utils::Outcome<StartFailbackLaunchResult, DrsError> StartFailbackLaunchOutcome;
      typedef Aws::Utils::Outcome<StartRecoveryResult, DrsError> StartRecoveryOutcome;
      typedef Aws::Utils::Outcome<StartReplicationResult, DrsError> StartReplicationOutcome;
      typedef Aws::Utils::Outcome<StartSourceNetworkRecoveryResult, DrsError> StartSourceNetworkRecoveryOutcome;
      typedef Aws::Utils::Outcome<StartSourceNetworkReplicationResult, DrsError> StartSourceNetworkReplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> StopFailbackOutcome;
      typedef Aws::Utils::Outcome<StopReplicationResult, DrsError> StopReplicationOutcome;
      typedef Aws::Utils::Outcome<StopSourceNetworkReplicationResult, DrsError> StopSourceNetworkReplicationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TerminateRecoveryInstancesResult, DrsError> TerminateRecoveryInstancesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, DrsError> UpdateFailbackReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchConfigurationResult, DrsError> UpdateLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchConfigurationTemplateResult, DrsError> UpdateLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationConfigurationResult, DrsError> UpdateReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationConfigurationTemplateResult, DrsError> UpdateReplicationConfigurationTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateSourceNetworkStackOutcome> AssociateSourceNetworkStackOutcomeCallable;
      typedef std::future<CreateExtendedSourceServerOutcome> CreateExtendedSourceServerOutcomeCallable;
      typedef std::future<CreateLaunchConfigurationTemplateOutcome> CreateLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<CreateReplicationConfigurationTemplateOutcome> CreateReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<CreateSourceNetworkOutcome> CreateSourceNetworkOutcomeCallable;
      typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
      typedef std::future<DeleteLaunchActionOutcome> DeleteLaunchActionOutcomeCallable;
      typedef std::future<DeleteLaunchConfigurationTemplateOutcome> DeleteLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteRecoveryInstanceOutcome> DeleteRecoveryInstanceOutcomeCallable;
      typedef std::future<DeleteReplicationConfigurationTemplateOutcome> DeleteReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteSourceNetworkOutcome> DeleteSourceNetworkOutcomeCallable;
      typedef std::future<DeleteSourceServerOutcome> DeleteSourceServerOutcomeCallable;
      typedef std::future<DescribeJobLogItemsOutcome> DescribeJobLogItemsOutcomeCallable;
      typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
      typedef std::future<DescribeLaunchConfigurationTemplatesOutcome> DescribeLaunchConfigurationTemplatesOutcomeCallable;
      typedef std::future<DescribeRecoveryInstancesOutcome> DescribeRecoveryInstancesOutcomeCallable;
      typedef std::future<DescribeRecoverySnapshotsOutcome> DescribeRecoverySnapshotsOutcomeCallable;
      typedef std::future<DescribeReplicationConfigurationTemplatesOutcome> DescribeReplicationConfigurationTemplatesOutcomeCallable;
      typedef std::future<DescribeSourceNetworksOutcome> DescribeSourceNetworksOutcomeCallable;
      typedef std::future<DescribeSourceServersOutcome> DescribeSourceServersOutcomeCallable;
      typedef std::future<DisconnectRecoveryInstanceOutcome> DisconnectRecoveryInstanceOutcomeCallable;
      typedef std::future<DisconnectSourceServerOutcome> DisconnectSourceServerOutcomeCallable;
      typedef std::future<ExportSourceNetworkCfnTemplateOutcome> ExportSourceNetworkCfnTemplateOutcomeCallable;
      typedef std::future<GetFailbackReplicationConfigurationOutcome> GetFailbackReplicationConfigurationOutcomeCallable;
      typedef std::future<GetLaunchConfigurationOutcome> GetLaunchConfigurationOutcomeCallable;
      typedef std::future<GetReplicationConfigurationOutcome> GetReplicationConfigurationOutcomeCallable;
      typedef std::future<InitializeServiceOutcome> InitializeServiceOutcomeCallable;
      typedef std::future<ListExtensibleSourceServersOutcome> ListExtensibleSourceServersOutcomeCallable;
      typedef std::future<ListLaunchActionsOutcome> ListLaunchActionsOutcomeCallable;
      typedef std::future<ListStagingAccountsOutcome> ListStagingAccountsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutLaunchActionOutcome> PutLaunchActionOutcomeCallable;
      typedef std::future<ReverseReplicationOutcome> ReverseReplicationOutcomeCallable;
      typedef std::future<StartFailbackLaunchOutcome> StartFailbackLaunchOutcomeCallable;
      typedef std::future<StartRecoveryOutcome> StartRecoveryOutcomeCallable;
      typedef std::future<StartReplicationOutcome> StartReplicationOutcomeCallable;
      typedef std::future<StartSourceNetworkRecoveryOutcome> StartSourceNetworkRecoveryOutcomeCallable;
      typedef std::future<StartSourceNetworkReplicationOutcome> StartSourceNetworkReplicationOutcomeCallable;
      typedef std::future<StopFailbackOutcome> StopFailbackOutcomeCallable;
      typedef std::future<StopReplicationOutcome> StopReplicationOutcomeCallable;
      typedef std::future<StopSourceNetworkReplicationOutcome> StopSourceNetworkReplicationOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateRecoveryInstancesOutcome> TerminateRecoveryInstancesOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateFailbackReplicationConfigurationOutcome> UpdateFailbackReplicationConfigurationOutcomeCallable;
      typedef std::future<UpdateLaunchConfigurationOutcome> UpdateLaunchConfigurationOutcomeCallable;
      typedef std::future<UpdateLaunchConfigurationTemplateOutcome> UpdateLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<UpdateReplicationConfigurationOutcome> UpdateReplicationConfigurationOutcomeCallable;
      typedef std::future<UpdateReplicationConfigurationTemplateOutcome> UpdateReplicationConfigurationTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DrsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DrsClient*, const Model::AssociateSourceNetworkStackRequest&, const Model::AssociateSourceNetworkStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateSourceNetworkStackResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::CreateExtendedSourceServerRequest&, const Model::CreateExtendedSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateExtendedSourceServerResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::CreateLaunchConfigurationTemplateRequest&, const Model::CreateLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::CreateReplicationConfigurationTemplateRequest&, const Model::CreateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::CreateSourceNetworkRequest&, const Model::CreateSourceNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSourceNetworkResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteLaunchActionRequest&, const Model::DeleteLaunchActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchActionResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteLaunchConfigurationTemplateRequest&, const Model::DeleteLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteRecoveryInstanceRequest&, const Model::DeleteRecoveryInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecoveryInstanceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteReplicationConfigurationTemplateRequest&, const Model::DeleteReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteSourceNetworkRequest&, const Model::DeleteSourceNetworkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceNetworkResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DeleteSourceServerRequest&, const Model::DeleteSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceServerResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeJobLogItemsRequest&, const Model::DescribeJobLogItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobLogItemsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeLaunchConfigurationTemplatesRequest&, const Model::DescribeLaunchConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeRecoveryInstancesRequest&, const Model::DescribeRecoveryInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecoveryInstancesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeRecoverySnapshotsRequest&, const Model::DescribeRecoverySnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecoverySnapshotsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeReplicationConfigurationTemplatesRequest&, const Model::DescribeReplicationConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeSourceNetworksRequest&, const Model::DescribeSourceNetworksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceNetworksResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DescribeSourceServersRequest&, const Model::DescribeSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceServersResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DisconnectRecoveryInstanceRequest&, const Model::DisconnectRecoveryInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectRecoveryInstanceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::DisconnectSourceServerRequest&, const Model::DisconnectSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectSourceServerResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ExportSourceNetworkCfnTemplateRequest&, const Model::ExportSourceNetworkCfnTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportSourceNetworkCfnTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::GetFailbackReplicationConfigurationRequest&, const Model::GetFailbackReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFailbackReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::GetLaunchConfigurationRequest&, const Model::GetLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::GetReplicationConfigurationRequest&, const Model::GetReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::InitializeServiceRequest&, const Model::InitializeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeServiceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ListExtensibleSourceServersRequest&, const Model::ListExtensibleSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListExtensibleSourceServersResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ListLaunchActionsRequest&, const Model::ListLaunchActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchActionsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ListStagingAccountsRequest&, const Model::ListStagingAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStagingAccountsResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::PutLaunchActionRequest&, const Model::PutLaunchActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLaunchActionResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::ReverseReplicationRequest&, const Model::ReverseReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReverseReplicationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartFailbackLaunchRequest&, const Model::StartFailbackLaunchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFailbackLaunchResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartRecoveryRequest&, const Model::StartRecoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRecoveryResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartReplicationRequest&, const Model::StartReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartSourceNetworkRecoveryRequest&, const Model::StartSourceNetworkRecoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSourceNetworkRecoveryResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StartSourceNetworkReplicationRequest&, const Model::StartSourceNetworkReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSourceNetworkReplicationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StopFailbackRequest&, const Model::StopFailbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopFailbackResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StopReplicationRequest&, const Model::StopReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopReplicationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::StopSourceNetworkReplicationRequest&, const Model::StopSourceNetworkReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSourceNetworkReplicationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::TerminateRecoveryInstancesRequest&, const Model::TerminateRecoveryInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateRecoveryInstancesResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateFailbackReplicationConfigurationRequest&, const Model::UpdateFailbackReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFailbackReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateLaunchConfigurationRequest&, const Model::UpdateLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateLaunchConfigurationTemplateRequest&, const Model::UpdateLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateReplicationConfigurationRequest&, const Model::UpdateReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const DrsClient*, const Model::UpdateReplicationConfigurationTemplateRequest&, const Model::UpdateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace drs
} // namespace Aws
