/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/athena/AthenaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AthenaClient header */
#include <aws/athena/model/BatchGetNamedQueryResult.h>
#include <aws/athena/model/BatchGetPreparedStatementResult.h>
#include <aws/athena/model/BatchGetQueryExecutionResult.h>
#include <aws/athena/model/CreateDataCatalogResult.h>
#include <aws/athena/model/CreateNamedQueryResult.h>
#include <aws/athena/model/CreatePreparedStatementResult.h>
#include <aws/athena/model/CreateWorkGroupResult.h>
#include <aws/athena/model/DeleteDataCatalogResult.h>
#include <aws/athena/model/DeleteNamedQueryResult.h>
#include <aws/athena/model/DeletePreparedStatementResult.h>
#include <aws/athena/model/DeleteWorkGroupResult.h>
#include <aws/athena/model/GetDataCatalogResult.h>
#include <aws/athena/model/GetDatabaseResult.h>
#include <aws/athena/model/GetNamedQueryResult.h>
#include <aws/athena/model/GetPreparedStatementResult.h>
#include <aws/athena/model/GetQueryExecutionResult.h>
#include <aws/athena/model/GetQueryResultsResult.h>
#include <aws/athena/model/GetQueryRuntimeStatisticsResult.h>
#include <aws/athena/model/GetTableMetadataResult.h>
#include <aws/athena/model/GetWorkGroupResult.h>
#include <aws/athena/model/ListDataCatalogsResult.h>
#include <aws/athena/model/ListDatabasesResult.h>
#include <aws/athena/model/ListEngineVersionsResult.h>
#include <aws/athena/model/ListNamedQueriesResult.h>
#include <aws/athena/model/ListPreparedStatementsResult.h>
#include <aws/athena/model/ListQueryExecutionsResult.h>
#include <aws/athena/model/ListTableMetadataResult.h>
#include <aws/athena/model/ListTagsForResourceResult.h>
#include <aws/athena/model/ListWorkGroupsResult.h>
#include <aws/athena/model/StartQueryExecutionResult.h>
#include <aws/athena/model/StopQueryExecutionResult.h>
#include <aws/athena/model/TagResourceResult.h>
#include <aws/athena/model/UntagResourceResult.h>
#include <aws/athena/model/UpdateDataCatalogResult.h>
#include <aws/athena/model/UpdateNamedQueryResult.h>
#include <aws/athena/model/UpdatePreparedStatementResult.h>
#include <aws/athena/model/UpdateWorkGroupResult.h>
/* End of service model headers required in AthenaClient header */

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

  namespace Athena
  {
    namespace Model
    {
      /* Service model forward declarations required in AthenaClient header */
      class BatchGetNamedQueryRequest;
      class BatchGetPreparedStatementRequest;
      class BatchGetQueryExecutionRequest;
      class CreateDataCatalogRequest;
      class CreateNamedQueryRequest;
      class CreatePreparedStatementRequest;
      class CreateWorkGroupRequest;
      class DeleteDataCatalogRequest;
      class DeleteNamedQueryRequest;
      class DeletePreparedStatementRequest;
      class DeleteWorkGroupRequest;
      class GetDataCatalogRequest;
      class GetDatabaseRequest;
      class GetNamedQueryRequest;
      class GetPreparedStatementRequest;
      class GetQueryExecutionRequest;
      class GetQueryResultsRequest;
      class GetQueryRuntimeStatisticsRequest;
      class GetTableMetadataRequest;
      class GetWorkGroupRequest;
      class ListDataCatalogsRequest;
      class ListDatabasesRequest;
      class ListEngineVersionsRequest;
      class ListNamedQueriesRequest;
      class ListPreparedStatementsRequest;
      class ListQueryExecutionsRequest;
      class ListTableMetadataRequest;
      class ListTagsForResourceRequest;
      class ListWorkGroupsRequest;
      class StartQueryExecutionRequest;
      class StopQueryExecutionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDataCatalogRequest;
      class UpdateNamedQueryRequest;
      class UpdatePreparedStatementRequest;
      class UpdateWorkGroupRequest;
      /* End of service model forward declarations required in AthenaClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetNamedQueryResult, Aws::Athena::AthenaError> BatchGetNamedQueryOutcome;
      typedef Aws::Utils::Outcome<BatchGetPreparedStatementResult, Aws::Athena::AthenaError> BatchGetPreparedStatementOutcome;
      typedef Aws::Utils::Outcome<BatchGetQueryExecutionResult, Aws::Athena::AthenaError> BatchGetQueryExecutionOutcome;
      typedef Aws::Utils::Outcome<CreateDataCatalogResult, Aws::Athena::AthenaError> CreateDataCatalogOutcome;
      typedef Aws::Utils::Outcome<CreateNamedQueryResult, Aws::Athena::AthenaError> CreateNamedQueryOutcome;
      typedef Aws::Utils::Outcome<CreatePreparedStatementResult, Aws::Athena::AthenaError> CreatePreparedStatementOutcome;
      typedef Aws::Utils::Outcome<CreateWorkGroupResult, Aws::Athena::AthenaError> CreateWorkGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDataCatalogResult, Aws::Athena::AthenaError> DeleteDataCatalogOutcome;
      typedef Aws::Utils::Outcome<DeleteNamedQueryResult, Aws::Athena::AthenaError> DeleteNamedQueryOutcome;
      typedef Aws::Utils::Outcome<DeletePreparedStatementResult, Aws::Athena::AthenaError> DeletePreparedStatementOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkGroupResult, Aws::Athena::AthenaError> DeleteWorkGroupOutcome;
      typedef Aws::Utils::Outcome<GetDataCatalogResult, Aws::Athena::AthenaError> GetDataCatalogOutcome;
      typedef Aws::Utils::Outcome<GetDatabaseResult, Aws::Athena::AthenaError> GetDatabaseOutcome;
      typedef Aws::Utils::Outcome<GetNamedQueryResult, Aws::Athena::AthenaError> GetNamedQueryOutcome;
      typedef Aws::Utils::Outcome<GetPreparedStatementResult, Aws::Athena::AthenaError> GetPreparedStatementOutcome;
      typedef Aws::Utils::Outcome<GetQueryExecutionResult, Aws::Athena::AthenaError> GetQueryExecutionOutcome;
      typedef Aws::Utils::Outcome<GetQueryResultsResult, Aws::Athena::AthenaError> GetQueryResultsOutcome;
      typedef Aws::Utils::Outcome<GetQueryRuntimeStatisticsResult, Aws::Athena::AthenaError> GetQueryRuntimeStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetTableMetadataResult, Aws::Athena::AthenaError> GetTableMetadataOutcome;
      typedef Aws::Utils::Outcome<GetWorkGroupResult, Aws::Athena::AthenaError> GetWorkGroupOutcome;
      typedef Aws::Utils::Outcome<ListDataCatalogsResult, Aws::Athena::AthenaError> ListDataCatalogsOutcome;
      typedef Aws::Utils::Outcome<ListDatabasesResult, Aws::Athena::AthenaError> ListDatabasesOutcome;
      typedef Aws::Utils::Outcome<ListEngineVersionsResult, Aws::Athena::AthenaError> ListEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<ListNamedQueriesResult, Aws::Athena::AthenaError> ListNamedQueriesOutcome;
      typedef Aws::Utils::Outcome<ListPreparedStatementsResult, Aws::Athena::AthenaError> ListPreparedStatementsOutcome;
      typedef Aws::Utils::Outcome<ListQueryExecutionsResult, Aws::Athena::AthenaError> ListQueryExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListTableMetadataResult, Aws::Athena::AthenaError> ListTableMetadataOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Athena::AthenaError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListWorkGroupsResult, Aws::Athena::AthenaError> ListWorkGroupsOutcome;
      typedef Aws::Utils::Outcome<StartQueryExecutionResult, Aws::Athena::AthenaError> StartQueryExecutionOutcome;
      typedef Aws::Utils::Outcome<StopQueryExecutionResult, Aws::Athena::AthenaError> StopQueryExecutionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Aws::Athena::AthenaError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Athena::AthenaError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDataCatalogResult, Aws::Athena::AthenaError> UpdateDataCatalogOutcome;
      typedef Aws::Utils::Outcome<UpdateNamedQueryResult, Aws::Athena::AthenaError> UpdateNamedQueryOutcome;
      typedef Aws::Utils::Outcome<UpdatePreparedStatementResult, Aws::Athena::AthenaError> UpdatePreparedStatementOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkGroupResult, Aws::Athena::AthenaError> UpdateWorkGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetNamedQueryOutcome> BatchGetNamedQueryOutcomeCallable;
      typedef std::future<BatchGetPreparedStatementOutcome> BatchGetPreparedStatementOutcomeCallable;
      typedef std::future<BatchGetQueryExecutionOutcome> BatchGetQueryExecutionOutcomeCallable;
      typedef std::future<CreateDataCatalogOutcome> CreateDataCatalogOutcomeCallable;
      typedef std::future<CreateNamedQueryOutcome> CreateNamedQueryOutcomeCallable;
      typedef std::future<CreatePreparedStatementOutcome> CreatePreparedStatementOutcomeCallable;
      typedef std::future<CreateWorkGroupOutcome> CreateWorkGroupOutcomeCallable;
      typedef std::future<DeleteDataCatalogOutcome> DeleteDataCatalogOutcomeCallable;
      typedef std::future<DeleteNamedQueryOutcome> DeleteNamedQueryOutcomeCallable;
      typedef std::future<DeletePreparedStatementOutcome> DeletePreparedStatementOutcomeCallable;
      typedef std::future<DeleteWorkGroupOutcome> DeleteWorkGroupOutcomeCallable;
      typedef std::future<GetDataCatalogOutcome> GetDataCatalogOutcomeCallable;
      typedef std::future<GetDatabaseOutcome> GetDatabaseOutcomeCallable;
      typedef std::future<GetNamedQueryOutcome> GetNamedQueryOutcomeCallable;
      typedef std::future<GetPreparedStatementOutcome> GetPreparedStatementOutcomeCallable;
      typedef std::future<GetQueryExecutionOutcome> GetQueryExecutionOutcomeCallable;
      typedef std::future<GetQueryResultsOutcome> GetQueryResultsOutcomeCallable;
      typedef std::future<GetQueryRuntimeStatisticsOutcome> GetQueryRuntimeStatisticsOutcomeCallable;
      typedef std::future<GetTableMetadataOutcome> GetTableMetadataOutcomeCallable;
      typedef std::future<GetWorkGroupOutcome> GetWorkGroupOutcomeCallable;
      typedef std::future<ListDataCatalogsOutcome> ListDataCatalogsOutcomeCallable;
      typedef std::future<ListDatabasesOutcome> ListDatabasesOutcomeCallable;
      typedef std::future<ListEngineVersionsOutcome> ListEngineVersionsOutcomeCallable;
      typedef std::future<ListNamedQueriesOutcome> ListNamedQueriesOutcomeCallable;
      typedef std::future<ListPreparedStatementsOutcome> ListPreparedStatementsOutcomeCallable;
      typedef std::future<ListQueryExecutionsOutcome> ListQueryExecutionsOutcomeCallable;
      typedef std::future<ListTableMetadataOutcome> ListTableMetadataOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListWorkGroupsOutcome> ListWorkGroupsOutcomeCallable;
      typedef std::future<StartQueryExecutionOutcome> StartQueryExecutionOutcomeCallable;
      typedef std::future<StopQueryExecutionOutcome> StopQueryExecutionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDataCatalogOutcome> UpdateDataCatalogOutcomeCallable;
      typedef std::future<UpdateNamedQueryOutcome> UpdateNamedQueryOutcomeCallable;
      typedef std::future<UpdatePreparedStatementOutcome> UpdatePreparedStatementOutcomeCallable;
      typedef std::future<UpdateWorkGroupOutcome> UpdateWorkGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AthenaClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AthenaClient*, const Model::BatchGetNamedQueryRequest&, const Model::BatchGetNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::BatchGetPreparedStatementRequest&, const Model::BatchGetPreparedStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetPreparedStatementResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::BatchGetQueryExecutionRequest&, const Model::BatchGetQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::CreateDataCatalogRequest&, const Model::CreateDataCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataCatalogResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::CreateNamedQueryRequest&, const Model::CreateNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::CreatePreparedStatementRequest&, const Model::CreatePreparedStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePreparedStatementResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::CreateWorkGroupRequest&, const Model::CreateWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkGroupResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::DeleteDataCatalogRequest&, const Model::DeleteDataCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataCatalogResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::DeleteNamedQueryRequest&, const Model::DeleteNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::DeletePreparedStatementRequest&, const Model::DeletePreparedStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePreparedStatementResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::DeleteWorkGroupRequest&, const Model::DeleteWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkGroupResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetDataCatalogRequest&, const Model::GetDataCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataCatalogResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetDatabaseRequest&, const Model::GetDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDatabaseResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetNamedQueryRequest&, const Model::GetNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetPreparedStatementRequest&, const Model::GetPreparedStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPreparedStatementResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetQueryExecutionRequest&, const Model::GetQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetQueryResultsRequest&, const Model::GetQueryResultsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryResultsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetQueryRuntimeStatisticsRequest&, const Model::GetQueryRuntimeStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryRuntimeStatisticsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetTableMetadataRequest&, const Model::GetTableMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableMetadataResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::GetWorkGroupRequest&, const Model::GetWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkGroupResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListDataCatalogsRequest&, const Model::ListDataCatalogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataCatalogsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListDatabasesRequest&, const Model::ListDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDatabasesResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListEngineVersionsRequest&, const Model::ListEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListNamedQueriesRequest&, const Model::ListNamedQueriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamedQueriesResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListPreparedStatementsRequest&, const Model::ListPreparedStatementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPreparedStatementsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListQueryExecutionsRequest&, const Model::ListQueryExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQueryExecutionsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListTableMetadataRequest&, const Model::ListTableMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableMetadataResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::ListWorkGroupsRequest&, const Model::ListWorkGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkGroupsResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::StartQueryExecutionRequest&, const Model::StartQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::StopQueryExecutionRequest&, const Model::StopQueryExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopQueryExecutionResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UpdateDataCatalogRequest&, const Model::UpdateDataCatalogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataCatalogResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UpdateNamedQueryRequest&, const Model::UpdateNamedQueryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNamedQueryResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UpdatePreparedStatementRequest&, const Model::UpdatePreparedStatementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePreparedStatementResponseReceivedHandler;
    typedef std::function<void(const AthenaClient*, const Model::UpdateWorkGroupRequest&, const Model::UpdateWorkGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Athena
} // namespace Aws
