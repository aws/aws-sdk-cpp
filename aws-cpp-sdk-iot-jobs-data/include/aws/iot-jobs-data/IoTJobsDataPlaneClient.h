/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-jobs-data/IoTJobsDataPlane_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneServiceClientModel.h>

namespace Aws
{
namespace IoTJobsDataPlane
{
  /**
   * <p>AWS IoT Jobs is a service that allows you to define a set of jobs — remote
   * operations that are sent to and executed on one or more devices connected to AWS
   * IoT. For example, you can define a job that instructs a set of devices to
   * download and install application or firmware updates, reboot, rotate
   * certificates, or perform remote troubleshooting operations.</p> <p> To create a
   * job, you make a job document which is a description of the remote operations to
   * be performed, and you specify a list of targets that should perform the
   * operations. The targets can be individual things, thing groups or both.</p> <p>
   * AWS IoT Jobs sends a message to inform the targets that a job is available. The
   * target starts the execution of the job by downloading the job document,
   * performing the operations it specifies, and reporting its progress to AWS IoT.
   * The Jobs service provides commands to track the progress of a job on a specific
   * target and for all the targets of the job</p>
   */
  class AWS_IOTJOBSDATAPLANE_API IoTJobsDataPlaneClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTJobsDataPlaneClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTJobsDataPlaneClient(const Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration& clientConfiguration = Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration(),
                               std::shared_ptr<IoTJobsDataPlaneEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTJobsDataPlaneEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTJobsDataPlaneClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<IoTJobsDataPlaneEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTJobsDataPlaneEndpointProvider>(ALLOCATION_TAG),
                               const Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration& clientConfiguration = Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTJobsDataPlaneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<IoTJobsDataPlaneEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTJobsDataPlaneEndpointProvider>(ALLOCATION_TAG),
                               const Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration& clientConfiguration = Aws::IoTJobsDataPlane::IoTJobsDataPlaneClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTJobsDataPlaneClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTJobsDataPlaneClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTJobsDataPlaneClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTJobsDataPlaneClient();

        /**
         * <p>Gets details of a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/DescribeJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobExecutionOutcome DescribeJobExecution(const Model::DescribeJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobExecutionOutcomeCallable DescribeJobExecutionCallable(const Model::DescribeJobExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobExecutionAsync(const Model::DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the list of all jobs for a thing that are not in a terminal
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/GetPendingJobExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPendingJobExecutionsOutcome GetPendingJobExecutions(const Model::GetPendingJobExecutionsRequest& request) const;

        /**
         * A Callable wrapper for GetPendingJobExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPendingJobExecutionsOutcomeCallable GetPendingJobExecutionsCallable(const Model::GetPendingJobExecutionsRequest& request) const;

        /**
         * An Async wrapper for GetPendingJobExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPendingJobExecutionsAsync(const Model::GetPendingJobExecutionsRequest& request, const GetPendingJobExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets and starts the next pending (status IN_PROGRESS or QUEUED) job execution
         * for a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/StartNextPendingJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartNextPendingJobExecutionOutcome StartNextPendingJobExecution(const Model::StartNextPendingJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartNextPendingJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartNextPendingJobExecutionOutcomeCallable StartNextPendingJobExecutionCallable(const Model::StartNextPendingJobExecutionRequest& request) const;

        /**
         * An Async wrapper for StartNextPendingJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartNextPendingJobExecutionAsync(const Model::StartNextPendingJobExecutionRequest& request, const StartNextPendingJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of a job execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-jobs-data-2017-09-29/UpdateJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobExecutionOutcome UpdateJobExecution(const Model::UpdateJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobExecutionOutcomeCallable UpdateJobExecutionCallable(const Model::UpdateJobExecutionRequest& request) const;

        /**
         * An Async wrapper for UpdateJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobExecutionAsync(const Model::UpdateJobExecutionRequest& request, const UpdateJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTJobsDataPlaneEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTJobsDataPlaneClient>;
      void init(const IoTJobsDataPlaneClientConfiguration& clientConfiguration);

      IoTJobsDataPlaneClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTJobsDataPlaneEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTJobsDataPlane
} // namespace Aws
