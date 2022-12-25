/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/robomaker/RoboMakerServiceClientModel.h>

namespace Aws
{
namespace RoboMaker
{
  /**
   * <p>This section provides documentation for the AWS RoboMaker API operations.</p>
   */
  class AWS_ROBOMAKER_API RoboMakerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RoboMakerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration(),
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<RoboMakerEndpointProviderBase> endpointProvider = Aws::MakeShared<RoboMakerEndpointProvider>(ALLOCATION_TAG),
                        const Aws::RoboMaker::RoboMakerClientConfiguration& clientConfiguration = Aws::RoboMaker::RoboMakerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RoboMakerClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RoboMakerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RoboMakerClient();

        /**
         * <p>Deletes one or more worlds in a batch operation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDeleteWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteWorldsOutcome BatchDeleteWorlds(const Model::BatchDeleteWorldsRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteWorlds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDeleteWorldsOutcomeCallable BatchDeleteWorldsCallable(const Model::BatchDeleteWorldsRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteWorlds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteWorldsAsync(const Model::BatchDeleteWorldsRequest& request, const BatchDeleteWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes one or more simulation jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/BatchDescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDescribeSimulationJobOutcome BatchDescribeSimulationJob(const Model::BatchDescribeSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for BatchDescribeSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchDescribeSimulationJobOutcomeCallable BatchDescribeSimulationJobCallable(const Model::BatchDescribeSimulationJobRequest& request) const;

        /**
         * An Async wrapper for BatchDescribeSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDescribeSimulationJobAsync(const Model::BatchDescribeSimulationJobRequest& request, const BatchDescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobOutcome CancelSimulationJob(const Model::CancelSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for CancelSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSimulationJobOutcomeCallable CancelSimulationJobCallable(const Model::CancelSimulationJobRequest& request) const;

        /**
         * An Async wrapper for CancelSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSimulationJobAsync(const Model::CancelSimulationJobRequest& request, const CancelSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a simulation job batch. When you cancel a simulation job batch, you
         * are also cancelling all of the active simulation jobs created as part of the
         * batch. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSimulationJobBatchOutcome CancelSimulationJobBatch(const Model::CancelSimulationJobBatchRequest& request) const;

        /**
         * A Callable wrapper for CancelSimulationJobBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelSimulationJobBatchOutcomeCallable CancelSimulationJobBatchCallable(const Model::CancelSimulationJobBatchRequest& request) const;

        /**
         * An Async wrapper for CancelSimulationJobBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelSimulationJobBatchAsync(const Model::CancelSimulationJobBatchRequest& request, const CancelSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldExportJobOutcome CancelWorldExportJob(const Model::CancelWorldExportJobRequest& request) const;

        /**
         * A Callable wrapper for CancelWorldExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelWorldExportJobOutcomeCallable CancelWorldExportJobCallable(const Model::CancelWorldExportJobRequest& request) const;

        /**
         * An Async wrapper for CancelWorldExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelWorldExportJobAsync(const Model::CancelWorldExportJobRequest& request, const CancelWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the specified world generator job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CancelWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelWorldGenerationJobOutcome CancelWorldGenerationJob(const Model::CancelWorldGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for CancelWorldGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelWorldGenerationJobOutcomeCallable CancelWorldGenerationJobCallable(const Model::CancelWorldGenerationJobRequest& request) const;

        /**
         * An Async wrapper for CancelWorldGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelWorldGenerationJobAsync(const Model::CancelWorldGenerationJobRequest& request, const CancelWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a robot application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationOutcome CreateRobotApplication(const Model::CreateRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRobotApplicationOutcomeCallable CreateRobotApplicationCallable(const Model::CreateRobotApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRobotApplicationAsync(const Model::CreateRobotApplicationRequest& request, const CreateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a version of a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateRobotApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRobotApplicationVersionOutcome CreateRobotApplicationVersion(const Model::CreateRobotApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateRobotApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRobotApplicationVersionOutcomeCallable CreateRobotApplicationVersionCallable(const Model::CreateRobotApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for CreateRobotApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRobotApplicationVersionAsync(const Model::CreateRobotApplicationVersionRequest& request, const CreateRobotApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationOutcome CreateSimulationApplication(const Model::CreateSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationApplicationOutcomeCallable CreateSimulationApplicationCallable(const Model::CreateSimulationApplicationRequest& request) const;

        /**
         * An Async wrapper for CreateSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationApplicationAsync(const Model::CreateSimulationApplicationRequest& request, const CreateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a simulation application with a specific revision id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationApplicationVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationApplicationVersionOutcome CreateSimulationApplicationVersion(const Model::CreateSimulationApplicationVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateSimulationApplicationVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationApplicationVersionOutcomeCallable CreateSimulationApplicationVersionCallable(const Model::CreateSimulationApplicationVersionRequest& request) const;

        /**
         * An Async wrapper for CreateSimulationApplicationVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationApplicationVersionAsync(const Model::CreateSimulationApplicationVersionRequest& request, const CreateSimulationApplicationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a simulation job.</p>  <p>After 90 days, simulation jobs expire
         * and will be deleted. They will no longer be accessible. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSimulationJobOutcome CreateSimulationJob(const Model::CreateSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSimulationJobOutcomeCallable CreateSimulationJobCallable(const Model::CreateSimulationJobRequest& request) const;

        /**
         * An Async wrapper for CreateSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSimulationJobAsync(const Model::CreateSimulationJobRequest& request, const CreateSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldExportJobOutcome CreateWorldExportJob(const Model::CreateWorldExportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateWorldExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorldExportJobOutcomeCallable CreateWorldExportJobCallable(const Model::CreateWorldExportJobRequest& request) const;

        /**
         * An Async wrapper for CreateWorldExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorldExportJobAsync(const Model::CreateWorldExportJobRequest& request, const CreateWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates worlds using the specified template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldGenerationJobOutcome CreateWorldGenerationJob(const Model::CreateWorldGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for CreateWorldGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorldGenerationJobOutcomeCallable CreateWorldGenerationJobCallable(const Model::CreateWorldGenerationJobRequest& request) const;

        /**
         * An Async wrapper for CreateWorldGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorldGenerationJobAsync(const Model::CreateWorldGenerationJobRequest& request, const CreateWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/CreateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorldTemplateOutcome CreateWorldTemplate(const Model::CreateWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateWorldTemplateOutcomeCallable CreateWorldTemplateCallable(const Model::CreateWorldTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateWorldTemplateAsync(const Model::CreateWorldTemplateRequest& request, const CreateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRobotApplicationOutcome DeleteRobotApplication(const Model::DeleteRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRobotApplicationOutcomeCallable DeleteRobotApplicationCallable(const Model::DeleteRobotApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRobotApplicationAsync(const Model::DeleteRobotApplicationRequest& request, const DeleteRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSimulationApplicationOutcome DeleteSimulationApplication(const Model::DeleteSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSimulationApplicationOutcomeCallable DeleteSimulationApplicationCallable(const Model::DeleteSimulationApplicationRequest& request) const;

        /**
         * An Async wrapper for DeleteSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSimulationApplicationAsync(const Model::DeleteSimulationApplicationRequest& request, const DeleteSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeleteWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorldTemplateOutcome DeleteWorldTemplate(const Model::DeleteWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteWorldTemplateOutcomeCallable DeleteWorldTemplateCallable(const Model::DeleteWorldTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteWorldTemplateAsync(const Model::DeleteWorldTemplateRequest& request, const DeleteWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRobotApplicationOutcome DescribeRobotApplication(const Model::DescribeRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRobotApplicationOutcomeCallable DescribeRobotApplicationCallable(const Model::DescribeRobotApplicationRequest& request) const;

        /**
         * An Async wrapper for DescribeRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRobotApplicationAsync(const Model::DescribeRobotApplicationRequest& request, const DescribeRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationApplicationOutcome DescribeSimulationApplication(const Model::DescribeSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationApplicationOutcomeCallable DescribeSimulationApplicationCallable(const Model::DescribeSimulationApplicationRequest& request) const;

        /**
         * An Async wrapper for DescribeSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationApplicationAsync(const Model::DescribeSimulationApplicationRequest& request, const DescribeSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobOutcome DescribeSimulationJob(const Model::DescribeSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationJobOutcomeCallable DescribeSimulationJobCallable(const Model::DescribeSimulationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationJobAsync(const Model::DescribeSimulationJobRequest& request, const DescribeSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a simulation job batch.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationJobBatchOutcome DescribeSimulationJobBatch(const Model::DescribeSimulationJobBatchRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulationJobBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSimulationJobBatchOutcomeCallable DescribeSimulationJobBatchCallable(const Model::DescribeSimulationJobBatchRequest& request) const;

        /**
         * An Async wrapper for DescribeSimulationJobBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSimulationJobBatchAsync(const Model::DescribeSimulationJobBatchRequest& request, const DescribeSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorld">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldOutcome DescribeWorld(const Model::DescribeWorldRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorld that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldOutcomeCallable DescribeWorldCallable(const Model::DescribeWorldRequest& request) const;

        /**
         * An Async wrapper for DescribeWorld that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldAsync(const Model::DescribeWorldRequest& request, const DescribeWorldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldExportJobOutcome DescribeWorldExportJob(const Model::DescribeWorldExportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorldExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldExportJobOutcomeCallable DescribeWorldExportJobCallable(const Model::DescribeWorldExportJobRequest& request) const;

        /**
         * An Async wrapper for DescribeWorldExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldExportJobAsync(const Model::DescribeWorldExportJobRequest& request, const DescribeWorldExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world generation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldGenerationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldGenerationJobOutcome DescribeWorldGenerationJob(const Model::DescribeWorldGenerationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorldGenerationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldGenerationJobOutcomeCallable DescribeWorldGenerationJobCallable(const Model::DescribeWorldGenerationJobRequest& request) const;

        /**
         * An Async wrapper for DescribeWorldGenerationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldGenerationJobAsync(const Model::DescribeWorldGenerationJobRequest& request, const DescribeWorldGenerationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DescribeWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorldTemplateOutcome DescribeWorldTemplate(const Model::DescribeWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeWorldTemplateOutcomeCallable DescribeWorldTemplateCallable(const Model::DescribeWorldTemplateRequest& request) const;

        /**
         * An Async wrapper for DescribeWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeWorldTemplateAsync(const Model::DescribeWorldTemplateRequest& request, const DescribeWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the world template body.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/GetWorldTemplateBody">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorldTemplateBodyOutcome GetWorldTemplateBody(const Model::GetWorldTemplateBodyRequest& request) const;

        /**
         * A Callable wrapper for GetWorldTemplateBody that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorldTemplateBodyOutcomeCallable GetWorldTemplateBodyCallable(const Model::GetWorldTemplateBodyRequest& request) const;

        /**
         * An Async wrapper for GetWorldTemplateBody that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorldTemplateBodyAsync(const Model::GetWorldTemplateBodyRequest& request, const GetWorldTemplateBodyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of robot application. You can optionally provide filters to
         * retrieve specific robot applications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListRobotApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRobotApplicationsOutcome ListRobotApplications(const Model::ListRobotApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListRobotApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRobotApplicationsOutcomeCallable ListRobotApplicationsCallable(const Model::ListRobotApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListRobotApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRobotApplicationsAsync(const Model::ListRobotApplicationsRequest& request, const ListRobotApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of simulation applications. You can optionally provide filters
         * to retrieve specific simulation applications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationApplicationsOutcome ListSimulationApplications(const Model::ListSimulationApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListSimulationApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationApplicationsOutcomeCallable ListSimulationApplicationsCallable(const Model::ListSimulationApplicationsRequest& request) const;

        /**
         * An Async wrapper for ListSimulationApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationApplicationsAsync(const Model::ListSimulationApplicationsRequest& request, const ListSimulationApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list simulation job batches. You can optionally provide filters to
         * retrieve specific simulation batch jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobBatches">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobBatchesOutcome ListSimulationJobBatches(const Model::ListSimulationJobBatchesRequest& request) const;

        /**
         * A Callable wrapper for ListSimulationJobBatches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationJobBatchesOutcomeCallable ListSimulationJobBatchesCallable(const Model::ListSimulationJobBatchesRequest& request) const;

        /**
         * An Async wrapper for ListSimulationJobBatches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationJobBatchesAsync(const Model::ListSimulationJobBatchesRequest& request, const ListSimulationJobBatchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of simulation jobs. You can optionally provide filters to
         * retrieve specific simulation jobs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListSimulationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationJobsOutcome ListSimulationJobs(const Model::ListSimulationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSimulationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSimulationJobsOutcomeCallable ListSimulationJobsCallable(const Model::ListSimulationJobsRequest& request) const;

        /**
         * An Async wrapper for ListSimulationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSimulationJobsAsync(const Model::ListSimulationJobsRequest& request, const ListSimulationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on a AWS RoboMaker resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListTagsForResource">AWS
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
         * <p>Lists world export jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldExportJobsOutcome ListWorldExportJobs(const Model::ListWorldExportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListWorldExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldExportJobsOutcomeCallable ListWorldExportJobsCallable(const Model::ListWorldExportJobsRequest& request) const;

        /**
         * An Async wrapper for ListWorldExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldExportJobsAsync(const Model::ListWorldExportJobsRequest& request, const ListWorldExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists world generator jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldGenerationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldGenerationJobsOutcome ListWorldGenerationJobs(const Model::ListWorldGenerationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListWorldGenerationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldGenerationJobsOutcomeCallable ListWorldGenerationJobsCallable(const Model::ListWorldGenerationJobsRequest& request) const;

        /**
         * An Async wrapper for ListWorldGenerationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldGenerationJobsAsync(const Model::ListWorldGenerationJobsRequest& request, const ListWorldGenerationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists world templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorldTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldTemplatesOutcome ListWorldTemplates(const Model::ListWorldTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListWorldTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldTemplatesOutcomeCallable ListWorldTemplatesCallable(const Model::ListWorldTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListWorldTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldTemplatesAsync(const Model::ListWorldTemplatesRequest& request, const ListWorldTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists worlds.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/ListWorlds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorldsOutcome ListWorlds(const Model::ListWorldsRequest& request) const;

        /**
         * A Callable wrapper for ListWorlds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListWorldsOutcomeCallable ListWorldsCallable(const Model::ListWorldsRequest& request) const;

        /**
         * An Async wrapper for ListWorlds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorldsAsync(const Model::ListWorldsRequest& request, const ListWorldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a running simulation job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RestartSimulationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::RestartSimulationJobOutcome RestartSimulationJob(const Model::RestartSimulationJobRequest& request) const;

        /**
         * A Callable wrapper for RestartSimulationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestartSimulationJobOutcomeCallable RestartSimulationJobCallable(const Model::RestartSimulationJobRequest& request) const;

        /**
         * An Async wrapper for RestartSimulationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestartSimulationJobAsync(const Model::RestartSimulationJobRequest& request, const RestartSimulationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new simulation job batch. The batch is defined using one or more
         * <code>SimulationJobRequest</code> objects. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/StartSimulationJobBatch">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSimulationJobBatchOutcome StartSimulationJobBatch(const Model::StartSimulationJobBatchRequest& request) const;

        /**
         * A Callable wrapper for StartSimulationJobBatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartSimulationJobBatchOutcomeCallable StartSimulationJobBatchCallable(const Model::StartSimulationJobBatchRequest& request) const;

        /**
         * An Async wrapper for StartSimulationJobBatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSimulationJobBatchAsync(const Model::StartSimulationJobBatchRequest& request, const StartSimulationJobBatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or edits tags for a AWS RoboMaker resource.</p> <p>Each tag consists of
         * a tag key and a tag value. Tag keys and tag values are both required, but tag
         * values can be empty strings. </p> <p>For information about the rules that apply
         * to tag keys and tag values, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-Defined
         * Tag Restrictions</a> in the <i>AWS Billing and Cost Management User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/TagResource">AWS
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
         * <p>Removes the specified tags from the specified AWS RoboMaker resource.</p>
         * <p>To remove a tag, specify the tag key. To change the tag value of an existing
         * tag key, use <a
         * href="https://docs.aws.amazon.com/robomaker/latest/dg/API_TagResource.html">
         * <code>TagResource</code> </a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UntagResource">AWS
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
         * <p>Updates a robot application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateRobotApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRobotApplicationOutcome UpdateRobotApplication(const Model::UpdateRobotApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRobotApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRobotApplicationOutcomeCallable UpdateRobotApplicationCallable(const Model::UpdateRobotApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateRobotApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRobotApplicationAsync(const Model::UpdateRobotApplicationRequest& request, const UpdateRobotApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a simulation application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateSimulationApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSimulationApplicationOutcome UpdateSimulationApplication(const Model::UpdateSimulationApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSimulationApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSimulationApplicationOutcomeCallable UpdateSimulationApplicationCallable(const Model::UpdateSimulationApplicationRequest& request) const;

        /**
         * An Async wrapper for UpdateSimulationApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSimulationApplicationAsync(const Model::UpdateSimulationApplicationRequest& request, const UpdateSimulationApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a world template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/UpdateWorldTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorldTemplateOutcome UpdateWorldTemplate(const Model::UpdateWorldTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorldTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateWorldTemplateOutcomeCallable UpdateWorldTemplateCallable(const Model::UpdateWorldTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateWorldTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateWorldTemplateAsync(const Model::UpdateWorldTemplateRequest& request, const UpdateWorldTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RoboMakerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RoboMakerClient>;
      void init(const RoboMakerClientConfiguration& clientConfiguration);

      RoboMakerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RoboMakerEndpointProviderBase> m_endpointProvider;
  };

} // namespace RoboMaker
} // namespace Aws
