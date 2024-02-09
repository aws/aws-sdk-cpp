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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LakeFormationClientConfiguration ClientConfigurationType;
      typedef LakeFormationEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::LakeFormation::LakeFormationClientConfiguration& clientConfiguration = Aws::LakeFormation::LakeFormationClientConfiguration(),
                            std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LakeFormationClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::LakeFormation::LakeFormationClientConfiguration& clientConfiguration = Aws::LakeFormation::LakeFormationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LakeFormationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AddLFTagsToResourceRequestT = Model::AddLFTagsToResourceRequest>
        Model::AddLFTagsToResourceOutcomeCallable AddLFTagsToResourceCallable(const AddLFTagsToResourceRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::AddLFTagsToResource, request);
        }

        /**
         * An Async wrapper for AddLFTagsToResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddLFTagsToResourceRequestT = Model::AddLFTagsToResourceRequest>
        void AddLFTagsToResourceAsync(const AddLFTagsToResourceRequestT& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::AddLFTagsToResource, request, handler, context);
        }

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
        template<typename AssumeDecoratedRoleWithSAMLRequestT = Model::AssumeDecoratedRoleWithSAMLRequest>
        Model::AssumeDecoratedRoleWithSAMLOutcomeCallable AssumeDecoratedRoleWithSAMLCallable(const AssumeDecoratedRoleWithSAMLRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::AssumeDecoratedRoleWithSAML, request);
        }

        /**
         * An Async wrapper for AssumeDecoratedRoleWithSAML that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeDecoratedRoleWithSAMLRequestT = Model::AssumeDecoratedRoleWithSAMLRequest>
        void AssumeDecoratedRoleWithSAMLAsync(const AssumeDecoratedRoleWithSAMLRequestT& request, const AssumeDecoratedRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::AssumeDecoratedRoleWithSAML, request, handler, context);
        }

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
        template<typename BatchGrantPermissionsRequestT = Model::BatchGrantPermissionsRequest>
        Model::BatchGrantPermissionsOutcomeCallable BatchGrantPermissionsCallable(const BatchGrantPermissionsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::BatchGrantPermissions, request);
        }

        /**
         * An Async wrapper for BatchGrantPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGrantPermissionsRequestT = Model::BatchGrantPermissionsRequest>
        void BatchGrantPermissionsAsync(const BatchGrantPermissionsRequestT& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::BatchGrantPermissions, request, handler, context);
        }

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
        template<typename BatchRevokePermissionsRequestT = Model::BatchRevokePermissionsRequest>
        Model::BatchRevokePermissionsOutcomeCallable BatchRevokePermissionsCallable(const BatchRevokePermissionsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::BatchRevokePermissions, request);
        }

        /**
         * An Async wrapper for BatchRevokePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchRevokePermissionsRequestT = Model::BatchRevokePermissionsRequest>
        void BatchRevokePermissionsAsync(const BatchRevokePermissionsRequestT& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::BatchRevokePermissions, request, handler, context);
        }

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
        template<typename CancelTransactionRequestT = Model::CancelTransactionRequest>
        Model::CancelTransactionOutcomeCallable CancelTransactionCallable(const CancelTransactionRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::CancelTransaction, request);
        }

        /**
         * An Async wrapper for CancelTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelTransactionRequestT = Model::CancelTransactionRequest>
        void CancelTransactionAsync(const CancelTransactionRequestT& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::CancelTransaction, request, handler, context);
        }

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
        template<typename CommitTransactionRequestT = Model::CommitTransactionRequest>
        Model::CommitTransactionOutcomeCallable CommitTransactionCallable(const CommitTransactionRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::CommitTransaction, request);
        }

        /**
         * An Async wrapper for CommitTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CommitTransactionRequestT = Model::CommitTransactionRequest>
        void CommitTransactionAsync(const CommitTransactionRequestT& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::CommitTransaction, request, handler, context);
        }

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
        template<typename CreateDataCellsFilterRequestT = Model::CreateDataCellsFilterRequest>
        Model::CreateDataCellsFilterOutcomeCallable CreateDataCellsFilterCallable(const CreateDataCellsFilterRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::CreateDataCellsFilter, request);
        }

        /**
         * An Async wrapper for CreateDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataCellsFilterRequestT = Model::CreateDataCellsFilterRequest>
        void CreateDataCellsFilterAsync(const CreateDataCellsFilterRequestT& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::CreateDataCellsFilter, request, handler, context);
        }

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
        template<typename CreateLFTagRequestT = Model::CreateLFTagRequest>
        Model::CreateLFTagOutcomeCallable CreateLFTagCallable(const CreateLFTagRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::CreateLFTag, request);
        }

        /**
         * An Async wrapper for CreateLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLFTagRequestT = Model::CreateLFTagRequest>
        void CreateLFTagAsync(const CreateLFTagRequestT& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::CreateLFTag, request, handler, context);
        }

        /**
         * <p>Creates an IAM Identity Center connection with Lake Formation to allow IAM
         * Identity Center users and groups to access Data Catalog resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLakeFormationIdentityCenterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLakeFormationIdentityCenterConfigurationOutcome CreateLakeFormationIdentityCenterConfiguration(const Model::CreateLakeFormationIdentityCenterConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateLakeFormationIdentityCenterConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLakeFormationIdentityCenterConfigurationRequestT = Model::CreateLakeFormationIdentityCenterConfigurationRequest>
        Model::CreateLakeFormationIdentityCenterConfigurationOutcomeCallable CreateLakeFormationIdentityCenterConfigurationCallable(const CreateLakeFormationIdentityCenterConfigurationRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::CreateLakeFormationIdentityCenterConfiguration, request);
        }

        /**
         * An Async wrapper for CreateLakeFormationIdentityCenterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLakeFormationIdentityCenterConfigurationRequestT = Model::CreateLakeFormationIdentityCenterConfigurationRequest>
        void CreateLakeFormationIdentityCenterConfigurationAsync(const CreateLakeFormationIdentityCenterConfigurationRequestT& request, const CreateLakeFormationIdentityCenterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::CreateLakeFormationIdentityCenterConfiguration, request, handler, context);
        }

        /**
         * <p>Enforce Lake Formation permissions for the given databases, tables, and
         * principals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/CreateLakeFormationOptIn">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLakeFormationOptInOutcome CreateLakeFormationOptIn(const Model::CreateLakeFormationOptInRequest& request) const;

        /**
         * A Callable wrapper for CreateLakeFormationOptIn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLakeFormationOptInRequestT = Model::CreateLakeFormationOptInRequest>
        Model::CreateLakeFormationOptInOutcomeCallable CreateLakeFormationOptInCallable(const CreateLakeFormationOptInRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::CreateLakeFormationOptIn, request);
        }

        /**
         * An Async wrapper for CreateLakeFormationOptIn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLakeFormationOptInRequestT = Model::CreateLakeFormationOptInRequest>
        void CreateLakeFormationOptInAsync(const CreateLakeFormationOptInRequestT& request, const CreateLakeFormationOptInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::CreateLakeFormationOptIn, request, handler, context);
        }

        /**
         * <p>Deletes a data cell filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataCellsFilterOutcome DeleteDataCellsFilter(const Model::DeleteDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataCellsFilterRequestT = Model::DeleteDataCellsFilterRequest>
        Model::DeleteDataCellsFilterOutcomeCallable DeleteDataCellsFilterCallable(const DeleteDataCellsFilterRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DeleteDataCellsFilter, request);
        }

        /**
         * An Async wrapper for DeleteDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataCellsFilterRequestT = Model::DeleteDataCellsFilterRequest>
        void DeleteDataCellsFilterAsync(const DeleteDataCellsFilterRequestT& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DeleteDataCellsFilter, request, handler, context);
        }

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
        template<typename DeleteLFTagRequestT = Model::DeleteLFTagRequest>
        Model::DeleteLFTagOutcomeCallable DeleteLFTagCallable(const DeleteLFTagRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DeleteLFTag, request);
        }

        /**
         * An Async wrapper for DeleteLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLFTagRequestT = Model::DeleteLFTagRequest>
        void DeleteLFTagAsync(const DeleteLFTagRequestT& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DeleteLFTag, request, handler, context);
        }

        /**
         * <p>Deletes an IAM Identity Center connection with Lake Formation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteLakeFormationIdentityCenterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLakeFormationIdentityCenterConfigurationOutcome DeleteLakeFormationIdentityCenterConfiguration(const Model::DeleteLakeFormationIdentityCenterConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLakeFormationIdentityCenterConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLakeFormationIdentityCenterConfigurationRequestT = Model::DeleteLakeFormationIdentityCenterConfigurationRequest>
        Model::DeleteLakeFormationIdentityCenterConfigurationOutcomeCallable DeleteLakeFormationIdentityCenterConfigurationCallable(const DeleteLakeFormationIdentityCenterConfigurationRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DeleteLakeFormationIdentityCenterConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteLakeFormationIdentityCenterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLakeFormationIdentityCenterConfigurationRequestT = Model::DeleteLakeFormationIdentityCenterConfigurationRequest>
        void DeleteLakeFormationIdentityCenterConfigurationAsync(const DeleteLakeFormationIdentityCenterConfigurationRequestT& request, const DeleteLakeFormationIdentityCenterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DeleteLakeFormationIdentityCenterConfiguration, request, handler, context);
        }

        /**
         * <p>Remove the Lake Formation permissions enforcement of the given databases,
         * tables, and principals.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DeleteLakeFormationOptIn">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLakeFormationOptInOutcome DeleteLakeFormationOptIn(const Model::DeleteLakeFormationOptInRequest& request) const;

        /**
         * A Callable wrapper for DeleteLakeFormationOptIn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLakeFormationOptInRequestT = Model::DeleteLakeFormationOptInRequest>
        Model::DeleteLakeFormationOptInOutcomeCallable DeleteLakeFormationOptInCallable(const DeleteLakeFormationOptInRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DeleteLakeFormationOptIn, request);
        }

        /**
         * An Async wrapper for DeleteLakeFormationOptIn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLakeFormationOptInRequestT = Model::DeleteLakeFormationOptInRequest>
        void DeleteLakeFormationOptInAsync(const DeleteLakeFormationOptInRequestT& request, const DeleteLakeFormationOptInResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DeleteLakeFormationOptIn, request, handler, context);
        }

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
        template<typename DeleteObjectsOnCancelRequestT = Model::DeleteObjectsOnCancelRequest>
        Model::DeleteObjectsOnCancelOutcomeCallable DeleteObjectsOnCancelCallable(const DeleteObjectsOnCancelRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DeleteObjectsOnCancel, request);
        }

        /**
         * An Async wrapper for DeleteObjectsOnCancel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteObjectsOnCancelRequestT = Model::DeleteObjectsOnCancelRequest>
        void DeleteObjectsOnCancelAsync(const DeleteObjectsOnCancelRequestT& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DeleteObjectsOnCancel, request, handler, context);
        }

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
        template<typename DeregisterResourceRequestT = Model::DeregisterResourceRequest>
        Model::DeregisterResourceOutcomeCallable DeregisterResourceCallable(const DeregisterResourceRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DeregisterResource, request);
        }

        /**
         * An Async wrapper for DeregisterResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterResourceRequestT = Model::DeregisterResourceRequest>
        void DeregisterResourceAsync(const DeregisterResourceRequestT& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DeregisterResource, request, handler, context);
        }

        /**
         * <p>Retrieves the instance ARN and application ARN for the
         * connection.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeLakeFormationIdentityCenterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLakeFormationIdentityCenterConfigurationOutcome DescribeLakeFormationIdentityCenterConfiguration(const Model::DescribeLakeFormationIdentityCenterConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeLakeFormationIdentityCenterConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLakeFormationIdentityCenterConfigurationRequestT = Model::DescribeLakeFormationIdentityCenterConfigurationRequest>
        Model::DescribeLakeFormationIdentityCenterConfigurationOutcomeCallable DescribeLakeFormationIdentityCenterConfigurationCallable(const DescribeLakeFormationIdentityCenterConfigurationRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DescribeLakeFormationIdentityCenterConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeLakeFormationIdentityCenterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLakeFormationIdentityCenterConfigurationRequestT = Model::DescribeLakeFormationIdentityCenterConfigurationRequest>
        void DescribeLakeFormationIdentityCenterConfigurationAsync(const DescribeLakeFormationIdentityCenterConfigurationRequestT& request, const DescribeLakeFormationIdentityCenterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DescribeLakeFormationIdentityCenterConfiguration, request, handler, context);
        }

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
        template<typename DescribeResourceRequestT = Model::DescribeResourceRequest>
        Model::DescribeResourceOutcomeCallable DescribeResourceCallable(const DescribeResourceRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DescribeResource, request);
        }

        /**
         * An Async wrapper for DescribeResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourceRequestT = Model::DescribeResourceRequest>
        void DescribeResourceAsync(const DescribeResourceRequestT& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DescribeResource, request, handler, context);
        }

        /**
         * <p>Returns the details of a single transaction.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/DescribeTransaction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTransactionOutcome DescribeTransaction(const Model::DescribeTransactionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTransaction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTransactionRequestT = Model::DescribeTransactionRequest>
        Model::DescribeTransactionOutcomeCallable DescribeTransactionCallable(const DescribeTransactionRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::DescribeTransaction, request);
        }

        /**
         * An Async wrapper for DescribeTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTransactionRequestT = Model::DescribeTransactionRequest>
        void DescribeTransactionAsync(const DescribeTransactionRequestT& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::DescribeTransaction, request, handler, context);
        }

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
        template<typename ExtendTransactionRequestT = Model::ExtendTransactionRequest>
        Model::ExtendTransactionOutcomeCallable ExtendTransactionCallable(const ExtendTransactionRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ExtendTransaction, request);
        }

        /**
         * An Async wrapper for ExtendTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExtendTransactionRequestT = Model::ExtendTransactionRequest>
        void ExtendTransactionAsync(const ExtendTransactionRequestT& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ExtendTransaction, request, handler, context);
        }

        /**
         * <p>Returns a data cells filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCellsFilterOutcome GetDataCellsFilter(const Model::GetDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for GetDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataCellsFilterRequestT = Model::GetDataCellsFilterRequest>
        Model::GetDataCellsFilterOutcomeCallable GetDataCellsFilterCallable(const GetDataCellsFilterRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetDataCellsFilter, request);
        }

        /**
         * An Async wrapper for GetDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataCellsFilterRequestT = Model::GetDataCellsFilterRequest>
        void GetDataCellsFilterAsync(const GetDataCellsFilterRequestT& request, const GetDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetDataCellsFilter, request, handler, context);
        }

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
        template<typename GetDataLakeSettingsRequestT = Model::GetDataLakeSettingsRequest>
        Model::GetDataLakeSettingsOutcomeCallable GetDataLakeSettingsCallable(const GetDataLakeSettingsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetDataLakeSettings, request);
        }

        /**
         * An Async wrapper for GetDataLakeSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataLakeSettingsRequestT = Model::GetDataLakeSettingsRequest>
        void GetDataLakeSettingsAsync(const GetDataLakeSettingsRequestT& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetDataLakeSettings, request, handler, context);
        }

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
        template<typename GetEffectivePermissionsForPathRequestT = Model::GetEffectivePermissionsForPathRequest>
        Model::GetEffectivePermissionsForPathOutcomeCallable GetEffectivePermissionsForPathCallable(const GetEffectivePermissionsForPathRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetEffectivePermissionsForPath, request);
        }

        /**
         * An Async wrapper for GetEffectivePermissionsForPath that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEffectivePermissionsForPathRequestT = Model::GetEffectivePermissionsForPathRequest>
        void GetEffectivePermissionsForPathAsync(const GetEffectivePermissionsForPathRequestT& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetEffectivePermissionsForPath, request, handler, context);
        }

        /**
         * <p>Returns an LF-tag definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetLFTag">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLFTagOutcome GetLFTag(const Model::GetLFTagRequest& request) const;

        /**
         * A Callable wrapper for GetLFTag that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLFTagRequestT = Model::GetLFTagRequest>
        Model::GetLFTagOutcomeCallable GetLFTagCallable(const GetLFTagRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetLFTag, request);
        }

        /**
         * An Async wrapper for GetLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLFTagRequestT = Model::GetLFTagRequest>
        void GetLFTagAsync(const GetLFTagRequestT& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetLFTag, request, handler, context);
        }

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
        template<typename GetQueryStateRequestT = Model::GetQueryStateRequest>
        Model::GetQueryStateOutcomeCallable GetQueryStateCallable(const GetQueryStateRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetQueryState, request);
        }

        /**
         * An Async wrapper for GetQueryState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryStateRequestT = Model::GetQueryStateRequest>
        void GetQueryStateAsync(const GetQueryStateRequestT& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetQueryState, request, handler, context);
        }

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
        template<typename GetQueryStatisticsRequestT = Model::GetQueryStatisticsRequest>
        Model::GetQueryStatisticsOutcomeCallable GetQueryStatisticsCallable(const GetQueryStatisticsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetQueryStatistics, request);
        }

        /**
         * An Async wrapper for GetQueryStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryStatisticsRequestT = Model::GetQueryStatisticsRequest>
        void GetQueryStatisticsAsync(const GetQueryStatisticsRequestT& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetQueryStatistics, request, handler, context);
        }

        /**
         * <p>Returns the LF-tags applied to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GetResourceLFTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceLFTagsOutcome GetResourceLFTags(const Model::GetResourceLFTagsRequest& request) const;

        /**
         * A Callable wrapper for GetResourceLFTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceLFTagsRequestT = Model::GetResourceLFTagsRequest>
        Model::GetResourceLFTagsOutcomeCallable GetResourceLFTagsCallable(const GetResourceLFTagsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetResourceLFTags, request);
        }

        /**
         * An Async wrapper for GetResourceLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceLFTagsRequestT = Model::GetResourceLFTagsRequest>
        void GetResourceLFTagsAsync(const GetResourceLFTagsRequestT& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetResourceLFTags, request, handler, context);
        }

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
        template<typename GetTableObjectsRequestT = Model::GetTableObjectsRequest>
        Model::GetTableObjectsOutcomeCallable GetTableObjectsCallable(const GetTableObjectsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetTableObjects, request);
        }

        /**
         * An Async wrapper for GetTableObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableObjectsRequestT = Model::GetTableObjectsRequest>
        void GetTableObjectsAsync(const GetTableObjectsRequestT& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetTableObjects, request, handler, context);
        }

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
        template<typename GetTemporaryGluePartitionCredentialsRequestT = Model::GetTemporaryGluePartitionCredentialsRequest>
        Model::GetTemporaryGluePartitionCredentialsOutcomeCallable GetTemporaryGluePartitionCredentialsCallable(const GetTemporaryGluePartitionCredentialsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetTemporaryGluePartitionCredentials, request);
        }

        /**
         * An Async wrapper for GetTemporaryGluePartitionCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemporaryGluePartitionCredentialsRequestT = Model::GetTemporaryGluePartitionCredentialsRequest>
        void GetTemporaryGluePartitionCredentialsAsync(const GetTemporaryGluePartitionCredentialsRequestT& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetTemporaryGluePartitionCredentials, request, handler, context);
        }

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
        template<typename GetTemporaryGlueTableCredentialsRequestT = Model::GetTemporaryGlueTableCredentialsRequest>
        Model::GetTemporaryGlueTableCredentialsOutcomeCallable GetTemporaryGlueTableCredentialsCallable(const GetTemporaryGlueTableCredentialsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetTemporaryGlueTableCredentials, request);
        }

        /**
         * An Async wrapper for GetTemporaryGlueTableCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemporaryGlueTableCredentialsRequestT = Model::GetTemporaryGlueTableCredentialsRequest>
        void GetTemporaryGlueTableCredentialsAsync(const GetTemporaryGlueTableCredentialsRequestT& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetTemporaryGlueTableCredentials, request, handler, context);
        }

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
        template<typename GetWorkUnitResultsRequestT = Model::GetWorkUnitResultsRequest>
        Model::GetWorkUnitResultsOutcomeCallable GetWorkUnitResultsCallable(const GetWorkUnitResultsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetWorkUnitResults, request);
        }

        /**
         * An Async wrapper for GetWorkUnitResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkUnitResultsRequestT = Model::GetWorkUnitResultsRequest>
        void GetWorkUnitResultsAsync(const GetWorkUnitResultsRequestT& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetWorkUnitResults, request, handler, context);
        }

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
        template<typename GetWorkUnitsRequestT = Model::GetWorkUnitsRequest>
        Model::GetWorkUnitsOutcomeCallable GetWorkUnitsCallable(const GetWorkUnitsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GetWorkUnits, request);
        }

        /**
         * An Async wrapper for GetWorkUnits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkUnitsRequestT = Model::GetWorkUnitsRequest>
        void GetWorkUnitsAsync(const GetWorkUnitsRequestT& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GetWorkUnits, request, handler, context);
        }

        /**
         * <p>Grants permissions to the principal to access metadata in the Data Catalog
         * and data organized in underlying data storage such as Amazon S3.</p> <p>For
         * information about permissions, see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/GrantPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantPermissionsOutcome GrantPermissions(const Model::GrantPermissionsRequest& request) const;

        /**
         * A Callable wrapper for GrantPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GrantPermissionsRequestT = Model::GrantPermissionsRequest>
        Model::GrantPermissionsOutcomeCallable GrantPermissionsCallable(const GrantPermissionsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::GrantPermissions, request);
        }

        /**
         * An Async wrapper for GrantPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GrantPermissionsRequestT = Model::GrantPermissionsRequest>
        void GrantPermissionsAsync(const GrantPermissionsRequestT& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::GrantPermissions, request, handler, context);
        }

        /**
         * <p>Lists all the data cell filters on a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataCellsFilterOutcome ListDataCellsFilter(const Model::ListDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for ListDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataCellsFilterRequestT = Model::ListDataCellsFilterRequest>
        Model::ListDataCellsFilterOutcomeCallable ListDataCellsFilterCallable(const ListDataCellsFilterRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListDataCellsFilter, request);
        }

        /**
         * An Async wrapper for ListDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataCellsFilterRequestT = Model::ListDataCellsFilterRequest>
        void ListDataCellsFilterAsync(const ListDataCellsFilterRequestT& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListDataCellsFilter, request, handler, context);
        }

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
        template<typename ListLFTagsRequestT = Model::ListLFTagsRequest>
        Model::ListLFTagsOutcomeCallable ListLFTagsCallable(const ListLFTagsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListLFTags, request);
        }

        /**
         * An Async wrapper for ListLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLFTagsRequestT = Model::ListLFTagsRequest>
        void ListLFTagsAsync(const ListLFTagsRequestT& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListLFTags, request, handler, context);
        }

        /**
         * <p>Retrieve the current list of resources and principals that are opt in to
         * enforce Lake Formation permissions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListLakeFormationOptIns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLakeFormationOptInsOutcome ListLakeFormationOptIns(const Model::ListLakeFormationOptInsRequest& request) const;

        /**
         * A Callable wrapper for ListLakeFormationOptIns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLakeFormationOptInsRequestT = Model::ListLakeFormationOptInsRequest>
        Model::ListLakeFormationOptInsOutcomeCallable ListLakeFormationOptInsCallable(const ListLakeFormationOptInsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListLakeFormationOptIns, request);
        }

        /**
         * An Async wrapper for ListLakeFormationOptIns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLakeFormationOptInsRequestT = Model::ListLakeFormationOptInsRequest>
        void ListLakeFormationOptInsAsync(const ListLakeFormationOptInsRequestT& request, const ListLakeFormationOptInsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListLakeFormationOptIns, request, handler, context);
        }

        /**
         * <p>Returns a list of the principal permissions on the resource, filtered by the
         * permissions of the caller. For example, if you are granted an ALTER permission,
         * you are able to see only the principal permissions for ALTER.</p> <p>This
         * operation returns only those permissions that have been explicitly granted.</p>
         * <p>For information about permissions, see <a
         * href="https://docs.aws.amazon.com/lake-formation/latest/dg/security-data-access.html">Security
         * and Access Control to Metadata and Data</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ListPermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPermissionsOutcome ListPermissions(const Model::ListPermissionsRequest& request) const;

        /**
         * A Callable wrapper for ListPermissions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPermissionsRequestT = Model::ListPermissionsRequest>
        Model::ListPermissionsOutcomeCallable ListPermissionsCallable(const ListPermissionsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListPermissions, request);
        }

        /**
         * An Async wrapper for ListPermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPermissionsRequestT = Model::ListPermissionsRequest>
        void ListPermissionsAsync(const ListPermissionsRequestT& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListPermissions, request, handler, context);
        }

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
        template<typename ListResourcesRequestT = Model::ListResourcesRequest>
        Model::ListResourcesOutcomeCallable ListResourcesCallable(const ListResourcesRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListResources, request);
        }

        /**
         * An Async wrapper for ListResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcesRequestT = Model::ListResourcesRequest>
        void ListResourcesAsync(const ListResourcesRequestT& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListResources, request, handler, context);
        }

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
        template<typename ListTableStorageOptimizersRequestT = Model::ListTableStorageOptimizersRequest>
        Model::ListTableStorageOptimizersOutcomeCallable ListTableStorageOptimizersCallable(const ListTableStorageOptimizersRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListTableStorageOptimizers, request);
        }

        /**
         * An Async wrapper for ListTableStorageOptimizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableStorageOptimizersRequestT = Model::ListTableStorageOptimizersRequest>
        void ListTableStorageOptimizersAsync(const ListTableStorageOptimizersRequestT& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListTableStorageOptimizers, request, handler, context);
        }

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
        template<typename ListTransactionsRequestT = Model::ListTransactionsRequest>
        Model::ListTransactionsOutcomeCallable ListTransactionsCallable(const ListTransactionsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::ListTransactions, request);
        }

        /**
         * An Async wrapper for ListTransactions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTransactionsRequestT = Model::ListTransactionsRequest>
        void ListTransactionsAsync(const ListTransactionsRequestT& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::ListTransactions, request, handler, context);
        }

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
        template<typename PutDataLakeSettingsRequestT = Model::PutDataLakeSettingsRequest>
        Model::PutDataLakeSettingsOutcomeCallable PutDataLakeSettingsCallable(const PutDataLakeSettingsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::PutDataLakeSettings, request);
        }

        /**
         * An Async wrapper for PutDataLakeSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDataLakeSettingsRequestT = Model::PutDataLakeSettingsRequest>
        void PutDataLakeSettingsAsync(const PutDataLakeSettingsRequestT& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::PutDataLakeSettings, request, handler, context);
        }

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
        template<typename RegisterResourceRequestT = Model::RegisterResourceRequest>
        Model::RegisterResourceOutcomeCallable RegisterResourceCallable(const RegisterResourceRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::RegisterResource, request);
        }

        /**
         * An Async wrapper for RegisterResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterResourceRequestT = Model::RegisterResourceRequest>
        void RegisterResourceAsync(const RegisterResourceRequestT& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::RegisterResource, request, handler, context);
        }

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
        template<typename RemoveLFTagsFromResourceRequestT = Model::RemoveLFTagsFromResourceRequest>
        Model::RemoveLFTagsFromResourceOutcomeCallable RemoveLFTagsFromResourceCallable(const RemoveLFTagsFromResourceRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::RemoveLFTagsFromResource, request);
        }

        /**
         * An Async wrapper for RemoveLFTagsFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveLFTagsFromResourceRequestT = Model::RemoveLFTagsFromResourceRequest>
        void RemoveLFTagsFromResourceAsync(const RemoveLFTagsFromResourceRequestT& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::RemoveLFTagsFromResource, request, handler, context);
        }

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
        template<typename RevokePermissionsRequestT = Model::RevokePermissionsRequest>
        Model::RevokePermissionsOutcomeCallable RevokePermissionsCallable(const RevokePermissionsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::RevokePermissions, request);
        }

        /**
         * An Async wrapper for RevokePermissions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RevokePermissionsRequestT = Model::RevokePermissionsRequest>
        void RevokePermissionsAsync(const RevokePermissionsRequestT& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::RevokePermissions, request, handler, context);
        }

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
        template<typename SearchDatabasesByLFTagsRequestT = Model::SearchDatabasesByLFTagsRequest>
        Model::SearchDatabasesByLFTagsOutcomeCallable SearchDatabasesByLFTagsCallable(const SearchDatabasesByLFTagsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::SearchDatabasesByLFTags, request);
        }

        /**
         * An Async wrapper for SearchDatabasesByLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchDatabasesByLFTagsRequestT = Model::SearchDatabasesByLFTagsRequest>
        void SearchDatabasesByLFTagsAsync(const SearchDatabasesByLFTagsRequestT& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::SearchDatabasesByLFTags, request, handler, context);
        }

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
        template<typename SearchTablesByLFTagsRequestT = Model::SearchTablesByLFTagsRequest>
        Model::SearchTablesByLFTagsOutcomeCallable SearchTablesByLFTagsCallable(const SearchTablesByLFTagsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::SearchTablesByLFTags, request);
        }

        /**
         * An Async wrapper for SearchTablesByLFTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchTablesByLFTagsRequestT = Model::SearchTablesByLFTagsRequest>
        void SearchTablesByLFTagsAsync(const SearchTablesByLFTagsRequestT& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::SearchTablesByLFTags, request, handler, context);
        }

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
        template<typename StartQueryPlanningRequestT = Model::StartQueryPlanningRequest>
        Model::StartQueryPlanningOutcomeCallable StartQueryPlanningCallable(const StartQueryPlanningRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::StartQueryPlanning, request);
        }

        /**
         * An Async wrapper for StartQueryPlanning that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryPlanningRequestT = Model::StartQueryPlanningRequest>
        void StartQueryPlanningAsync(const StartQueryPlanningRequestT& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::StartQueryPlanning, request, handler, context);
        }

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
        template<typename StartTransactionRequestT = Model::StartTransactionRequest>
        Model::StartTransactionOutcomeCallable StartTransactionCallable(const StartTransactionRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::StartTransaction, request);
        }

        /**
         * An Async wrapper for StartTransaction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTransactionRequestT = Model::StartTransactionRequest>
        void StartTransactionAsync(const StartTransactionRequestT& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::StartTransaction, request, handler, context);
        }

        /**
         * <p>Updates a data cell filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateDataCellsFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataCellsFilterOutcome UpdateDataCellsFilter(const Model::UpdateDataCellsFilterRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataCellsFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataCellsFilterRequestT = Model::UpdateDataCellsFilterRequest>
        Model::UpdateDataCellsFilterOutcomeCallable UpdateDataCellsFilterCallable(const UpdateDataCellsFilterRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::UpdateDataCellsFilter, request);
        }

        /**
         * An Async wrapper for UpdateDataCellsFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataCellsFilterRequestT = Model::UpdateDataCellsFilterRequest>
        void UpdateDataCellsFilterAsync(const UpdateDataCellsFilterRequestT& request, const UpdateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::UpdateDataCellsFilter, request, handler, context);
        }

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
        template<typename UpdateLFTagRequestT = Model::UpdateLFTagRequest>
        Model::UpdateLFTagOutcomeCallable UpdateLFTagCallable(const UpdateLFTagRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::UpdateLFTag, request);
        }

        /**
         * An Async wrapper for UpdateLFTag that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLFTagRequestT = Model::UpdateLFTagRequest>
        void UpdateLFTagAsync(const UpdateLFTagRequestT& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::UpdateLFTag, request, handler, context);
        }

        /**
         * <p>Updates the IAM Identity Center connection parameters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/UpdateLakeFormationIdentityCenterConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLakeFormationIdentityCenterConfigurationOutcome UpdateLakeFormationIdentityCenterConfiguration(const Model::UpdateLakeFormationIdentityCenterConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateLakeFormationIdentityCenterConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLakeFormationIdentityCenterConfigurationRequestT = Model::UpdateLakeFormationIdentityCenterConfigurationRequest>
        Model::UpdateLakeFormationIdentityCenterConfigurationOutcomeCallable UpdateLakeFormationIdentityCenterConfigurationCallable(const UpdateLakeFormationIdentityCenterConfigurationRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::UpdateLakeFormationIdentityCenterConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateLakeFormationIdentityCenterConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLakeFormationIdentityCenterConfigurationRequestT = Model::UpdateLakeFormationIdentityCenterConfigurationRequest>
        void UpdateLakeFormationIdentityCenterConfigurationAsync(const UpdateLakeFormationIdentityCenterConfigurationRequestT& request, const UpdateLakeFormationIdentityCenterConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::UpdateLakeFormationIdentityCenterConfiguration, request, handler, context);
        }

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
        template<typename UpdateResourceRequestT = Model::UpdateResourceRequest>
        Model::UpdateResourceOutcomeCallable UpdateResourceCallable(const UpdateResourceRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::UpdateResource, request);
        }

        /**
         * An Async wrapper for UpdateResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceRequestT = Model::UpdateResourceRequest>
        void UpdateResourceAsync(const UpdateResourceRequestT& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::UpdateResource, request, handler, context);
        }

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
        template<typename UpdateTableObjectsRequestT = Model::UpdateTableObjectsRequest>
        Model::UpdateTableObjectsOutcomeCallable UpdateTableObjectsCallable(const UpdateTableObjectsRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::UpdateTableObjects, request);
        }

        /**
         * An Async wrapper for UpdateTableObjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableObjectsRequestT = Model::UpdateTableObjectsRequest>
        void UpdateTableObjectsAsync(const UpdateTableObjectsRequestT& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::UpdateTableObjects, request, handler, context);
        }

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
        template<typename UpdateTableStorageOptimizerRequestT = Model::UpdateTableStorageOptimizerRequest>
        Model::UpdateTableStorageOptimizerOutcomeCallable UpdateTableStorageOptimizerCallable(const UpdateTableStorageOptimizerRequestT& request) const
        {
            return SubmitCallable(&LakeFormationClient::UpdateTableStorageOptimizer, request);
        }

        /**
         * An Async wrapper for UpdateTableStorageOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableStorageOptimizerRequestT = Model::UpdateTableStorageOptimizerRequest>
        void UpdateTableStorageOptimizerAsync(const UpdateTableStorageOptimizerRequestT& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LakeFormationClient::UpdateTableStorageOptimizer, request, handler, context);
        }


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
