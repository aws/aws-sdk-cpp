/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/discovery/ApplicationDiscoveryServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/discovery/ApplicationDiscoveryServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApplicationDiscoveryServiceClient header */
#include <aws/discovery/model/AssociateConfigurationItemsToApplicationResult.h>
#include <aws/discovery/model/BatchDeleteImportDataResult.h>
#include <aws/discovery/model/CreateApplicationResult.h>
#include <aws/discovery/model/CreateTagsResult.h>
#include <aws/discovery/model/DeleteApplicationsResult.h>
#include <aws/discovery/model/DeleteTagsResult.h>
#include <aws/discovery/model/DescribeAgentsResult.h>
#include <aws/discovery/model/DescribeConfigurationsResult.h>
#include <aws/discovery/model/DescribeContinuousExportsResult.h>
#include <aws/discovery/model/DescribeExportTasksResult.h>
#include <aws/discovery/model/DescribeImportTasksResult.h>
#include <aws/discovery/model/DescribeTagsResult.h>
#include <aws/discovery/model/DisassociateConfigurationItemsFromApplicationResult.h>
#include <aws/discovery/model/GetDiscoverySummaryResult.h>
#include <aws/discovery/model/ListConfigurationsResult.h>
#include <aws/discovery/model/ListServerNeighborsResult.h>
#include <aws/discovery/model/StartContinuousExportResult.h>
#include <aws/discovery/model/StartDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/StartExportTaskResult.h>
#include <aws/discovery/model/StartImportTaskResult.h>
#include <aws/discovery/model/StopContinuousExportResult.h>
#include <aws/discovery/model/StopDataCollectionByAgentIdsResult.h>
#include <aws/discovery/model/UpdateApplicationResult.h>
/* End of service model headers required in ApplicationDiscoveryServiceClient header */

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

  namespace ApplicationDiscoveryService
  {
    using ApplicationDiscoveryServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ApplicationDiscoveryServiceEndpointProviderBase = Aws::ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceEndpointProviderBase;
    using ApplicationDiscoveryServiceEndpointProvider = Aws::ApplicationDiscoveryService::Endpoint::ApplicationDiscoveryServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApplicationDiscoveryServiceClient header */
      class AssociateConfigurationItemsToApplicationRequest;
      class BatchDeleteImportDataRequest;
      class CreateApplicationRequest;
      class CreateTagsRequest;
      class DeleteApplicationsRequest;
      class DeleteTagsRequest;
      class DescribeAgentsRequest;
      class DescribeConfigurationsRequest;
      class DescribeContinuousExportsRequest;
      class DescribeExportTasksRequest;
      class DescribeImportTasksRequest;
      class DescribeTagsRequest;
      class DisassociateConfigurationItemsFromApplicationRequest;
      class GetDiscoverySummaryRequest;
      class ListConfigurationsRequest;
      class ListServerNeighborsRequest;
      class StartContinuousExportRequest;
      class StartDataCollectionByAgentIdsRequest;
      class StartExportTaskRequest;
      class StartImportTaskRequest;
      class StopContinuousExportRequest;
      class StopDataCollectionByAgentIdsRequest;
      class UpdateApplicationRequest;
      /* End of service model forward declarations required in ApplicationDiscoveryServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateConfigurationItemsToApplicationResult, ApplicationDiscoveryServiceError> AssociateConfigurationItemsToApplicationOutcome;
      typedef Aws::Utils::Outcome<BatchDeleteImportDataResult, ApplicationDiscoveryServiceError> BatchDeleteImportDataOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, ApplicationDiscoveryServiceError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateTagsResult, ApplicationDiscoveryServiceError> CreateTagsOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationsResult, ApplicationDiscoveryServiceError> DeleteApplicationsOutcome;
      typedef Aws::Utils::Outcome<DeleteTagsResult, ApplicationDiscoveryServiceError> DeleteTagsOutcome;
      typedef Aws::Utils::Outcome<DescribeAgentsResult, ApplicationDiscoveryServiceError> DescribeAgentsOutcome;
      typedef Aws::Utils::Outcome<DescribeConfigurationsResult, ApplicationDiscoveryServiceError> DescribeConfigurationsOutcome;
      typedef Aws::Utils::Outcome<DescribeContinuousExportsResult, ApplicationDiscoveryServiceError> DescribeContinuousExportsOutcome;
      typedef Aws::Utils::Outcome<DescribeExportTasksResult, ApplicationDiscoveryServiceError> DescribeExportTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeImportTasksResult, ApplicationDiscoveryServiceError> DescribeImportTasksOutcome;
      typedef Aws::Utils::Outcome<DescribeTagsResult, ApplicationDiscoveryServiceError> DescribeTagsOutcome;
      typedef Aws::Utils::Outcome<DisassociateConfigurationItemsFromApplicationResult, ApplicationDiscoveryServiceError> DisassociateConfigurationItemsFromApplicationOutcome;
      typedef Aws::Utils::Outcome<GetDiscoverySummaryResult, ApplicationDiscoveryServiceError> GetDiscoverySummaryOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationsResult, ApplicationDiscoveryServiceError> ListConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListServerNeighborsResult, ApplicationDiscoveryServiceError> ListServerNeighborsOutcome;
      typedef Aws::Utils::Outcome<StartContinuousExportResult, ApplicationDiscoveryServiceError> StartContinuousExportOutcome;
      typedef Aws::Utils::Outcome<StartDataCollectionByAgentIdsResult, ApplicationDiscoveryServiceError> StartDataCollectionByAgentIdsOutcome;
      typedef Aws::Utils::Outcome<StartExportTaskResult, ApplicationDiscoveryServiceError> StartExportTaskOutcome;
      typedef Aws::Utils::Outcome<StartImportTaskResult, ApplicationDiscoveryServiceError> StartImportTaskOutcome;
      typedef Aws::Utils::Outcome<StopContinuousExportResult, ApplicationDiscoveryServiceError> StopContinuousExportOutcome;
      typedef Aws::Utils::Outcome<StopDataCollectionByAgentIdsResult, ApplicationDiscoveryServiceError> StopDataCollectionByAgentIdsOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, ApplicationDiscoveryServiceError> UpdateApplicationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateConfigurationItemsToApplicationOutcome> AssociateConfigurationItemsToApplicationOutcomeCallable;
      typedef std::future<BatchDeleteImportDataOutcome> BatchDeleteImportDataOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
      typedef std::future<DeleteApplicationsOutcome> DeleteApplicationsOutcomeCallable;
      typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
      typedef std::future<DescribeAgentsOutcome> DescribeAgentsOutcomeCallable;
      typedef std::future<DescribeConfigurationsOutcome> DescribeConfigurationsOutcomeCallable;
      typedef std::future<DescribeContinuousExportsOutcome> DescribeContinuousExportsOutcomeCallable;
      typedef std::future<DescribeExportTasksOutcome> DescribeExportTasksOutcomeCallable;
      typedef std::future<DescribeImportTasksOutcome> DescribeImportTasksOutcomeCallable;
      typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
      typedef std::future<DisassociateConfigurationItemsFromApplicationOutcome> DisassociateConfigurationItemsFromApplicationOutcomeCallable;
      typedef std::future<GetDiscoverySummaryOutcome> GetDiscoverySummaryOutcomeCallable;
      typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
      typedef std::future<ListServerNeighborsOutcome> ListServerNeighborsOutcomeCallable;
      typedef std::future<StartContinuousExportOutcome> StartContinuousExportOutcomeCallable;
      typedef std::future<StartDataCollectionByAgentIdsOutcome> StartDataCollectionByAgentIdsOutcomeCallable;
      typedef std::future<StartExportTaskOutcome> StartExportTaskOutcomeCallable;
      typedef std::future<StartImportTaskOutcome> StartImportTaskOutcomeCallable;
      typedef std::future<StopContinuousExportOutcome> StopContinuousExportOutcomeCallable;
      typedef std::future<StopDataCollectionByAgentIdsOutcome> StopDataCollectionByAgentIdsOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApplicationDiscoveryServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::AssociateConfigurationItemsToApplicationRequest&, const Model::AssociateConfigurationItemsToApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateConfigurationItemsToApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::BatchDeleteImportDataRequest&, const Model::BatchDeleteImportDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteImportDataResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::CreateTagsRequest&, const Model::CreateTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DeleteApplicationsRequest&, const Model::DeleteApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DeleteTagsRequest&, const Model::DeleteTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeAgentsRequest&, const Model::DescribeAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeConfigurationsRequest&, const Model::DescribeConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeContinuousExportsRequest&, const Model::DescribeContinuousExportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContinuousExportsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeExportTasksRequest&, const Model::DescribeExportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeExportTasksResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeImportTasksRequest&, const Model::DescribeImportTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeImportTasksResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DescribeTagsRequest&, const Model::DescribeTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::DisassociateConfigurationItemsFromApplicationRequest&, const Model::DisassociateConfigurationItemsFromApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateConfigurationItemsFromApplicationResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::GetDiscoverySummaryRequest&, const Model::GetDiscoverySummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoverySummaryResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::ListServerNeighborsRequest&, const Model::ListServerNeighborsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServerNeighborsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartContinuousExportRequest&, const Model::StartContinuousExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartContinuousExportResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartDataCollectionByAgentIdsRequest&, const Model::StartDataCollectionByAgentIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDataCollectionByAgentIdsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartExportTaskRequest&, const Model::StartExportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartExportTaskResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StartImportTaskRequest&, const Model::StartImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportTaskResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StopContinuousExportRequest&, const Model::StopContinuousExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopContinuousExportResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::StopDataCollectionByAgentIdsRequest&, const Model::StopDataCollectionByAgentIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDataCollectionByAgentIdsResponseReceivedHandler;
    typedef std::function<void(const ApplicationDiscoveryServiceClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ApplicationDiscoveryService
} // namespace Aws
