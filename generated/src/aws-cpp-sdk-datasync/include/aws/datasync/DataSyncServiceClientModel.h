/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/datasync/DataSyncErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/datasync/DataSyncEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in DataSyncClient header */
#include <aws/datasync/model/CancelTaskExecutionResult.h>
#include <aws/datasync/model/CreateAgentResult.h>
#include <aws/datasync/model/CreateLocationEfsResult.h>
#include <aws/datasync/model/CreateLocationFsxLustreResult.h>
#include <aws/datasync/model/CreateLocationFsxOntapResult.h>
#include <aws/datasync/model/CreateLocationFsxOpenZfsResult.h>
#include <aws/datasync/model/CreateLocationFsxWindowsResult.h>
#include <aws/datasync/model/CreateLocationHdfsResult.h>
#include <aws/datasync/model/CreateLocationNfsResult.h>
#include <aws/datasync/model/CreateLocationObjectStorageResult.h>
#include <aws/datasync/model/CreateLocationS3Result.h>
#include <aws/datasync/model/CreateLocationSmbResult.h>
#include <aws/datasync/model/CreateTaskResult.h>
#include <aws/datasync/model/DeleteAgentResult.h>
#include <aws/datasync/model/DeleteLocationResult.h>
#include <aws/datasync/model/DeleteTaskResult.h>
#include <aws/datasync/model/DescribeAgentResult.h>
#include <aws/datasync/model/DescribeLocationEfsResult.h>
#include <aws/datasync/model/DescribeLocationFsxLustreResult.h>
#include <aws/datasync/model/DescribeLocationFsxOntapResult.h>
#include <aws/datasync/model/DescribeLocationFsxOpenZfsResult.h>
#include <aws/datasync/model/DescribeLocationFsxWindowsResult.h>
#include <aws/datasync/model/DescribeLocationHdfsResult.h>
#include <aws/datasync/model/DescribeLocationNfsResult.h>
#include <aws/datasync/model/DescribeLocationObjectStorageResult.h>
#include <aws/datasync/model/DescribeLocationS3Result.h>
#include <aws/datasync/model/DescribeLocationSmbResult.h>
#include <aws/datasync/model/DescribeTaskResult.h>
#include <aws/datasync/model/DescribeTaskExecutionResult.h>
#include <aws/datasync/model/ListAgentsResult.h>
#include <aws/datasync/model/ListLocationsResult.h>
#include <aws/datasync/model/ListTagsForResourceResult.h>
#include <aws/datasync/model/ListTaskExecutionsResult.h>
#include <aws/datasync/model/ListTasksResult.h>
#include <aws/datasync/model/StartTaskExecutionResult.h>
#include <aws/datasync/model/TagResourceResult.h>
#include <aws/datasync/model/UntagResourceResult.h>
#include <aws/datasync/model/UpdateAgentResult.h>
#include <aws/datasync/model/UpdateLocationHdfsResult.h>
#include <aws/datasync/model/UpdateLocationNfsResult.h>
#include <aws/datasync/model/UpdateLocationObjectStorageResult.h>
#include <aws/datasync/model/UpdateLocationSmbResult.h>
#include <aws/datasync/model/UpdateTaskResult.h>
#include <aws/datasync/model/UpdateTaskExecutionResult.h>
/* End of service model headers required in DataSyncClient header */

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

  namespace DataSync
  {
    using DataSyncClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using DataSyncEndpointProviderBase = Aws::DataSync::Endpoint::DataSyncEndpointProviderBase;
    using DataSyncEndpointProvider = Aws::DataSync::Endpoint::DataSyncEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in DataSyncClient header */
      class CancelTaskExecutionRequest;
      class CreateAgentRequest;
      class CreateLocationEfsRequest;
      class CreateLocationFsxLustreRequest;
      class CreateLocationFsxOntapRequest;
      class CreateLocationFsxOpenZfsRequest;
      class CreateLocationFsxWindowsRequest;
      class CreateLocationHdfsRequest;
      class CreateLocationNfsRequest;
      class CreateLocationObjectStorageRequest;
      class CreateLocationS3Request;
      class CreateLocationSmbRequest;
      class CreateTaskRequest;
      class DeleteAgentRequest;
      class DeleteLocationRequest;
      class DeleteTaskRequest;
      class DescribeAgentRequest;
      class DescribeLocationEfsRequest;
      class DescribeLocationFsxLustreRequest;
      class DescribeLocationFsxOntapRequest;
      class DescribeLocationFsxOpenZfsRequest;
      class DescribeLocationFsxWindowsRequest;
      class DescribeLocationHdfsRequest;
      class DescribeLocationNfsRequest;
      class DescribeLocationObjectStorageRequest;
      class DescribeLocationS3Request;
      class DescribeLocationSmbRequest;
      class DescribeTaskRequest;
      class DescribeTaskExecutionRequest;
      class ListAgentsRequest;
      class ListLocationsRequest;
      class ListTagsForResourceRequest;
      class ListTaskExecutionsRequest;
      class ListTasksRequest;
      class StartTaskExecutionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAgentRequest;
      class UpdateLocationHdfsRequest;
      class UpdateLocationNfsRequest;
      class UpdateLocationObjectStorageRequest;
      class UpdateLocationSmbRequest;
      class UpdateTaskRequest;
      class UpdateTaskExecutionRequest;
      /* End of service model forward declarations required in DataSyncClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelTaskExecutionResult, DataSyncError> CancelTaskExecutionOutcome;
      typedef Aws::Utils::Outcome<CreateAgentResult, DataSyncError> CreateAgentOutcome;
      typedef Aws::Utils::Outcome<CreateLocationEfsResult, DataSyncError> CreateLocationEfsOutcome;
      typedef Aws::Utils::Outcome<CreateLocationFsxLustreResult, DataSyncError> CreateLocationFsxLustreOutcome;
      typedef Aws::Utils::Outcome<CreateLocationFsxOntapResult, DataSyncError> CreateLocationFsxOntapOutcome;
      typedef Aws::Utils::Outcome<CreateLocationFsxOpenZfsResult, DataSyncError> CreateLocationFsxOpenZfsOutcome;
      typedef Aws::Utils::Outcome<CreateLocationFsxWindowsResult, DataSyncError> CreateLocationFsxWindowsOutcome;
      typedef Aws::Utils::Outcome<CreateLocationHdfsResult, DataSyncError> CreateLocationHdfsOutcome;
      typedef Aws::Utils::Outcome<CreateLocationNfsResult, DataSyncError> CreateLocationNfsOutcome;
      typedef Aws::Utils::Outcome<CreateLocationObjectStorageResult, DataSyncError> CreateLocationObjectStorageOutcome;
      typedef Aws::Utils::Outcome<CreateLocationS3Result, DataSyncError> CreateLocationS3Outcome;
      typedef Aws::Utils::Outcome<CreateLocationSmbResult, DataSyncError> CreateLocationSmbOutcome;
      typedef Aws::Utils::Outcome<CreateTaskResult, DataSyncError> CreateTaskOutcome;
      typedef Aws::Utils::Outcome<DeleteAgentResult, DataSyncError> DeleteAgentOutcome;
      typedef Aws::Utils::Outcome<DeleteLocationResult, DataSyncError> DeleteLocationOutcome;
      typedef Aws::Utils::Outcome<DeleteTaskResult, DataSyncError> DeleteTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeAgentResult, DataSyncError> DescribeAgentOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationEfsResult, DataSyncError> DescribeLocationEfsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationFsxLustreResult, DataSyncError> DescribeLocationFsxLustreOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationFsxOntapResult, DataSyncError> DescribeLocationFsxOntapOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationFsxOpenZfsResult, DataSyncError> DescribeLocationFsxOpenZfsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationFsxWindowsResult, DataSyncError> DescribeLocationFsxWindowsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationHdfsResult, DataSyncError> DescribeLocationHdfsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationNfsResult, DataSyncError> DescribeLocationNfsOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationObjectStorageResult, DataSyncError> DescribeLocationObjectStorageOutcome;
      typedef Aws::Utils::Outcome<DescribeLocationS3Result, DataSyncError> DescribeLocationS3Outcome;
      typedef Aws::Utils::Outcome<DescribeLocationSmbResult, DataSyncError> DescribeLocationSmbOutcome;
      typedef Aws::Utils::Outcome<DescribeTaskResult, DataSyncError> DescribeTaskOutcome;
      typedef Aws::Utils::Outcome<DescribeTaskExecutionResult, DataSyncError> DescribeTaskExecutionOutcome;
      typedef Aws::Utils::Outcome<ListAgentsResult, DataSyncError> ListAgentsOutcome;
      typedef Aws::Utils::Outcome<ListLocationsResult, DataSyncError> ListLocationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, DataSyncError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTaskExecutionsResult, DataSyncError> ListTaskExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListTasksResult, DataSyncError> ListTasksOutcome;
      typedef Aws::Utils::Outcome<StartTaskExecutionResult, DataSyncError> StartTaskExecutionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, DataSyncError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, DataSyncError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAgentResult, DataSyncError> UpdateAgentOutcome;
      typedef Aws::Utils::Outcome<UpdateLocationHdfsResult, DataSyncError> UpdateLocationHdfsOutcome;
      typedef Aws::Utils::Outcome<UpdateLocationNfsResult, DataSyncError> UpdateLocationNfsOutcome;
      typedef Aws::Utils::Outcome<UpdateLocationObjectStorageResult, DataSyncError> UpdateLocationObjectStorageOutcome;
      typedef Aws::Utils::Outcome<UpdateLocationSmbResult, DataSyncError> UpdateLocationSmbOutcome;
      typedef Aws::Utils::Outcome<UpdateTaskResult, DataSyncError> UpdateTaskOutcome;
      typedef Aws::Utils::Outcome<UpdateTaskExecutionResult, DataSyncError> UpdateTaskExecutionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelTaskExecutionOutcome> CancelTaskExecutionOutcomeCallable;
      typedef std::future<CreateAgentOutcome> CreateAgentOutcomeCallable;
      typedef std::future<CreateLocationEfsOutcome> CreateLocationEfsOutcomeCallable;
      typedef std::future<CreateLocationFsxLustreOutcome> CreateLocationFsxLustreOutcomeCallable;
      typedef std::future<CreateLocationFsxOntapOutcome> CreateLocationFsxOntapOutcomeCallable;
      typedef std::future<CreateLocationFsxOpenZfsOutcome> CreateLocationFsxOpenZfsOutcomeCallable;
      typedef std::future<CreateLocationFsxWindowsOutcome> CreateLocationFsxWindowsOutcomeCallable;
      typedef std::future<CreateLocationHdfsOutcome> CreateLocationHdfsOutcomeCallable;
      typedef std::future<CreateLocationNfsOutcome> CreateLocationNfsOutcomeCallable;
      typedef std::future<CreateLocationObjectStorageOutcome> CreateLocationObjectStorageOutcomeCallable;
      typedef std::future<CreateLocationS3Outcome> CreateLocationS3OutcomeCallable;
      typedef std::future<CreateLocationSmbOutcome> CreateLocationSmbOutcomeCallable;
      typedef std::future<CreateTaskOutcome> CreateTaskOutcomeCallable;
      typedef std::future<DeleteAgentOutcome> DeleteAgentOutcomeCallable;
      typedef std::future<DeleteLocationOutcome> DeleteLocationOutcomeCallable;
      typedef std::future<DeleteTaskOutcome> DeleteTaskOutcomeCallable;
      typedef std::future<DescribeAgentOutcome> DescribeAgentOutcomeCallable;
      typedef std::future<DescribeLocationEfsOutcome> DescribeLocationEfsOutcomeCallable;
      typedef std::future<DescribeLocationFsxLustreOutcome> DescribeLocationFsxLustreOutcomeCallable;
      typedef std::future<DescribeLocationFsxOntapOutcome> DescribeLocationFsxOntapOutcomeCallable;
      typedef std::future<DescribeLocationFsxOpenZfsOutcome> DescribeLocationFsxOpenZfsOutcomeCallable;
      typedef std::future<DescribeLocationFsxWindowsOutcome> DescribeLocationFsxWindowsOutcomeCallable;
      typedef std::future<DescribeLocationHdfsOutcome> DescribeLocationHdfsOutcomeCallable;
      typedef std::future<DescribeLocationNfsOutcome> DescribeLocationNfsOutcomeCallable;
      typedef std::future<DescribeLocationObjectStorageOutcome> DescribeLocationObjectStorageOutcomeCallable;
      typedef std::future<DescribeLocationS3Outcome> DescribeLocationS3OutcomeCallable;
      typedef std::future<DescribeLocationSmbOutcome> DescribeLocationSmbOutcomeCallable;
      typedef std::future<DescribeTaskOutcome> DescribeTaskOutcomeCallable;
      typedef std::future<DescribeTaskExecutionOutcome> DescribeTaskExecutionOutcomeCallable;
      typedef std::future<ListAgentsOutcome> ListAgentsOutcomeCallable;
      typedef std::future<ListLocationsOutcome> ListLocationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTaskExecutionsOutcome> ListTaskExecutionsOutcomeCallable;
      typedef std::future<ListTasksOutcome> ListTasksOutcomeCallable;
      typedef std::future<StartTaskExecutionOutcome> StartTaskExecutionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAgentOutcome> UpdateAgentOutcomeCallable;
      typedef std::future<UpdateLocationHdfsOutcome> UpdateLocationHdfsOutcomeCallable;
      typedef std::future<UpdateLocationNfsOutcome> UpdateLocationNfsOutcomeCallable;
      typedef std::future<UpdateLocationObjectStorageOutcome> UpdateLocationObjectStorageOutcomeCallable;
      typedef std::future<UpdateLocationSmbOutcome> UpdateLocationSmbOutcomeCallable;
      typedef std::future<UpdateTaskOutcome> UpdateTaskOutcomeCallable;
      typedef std::future<UpdateTaskExecutionOutcome> UpdateTaskExecutionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class DataSyncClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const DataSyncClient*, const Model::CancelTaskExecutionRequest&, const Model::CancelTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateAgentRequest&, const Model::CreateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationEfsRequest&, const Model::CreateLocationEfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationEfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationFsxLustreRequest&, const Model::CreateLocationFsxLustreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationFsxLustreResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationFsxOntapRequest&, const Model::CreateLocationFsxOntapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationFsxOntapResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationFsxOpenZfsRequest&, const Model::CreateLocationFsxOpenZfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationFsxOpenZfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationFsxWindowsRequest&, const Model::CreateLocationFsxWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationFsxWindowsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationHdfsRequest&, const Model::CreateLocationHdfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationHdfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationNfsRequest&, const Model::CreateLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationObjectStorageRequest&, const Model::CreateLocationObjectStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationObjectStorageResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationS3Request&, const Model::CreateLocationS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationS3ResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateLocationSmbRequest&, const Model::CreateLocationSmbOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLocationSmbResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::CreateTaskRequest&, const Model::CreateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteAgentRequest&, const Model::DeleteAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteLocationRequest&, const Model::DeleteLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLocationResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DeleteTaskRequest&, const Model::DeleteTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeAgentRequest&, const Model::DescribeAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationEfsRequest&, const Model::DescribeLocationEfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationEfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationFsxLustreRequest&, const Model::DescribeLocationFsxLustreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationFsxLustreResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationFsxOntapRequest&, const Model::DescribeLocationFsxOntapOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationFsxOntapResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationFsxOpenZfsRequest&, const Model::DescribeLocationFsxOpenZfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationFsxOpenZfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationFsxWindowsRequest&, const Model::DescribeLocationFsxWindowsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationFsxWindowsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationHdfsRequest&, const Model::DescribeLocationHdfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationHdfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationNfsRequest&, const Model::DescribeLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationObjectStorageRequest&, const Model::DescribeLocationObjectStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationObjectStorageResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationS3Request&, const Model::DescribeLocationS3Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationS3ResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeLocationSmbRequest&, const Model::DescribeLocationSmbOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLocationSmbResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeTaskRequest&, const Model::DescribeTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::DescribeTaskExecutionRequest&, const Model::DescribeTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListAgentsRequest&, const Model::ListAgentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAgentsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListLocationsRequest&, const Model::ListLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLocationsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListTaskExecutionsRequest&, const Model::ListTaskExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaskExecutionsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::ListTasksRequest&, const Model::ListTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTasksResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::StartTaskExecutionRequest&, const Model::StartTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTaskExecutionResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateAgentRequest&, const Model::UpdateAgentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAgentResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationHdfsRequest&, const Model::UpdateLocationHdfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationHdfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationNfsRequest&, const Model::UpdateLocationNfsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationNfsResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationObjectStorageRequest&, const Model::UpdateLocationObjectStorageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationObjectStorageResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateLocationSmbRequest&, const Model::UpdateLocationSmbOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLocationSmbResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateTaskRequest&, const Model::UpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskResponseReceivedHandler;
    typedef std::function<void(const DataSyncClient*, const Model::UpdateTaskExecutionRequest&, const Model::UpdateTaskExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTaskExecutionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace DataSync
} // namespace Aws
