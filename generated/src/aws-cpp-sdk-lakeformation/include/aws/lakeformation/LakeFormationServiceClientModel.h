/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lakeformation/LakeFormationErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lakeformation/LakeFormationEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LakeFormationClient header */
#include <aws/lakeformation/model/AddLFTagsToResourceResult.h>
#include <aws/lakeformation/model/AssumeDecoratedRoleWithSAMLResult.h>
#include <aws/lakeformation/model/BatchGrantPermissionsResult.h>
#include <aws/lakeformation/model/BatchRevokePermissionsResult.h>
#include <aws/lakeformation/model/CancelTransactionResult.h>
#include <aws/lakeformation/model/CommitTransactionResult.h>
#include <aws/lakeformation/model/CreateDataCellsFilterResult.h>
#include <aws/lakeformation/model/CreateLFTagResult.h>
#include <aws/lakeformation/model/DeleteDataCellsFilterResult.h>
#include <aws/lakeformation/model/DeleteLFTagResult.h>
#include <aws/lakeformation/model/DeleteObjectsOnCancelResult.h>
#include <aws/lakeformation/model/DeregisterResourceResult.h>
#include <aws/lakeformation/model/DescribeResourceResult.h>
#include <aws/lakeformation/model/DescribeTransactionResult.h>
#include <aws/lakeformation/model/ExtendTransactionResult.h>
#include <aws/lakeformation/model/GetDataLakeSettingsResult.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathResult.h>
#include <aws/lakeformation/model/GetLFTagResult.h>
#include <aws/lakeformation/model/GetQueryStateResult.h>
#include <aws/lakeformation/model/GetQueryStatisticsResult.h>
#include <aws/lakeformation/model/GetResourceLFTagsResult.h>
#include <aws/lakeformation/model/GetTableObjectsResult.h>
#include <aws/lakeformation/model/GetTemporaryGluePartitionCredentialsResult.h>
#include <aws/lakeformation/model/GetTemporaryGlueTableCredentialsResult.h>
#include <aws/lakeformation/model/GetWorkUnitResultsResult.h>
#include <aws/lakeformation/model/GetWorkUnitsResult.h>
#include <aws/lakeformation/model/GrantPermissionsResult.h>
#include <aws/lakeformation/model/ListDataCellsFilterResult.h>
#include <aws/lakeformation/model/ListLFTagsResult.h>
#include <aws/lakeformation/model/ListPermissionsResult.h>
#include <aws/lakeformation/model/ListResourcesResult.h>
#include <aws/lakeformation/model/ListTableStorageOptimizersResult.h>
#include <aws/lakeformation/model/ListTransactionsResult.h>
#include <aws/lakeformation/model/PutDataLakeSettingsResult.h>
#include <aws/lakeformation/model/RegisterResourceResult.h>
#include <aws/lakeformation/model/RemoveLFTagsFromResourceResult.h>
#include <aws/lakeformation/model/RevokePermissionsResult.h>
#include <aws/lakeformation/model/SearchDatabasesByLFTagsResult.h>
#include <aws/lakeformation/model/SearchTablesByLFTagsResult.h>
#include <aws/lakeformation/model/StartQueryPlanningResult.h>
#include <aws/lakeformation/model/StartTransactionResult.h>
#include <aws/lakeformation/model/UpdateLFTagResult.h>
#include <aws/lakeformation/model/UpdateResourceResult.h>
#include <aws/lakeformation/model/UpdateTableObjectsResult.h>
#include <aws/lakeformation/model/UpdateTableStorageOptimizerResult.h>
/* End of service model headers required in LakeFormationClient header */

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

  namespace LakeFormation
  {
    using LakeFormationClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LakeFormationEndpointProviderBase = Aws::LakeFormation::Endpoint::LakeFormationEndpointProviderBase;
    using LakeFormationEndpointProvider = Aws::LakeFormation::Endpoint::LakeFormationEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LakeFormationClient header */
      class AddLFTagsToResourceRequest;
      class AssumeDecoratedRoleWithSAMLRequest;
      class BatchGrantPermissionsRequest;
      class BatchRevokePermissionsRequest;
      class CancelTransactionRequest;
      class CommitTransactionRequest;
      class CreateDataCellsFilterRequest;
      class CreateLFTagRequest;
      class DeleteDataCellsFilterRequest;
      class DeleteLFTagRequest;
      class DeleteObjectsOnCancelRequest;
      class DeregisterResourceRequest;
      class DescribeResourceRequest;
      class DescribeTransactionRequest;
      class ExtendTransactionRequest;
      class GetDataLakeSettingsRequest;
      class GetEffectivePermissionsForPathRequest;
      class GetLFTagRequest;
      class GetQueryStateRequest;
      class GetQueryStatisticsRequest;
      class GetResourceLFTagsRequest;
      class GetTableObjectsRequest;
      class GetTemporaryGluePartitionCredentialsRequest;
      class GetTemporaryGlueTableCredentialsRequest;
      class GetWorkUnitResultsRequest;
      class GetWorkUnitsRequest;
      class GrantPermissionsRequest;
      class ListDataCellsFilterRequest;
      class ListLFTagsRequest;
      class ListPermissionsRequest;
      class ListResourcesRequest;
      class ListTableStorageOptimizersRequest;
      class ListTransactionsRequest;
      class PutDataLakeSettingsRequest;
      class RegisterResourceRequest;
      class RemoveLFTagsFromResourceRequest;
      class RevokePermissionsRequest;
      class SearchDatabasesByLFTagsRequest;
      class SearchTablesByLFTagsRequest;
      class StartQueryPlanningRequest;
      class StartTransactionRequest;
      class UpdateLFTagRequest;
      class UpdateResourceRequest;
      class UpdateTableObjectsRequest;
      class UpdateTableStorageOptimizerRequest;
      /* End of service model forward declarations required in LakeFormationClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddLFTagsToResourceResult, LakeFormationError> AddLFTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<AssumeDecoratedRoleWithSAMLResult, LakeFormationError> AssumeDecoratedRoleWithSAMLOutcome;
      typedef Aws::Utils::Outcome<BatchGrantPermissionsResult, LakeFormationError> BatchGrantPermissionsOutcome;
      typedef Aws::Utils::Outcome<BatchRevokePermissionsResult, LakeFormationError> BatchRevokePermissionsOutcome;
      typedef Aws::Utils::Outcome<CancelTransactionResult, LakeFormationError> CancelTransactionOutcome;
      typedef Aws::Utils::Outcome<CommitTransactionResult, LakeFormationError> CommitTransactionOutcome;
      typedef Aws::Utils::Outcome<CreateDataCellsFilterResult, LakeFormationError> CreateDataCellsFilterOutcome;
      typedef Aws::Utils::Outcome<CreateLFTagResult, LakeFormationError> CreateLFTagOutcome;
      typedef Aws::Utils::Outcome<DeleteDataCellsFilterResult, LakeFormationError> DeleteDataCellsFilterOutcome;
      typedef Aws::Utils::Outcome<DeleteLFTagResult, LakeFormationError> DeleteLFTagOutcome;
      typedef Aws::Utils::Outcome<DeleteObjectsOnCancelResult, LakeFormationError> DeleteObjectsOnCancelOutcome;
      typedef Aws::Utils::Outcome<DeregisterResourceResult, LakeFormationError> DeregisterResourceOutcome;
      typedef Aws::Utils::Outcome<DescribeResourceResult, LakeFormationError> DescribeResourceOutcome;
      typedef Aws::Utils::Outcome<DescribeTransactionResult, LakeFormationError> DescribeTransactionOutcome;
      typedef Aws::Utils::Outcome<ExtendTransactionResult, LakeFormationError> ExtendTransactionOutcome;
      typedef Aws::Utils::Outcome<GetDataLakeSettingsResult, LakeFormationError> GetDataLakeSettingsOutcome;
      typedef Aws::Utils::Outcome<GetEffectivePermissionsForPathResult, LakeFormationError> GetEffectivePermissionsForPathOutcome;
      typedef Aws::Utils::Outcome<GetLFTagResult, LakeFormationError> GetLFTagOutcome;
      typedef Aws::Utils::Outcome<GetQueryStateResult, LakeFormationError> GetQueryStateOutcome;
      typedef Aws::Utils::Outcome<GetQueryStatisticsResult, LakeFormationError> GetQueryStatisticsOutcome;
      typedef Aws::Utils::Outcome<GetResourceLFTagsResult, LakeFormationError> GetResourceLFTagsOutcome;
      typedef Aws::Utils::Outcome<GetTableObjectsResult, LakeFormationError> GetTableObjectsOutcome;
      typedef Aws::Utils::Outcome<GetTemporaryGluePartitionCredentialsResult, LakeFormationError> GetTemporaryGluePartitionCredentialsOutcome;
      typedef Aws::Utils::Outcome<GetTemporaryGlueTableCredentialsResult, LakeFormationError> GetTemporaryGlueTableCredentialsOutcome;
      typedef Aws::Utils::Outcome<GetWorkUnitResultsResult, LakeFormationError> GetWorkUnitResultsOutcome;
      typedef Aws::Utils::Outcome<GetWorkUnitsResult, LakeFormationError> GetWorkUnitsOutcome;
      typedef Aws::Utils::Outcome<GrantPermissionsResult, LakeFormationError> GrantPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListDataCellsFilterResult, LakeFormationError> ListDataCellsFilterOutcome;
      typedef Aws::Utils::Outcome<ListLFTagsResult, LakeFormationError> ListLFTagsOutcome;
      typedef Aws::Utils::Outcome<ListPermissionsResult, LakeFormationError> ListPermissionsOutcome;
      typedef Aws::Utils::Outcome<ListResourcesResult, LakeFormationError> ListResourcesOutcome;
      typedef Aws::Utils::Outcome<ListTableStorageOptimizersResult, LakeFormationError> ListTableStorageOptimizersOutcome;
      typedef Aws::Utils::Outcome<ListTransactionsResult, LakeFormationError> ListTransactionsOutcome;
      typedef Aws::Utils::Outcome<PutDataLakeSettingsResult, LakeFormationError> PutDataLakeSettingsOutcome;
      typedef Aws::Utils::Outcome<RegisterResourceResult, LakeFormationError> RegisterResourceOutcome;
      typedef Aws::Utils::Outcome<RemoveLFTagsFromResourceResult, LakeFormationError> RemoveLFTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<RevokePermissionsResult, LakeFormationError> RevokePermissionsOutcome;
      typedef Aws::Utils::Outcome<SearchDatabasesByLFTagsResult, LakeFormationError> SearchDatabasesByLFTagsOutcome;
      typedef Aws::Utils::Outcome<SearchTablesByLFTagsResult, LakeFormationError> SearchTablesByLFTagsOutcome;
      typedef Aws::Utils::Outcome<StartQueryPlanningResult, LakeFormationError> StartQueryPlanningOutcome;
      typedef Aws::Utils::Outcome<StartTransactionResult, LakeFormationError> StartTransactionOutcome;
      typedef Aws::Utils::Outcome<UpdateLFTagResult, LakeFormationError> UpdateLFTagOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceResult, LakeFormationError> UpdateResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateTableObjectsResult, LakeFormationError> UpdateTableObjectsOutcome;
      typedef Aws::Utils::Outcome<UpdateTableStorageOptimizerResult, LakeFormationError> UpdateTableStorageOptimizerOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddLFTagsToResourceOutcome> AddLFTagsToResourceOutcomeCallable;
      typedef std::future<AssumeDecoratedRoleWithSAMLOutcome> AssumeDecoratedRoleWithSAMLOutcomeCallable;
      typedef std::future<BatchGrantPermissionsOutcome> BatchGrantPermissionsOutcomeCallable;
      typedef std::future<BatchRevokePermissionsOutcome> BatchRevokePermissionsOutcomeCallable;
      typedef std::future<CancelTransactionOutcome> CancelTransactionOutcomeCallable;
      typedef std::future<CommitTransactionOutcome> CommitTransactionOutcomeCallable;
      typedef std::future<CreateDataCellsFilterOutcome> CreateDataCellsFilterOutcomeCallable;
      typedef std::future<CreateLFTagOutcome> CreateLFTagOutcomeCallable;
      typedef std::future<DeleteDataCellsFilterOutcome> DeleteDataCellsFilterOutcomeCallable;
      typedef std::future<DeleteLFTagOutcome> DeleteLFTagOutcomeCallable;
      typedef std::future<DeleteObjectsOnCancelOutcome> DeleteObjectsOnCancelOutcomeCallable;
      typedef std::future<DeregisterResourceOutcome> DeregisterResourceOutcomeCallable;
      typedef std::future<DescribeResourceOutcome> DescribeResourceOutcomeCallable;
      typedef std::future<DescribeTransactionOutcome> DescribeTransactionOutcomeCallable;
      typedef std::future<ExtendTransactionOutcome> ExtendTransactionOutcomeCallable;
      typedef std::future<GetDataLakeSettingsOutcome> GetDataLakeSettingsOutcomeCallable;
      typedef std::future<GetEffectivePermissionsForPathOutcome> GetEffectivePermissionsForPathOutcomeCallable;
      typedef std::future<GetLFTagOutcome> GetLFTagOutcomeCallable;
      typedef std::future<GetQueryStateOutcome> GetQueryStateOutcomeCallable;
      typedef std::future<GetQueryStatisticsOutcome> GetQueryStatisticsOutcomeCallable;
      typedef std::future<GetResourceLFTagsOutcome> GetResourceLFTagsOutcomeCallable;
      typedef std::future<GetTableObjectsOutcome> GetTableObjectsOutcomeCallable;
      typedef std::future<GetTemporaryGluePartitionCredentialsOutcome> GetTemporaryGluePartitionCredentialsOutcomeCallable;
      typedef std::future<GetTemporaryGlueTableCredentialsOutcome> GetTemporaryGlueTableCredentialsOutcomeCallable;
      typedef std::future<GetWorkUnitResultsOutcome> GetWorkUnitResultsOutcomeCallable;
      typedef std::future<GetWorkUnitsOutcome> GetWorkUnitsOutcomeCallable;
      typedef std::future<GrantPermissionsOutcome> GrantPermissionsOutcomeCallable;
      typedef std::future<ListDataCellsFilterOutcome> ListDataCellsFilterOutcomeCallable;
      typedef std::future<ListLFTagsOutcome> ListLFTagsOutcomeCallable;
      typedef std::future<ListPermissionsOutcome> ListPermissionsOutcomeCallable;
      typedef std::future<ListResourcesOutcome> ListResourcesOutcomeCallable;
      typedef std::future<ListTableStorageOptimizersOutcome> ListTableStorageOptimizersOutcomeCallable;
      typedef std::future<ListTransactionsOutcome> ListTransactionsOutcomeCallable;
      typedef std::future<PutDataLakeSettingsOutcome> PutDataLakeSettingsOutcomeCallable;
      typedef std::future<RegisterResourceOutcome> RegisterResourceOutcomeCallable;
      typedef std::future<RemoveLFTagsFromResourceOutcome> RemoveLFTagsFromResourceOutcomeCallable;
      typedef std::future<RevokePermissionsOutcome> RevokePermissionsOutcomeCallable;
      typedef std::future<SearchDatabasesByLFTagsOutcome> SearchDatabasesByLFTagsOutcomeCallable;
      typedef std::future<SearchTablesByLFTagsOutcome> SearchTablesByLFTagsOutcomeCallable;
      typedef std::future<StartQueryPlanningOutcome> StartQueryPlanningOutcomeCallable;
      typedef std::future<StartTransactionOutcome> StartTransactionOutcomeCallable;
      typedef std::future<UpdateLFTagOutcome> UpdateLFTagOutcomeCallable;
      typedef std::future<UpdateResourceOutcome> UpdateResourceOutcomeCallable;
      typedef std::future<UpdateTableObjectsOutcome> UpdateTableObjectsOutcomeCallable;
      typedef std::future<UpdateTableStorageOptimizerOutcome> UpdateTableStorageOptimizerOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LakeFormationClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const LakeFormationClient*, const Model::AddLFTagsToResourceRequest&, const Model::AddLFTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddLFTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::AssumeDecoratedRoleWithSAMLRequest&, const Model::AssumeDecoratedRoleWithSAMLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssumeDecoratedRoleWithSAMLResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::BatchGrantPermissionsRequest&, const Model::BatchGrantPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGrantPermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::BatchRevokePermissionsRequest&, const Model::BatchRevokePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchRevokePermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::CancelTransactionRequest&, const Model::CancelTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelTransactionResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::CommitTransactionRequest&, const Model::CommitTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CommitTransactionResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::CreateDataCellsFilterRequest&, const Model::CreateDataCellsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataCellsFilterResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::CreateLFTagRequest&, const Model::CreateLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DeleteDataCellsFilterRequest&, const Model::DeleteDataCellsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataCellsFilterResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DeleteLFTagRequest&, const Model::DeleteLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DeleteObjectsOnCancelRequest&, const Model::DeleteObjectsOnCancelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectsOnCancelResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DeregisterResourceRequest&, const Model::DeregisterResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DescribeResourceRequest&, const Model::DescribeResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::DescribeTransactionRequest&, const Model::DescribeTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTransactionResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ExtendTransactionRequest&, const Model::ExtendTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExtendTransactionResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetDataLakeSettingsRequest&, const Model::GetDataLakeSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataLakeSettingsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetEffectivePermissionsForPathRequest&, const Model::GetEffectivePermissionsForPathOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEffectivePermissionsForPathResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetLFTagRequest&, const Model::GetLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetQueryStateRequest&, const Model::GetQueryStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryStateResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetQueryStatisticsRequest&, const Model::GetQueryStatisticsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetQueryStatisticsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetResourceLFTagsRequest&, const Model::GetResourceLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetTableObjectsRequest&, const Model::GetTableObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableObjectsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetTemporaryGluePartitionCredentialsRequest&, const Model::GetTemporaryGluePartitionCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemporaryGluePartitionCredentialsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetTemporaryGlueTableCredentialsRequest&, const Model::GetTemporaryGlueTableCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemporaryGlueTableCredentialsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetWorkUnitResultsRequest&, Model::GetWorkUnitResultsOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkUnitResultsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GetWorkUnitsRequest&, const Model::GetWorkUnitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkUnitsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::GrantPermissionsRequest&, const Model::GrantPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantPermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListDataCellsFilterRequest&, const Model::ListDataCellsFilterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataCellsFilterResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListLFTagsRequest&, const Model::ListLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListPermissionsRequest&, const Model::ListPermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListResourcesRequest&, const Model::ListResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListTableStorageOptimizersRequest&, const Model::ListTableStorageOptimizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableStorageOptimizersResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::ListTransactionsRequest&, const Model::ListTransactionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTransactionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::PutDataLakeSettingsRequest&, const Model::PutDataLakeSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDataLakeSettingsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::RegisterResourceRequest&, const Model::RegisterResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::RemoveLFTagsFromResourceRequest&, const Model::RemoveLFTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveLFTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::RevokePermissionsRequest&, const Model::RevokePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokePermissionsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::SearchDatabasesByLFTagsRequest&, const Model::SearchDatabasesByLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchDatabasesByLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::SearchTablesByLFTagsRequest&, const Model::SearchTablesByLFTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchTablesByLFTagsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::StartQueryPlanningRequest&, const Model::StartQueryPlanningOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartQueryPlanningResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::StartTransactionRequest&, const Model::StartTransactionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartTransactionResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::UpdateLFTagRequest&, const Model::UpdateLFTagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLFTagResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::UpdateResourceRequest&, const Model::UpdateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::UpdateTableObjectsRequest&, const Model::UpdateTableObjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableObjectsResponseReceivedHandler;
    typedef std::function<void(const LakeFormationClient*, const Model::UpdateTableStorageOptimizerRequest&, const Model::UpdateTableStorageOptimizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTableStorageOptimizerResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace LakeFormation
} // namespace Aws
