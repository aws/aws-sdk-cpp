/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/OmicsServiceClientModel.h>

namespace Aws
{
namespace Omics
{
  /**
   * <p>This is the <i>Amazon Omics API Reference</i>. For an introduction to the
   * service, see <a href="https://docs.aws.amazon.com/omics/latest/dev/">What is
   * Amazon Omics?</a> in the <i>Amazon Omics Developer Guide</i>.</p>
   */
  class AWS_OMICS_API OmicsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<OmicsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Omics::OmicsClientConfiguration& clientConfiguration = Aws::Omics::OmicsClientConfiguration(),
                    std::shared_ptr<OmicsEndpointProviderBase> endpointProvider = Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Auth::AWSCredentials& credentials,
                    std::shared_ptr<OmicsEndpointProviderBase> endpointProvider = Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Omics::OmicsClientConfiguration& clientConfiguration = Aws::Omics::OmicsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OmicsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    std::shared_ptr<OmicsEndpointProviderBase> endpointProvider = Aws::MakeShared<OmicsEndpointProvider>(ALLOCATION_TAG),
                    const Aws::Omics::OmicsClientConfiguration& clientConfiguration = Aws::Omics::OmicsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OmicsClient(const Aws::Auth::AWSCredentials& credentials,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OmicsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                    const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~OmicsClient();

        /**
         * <p>Deletes one or more read sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/BatchDeleteReadSet">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteReadSetOutcome BatchDeleteReadSet(const Model::BatchDeleteReadSetRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteReadSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteReadSetOutcomeCallable BatchDeleteReadSetCallable(const Model::BatchDeleteReadSetRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteReadSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteReadSetAsync(const Model::BatchDeleteReadSetRequest& request, const BatchDeleteReadSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an annotation import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CancelAnnotationImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAnnotationImportJobOutcome CancelAnnotationImportJob(const Model::CancelAnnotationImportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelAnnotationImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelAnnotationImportJobOutcomeCallable CancelAnnotationImportJobCallable(const Model::CancelAnnotationImportJobRequest& request) const;

        /**
         * An Async wrapper for CancelAnnotationImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelAnnotationImportJobAsync(const Model::CancelAnnotationImportJobRequest& request, const CancelAnnotationImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CancelRun">AWS API
         * Reference</a></p>
         */
        virtual Model::CancelRunOutcome CancelRun(const Model::CancelRunRequest& request) const;

        /**
         * A Callable wrapper for CancelRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelRunOutcomeCallable CancelRunCallable(const Model::CancelRunRequest& request) const;

        /**
         * An Async wrapper for CancelRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelRunAsync(const Model::CancelRunRequest& request, const CancelRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a variant import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CancelVariantImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelVariantImportJobOutcome CancelVariantImportJob(const Model::CancelVariantImportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelVariantImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelVariantImportJobOutcomeCallable CancelVariantImportJobCallable(const Model::CancelVariantImportJobRequest& request) const;

        /**
         * An Async wrapper for CancelVariantImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelVariantImportJobAsync(const Model::CancelVariantImportJobRequest& request, const CancelVariantImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAnnotationStoreOutcome CreateAnnotationStore(const Model::CreateAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAnnotationStoreOutcomeCallable CreateAnnotationStoreCallable(const Model::CreateAnnotationStoreRequest& request) const;

        /**
         * An Async wrapper for CreateAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAnnotationStoreAsync(const Model::CreateAnnotationStoreRequest& request, const CreateAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a reference store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateReferenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReferenceStoreOutcome CreateReferenceStore(const Model::CreateReferenceStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateReferenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReferenceStoreOutcomeCallable CreateReferenceStoreCallable(const Model::CreateReferenceStoreRequest& request) const;

        /**
         * An Async wrapper for CreateReferenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReferenceStoreAsync(const Model::CreateReferenceStoreRequest& request, const CreateReferenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRunGroupOutcome CreateRunGroup(const Model::CreateRunGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRunGroupOutcomeCallable CreateRunGroupCallable(const Model::CreateRunGroupRequest& request) const;

        /**
         * An Async wrapper for CreateRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRunGroupAsync(const Model::CreateRunGroupRequest& request, const CreateRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a sequence store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSequenceStoreOutcome CreateSequenceStore(const Model::CreateSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSequenceStoreOutcomeCallable CreateSequenceStoreCallable(const Model::CreateSequenceStoreRequest& request) const;

        /**
         * An Async wrapper for CreateSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSequenceStoreAsync(const Model::CreateSequenceStoreRequest& request, const CreateSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVariantStoreOutcome CreateVariantStore(const Model::CreateVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for CreateVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVariantStoreOutcomeCallable CreateVariantStoreCallable(const Model::CreateVariantStoreRequest& request) const;

        /**
         * An Async wrapper for CreateVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVariantStoreAsync(const Model::CreateVariantStoreRequest& request, const CreateVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const Model::CreateWorkflowRequest& request) const;

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorkflowAsync(const Model::CreateWorkflowRequest& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAnnotationStoreOutcome DeleteAnnotationStore(const Model::DeleteAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAnnotationStoreOutcomeCallable DeleteAnnotationStoreCallable(const Model::DeleteAnnotationStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAnnotationStoreAsync(const Model::DeleteAnnotationStoreRequest& request, const DeleteAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a genome reference.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteReference">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReferenceOutcome DeleteReference(const Model::DeleteReferenceRequest& request) const;

        /**
         * A Callable wrapper for DeleteReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReferenceOutcomeCallable DeleteReferenceCallable(const Model::DeleteReferenceRequest& request) const;

        /**
         * An Async wrapper for DeleteReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReferenceAsync(const Model::DeleteReferenceRequest& request, const DeleteReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a genome reference store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteReferenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReferenceStoreOutcome DeleteReferenceStore(const Model::DeleteReferenceStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteReferenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReferenceStoreOutcomeCallable DeleteReferenceStoreCallable(const Model::DeleteReferenceStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteReferenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReferenceStoreAsync(const Model::DeleteReferenceStoreRequest& request, const DeleteReferenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workflow run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteRun">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;

        /**
         * A Callable wrapper for DeleteRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRunOutcomeCallable DeleteRunCallable(const Model::DeleteRunRequest& request) const;

        /**
         * An Async wrapper for DeleteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRunAsync(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workflow run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRunGroupOutcome DeleteRunGroup(const Model::DeleteRunGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRunGroupOutcomeCallable DeleteRunGroupCallable(const Model::DeleteRunGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRunGroupAsync(const Model::DeleteRunGroupRequest& request, const DeleteRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a sequence store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSequenceStoreOutcome DeleteSequenceStore(const Model::DeleteSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSequenceStoreOutcomeCallable DeleteSequenceStoreCallable(const Model::DeleteSequenceStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSequenceStoreAsync(const Model::DeleteSequenceStoreRequest& request, const DeleteSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVariantStoreOutcome DeleteVariantStore(const Model::DeleteVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for DeleteVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVariantStoreOutcomeCallable DeleteVariantStoreCallable(const Model::DeleteVariantStoreRequest& request) const;

        /**
         * An Async wrapper for DeleteVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVariantStoreAsync(const Model::DeleteVariantStoreRequest& request, const DeleteVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an annotation import job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetAnnotationImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnnotationImportJobOutcome GetAnnotationImportJob(const Model::GetAnnotationImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetAnnotationImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnnotationImportJobOutcomeCallable GetAnnotationImportJobCallable(const Model::GetAnnotationImportJobRequest& request) const;

        /**
         * An Async wrapper for GetAnnotationImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnnotationImportJobAsync(const Model::GetAnnotationImportJobRequest& request, const GetAnnotationImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnnotationStoreOutcome GetAnnotationStore(const Model::GetAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for GetAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAnnotationStoreOutcomeCallable GetAnnotationStoreCallable(const Model::GetAnnotationStoreRequest& request) const;

        /**
         * An Async wrapper for GetAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAnnotationStoreAsync(const Model::GetAnnotationStoreRequest& request, const GetAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a file from a read set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetOutcome GetReadSet(const Model::GetReadSetRequest& request) const;

        /**
         * A Callable wrapper for GetReadSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadSetOutcomeCallable GetReadSetCallable(const Model::GetReadSetRequest& request) const;

        /**
         * An Async wrapper for GetReadSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadSetAsync(const Model::GetReadSetRequest& request, const GetReadSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a read set activation job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetActivationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetActivationJobOutcome GetReadSetActivationJob(const Model::GetReadSetActivationJobRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetActivationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadSetActivationJobOutcomeCallable GetReadSetActivationJobCallable(const Model::GetReadSetActivationJobRequest& request) const;

        /**
         * An Async wrapper for GetReadSetActivationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadSetActivationJobAsync(const Model::GetReadSetActivationJobRequest& request, const GetReadSetActivationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a read set export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetExportJobOutcome GetReadSetExportJob(const Model::GetReadSetExportJobRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadSetExportJobOutcomeCallable GetReadSetExportJobCallable(const Model::GetReadSetExportJobRequest& request) const;

        /**
         * An Async wrapper for GetReadSetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadSetExportJobAsync(const Model::GetReadSetExportJobRequest& request, const GetReadSetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a read set import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetImportJobOutcome GetReadSetImportJob(const Model::GetReadSetImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadSetImportJobOutcomeCallable GetReadSetImportJobCallable(const Model::GetReadSetImportJobRequest& request) const;

        /**
         * An Async wrapper for GetReadSetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadSetImportJobAsync(const Model::GetReadSetImportJobRequest& request, const GetReadSetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets details about a read set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReadSetMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReadSetMetadataOutcome GetReadSetMetadata(const Model::GetReadSetMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetReadSetMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReadSetMetadataOutcomeCallable GetReadSetMetadataCallable(const Model::GetReadSetMetadataRequest& request) const;

        /**
         * An Async wrapper for GetReadSetMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReadSetMetadataAsync(const Model::GetReadSetMetadataRequest& request, const GetReadSetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a reference file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReference">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceOutcome GetReference(const Model::GetReferenceRequest& request) const;

        /**
         * A Callable wrapper for GetReference that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReferenceOutcomeCallable GetReferenceCallable(const Model::GetReferenceRequest& request) const;

        /**
         * An Async wrapper for GetReference that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReferenceAsync(const Model::GetReferenceRequest& request, const GetReferenceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a reference import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReferenceImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceImportJobOutcome GetReferenceImportJob(const Model::GetReferenceImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetReferenceImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReferenceImportJobOutcomeCallable GetReferenceImportJobCallable(const Model::GetReferenceImportJobRequest& request) const;

        /**
         * An Async wrapper for GetReferenceImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReferenceImportJobAsync(const Model::GetReferenceImportJobRequest& request, const GetReferenceImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a genome reference's metadata.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReferenceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceMetadataOutcome GetReferenceMetadata(const Model::GetReferenceMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetReferenceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReferenceMetadataOutcomeCallable GetReferenceMetadataCallable(const Model::GetReferenceMetadataRequest& request) const;

        /**
         * An Async wrapper for GetReferenceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReferenceMetadataAsync(const Model::GetReferenceMetadataRequest& request, const GetReferenceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a reference store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetReferenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReferenceStoreOutcome GetReferenceStore(const Model::GetReferenceStoreRequest& request) const;

        /**
         * A Callable wrapper for GetReferenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReferenceStoreOutcomeCallable GetReferenceStoreCallable(const Model::GetReferenceStoreRequest& request) const;

        /**
         * An Async wrapper for GetReferenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReferenceStoreAsync(const Model::GetReferenceStoreRequest& request, const GetReferenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a workflow run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRun">AWS API
         * Reference</a></p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;

        /**
         * A Callable wrapper for GetRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRunOutcomeCallable GetRunCallable(const Model::GetRunRequest& request) const;

        /**
         * An Async wrapper for GetRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRunAsync(const Model::GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a workflow run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunGroupOutcome GetRunGroup(const Model::GetRunGroupRequest& request) const;

        /**
         * A Callable wrapper for GetRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRunGroupOutcomeCallable GetRunGroupCallable(const Model::GetRunGroupRequest& request) const;

        /**
         * An Async wrapper for GetRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRunGroupAsync(const Model::GetRunGroupRequest& request, const GetRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a workflow run task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetRunTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunTaskOutcome GetRunTask(const Model::GetRunTaskRequest& request) const;

        /**
         * A Callable wrapper for GetRunTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRunTaskOutcomeCallable GetRunTaskCallable(const Model::GetRunTaskRequest& request) const;

        /**
         * An Async wrapper for GetRunTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRunTaskAsync(const Model::GetRunTaskRequest& request, const GetRunTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a sequence store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetSequenceStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSequenceStoreOutcome GetSequenceStore(const Model::GetSequenceStoreRequest& request) const;

        /**
         * A Callable wrapper for GetSequenceStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSequenceStoreOutcomeCallable GetSequenceStoreCallable(const Model::GetSequenceStoreRequest& request) const;

        /**
         * An Async wrapper for GetSequenceStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSequenceStoreAsync(const Model::GetSequenceStoreRequest& request, const GetSequenceStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a variant import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetVariantImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVariantImportJobOutcome GetVariantImportJob(const Model::GetVariantImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetVariantImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVariantImportJobOutcomeCallable GetVariantImportJobCallable(const Model::GetVariantImportJobRequest& request) const;

        /**
         * An Async wrapper for GetVariantImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVariantImportJobAsync(const Model::GetVariantImportJobRequest& request, const GetVariantImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVariantStoreOutcome GetVariantStore(const Model::GetVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for GetVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVariantStoreOutcomeCallable GetVariantStoreCallable(const Model::GetVariantStoreRequest& request) const;

        /**
         * An Async wrapper for GetVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVariantStoreAsync(const Model::GetVariantStoreRequest& request, const GetVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const Model::GetWorkflowRequest& request) const;

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowAsync(const Model::GetWorkflowRequest& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of annotation import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnnotationImportJobsOutcome ListAnnotationImportJobs(const Model::ListAnnotationImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListAnnotationImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnnotationImportJobsOutcomeCallable ListAnnotationImportJobsCallable(const Model::ListAnnotationImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListAnnotationImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnnotationImportJobsAsync(const Model::ListAnnotationImportJobsRequest& request, const ListAnnotationImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of annotation stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListAnnotationStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnnotationStoresOutcome ListAnnotationStores(const Model::ListAnnotationStoresRequest& request) const;

        /**
         * A Callable wrapper for ListAnnotationStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnnotationStoresOutcomeCallable ListAnnotationStoresCallable(const Model::ListAnnotationStoresRequest& request) const;

        /**
         * An Async wrapper for ListAnnotationStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnnotationStoresAsync(const Model::ListAnnotationStoresRequest& request, const ListAnnotationStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of read set activation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetActivationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetActivationJobsOutcome ListReadSetActivationJobs(const Model::ListReadSetActivationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetActivationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReadSetActivationJobsOutcomeCallable ListReadSetActivationJobsCallable(const Model::ListReadSetActivationJobsRequest& request) const;

        /**
         * An Async wrapper for ListReadSetActivationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReadSetActivationJobsAsync(const Model::ListReadSetActivationJobsRequest& request, const ListReadSetActivationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of read set export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetExportJobsOutcome ListReadSetExportJobs(const Model::ListReadSetExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReadSetExportJobsOutcomeCallable ListReadSetExportJobsCallable(const Model::ListReadSetExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListReadSetExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReadSetExportJobsAsync(const Model::ListReadSetExportJobsRequest& request, const ListReadSetExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of read set import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSetImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetImportJobsOutcome ListReadSetImportJobs(const Model::ListReadSetImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSetImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReadSetImportJobsOutcomeCallable ListReadSetImportJobsCallable(const Model::ListReadSetImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListReadSetImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReadSetImportJobsAsync(const Model::ListReadSetImportJobsRequest& request, const ListReadSetImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of read sets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReadSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReadSetsOutcome ListReadSets(const Model::ListReadSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReadSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReadSetsOutcomeCallable ListReadSetsCallable(const Model::ListReadSetsRequest& request) const;

        /**
         * An Async wrapper for ListReadSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReadSetsAsync(const Model::ListReadSetsRequest& request, const ListReadSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of reference import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferenceImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferenceImportJobsOutcome ListReferenceImportJobs(const Model::ListReferenceImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListReferenceImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReferenceImportJobsOutcomeCallable ListReferenceImportJobsCallable(const Model::ListReferenceImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListReferenceImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReferenceImportJobsAsync(const Model::ListReferenceImportJobsRequest& request, const ListReferenceImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of reference stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferenceStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferenceStoresOutcome ListReferenceStores(const Model::ListReferenceStoresRequest& request) const;

        /**
         * A Callable wrapper for ListReferenceStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReferenceStoresOutcomeCallable ListReferenceStoresCallable(const Model::ListReferenceStoresRequest& request) const;

        /**
         * An Async wrapper for ListReferenceStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReferenceStoresAsync(const Model::ListReferenceStoresRequest& request, const ListReferenceStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of references.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListReferences">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReferencesOutcome ListReferences(const Model::ListReferencesRequest& request) const;

        /**
         * A Callable wrapper for ListReferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReferencesOutcomeCallable ListReferencesCallable(const Model::ListReferencesRequest& request) const;

        /**
         * An Async wrapper for ListReferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReferencesAsync(const Model::ListReferencesRequest& request, const ListReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of run groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRunGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunGroupsOutcome ListRunGroups(const Model::ListRunGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListRunGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRunGroupsOutcomeCallable ListRunGroupsCallable(const Model::ListRunGroupsRequest& request) const;

        /**
         * An Async wrapper for ListRunGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunGroupsAsync(const Model::ListRunGroupsRequest& request, const ListRunGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of tasks for a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRunTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunTasksOutcome ListRunTasks(const Model::ListRunTasksRequest& request) const;

        /**
         * A Callable wrapper for ListRunTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRunTasksOutcomeCallable ListRunTasksCallable(const Model::ListRunTasksRequest& request) const;

        /**
         * An Async wrapper for ListRunTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunTasksAsync(const Model::ListRunTasksRequest& request, const ListRunTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of runs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListRuns">AWS API
         * Reference</a></p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;

        /**
         * A Callable wrapper for ListRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRunsOutcomeCallable ListRunsCallable(const Model::ListRunsRequest& request) const;

        /**
         * An Async wrapper for ListRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunsAsync(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of sequence stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListSequenceStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSequenceStoresOutcome ListSequenceStores(const Model::ListSequenceStoresRequest& request) const;

        /**
         * A Callable wrapper for ListSequenceStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSequenceStoresOutcomeCallable ListSequenceStoresCallable(const Model::ListSequenceStoresRequest& request) const;

        /**
         * An Async wrapper for ListSequenceStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSequenceStoresAsync(const Model::ListSequenceStoresRequest& request, const ListSequenceStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of variant import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVariantImportJobsOutcome ListVariantImportJobs(const Model::ListVariantImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListVariantImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVariantImportJobsOutcomeCallable ListVariantImportJobsCallable(const Model::ListVariantImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListVariantImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVariantImportJobsAsync(const Model::ListVariantImportJobsRequest& request, const ListVariantImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of variant stores.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListVariantStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVariantStoresOutcome ListVariantStores(const Model::ListVariantStoresRequest& request) const;

        /**
         * A Callable wrapper for ListVariantStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVariantStoresOutcomeCallable ListVariantStoresCallable(const Model::ListVariantStoresRequest& request) const;

        /**
         * An Async wrapper for ListVariantStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVariantStoresAsync(const Model::ListVariantStoresRequest& request, const ListVariantStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of workflows.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an annotation import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartAnnotationImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAnnotationImportJobOutcome StartAnnotationImportJob(const Model::StartAnnotationImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartAnnotationImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAnnotationImportJobOutcomeCallable StartAnnotationImportJobCallable(const Model::StartAnnotationImportJobRequest& request) const;

        /**
         * An Async wrapper for StartAnnotationImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAnnotationImportJobAsync(const Model::StartAnnotationImportJobRequest& request, const StartAnnotationImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a read set activation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetActivationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReadSetActivationJobOutcome StartReadSetActivationJob(const Model::StartReadSetActivationJobRequest& request) const;

        /**
         * A Callable wrapper for StartReadSetActivationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReadSetActivationJobOutcomeCallable StartReadSetActivationJobCallable(const Model::StartReadSetActivationJobRequest& request) const;

        /**
         * An Async wrapper for StartReadSetActivationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReadSetActivationJobAsync(const Model::StartReadSetActivationJobRequest& request, const StartReadSetActivationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a read set export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReadSetExportJobOutcome StartReadSetExportJob(const Model::StartReadSetExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReadSetExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReadSetExportJobOutcomeCallable StartReadSetExportJobCallable(const Model::StartReadSetExportJobRequest& request) const;

        /**
         * An Async wrapper for StartReadSetExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReadSetExportJobAsync(const Model::StartReadSetExportJobRequest& request, const StartReadSetExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a read set import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReadSetImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReadSetImportJobOutcome StartReadSetImportJob(const Model::StartReadSetImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReadSetImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReadSetImportJobOutcomeCallable StartReadSetImportJobCallable(const Model::StartReadSetImportJobRequest& request) const;

        /**
         * An Async wrapper for StartReadSetImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReadSetImportJobAsync(const Model::StartReadSetImportJobRequest& request, const StartReadSetImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a reference import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReferenceImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartReferenceImportJobOutcome StartReferenceImportJob(const Model::StartReferenceImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartReferenceImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartReferenceImportJobOutcomeCallable StartReferenceImportJobCallable(const Model::StartReferenceImportJobRequest& request) const;

        /**
         * An Async wrapper for StartReferenceImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartReferenceImportJobAsync(const Model::StartReferenceImportJobRequest& request, const StartReferenceImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartRun">AWS API
         * Reference</a></p>
         */
        virtual Model::StartRunOutcome StartRun(const Model::StartRunRequest& request) const;

        /**
         * A Callable wrapper for StartRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRunOutcomeCallable StartRunCallable(const Model::StartRunRequest& request) const;

        /**
         * An Async wrapper for StartRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRunAsync(const Model::StartRunRequest& request, const StartRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a variant import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartVariantImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVariantImportJobOutcome StartVariantImportJob(const Model::StartVariantImportJobRequest& request) const;

        /**
         * A Callable wrapper for StartVariantImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartVariantImportJobOutcomeCallable StartVariantImportJobCallable(const Model::StartVariantImportJobRequest& request) const;

        /**
         * An Async wrapper for StartVariantImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartVariantImportJobAsync(const Model::StartVariantImportJobRequest& request, const StartVariantImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an annotation store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateAnnotationStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAnnotationStoreOutcome UpdateAnnotationStore(const Model::UpdateAnnotationStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateAnnotationStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAnnotationStoreOutcomeCallable UpdateAnnotationStoreCallable(const Model::UpdateAnnotationStoreRequest& request) const;

        /**
         * An Async wrapper for UpdateAnnotationStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAnnotationStoreAsync(const Model::UpdateAnnotationStoreRequest& request, const UpdateAnnotationStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a run group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateRunGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRunGroupOutcome UpdateRunGroup(const Model::UpdateRunGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRunGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRunGroupOutcomeCallable UpdateRunGroupCallable(const Model::UpdateRunGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateRunGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRunGroupAsync(const Model::UpdateRunGroupRequest& request, const UpdateRunGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a variant store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateVariantStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVariantStoreOutcome UpdateVariantStore(const Model::UpdateVariantStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdateVariantStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVariantStoreOutcomeCallable UpdateVariantStoreCallable(const Model::UpdateVariantStoreRequest& request) const;

        /**
         * An Async wrapper for UpdateVariantStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVariantStoreAsync(const Model::UpdateVariantStoreRequest& request, const UpdateVariantStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const Model::UpdateWorkflowRequest& request) const;

        /**
         * An Async wrapper for UpdateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorkflowAsync(const Model::UpdateWorkflowRequest& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<OmicsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<OmicsClient>;
      void init(const OmicsClientConfiguration& clientConfiguration);

      OmicsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<OmicsEndpointProviderBase> m_endpointProvider;
  };

} // namespace Omics
} // namespace Aws
