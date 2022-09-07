/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mgn/MgnErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MgnClient header */
#include <aws/mgn/model/ChangeServerLifeCycleStateResult.h>
#include <aws/mgn/model/CreateLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/CreateReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteJobResult.h>
#include <aws/mgn/model/DeleteLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/DeleteSourceServerResult.h>
#include <aws/mgn/model/DescribeJobLogItemsResult.h>
#include <aws/mgn/model/DescribeJobsResult.h>
#include <aws/mgn/model/DescribeLaunchConfigurationTemplatesResult.h>
#include <aws/mgn/model/DescribeReplicationConfigurationTemplatesResult.h>
#include <aws/mgn/model/DescribeSourceServersResult.h>
#include <aws/mgn/model/DescribeVcenterClientsResult.h>
#include <aws/mgn/model/DisconnectFromServiceResult.h>
#include <aws/mgn/model/FinalizeCutoverResult.h>
#include <aws/mgn/model/GetLaunchConfigurationResult.h>
#include <aws/mgn/model/GetReplicationConfigurationResult.h>
#include <aws/mgn/model/InitializeServiceResult.h>
#include <aws/mgn/model/ListTagsForResourceResult.h>
#include <aws/mgn/model/MarkAsArchivedResult.h>
#include <aws/mgn/model/RetryDataReplicationResult.h>
#include <aws/mgn/model/StartCutoverResult.h>
#include <aws/mgn/model/StartReplicationResult.h>
#include <aws/mgn/model/StartTestResult.h>
#include <aws/mgn/model/TerminateTargetInstancesResult.h>
#include <aws/mgn/model/UpdateLaunchConfigurationResult.h>
#include <aws/mgn/model/UpdateLaunchConfigurationTemplateResult.h>
#include <aws/mgn/model/UpdateReplicationConfigurationResult.h>
#include <aws/mgn/model/UpdateReplicationConfigurationTemplateResult.h>
#include <aws/mgn/model/UpdateSourceServerReplicationTypeResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MgnClient header */

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

  namespace mgn
  {
    namespace Model
    {
      /* Service model forward declarations required in MgnClient header */
      class ChangeServerLifeCycleStateRequest;
      class CreateLaunchConfigurationTemplateRequest;
      class CreateReplicationConfigurationTemplateRequest;
      class DeleteJobRequest;
      class DeleteLaunchConfigurationTemplateRequest;
      class DeleteReplicationConfigurationTemplateRequest;
      class DeleteSourceServerRequest;
      class DeleteVcenterClientRequest;
      class DescribeJobLogItemsRequest;
      class DescribeJobsRequest;
      class DescribeLaunchConfigurationTemplatesRequest;
      class DescribeReplicationConfigurationTemplatesRequest;
      class DescribeSourceServersRequest;
      class DescribeVcenterClientsRequest;
      class DisconnectFromServiceRequest;
      class FinalizeCutoverRequest;
      class GetLaunchConfigurationRequest;
      class GetReplicationConfigurationRequest;
      class InitializeServiceRequest;
      class ListTagsForResourceRequest;
      class MarkAsArchivedRequest;
      class RetryDataReplicationRequest;
      class StartCutoverRequest;
      class StartReplicationRequest;
      class StartTestRequest;
      class TagResourceRequest;
      class TerminateTargetInstancesRequest;
      class UntagResourceRequest;
      class UpdateLaunchConfigurationRequest;
      class UpdateLaunchConfigurationTemplateRequest;
      class UpdateReplicationConfigurationRequest;
      class UpdateReplicationConfigurationTemplateRequest;
      class UpdateSourceServerReplicationTypeRequest;
      /* End of service model forward declarations required in MgnClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ChangeServerLifeCycleStateResult, MgnError> ChangeServerLifeCycleStateOutcome;
      typedef Aws::Utils::Outcome<CreateLaunchConfigurationTemplateResult, MgnError> CreateLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<CreateReplicationConfigurationTemplateResult, MgnError> CreateReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteJobResult, MgnError> DeleteJobOutcome;
      typedef Aws::Utils::Outcome<DeleteLaunchConfigurationTemplateResult, MgnError> DeleteLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteReplicationConfigurationTemplateResult, MgnError> DeleteReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceServerResult, MgnError> DeleteSourceServerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MgnError> DeleteVcenterClientOutcome;
      typedef Aws::Utils::Outcome<DescribeJobLogItemsResult, MgnError> DescribeJobLogItemsOutcome;
      typedef Aws::Utils::Outcome<DescribeJobsResult, MgnError> DescribeJobsOutcome;
      typedef Aws::Utils::Outcome<DescribeLaunchConfigurationTemplatesResult, MgnError> DescribeLaunchConfigurationTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeReplicationConfigurationTemplatesResult, MgnError> DescribeReplicationConfigurationTemplatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSourceServersResult, MgnError> DescribeSourceServersOutcome;
      typedef Aws::Utils::Outcome<DescribeVcenterClientsResult, MgnError> DescribeVcenterClientsOutcome;
      typedef Aws::Utils::Outcome<DisconnectFromServiceResult, MgnError> DisconnectFromServiceOutcome;
      typedef Aws::Utils::Outcome<FinalizeCutoverResult, MgnError> FinalizeCutoverOutcome;
      typedef Aws::Utils::Outcome<GetLaunchConfigurationResult, MgnError> GetLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetReplicationConfigurationResult, MgnError> GetReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<InitializeServiceResult, MgnError> InitializeServiceOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MgnError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<MarkAsArchivedResult, MgnError> MarkAsArchivedOutcome;
      typedef Aws::Utils::Outcome<RetryDataReplicationResult, MgnError> RetryDataReplicationOutcome;
      typedef Aws::Utils::Outcome<StartCutoverResult, MgnError> StartCutoverOutcome;
      typedef Aws::Utils::Outcome<StartReplicationResult, MgnError> StartReplicationOutcome;
      typedef Aws::Utils::Outcome<StartTestResult, MgnError> StartTestOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MgnError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TerminateTargetInstancesResult, MgnError> TerminateTargetInstancesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MgnError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchConfigurationResult, MgnError> UpdateLaunchConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateLaunchConfigurationTemplateResult, MgnError> UpdateLaunchConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationConfigurationResult, MgnError> UpdateReplicationConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateReplicationConfigurationTemplateResult, MgnError> UpdateReplicationConfigurationTemplateOutcome;
      typedef Aws::Utils::Outcome<UpdateSourceServerReplicationTypeResult, MgnError> UpdateSourceServerReplicationTypeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ChangeServerLifeCycleStateOutcome> ChangeServerLifeCycleStateOutcomeCallable;
      typedef std::future<CreateLaunchConfigurationTemplateOutcome> CreateLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<CreateReplicationConfigurationTemplateOutcome> CreateReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
      typedef std::future<DeleteLaunchConfigurationTemplateOutcome> DeleteLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteReplicationConfigurationTemplateOutcome> DeleteReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<DeleteSourceServerOutcome> DeleteSourceServerOutcomeCallable;
      typedef std::future<DeleteVcenterClientOutcome> DeleteVcenterClientOutcomeCallable;
      typedef std::future<DescribeJobLogItemsOutcome> DescribeJobLogItemsOutcomeCallable;
      typedef std::future<DescribeJobsOutcome> DescribeJobsOutcomeCallable;
      typedef std::future<DescribeLaunchConfigurationTemplatesOutcome> DescribeLaunchConfigurationTemplatesOutcomeCallable;
      typedef std::future<DescribeReplicationConfigurationTemplatesOutcome> DescribeReplicationConfigurationTemplatesOutcomeCallable;
      typedef std::future<DescribeSourceServersOutcome> DescribeSourceServersOutcomeCallable;
      typedef std::future<DescribeVcenterClientsOutcome> DescribeVcenterClientsOutcomeCallable;
      typedef std::future<DisconnectFromServiceOutcome> DisconnectFromServiceOutcomeCallable;
      typedef std::future<FinalizeCutoverOutcome> FinalizeCutoverOutcomeCallable;
      typedef std::future<GetLaunchConfigurationOutcome> GetLaunchConfigurationOutcomeCallable;
      typedef std::future<GetReplicationConfigurationOutcome> GetReplicationConfigurationOutcomeCallable;
      typedef std::future<InitializeServiceOutcome> InitializeServiceOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<MarkAsArchivedOutcome> MarkAsArchivedOutcomeCallable;
      typedef std::future<RetryDataReplicationOutcome> RetryDataReplicationOutcomeCallable;
      typedef std::future<StartCutoverOutcome> StartCutoverOutcomeCallable;
      typedef std::future<StartReplicationOutcome> StartReplicationOutcomeCallable;
      typedef std::future<StartTestOutcome> StartTestOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateTargetInstancesOutcome> TerminateTargetInstancesOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLaunchConfigurationOutcome> UpdateLaunchConfigurationOutcomeCallable;
      typedef std::future<UpdateLaunchConfigurationTemplateOutcome> UpdateLaunchConfigurationTemplateOutcomeCallable;
      typedef std::future<UpdateReplicationConfigurationOutcome> UpdateReplicationConfigurationOutcomeCallable;
      typedef std::future<UpdateReplicationConfigurationTemplateOutcome> UpdateReplicationConfigurationTemplateOutcomeCallable;
      typedef std::future<UpdateSourceServerReplicationTypeOutcome> UpdateSourceServerReplicationTypeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MgnClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MgnClient*, const Model::ChangeServerLifeCycleStateRequest&, const Model::ChangeServerLifeCycleStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ChangeServerLifeCycleStateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::CreateLaunchConfigurationTemplateRequest&, const Model::CreateLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::CreateReplicationConfigurationTemplateRequest&, const Model::CreateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteJobRequest&, const Model::DeleteJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteJobResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteLaunchConfigurationTemplateRequest&, const Model::DeleteLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteReplicationConfigurationTemplateRequest&, const Model::DeleteReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteSourceServerRequest&, const Model::DeleteSourceServerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceServerResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DeleteVcenterClientRequest&, const Model::DeleteVcenterClientOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVcenterClientResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeJobLogItemsRequest&, const Model::DescribeJobLogItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobLogItemsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeJobsRequest&, const Model::DescribeJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeLaunchConfigurationTemplatesRequest&, const Model::DescribeLaunchConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLaunchConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeReplicationConfigurationTemplatesRequest&, const Model::DescribeReplicationConfigurationTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReplicationConfigurationTemplatesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeSourceServersRequest&, const Model::DescribeSourceServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceServersResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DescribeVcenterClientsRequest&, const Model::DescribeVcenterClientsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVcenterClientsResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::DisconnectFromServiceRequest&, const Model::DisconnectFromServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisconnectFromServiceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::FinalizeCutoverRequest&, const Model::FinalizeCutoverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FinalizeCutoverResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::GetLaunchConfigurationRequest&, const Model::GetLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::GetReplicationConfigurationRequest&, const Model::GetReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::InitializeServiceRequest&, const Model::InitializeServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InitializeServiceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::MarkAsArchivedRequest&, const Model::MarkAsArchivedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > MarkAsArchivedResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::RetryDataReplicationRequest&, const Model::RetryDataReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RetryDataReplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::StartCutoverRequest&, const Model::StartCutoverOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCutoverResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::StartReplicationRequest&, const Model::StartReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartReplicationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::StartTestRequest&, const Model::StartTestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTestResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::TerminateTargetInstancesRequest&, const Model::TerminateTargetInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateTargetInstancesResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateLaunchConfigurationRequest&, const Model::UpdateLaunchConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateLaunchConfigurationTemplateRequest&, const Model::UpdateLaunchConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLaunchConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateReplicationConfigurationRequest&, const Model::UpdateReplicationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateReplicationConfigurationTemplateRequest&, const Model::UpdateReplicationConfigurationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReplicationConfigurationTemplateResponseReceivedHandler;
    typedef std::function<void(const MgnClient*, const Model::UpdateSourceServerReplicationTypeRequest&, const Model::UpdateSourceServerReplicationTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSourceServerReplicationTypeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace mgn
} // namespace Aws
