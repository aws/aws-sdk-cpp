/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/LakeFormationServiceClientModel.h>

namespace Aws
{
namespace LakeFormation
{
  /**
   * <fullname>Lake Formation</fullname> <p>Defines the public endpoint for the Lake
   * Formation service.</p>
   */
  class AWS_LAKEFORMATION_API LakeFormationClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LakeFormationClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::LakeFormation::LakeFormationClientConfiguration& clientConfiguration = Aws::LakeFormation::LakeFormationClientConfiguration(),
                            std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider = Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider = Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG),
                            const Aws::LakeFormation::LakeFormationClientConfiguration& clientConfiguration = Aws::LakeFormation::LakeFormationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LakeFormationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider = Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG),
                            const Aws::LakeFormation::LakeFormationClientConfiguration& clientConfiguration = Aws::LakeFormation::LakeFormationClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LakeFormationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LakeFormationClient();

        /**
         * <p>Attaches one or more LF-tags to an existing resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AddLFTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddLFTagsToResourceOutcome AddLFTagsToResource(const Model::AddLFTagsToResourceRequest& request) const;

        /**
         * A Callable wrapper for AddLFTagsToResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddLFTagsToResourceOutcomeCallable AddLFTagsToResourceCallable(const Model::AddLFTagsToResourceRequest& request) const;

        /**
         * An Async wrapper for AddLFTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddLFTagsToResourceAsync(const Model::AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a caller to assume an IAM role decorated as the SAML user specified in
         * the SAML assertion included in the request. This decoration allows Lake
         * Formation to enforce access policies against the SAML users and groups. This API
         * operation requires SAML federation setup in the caller’s account as it can only
         * be called with valid SAML assertions. Lake Formation does not scope down the
         * permission of the assumed role. All permissions attached to the role via the
         * SAML federation setup will be included in the role session. </p> <p> This
         * decorated role is expected to access data in Amazon S3 by getting temporary
         * access from Lake Formation which is authorized via the virtual API
         * <code>GetDataAccess</code>. Therefore, all SAML roles that can be assumed via
         * <code>AssumeDecoratedRoleWithSAML</code> must at a minimum include
         * <code>lakeformation:GetDataAccess</code> in their role policies. A typical IAM
         * policy attached to such a role would look as follows: </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AssumeDecoratedRoleWithSAML">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeDecoratedRoleWithSAMLOutcome AssumeDecoratedRoleWithSAML(const Model::AssumeDecoratedRoleWithSAMLRequest& request) const;

        /**
         * A Callable wrapper for AssumeDecoratedRoleWithSAML that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssumeDecoratedRoleWithSAMLOutcomeCallable AssumeDecoratedRoleWithSAMLCallable(const Model::AssumeDecoratedRoleWithSAMLRequest& request) const;

        /**
         * An Async wrapper for AssumeDecoratedRoleWithSAML that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssumeDecoratedRoleWithSAMLAsync(const Model::AssumeDecoratedRoleWithSAMLRequest& request, const AssumeDecoratedRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Batch operation to grant permissions to the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchGrantPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGrantPermissionsOutcome BatchGrantPermissions(const Model::BatchGrantPermissionsRequest& request) const;

        /**
         * A Callable wrapper for BatchGrantPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGrantPermissionsOutcomeCallable BatchGrantPermissionsCallable(const Model::BatchGrantPermissionsRequest& request) const;

        /**
         * An Async wrapper for BatchGrantPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGrantPermissionsAsync(const Model::BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Batch operation to revoke permissions from the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchRevokePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchRevokePermissionsOutcome BatchRevokePermissions(const Model::BatchRevokePermissionsRequest& request) const;

        /**
         * A Callable wrapper for BatchRevokePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchRevokePermissionsOutcomeCallable BatchRevokePermissionsCallable(const Model::BatchRevokePermissionsRequest& request) const;

        /**
         * An Async wrapper for BatchRevokePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchRevokePermissionsAsync(const Model::BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to cancel the specified transaction. Returns an exception if the
         * transaction was previously committed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CancelTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTransactionOutcome CancelTransaction(const Model::CancelTransactionRequest& request) const;

        /**
         * A Callable wrapper for CancelTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelTransactionOutcomeCallable CancelTransactionCallable(const Model::CancelTransactionRequest& request) const;

        /**
         * An Async wrapper for CancelTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelTransactionAsync(const Model::CancelTransactionRequest& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to commit the specified transaction. Returns an exception if the
         * transaction was previously aborted. This API action is idempotent if called
         * multiple times for the same transaction.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CommitTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::CommitTransactionOutcome CommitTransaction(const Model::CommitTransactionRequest& request) const;

        /**
         * A Callable wrapper for CommitTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CommitTransactionOutcomeCallable CommitTransactionCallable(const Model::CommitTransactionRequest& request) const;

        /**
         * An Async wrapper for CommitTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CommitTransactionAsync(const Model::CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a data cell filter to allow one to grant access to certain columns on
         * certain rows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataCellsFilterOutcome CreateDataCellsFilter(const Model::CreateDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for CreateDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataCellsFilterOutcomeCallable CreateDataCellsFilterCallable(const Model::CreateDataCellsFilterRequest& request) const;

        /**
         * An Async wrapper for CreateDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataCellsFilterAsync(const Model::CreateDataCellsFilterRequest& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an LF-tag with the specified name and values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLFTagOutcome CreateLFTag(const Model::CreateLFTagRequest& request) const;

        /**
         * A Callable wrapper for CreateLFTag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLFTagOutcomeCallable CreateLFTagCallable(const Model::CreateLFTagRequest& request) const;

        /**
         * An Async wrapper for CreateLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLFTagAsync(const Model::CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a data cell filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataCellsFilterOutcome DeleteDataCellsFilter(const Model::DeleteDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataCellsFilterOutcomeCallable DeleteDataCellsFilterCallable(const Model::DeleteDataCellsFilterRequest& request) const;

        /**
         * An Async wrapper for DeleteDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataCellsFilterAsync(const Model::DeleteDataCellsFilterRequest& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified LF-tag given a key name. If the input parameter tag key
         * was not found, then the operation will throw an exception. When you delete an
         * LF-tag, the <code>LFTagPolicy</code> attached to the LF-tag becomes invalid. If
         * the deleted LF-tag was still assigned to any resource, the tag policy attach to
         * the deleted LF-tag will no longer be applied to the resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLFTagOutcome DeleteLFTag(const Model::DeleteLFTagRequest& request) const;

        /**
         * A Callable wrapper for DeleteLFTag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLFTagOutcomeCallable DeleteLFTagCallable(const Model::DeleteLFTagRequest& request) const;

        /**
         * An Async wrapper for DeleteLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLFTagAsync(const Model::DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>For a specific governed table, provides a list of Amazon S3 objects that will
         * be written during the current transaction and that can be automatically deleted
         * if the transaction is canceled. Without this call, no Amazon S3 objects are
         * automatically deleted when a transaction cancels. </p> <p> The Glue ETL library
         * function <code>write_dynamic_frame.from_catalog()</code> includes an option to
         * automatically call <code>DeleteObjectsOnCancel</code> before writes. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/transactions-data-operations.html#rolling-back-writes">Rolling
         * Back Amazon S3 Writes</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteObjectsOnCancel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteObjectsOnCancelOutcome DeleteObjectsOnCancel(const Model::DeleteObjectsOnCancelRequest& request) const;

        /**
         * A Callable wrapper for DeleteObjectsOnCancel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteObjectsOnCancelOutcomeCallable DeleteObjectsOnCancelCallable(const Model::DeleteObjectsOnCancelRequest& request) const;

        /**
         * An Async wrapper for DeleteObjectsOnCancel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteObjectsOnCancelAsync(const Model::DeleteObjectsOnCancelRequest& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters the resource as managed by the Data Catalog.</p> <p>When you
         * deregister a path, Lake Formation removes the path from the inline policy
         * attached to your service-linked role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeregisterResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterResourceOutcome DeregisterResource(const Model::DeregisterResourceRequest& request) const;

        /**
         * A Callable wrapper for DeregisterResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterResourceOutcomeCallable DeregisterResourceCallable(const Model::DeregisterResourceRequest& request) const;

        /**
         * An Async wrapper for DeregisterResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterResourceAsync(const Model::DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the current data access role for the given resource registered in
         * Lake Formation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceOutcomeCallable DescribeResourceCallable(const Model::DescribeResourceRequest& request) const;

        /**
         * An Async wrapper for DescribeResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceAsync(const Model::DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the details of a single transaction.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransactionOutcome DescribeTransaction(const Model::DescribeTransactionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTransactionOutcomeCallable DescribeTransactionCallable(const Model::DescribeTransactionRequest& request) const;

        /**
         * An Async wrapper for DescribeTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTransactionAsync(const Model::DescribeTransactionRequest& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Indicates to the service that the specified transaction is still active and
         * should not be treated as idle and aborted.</p> <p>Write transactions that remain
         * idle for a long period are automatically aborted unless explicitly
         * extended.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ExtendTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExtendTransactionOutcome ExtendTransaction(const Model::ExtendTransactionRequest& request) const;

        /**
         * A Callable wrapper for ExtendTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExtendTransactionOutcomeCallable ExtendTransactionCallable(const Model::ExtendTransactionRequest& request) const;

        /**
         * An Async wrapper for ExtendTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExtendTransactionAsync(const Model::ExtendTransactionRequest& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the list of the data lake administrators of a Lake
         * Formation-managed data lake. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetDataLakeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeSettingsOutcome GetDataLakeSettings(const Model::GetDataLakeSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetDataLakeSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataLakeSettingsOutcomeCallable GetDataLakeSettingsCallable(const Model::GetDataLakeSettingsRequest& request) const;

        /**
         * An Async wrapper for GetDataLakeSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataLakeSettingsAsync(const Model::GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the Lake Formation permissions for a specified table or database
         * resource located at a path in Amazon S3.
         * <code>GetEffectivePermissionsForPath</code> will not return databases and tables
         * if the catalog is encrypted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetEffectivePermissionsForPath">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEffectivePermissionsForPathOutcome GetEffectivePermissionsForPath(const Model::GetEffectivePermissionsForPathRequest& request) const;

        /**
         * A Callable wrapper for GetEffectivePermissionsForPath that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEffectivePermissionsForPathOutcomeCallable GetEffectivePermissionsForPathCallable(const Model::GetEffectivePermissionsForPathRequest& request) const;

        /**
         * An Async wrapper for GetEffectivePermissionsForPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEffectivePermissionsForPathAsync(const Model::GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an LF-tag definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLFTagOutcome GetLFTag(const Model::GetLFTagRequest& request) const;

        /**
         * A Callable wrapper for GetLFTag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLFTagOutcomeCallable GetLFTagCallable(const Model::GetLFTagRequest& request) const;

        /**
         * An Async wrapper for GetLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLFTagAsync(const Model::GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the state of a query previously submitted. Clients are expected to
         * poll <code>GetQueryState</code> to monitor the current state of the planning
         * before retrieving the work units. A query state is only visible to the principal
         * that made the initial call to <code>StartQueryPlanning</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetQueryState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryStateOutcome GetQueryState(const Model::GetQueryStateRequest& request) const;

        /**
         * A Callable wrapper for GetQueryState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryStateOutcomeCallable GetQueryStateCallable(const Model::GetQueryStateRequest& request) const;

        /**
         * An Async wrapper for GetQueryState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryStateAsync(const Model::GetQueryStateRequest& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves statistics on the planning and execution of a query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetQueryStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryStatisticsOutcome GetQueryStatistics(const Model::GetQueryStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryStatisticsOutcomeCallable GetQueryStatisticsCallable(const Model::GetQueryStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetQueryStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryStatisticsAsync(const Model::GetQueryStatisticsRequest& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the LF-tags applied to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetResourceLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceLFTagsOutcome GetResourceLFTags(const Model::GetResourceLFTagsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceLFTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceLFTagsOutcomeCallable GetResourceLFTagsCallable(const Model::GetResourceLFTagsRequest& request) const;

        /**
         * An Async wrapper for GetResourceLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceLFTagsAsync(const Model::GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the set of Amazon S3 objects that make up the specified governed
         * table. A transaction ID or timestamp can be specified for time-travel
         * queries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetTableObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableObjectsOutcome GetTableObjects(const Model::GetTableObjectsRequest& request) const;

        /**
         * A Callable wrapper for GetTableObjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableObjectsOutcomeCallable GetTableObjectsCallable(const Model::GetTableObjectsRequest& request) const;

        /**
         * An Async wrapper for GetTableObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableObjectsAsync(const Model::GetTableObjectsRequest& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API is identical to <code>GetTemporaryTableCredentials</code> except
         * that this is used when the target Data Catalog resource is of type Partition.
         * Lake Formation restricts the permission of the vended credentials with the same
         * scope down policy which restricts access to a single Amazon S3
         * prefix.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetTemporaryGluePartitionCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemporaryGluePartitionCredentialsOutcome GetTemporaryGluePartitionCredentials(const Model::GetTemporaryGluePartitionCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetTemporaryGluePartitionCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemporaryGluePartitionCredentialsOutcomeCallable GetTemporaryGluePartitionCredentialsCallable(const Model::GetTemporaryGluePartitionCredentialsRequest& request) const;

        /**
         * An Async wrapper for GetTemporaryGluePartitionCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemporaryGluePartitionCredentialsAsync(const Model::GetTemporaryGluePartitionCredentialsRequest& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows a caller in a secure environment to assume a role with permission to
         * access Amazon S3. In order to vend such credentials, Lake Formation assumes the
         * role associated with a registered location, for example an Amazon S3 bucket,
         * with a scope down policy which restricts the access to a single
         * prefix.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetTemporaryGlueTableCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemporaryGlueTableCredentialsOutcome GetTemporaryGlueTableCredentials(const Model::GetTemporaryGlueTableCredentialsRequest& request) const;

        /**
         * A Callable wrapper for GetTemporaryGlueTableCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTemporaryGlueTableCredentialsOutcomeCallable GetTemporaryGlueTableCredentialsCallable(const Model::GetTemporaryGlueTableCredentialsRequest& request) const;

        /**
         * An Async wrapper for GetTemporaryGlueTableCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTemporaryGlueTableCredentialsAsync(const Model::GetTemporaryGlueTableCredentialsRequest& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the work units resulting from the query. Work units can be executed
         * in any order and in parallel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnitResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkUnitResultsOutcome GetWorkUnitResults(const Model::GetWorkUnitResultsRequest& request) const;

        /**
         * A Callable wrapper for GetWorkUnitResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkUnitResultsOutcomeCallable GetWorkUnitResultsCallable(const Model::GetWorkUnitResultsRequest& request) const;

        /**
         * An Async wrapper for GetWorkUnitResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkUnitResultsAsync(const Model::GetWorkUnitResultsRequest& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the work units generated by the <code>StartQueryPlanning</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkUnitsOutcome GetWorkUnits(const Model::GetWorkUnitsRequest& request) const;

        /**
         * A Callable wrapper for GetWorkUnits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkUnitsOutcomeCallable GetWorkUnitsCallable(const Model::GetWorkUnitsRequest& request) const;

        /**
         * An Async wrapper for GetWorkUnits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkUnitsAsync(const Model::GetWorkUnitsRequest& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Grants permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p> <p>For
         * information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GrantPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantPermissionsOutcome GrantPermissions(const Model::GrantPermissionsRequest& request) const;

        /**
         * A Callable wrapper for GrantPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GrantPermissionsOutcomeCallable GrantPermissionsCallable(const Model::GrantPermissionsRequest& request) const;

        /**
         * An Async wrapper for GrantPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GrantPermissionsAsync(const Model::GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the data cell filters on a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataCellsFilterOutcome ListDataCellsFilter(const Model::ListDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for ListDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataCellsFilterOutcomeCallable ListDataCellsFilterCallable(const Model::ListDataCellsFilterRequest& request) const;

        /**
         * An Async wrapper for ListDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataCellsFilterAsync(const Model::ListDataCellsFilterRequest& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists LF-tags that the requester has permission to view. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLFTagsOutcome ListLFTags(const Model::ListLFTagsRequest& request) const;

        /**
         * A Callable wrapper for ListLFTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLFTagsOutcomeCallable ListLFTagsCallable(const Model::ListLFTagsRequest& request) const;

        /**
         * An Async wrapper for ListLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLFTagsAsync(const Model::ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of the principal permissions on the resource, filtered by the
         * permissions of the caller. For example, if you are granted an ALTER permission,
         * you are able to see only the principal permissions for ALTER.</p> <p>This
         * operation returns only those permissions that have been explicitly granted.</p>
         * <p>For information about permissions, see <a
         * href="https://docs-aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const Model::ListPermissionsRequest& request) const;

        /**
         * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPermissionsAsync(const Model::ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resources registered to be managed by the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourcesOutcomeCallable ListResourcesCallable(const Model::ListResourcesRequest& request) const;

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourcesAsync(const Model::ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the configuration of all storage optimizers associated with a
         * specified table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListTableStorageOptimizers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableStorageOptimizersOutcome ListTableStorageOptimizers(const Model::ListTableStorageOptimizersRequest& request) const;

        /**
         * A Callable wrapper for ListTableStorageOptimizers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTableStorageOptimizersOutcomeCallable ListTableStorageOptimizersCallable(const Model::ListTableStorageOptimizersRequest& request) const;

        /**
         * An Async wrapper for ListTableStorageOptimizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTableStorageOptimizersAsync(const Model::ListTableStorageOptimizersRequest& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns metadata about transactions and their status. To prevent the response
         * from growing indefinitely, only uncommitted transactions and those available for
         * time-travel queries are returned.</p> <p>This operation can help you identify
         * uncommitted transactions or to get information about transactions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListTransactions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTransactionsOutcome ListTransactions(const Model::ListTransactionsRequest& request) const;

        /**
         * A Callable wrapper for ListTransactions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTransactionsOutcomeCallable ListTransactionsCallable(const Model::ListTransactionsRequest& request) const;

        /**
         * An Async wrapper for ListTransactions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTransactionsAsync(const Model::ListTransactionsRequest& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the list of data lake administrators who have admin privileges on all
         * resources managed by Lake Formation. For more information on admin privileges,
         * see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/lake-formation-permissions.html">Granting
         * Lake Formation Permissions</a>.</p> <p>This API replaces the current list of
         * data lake admins with the new list being passed. To add an admin, fetch the
         * current list and add the new admin to that list and pass that list in this
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/PutDataLakeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataLakeSettingsOutcome PutDataLakeSettings(const Model::PutDataLakeSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutDataLakeSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutDataLakeSettingsOutcomeCallable PutDataLakeSettingsCallable(const Model::PutDataLakeSettingsRequest& request) const;

        /**
         * An Async wrapper for PutDataLakeSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDataLakeSettingsAsync(const Model::PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers the resource as managed by the Data Catalog.</p> <p>To add or
         * update data, Lake Formation needs read/write access to the chosen Amazon S3
         * path. Choose a role that you know has permission to do this, or choose the
         * AWSServiceRoleForLakeFormationDataAccess service-linked role. When you register
         * the first Amazon S3 path, the service-linked role and a new inline policy are
         * created on your behalf. Lake Formation adds the first path to the inline policy
         * and attaches it to the service-linked role. When you register subsequent paths,
         * Lake Formation adds the path to the existing policy.</p> <p>The following
         * request registers a new location and gives Lake Formation permission to use the
         * service-linked role to access that location.</p> <p> <code>ResourceArn =
         * arn:aws:s3:::my-bucket UseServiceLinkedRole = true</code> </p> <p>If
         * <code>UseServiceLinkedRole</code> is not set to true, you must provide or set
         * the <code>RoleArn</code>:</p> <p>
         * <code>arn:aws:iam::12345:role/my-data-access-role</code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RegisterResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterResourceOutcome RegisterResource(const Model::RegisterResourceRequest& request) const;

        /**
         * A Callable wrapper for RegisterResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterResourceOutcomeCallable RegisterResourceCallable(const Model::RegisterResourceRequest& request) const;

        /**
         * An Async wrapper for RegisterResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterResourceAsync(const Model::RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an LF-tag from the resource. Only database, table, or
         * tableWithColumns resource are allowed. To tag columns, use the column inclusion
         * list in <code>tableWithColumns</code> to specify column input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RemoveLFTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveLFTagsFromResourceOutcome RemoveLFTagsFromResource(const Model::RemoveLFTagsFromResourceRequest& request) const;

        /**
         * A Callable wrapper for RemoveLFTagsFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveLFTagsFromResourceOutcomeCallable RemoveLFTagsFromResourceCallable(const Model::RemoveLFTagsFromResourceRequest& request) const;

        /**
         * An Async wrapper for RemoveLFTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveLFTagsFromResourceAsync(const Model::RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Revokes permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RevokePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokePermissionsOutcome RevokePermissions(const Model::RevokePermissionsRequest& request) const;

        /**
         * A Callable wrapper for RevokePermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RevokePermissionsOutcomeCallable RevokePermissionsCallable(const Model::RevokePermissionsRequest& request) const;

        /**
         * An Async wrapper for RevokePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RevokePermissionsAsync(const Model::RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation allows a search on <code>DATABASE</code> resources by
         * <code>TagCondition</code>. This operation is used by admins who want to grant
         * user permissions on certain <code>TagConditions</code>. Before making a grant,
         * the admin can use <code>SearchDatabasesByTags</code> to find all resources where
         * the given <code>TagConditions</code> are valid to verify whether the returned
         * resources can be shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchDatabasesByLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchDatabasesByLFTagsOutcome SearchDatabasesByLFTags(const Model::SearchDatabasesByLFTagsRequest& request) const;

        /**
         * A Callable wrapper for SearchDatabasesByLFTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchDatabasesByLFTagsOutcomeCallable SearchDatabasesByLFTagsCallable(const Model::SearchDatabasesByLFTagsRequest& request) const;

        /**
         * An Async wrapper for SearchDatabasesByLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchDatabasesByLFTagsAsync(const Model::SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation allows a search on <code>TABLE</code> resources by
         * <code>LFTag</code>s. This will be used by admins who want to grant user
         * permissions on certain LF-tags. Before making a grant, the admin can use
         * <code>SearchTablesByLFTags</code> to find all resources where the given
         * <code>LFTag</code>s are valid to verify whether the returned resources can be
         * shared.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/SearchTablesByLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTablesByLFTagsOutcome SearchTablesByLFTags(const Model::SearchTablesByLFTagsRequest& request) const;

        /**
         * A Callable wrapper for SearchTablesByLFTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchTablesByLFTagsOutcomeCallable SearchTablesByLFTagsCallable(const Model::SearchTablesByLFTagsRequest& request) const;

        /**
         * An Async wrapper for SearchTablesByLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchTablesByLFTagsAsync(const Model::SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Submits a request to process a query statement.</p> <p>This operation
         * generates work units that can be retrieved with the <code>GetWorkUnits</code>
         * operation as soon as the query state is WORKUNITS_AVAILABLE or
         * FINISHED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/StartQueryPlanning">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryPlanningOutcome StartQueryPlanning(const Model::StartQueryPlanningRequest& request) const;

        /**
         * A Callable wrapper for StartQueryPlanning that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartQueryPlanningOutcomeCallable StartQueryPlanningCallable(const Model::StartQueryPlanningRequest& request) const;

        /**
         * An Async wrapper for StartQueryPlanning that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartQueryPlanningAsync(const Model::StartQueryPlanningRequest& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new transaction and returns its transaction ID. Transaction IDs are
         * opaque objects that you can use to identify a transaction.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/StartTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTransactionOutcome StartTransaction(const Model::StartTransactionRequest& request) const;

        /**
         * A Callable wrapper for StartTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartTransactionOutcomeCallable StartTransactionCallable(const Model::StartTransactionRequest& request) const;

        /**
         * An Async wrapper for StartTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTransactionAsync(const Model::StartTransactionRequest& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the list of possible values for the specified LF-tag key. If the
         * LF-tag does not exist, the operation throws an EntityNotFoundException. The
         * values in the delete key values will be deleted from list of possible values. If
         * any value in the delete key values is attached to a resource, then API errors
         * out with a 400 Exception - "Update not allowed". Untag the attribute before
         * deleting the LF-tag key's value. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLFTagOutcome UpdateLFTag(const Model::UpdateLFTagRequest& request) const;

        /**
         * A Callable wrapper for UpdateLFTag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLFTagOutcomeCallable UpdateLFTagCallable(const Model::UpdateLFTagRequest& request) const;

        /**
         * An Async wrapper for UpdateLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLFTagAsync(const Model::UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data access role used for vending access to the given
         * (registered) resource in Lake Formation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const Model::UpdateResourceRequest& request) const;

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceAsync(const Model::UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the manifest of Amazon S3 objects that make up the specified governed
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateTableObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableObjectsOutcome UpdateTableObjects(const Model::UpdateTableObjectsRequest& request) const;

        /**
         * A Callable wrapper for UpdateTableObjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableObjectsOutcomeCallable UpdateTableObjectsCallable(const Model::UpdateTableObjectsRequest& request) const;

        /**
         * An Async wrapper for UpdateTableObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableObjectsAsync(const Model::UpdateTableObjectsRequest& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of the storage optimizers for a
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateTableStorageOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableStorageOptimizerOutcome UpdateTableStorageOptimizer(const Model::UpdateTableStorageOptimizerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTableStorageOptimizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableStorageOptimizerOutcomeCallable UpdateTableStorageOptimizerCallable(const Model::UpdateTableStorageOptimizerRequest& request) const;

        /**
         * An Async wrapper for UpdateTableStorageOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableStorageOptimizerAsync(const Model::UpdateTableStorageOptimizerRequest& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LakeFormationEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LakeFormationClient>;
      void init(const LakeFormationClientConfiguration& clientConfiguration);

      LakeFormationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LakeFormationEndpointProviderBase> m_endpointProvider;
  };

} // namespace LakeFormation
} // namespace Aws
