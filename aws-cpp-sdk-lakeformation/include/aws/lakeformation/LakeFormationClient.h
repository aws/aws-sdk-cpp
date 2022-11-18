/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lakeformation/LakeFormationServiceClientModel.h>
#include <aws/lakeformation/LakeFormationLegacyAsyncMacros.h>

namespace Aws
{
namespace LakeFormation
{
  /**
   * <fullname>Lake Formation</fullname> <p>Defines the public endpoint for the Lake
   * Formation service.</p>
   */
  class AWS_LAKEFORMATION_API LakeFormationClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Attaches one or more LF-tags to an existing resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/AddLFTagsToResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddLFTagsToResourceOutcome AddLFTagsToResource(const Model::AddLFTagsToResourceRequest& request) const;


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
         * <p>Batch operation to grant permissions to the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchGrantPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGrantPermissionsOutcome BatchGrantPermissions(const Model::BatchGrantPermissionsRequest& request) const;


        /**
         * <p>Batch operation to revoke permissions from the principal.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/BatchRevokePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchRevokePermissionsOutcome BatchRevokePermissions(const Model::BatchRevokePermissionsRequest& request) const;


        /**
         * <p>Attempts to cancel the specified transaction. Returns an exception if the
         * transaction was previously committed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CancelTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelTransactionOutcome CancelTransaction(const Model::CancelTransactionRequest& request) const;


        /**
         * <p>Attempts to commit the specified transaction. Returns an exception if the
         * transaction was previously aborted. This API action is idempotent if called
         * multiple times for the same transaction.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CommitTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::CommitTransactionOutcome CommitTransaction(const Model::CommitTransactionRequest& request) const;


        /**
         * <p>Creates a data cell filter to allow one to grant access to certain columns on
         * certain rows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataCellsFilterOutcome CreateDataCellsFilter(const Model::CreateDataCellsFilterRequest& request) const;


        /**
         * <p>Creates an LF-tag with the specified name and values.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLFTagOutcome CreateLFTag(const Model::CreateLFTagRequest& request) const;


        /**
         * <p>Deletes a data cell filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataCellsFilterOutcome DeleteDataCellsFilter(const Model::DeleteDataCellsFilterRequest& request) const;


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
         * <p>Deregisters the resource as managed by the Data Catalog.</p> <p>When you
         * deregister a path, Lake Formation removes the path from the inline policy
         * attached to your service-linked role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeregisterResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterResourceOutcome DeregisterResource(const Model::DeregisterResourceRequest& request) const;


        /**
         * <p>Retrieves the current data access role for the given resource registered in
         * Lake Formation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceOutcome DescribeResource(const Model::DescribeResourceRequest& request) const;


        /**
         * <p>Returns the details of a single transaction.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransactionOutcome DescribeTransaction(const Model::DescribeTransactionRequest& request) const;


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
         * <p>Retrieves the list of the data lake administrators of a Lake
         * Formation-managed data lake. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetDataLakeSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataLakeSettingsOutcome GetDataLakeSettings(const Model::GetDataLakeSettingsRequest& request) const;


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
         * <p>Returns an LF-tag definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLFTagOutcome GetLFTag(const Model::GetLFTagRequest& request) const;


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
         * <p>Retrieves statistics on the planning and execution of a query.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetQueryStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryStatisticsOutcome GetQueryStatistics(const Model::GetQueryStatisticsRequest& request) const;


        /**
         * <p>Returns the LF-tags applied to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetResourceLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceLFTagsOutcome GetResourceLFTags(const Model::GetResourceLFTagsRequest& request) const;


        /**
         * <p>Returns the set of Amazon S3 objects that make up the specified governed
         * table. A transaction ID or timestamp can be specified for time-travel
         * queries.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetTableObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableObjectsOutcome GetTableObjects(const Model::GetTableObjectsRequest& request) const;


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
         * <p>Returns the work units resulting from the query. Work units can be executed
         * in any order and in parallel. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnitResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkUnitResultsOutcome GetWorkUnitResults(const Model::GetWorkUnitResultsRequest& request) const;


        /**
         * <p>Retrieves the work units generated by the <code>StartQueryPlanning</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetWorkUnits">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkUnitsOutcome GetWorkUnits(const Model::GetWorkUnitsRequest& request) const;


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
         * <p>Lists all the data cell filters on a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataCellsFilterOutcome ListDataCellsFilter(const Model::ListDataCellsFilterRequest& request) const;


        /**
         * <p>Lists LF-tags that the requester has permission to view. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLFTagsOutcome ListLFTags(const Model::ListLFTagsRequest& request) const;


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
         * <p>Lists the resources registered to be managed by the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesOutcome ListResources(const Model::ListResourcesRequest& request) const;


        /**
         * <p>Returns the configuration of all storage optimizers associated with a
         * specified table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListTableStorageOptimizers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableStorageOptimizersOutcome ListTableStorageOptimizers(const Model::ListTableStorageOptimizersRequest& request) const;


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
         * <p>Removes an LF-tag from the resource. Only database, table, or
         * tableWithColumns resource are allowed. To tag columns, use the column inclusion
         * list in <code>tableWithColumns</code> to specify column input.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RemoveLFTagsFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveLFTagsFromResourceOutcome RemoveLFTagsFromResource(const Model::RemoveLFTagsFromResourceRequest& request) const;


        /**
         * <p>Revokes permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/RevokePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::RevokePermissionsOutcome RevokePermissions(const Model::RevokePermissionsRequest& request) const;


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
         * <p>Submits a request to process a query statement.</p> <p>This operation
         * generates work units that can be retrieved with the <code>GetWorkUnits</code>
         * operation as soon as the query state is WORKUNITS_AVAILABLE or
         * FINISHED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/StartQueryPlanning">AWS
         * API Reference</a></p>
         */
        virtual Model::StartQueryPlanningOutcome StartQueryPlanning(const Model::StartQueryPlanningRequest& request) const;


        /**
         * <p>Starts a new transaction and returns its transaction ID. Transaction IDs are
         * opaque objects that you can use to identify a transaction.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/StartTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTransactionOutcome StartTransaction(const Model::StartTransactionRequest& request) const;


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
         * <p>Updates the data access role used for vending access to the given
         * (registered) resource in Lake Formation. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceOutcome UpdateResource(const Model::UpdateResourceRequest& request) const;


        /**
         * <p>Updates the manifest of Amazon S3 objects that make up the specified governed
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateTableObjects">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableObjectsOutcome UpdateTableObjects(const Model::UpdateTableObjectsRequest& request) const;


        /**
         * <p>Updates the configuration of the storage optimizers for a
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateTableStorageOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableStorageOptimizerOutcome UpdateTableStorageOptimizer(const Model::UpdateTableStorageOptimizerRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LakeFormationEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const LakeFormationClientConfiguration& clientConfiguration);

      LakeFormationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LakeFormationEndpointProviderBase> m_endpointProvider;
  };

} // namespace LakeFormation
} // namespace Aws
