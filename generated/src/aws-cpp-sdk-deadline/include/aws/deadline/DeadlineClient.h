/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/DeadlineServiceClientModel.h>

namespace Aws
{
namespace deadline
{
  /**
   * <p>The Amazon Web Services Deadline Cloud API provides infrastructure and
   * centralized management for your projects. Use the Deadline Cloud API to onboard
   * users, assign projects, and attach permissions specific to their job
   * function.</p> <p>With Deadline Cloud, content production teams can deploy
   * resources for their workforce securely in the cloud, reducing the costs of added
   * physical infrastructure. Keep your content production operations secure, while
   * allowing your contributors to access the tools they need, such as scalable
   * high-speed storage, licenses, and cost management services.</p>
   */
  class AWS_DEADLINE_API DeadlineClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DeadlineClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DeadlineClientConfiguration ClientConfigurationType;
      typedef DeadlineEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeadlineClient(const Aws::deadline::DeadlineClientConfiguration& clientConfiguration = Aws::deadline::DeadlineClientConfiguration(),
                       std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeadlineClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::deadline::DeadlineClientConfiguration& clientConfiguration = Aws::deadline::DeadlineClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeadlineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<DeadlineEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::deadline::DeadlineClientConfiguration& clientConfiguration = Aws::deadline::DeadlineClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeadlineClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeadlineClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeadlineClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DeadlineClient();

        /**
         * <p>Assigns a farm membership level to a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssociateMemberToFarm">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToFarmOutcome AssociateMemberToFarm(const Model::AssociateMemberToFarmRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberToFarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberToFarmRequestT = Model::AssociateMemberToFarmRequest>
        Model::AssociateMemberToFarmOutcomeCallable AssociateMemberToFarmCallable(const AssociateMemberToFarmRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssociateMemberToFarm, request);
        }

        /**
         * An Async wrapper for AssociateMemberToFarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberToFarmRequestT = Model::AssociateMemberToFarmRequest>
        void AssociateMemberToFarmAsync(const AssociateMemberToFarmRequestT& request, const AssociateMemberToFarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssociateMemberToFarm, request, handler, context);
        }

        /**
         * <p>Assigns a fleet membership level to a member.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssociateMemberToFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToFleetOutcome AssociateMemberToFleet(const Model::AssociateMemberToFleetRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberToFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberToFleetRequestT = Model::AssociateMemberToFleetRequest>
        Model::AssociateMemberToFleetOutcomeCallable AssociateMemberToFleetCallable(const AssociateMemberToFleetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssociateMemberToFleet, request);
        }

        /**
         * An Async wrapper for AssociateMemberToFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberToFleetRequestT = Model::AssociateMemberToFleetRequest>
        void AssociateMemberToFleetAsync(const AssociateMemberToFleetRequestT& request, const AssociateMemberToFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssociateMemberToFleet, request, handler, context);
        }

        /**
         * <p>Assigns a job membership level to a member</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssociateMemberToJob">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToJobOutcome AssociateMemberToJob(const Model::AssociateMemberToJobRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberToJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberToJobRequestT = Model::AssociateMemberToJobRequest>
        Model::AssociateMemberToJobOutcomeCallable AssociateMemberToJobCallable(const AssociateMemberToJobRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssociateMemberToJob, request);
        }

        /**
         * An Async wrapper for AssociateMemberToJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberToJobRequestT = Model::AssociateMemberToJobRequest>
        void AssociateMemberToJobAsync(const AssociateMemberToJobRequestT& request, const AssociateMemberToJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssociateMemberToJob, request, handler, context);
        }

        /**
         * <p>Assigns a queue membership level to a member</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssociateMemberToQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateMemberToQueueOutcome AssociateMemberToQueue(const Model::AssociateMemberToQueueRequest& request) const;

        /**
         * A Callable wrapper for AssociateMemberToQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateMemberToQueueRequestT = Model::AssociateMemberToQueueRequest>
        Model::AssociateMemberToQueueOutcomeCallable AssociateMemberToQueueCallable(const AssociateMemberToQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssociateMemberToQueue, request);
        }

        /**
         * An Async wrapper for AssociateMemberToQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateMemberToQueueRequestT = Model::AssociateMemberToQueueRequest>
        void AssociateMemberToQueueAsync(const AssociateMemberToQueueRequestT& request, const AssociateMemberToQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssociateMemberToQueue, request, handler, context);
        }

        /**
         * <p>Get Amazon Web Services credentials from the fleet role. The IAM permissions
         * of the credentials are scoped down to have read-only access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssumeFleetRoleForRead">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeFleetRoleForReadOutcome AssumeFleetRoleForRead(const Model::AssumeFleetRoleForReadRequest& request) const;

        /**
         * A Callable wrapper for AssumeFleetRoleForRead that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeFleetRoleForReadRequestT = Model::AssumeFleetRoleForReadRequest>
        Model::AssumeFleetRoleForReadOutcomeCallable AssumeFleetRoleForReadCallable(const AssumeFleetRoleForReadRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssumeFleetRoleForRead, request);
        }

        /**
         * An Async wrapper for AssumeFleetRoleForRead that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeFleetRoleForReadRequestT = Model::AssumeFleetRoleForReadRequest>
        void AssumeFleetRoleForReadAsync(const AssumeFleetRoleForReadRequestT& request, const AssumeFleetRoleForReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssumeFleetRoleForRead, request, handler, context);
        }

        /**
         * <p>Get credentials from the fleet role for a worker.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssumeFleetRoleForWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeFleetRoleForWorkerOutcome AssumeFleetRoleForWorker(const Model::AssumeFleetRoleForWorkerRequest& request) const;

        /**
         * A Callable wrapper for AssumeFleetRoleForWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeFleetRoleForWorkerRequestT = Model::AssumeFleetRoleForWorkerRequest>
        Model::AssumeFleetRoleForWorkerOutcomeCallable AssumeFleetRoleForWorkerCallable(const AssumeFleetRoleForWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssumeFleetRoleForWorker, request);
        }

        /**
         * An Async wrapper for AssumeFleetRoleForWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeFleetRoleForWorkerRequestT = Model::AssumeFleetRoleForWorkerRequest>
        void AssumeFleetRoleForWorkerAsync(const AssumeFleetRoleForWorkerRequestT& request, const AssumeFleetRoleForWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssumeFleetRoleForWorker, request, handler, context);
        }

        /**
         * <p>Gets Amazon Web Services credentials from the queue role. The IAM permissions
         * of the credentials are scoped down to have read-only access.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssumeQueueRoleForRead">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeQueueRoleForReadOutcome AssumeQueueRoleForRead(const Model::AssumeQueueRoleForReadRequest& request) const;

        /**
         * A Callable wrapper for AssumeQueueRoleForRead that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeQueueRoleForReadRequestT = Model::AssumeQueueRoleForReadRequest>
        Model::AssumeQueueRoleForReadOutcomeCallable AssumeQueueRoleForReadCallable(const AssumeQueueRoleForReadRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssumeQueueRoleForRead, request);
        }

        /**
         * An Async wrapper for AssumeQueueRoleForRead that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeQueueRoleForReadRequestT = Model::AssumeQueueRoleForReadRequest>
        void AssumeQueueRoleForReadAsync(const AssumeQueueRoleForReadRequestT& request, const AssumeQueueRoleForReadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssumeQueueRoleForRead, request, handler, context);
        }

        /**
         * <p>Allows a user to assume a role for a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssumeQueueRoleForUser">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeQueueRoleForUserOutcome AssumeQueueRoleForUser(const Model::AssumeQueueRoleForUserRequest& request) const;

        /**
         * A Callable wrapper for AssumeQueueRoleForUser that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeQueueRoleForUserRequestT = Model::AssumeQueueRoleForUserRequest>
        Model::AssumeQueueRoleForUserOutcomeCallable AssumeQueueRoleForUserCallable(const AssumeQueueRoleForUserRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssumeQueueRoleForUser, request);
        }

        /**
         * An Async wrapper for AssumeQueueRoleForUser that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeQueueRoleForUserRequestT = Model::AssumeQueueRoleForUserRequest>
        void AssumeQueueRoleForUserAsync(const AssumeQueueRoleForUserRequestT& request, const AssumeQueueRoleForUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssumeQueueRoleForUser, request, handler, context);
        }

        /**
         * <p>Allows a worker to assume a queue role.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/AssumeQueueRoleForWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::AssumeQueueRoleForWorkerOutcome AssumeQueueRoleForWorker(const Model::AssumeQueueRoleForWorkerRequest& request) const;

        /**
         * A Callable wrapper for AssumeQueueRoleForWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssumeQueueRoleForWorkerRequestT = Model::AssumeQueueRoleForWorkerRequest>
        Model::AssumeQueueRoleForWorkerOutcomeCallable AssumeQueueRoleForWorkerCallable(const AssumeQueueRoleForWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::AssumeQueueRoleForWorker, request);
        }

        /**
         * An Async wrapper for AssumeQueueRoleForWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssumeQueueRoleForWorkerRequestT = Model::AssumeQueueRoleForWorkerRequest>
        void AssumeQueueRoleForWorkerAsync(const AssumeQueueRoleForWorkerRequestT& request, const AssumeQueueRoleForWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::AssumeQueueRoleForWorker, request, handler, context);
        }

        /**
         * <p>Get batched job details for a worker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BatchGetJobEntity">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetJobEntityOutcome BatchGetJobEntity(const Model::BatchGetJobEntityRequest& request) const;

        /**
         * A Callable wrapper for BatchGetJobEntity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetJobEntityRequestT = Model::BatchGetJobEntityRequest>
        Model::BatchGetJobEntityOutcomeCallable BatchGetJobEntityCallable(const BatchGetJobEntityRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::BatchGetJobEntity, request);
        }

        /**
         * An Async wrapper for BatchGetJobEntity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetJobEntityRequestT = Model::BatchGetJobEntityRequest>
        void BatchGetJobEntityAsync(const BatchGetJobEntityRequestT& request, const BatchGetJobEntityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::BatchGetJobEntity, request, handler, context);
        }

        /**
         * <p>Copies a job template to an Amazon S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CopyJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyJobTemplateOutcome CopyJobTemplate(const Model::CopyJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for CopyJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyJobTemplateRequestT = Model::CopyJobTemplateRequest>
        Model::CopyJobTemplateOutcomeCallable CopyJobTemplateCallable(const CopyJobTemplateRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CopyJobTemplate, request);
        }

        /**
         * An Async wrapper for CopyJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyJobTemplateRequestT = Model::CopyJobTemplateRequest>
        void CopyJobTemplateAsync(const CopyJobTemplateRequestT& request, const CopyJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CopyJobTemplate, request, handler, context);
        }

        /**
         * <p>Creates a budget to set spending thresholds for your rendering
         * activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBudgetOutcome CreateBudget(const Model::CreateBudgetRequest& request) const;

        /**
         * A Callable wrapper for CreateBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBudgetRequestT = Model::CreateBudgetRequest>
        Model::CreateBudgetOutcomeCallable CreateBudgetCallable(const CreateBudgetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateBudget, request);
        }

        /**
         * An Async wrapper for CreateBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBudgetRequestT = Model::CreateBudgetRequest>
        void CreateBudgetAsync(const CreateBudgetRequestT& request, const CreateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateBudget, request, handler, context);
        }

        /**
         * <p>Creates a farm to allow space for queues and fleets. Farms are the space
         * where the components of your renders gather and are pieced together in the
         * cloud. Farms contain budgets and allow you to enforce permissions. Deadline
         * Cloud farms are a useful container for large projects.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateFarm">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFarmOutcome CreateFarm(const Model::CreateFarmRequest& request) const;

        /**
         * A Callable wrapper for CreateFarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFarmRequestT = Model::CreateFarmRequest>
        Model::CreateFarmOutcomeCallable CreateFarmCallable(const CreateFarmRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateFarm, request);
        }

        /**
         * An Async wrapper for CreateFarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFarmRequestT = Model::CreateFarmRequest>
        void CreateFarmAsync(const CreateFarmRequestT& request, const CreateFarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateFarm, request, handler, context);
        }

        /**
         * <p>Creates a fleet. Fleets gather information relating to compute, or capacity,
         * for renders within your farms. You can choose to manage your own capacity or opt
         * to have fleets fully managed by Deadline Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        Model::CreateFleetOutcomeCallable CreateFleetCallable(const CreateFleetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateFleet, request);
        }

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFleetRequestT = Model::CreateFleetRequest>
        void CreateFleetAsync(const CreateFleetRequestT& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateFleet, request, handler, context);
        }

        /**
         * <p>Creates a job. A job is a set of instructions that Deadline Cloud uses to
         * schedule and run work on available workers. For more information, see <a
         * href="https://docs.aws.amazon.com/deadline-cloud/latest/userguide/deadline-cloud-jobs.html">Deadline
         * Cloud jobs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateJob, request, handler, context);
        }

        /**
         * <p>Creates a license endpoint to integrate your various licensed software used
         * for rendering on Deadline Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateLicenseEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLicenseEndpointOutcome CreateLicenseEndpoint(const Model::CreateLicenseEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateLicenseEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLicenseEndpointRequestT = Model::CreateLicenseEndpointRequest>
        Model::CreateLicenseEndpointOutcomeCallable CreateLicenseEndpointCallable(const CreateLicenseEndpointRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateLicenseEndpoint, request);
        }

        /**
         * An Async wrapper for CreateLicenseEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLicenseEndpointRequestT = Model::CreateLicenseEndpointRequest>
        void CreateLicenseEndpointAsync(const CreateLicenseEndpointRequestT& request, const CreateLicenseEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateLicenseEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a limit that manages the distribution of shared resources, such as
         * floating licenses. A limit can throttle work assignments, help manage workloads,
         * and track current usage. Before you use a limit, you must associate the limit
         * with one or more queues. </p> <p>You must add the
         * <code>amountRequirementName</code> to a step in a job template to declare the
         * limit requirement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLimitOutcome CreateLimit(const Model::CreateLimitRequest& request) const;

        /**
         * A Callable wrapper for CreateLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLimitRequestT = Model::CreateLimitRequest>
        Model::CreateLimitOutcomeCallable CreateLimitCallable(const CreateLimitRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateLimit, request);
        }

        /**
         * An Async wrapper for CreateLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLimitRequestT = Model::CreateLimitRequest>
        void CreateLimitAsync(const CreateLimitRequestT& request, const CreateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateLimit, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services Deadline Cloud monitor that you can use to
         * view your farms, queues, and fleets. After you submit a job, you can track the
         * progress of the tasks and steps that make up the job, and then download the
         * job's results. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMonitorOutcome CreateMonitor(const Model::CreateMonitorRequest& request) const;

        /**
         * A Callable wrapper for CreateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        Model::CreateMonitorOutcomeCallable CreateMonitorCallable(const CreateMonitorRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateMonitor, request);
        }

        /**
         * An Async wrapper for CreateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMonitorRequestT = Model::CreateMonitorRequest>
        void CreateMonitorAsync(const CreateMonitorRequestT& request, const CreateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateMonitor, request, handler, context);
        }

        /**
         * <p>Creates a queue to coordinate the order in which jobs run on a farm. A queue
         * can also specify where to pull resources and indicate where to output completed
         * jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueOutcome CreateQueue(const Model::CreateQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        Model::CreateQueueOutcomeCallable CreateQueueCallable(const CreateQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateQueue, request);
        }

        /**
         * An Async wrapper for CreateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueRequestT = Model::CreateQueueRequest>
        void CreateQueueAsync(const CreateQueueRequestT& request, const CreateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateQueue, request, handler, context);
        }

        /**
         * <p>Creates an environment for a queue that defines how jobs in the queue
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateQueueEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueEnvironmentOutcome CreateQueueEnvironment(const Model::CreateQueueEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateQueueEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueEnvironmentRequestT = Model::CreateQueueEnvironmentRequest>
        Model::CreateQueueEnvironmentOutcomeCallable CreateQueueEnvironmentCallable(const CreateQueueEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateQueueEnvironment, request);
        }

        /**
         * An Async wrapper for CreateQueueEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueEnvironmentRequestT = Model::CreateQueueEnvironmentRequest>
        void CreateQueueEnvironmentAsync(const CreateQueueEnvironmentRequestT& request, const CreateQueueEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateQueueEnvironment, request, handler, context);
        }

        /**
         * <p>Creates an association between a queue and a fleet.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateQueueFleetAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueFleetAssociationOutcome CreateQueueFleetAssociation(const Model::CreateQueueFleetAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateQueueFleetAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueFleetAssociationRequestT = Model::CreateQueueFleetAssociationRequest>
        Model::CreateQueueFleetAssociationOutcomeCallable CreateQueueFleetAssociationCallable(const CreateQueueFleetAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateQueueFleetAssociation, request);
        }

        /**
         * An Async wrapper for CreateQueueFleetAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueFleetAssociationRequestT = Model::CreateQueueFleetAssociationRequest>
        void CreateQueueFleetAssociationAsync(const CreateQueueFleetAssociationRequestT& request, const CreateQueueFleetAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateQueueFleetAssociation, request, handler, context);
        }

        /**
         * <p>Associates a limit with a particular queue. After the limit is associated,
         * all workers for jobs that specify the limit associated with the queue are
         * subject to the limit. You can't associate two limits with the same
         * <code>amountRequirementName</code> to the same queue.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateQueueLimitAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueueLimitAssociationOutcome CreateQueueLimitAssociation(const Model::CreateQueueLimitAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateQueueLimitAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateQueueLimitAssociationRequestT = Model::CreateQueueLimitAssociationRequest>
        Model::CreateQueueLimitAssociationOutcomeCallable CreateQueueLimitAssociationCallable(const CreateQueueLimitAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateQueueLimitAssociation, request);
        }

        /**
         * An Async wrapper for CreateQueueLimitAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateQueueLimitAssociationRequestT = Model::CreateQueueLimitAssociationRequest>
        void CreateQueueLimitAssociationAsync(const CreateQueueLimitAssociationRequestT& request, const CreateQueueLimitAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateQueueLimitAssociation, request, handler, context);
        }

        /**
         * <p>Creates a storage profile that specifies the operating system, file type, and
         * file location of resources used on a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateStorageProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStorageProfileOutcome CreateStorageProfile(const Model::CreateStorageProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateStorageProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStorageProfileRequestT = Model::CreateStorageProfileRequest>
        Model::CreateStorageProfileOutcomeCallable CreateStorageProfileCallable(const CreateStorageProfileRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateStorageProfile, request);
        }

        /**
         * An Async wrapper for CreateStorageProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStorageProfileRequestT = Model::CreateStorageProfileRequest>
        void CreateStorageProfileAsync(const CreateStorageProfileRequestT& request, const CreateStorageProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateStorageProfile, request, handler, context);
        }

        /**
         * <p>Creates a worker. A worker tells your instance how much processing power
         * (vCPU), and memory (GiB) you’ll need to assemble the digital assets held within
         * a particular instance. You can specify certain instance types to use, or let the
         * worker know which instances types to exclude.</p> <p>Deadline Cloud limits the
         * number of workers to less than or equal to the fleet's maximum worker count. The
         * service maintains eventual consistency for the worker count. If you make
         * multiple rapid calls to <code>CreateWorker</code> before the field updates, you
         * might exceed your fleet's maximum worker count. For example, if your
         * <code>maxWorkerCount</code> is 10 and you currently have 9 workers, making two
         * quick <code>CreateWorker</code> calls might successfully create 2 workers
         * instead of 1, resulting in 11 total workers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/CreateWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkerOutcome CreateWorker(const Model::CreateWorkerRequest& request) const;

        /**
         * A Callable wrapper for CreateWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkerRequestT = Model::CreateWorkerRequest>
        Model::CreateWorkerOutcomeCallable CreateWorkerCallable(const CreateWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::CreateWorker, request);
        }

        /**
         * An Async wrapper for CreateWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkerRequestT = Model::CreateWorkerRequest>
        void CreateWorkerAsync(const CreateWorkerRequestT& request, const CreateWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::CreateWorker, request, handler, context);
        }

        /**
         * <p>Deletes a budget.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBudgetOutcome DeleteBudget(const Model::DeleteBudgetRequest& request) const;

        /**
         * A Callable wrapper for DeleteBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBudgetRequestT = Model::DeleteBudgetRequest>
        Model::DeleteBudgetOutcomeCallable DeleteBudgetCallable(const DeleteBudgetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteBudget, request);
        }

        /**
         * An Async wrapper for DeleteBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBudgetRequestT = Model::DeleteBudgetRequest>
        void DeleteBudgetAsync(const DeleteBudgetRequestT& request, const DeleteBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteBudget, request, handler, context);
        }

        /**
         * <p>Deletes a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteFarm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFarmOutcome DeleteFarm(const Model::DeleteFarmRequest& request) const;

        /**
         * A Callable wrapper for DeleteFarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFarmRequestT = Model::DeleteFarmRequest>
        Model::DeleteFarmOutcomeCallable DeleteFarmCallable(const DeleteFarmRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteFarm, request);
        }

        /**
         * An Async wrapper for DeleteFarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFarmRequestT = Model::DeleteFarmRequest>
        void DeleteFarmAsync(const DeleteFarmRequestT& request, const DeleteFarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteFarm, request, handler, context);
        }

        /**
         * <p>Deletes a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const DeleteFleetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteFleet, request);
        }

        /**
         * An Async wrapper for DeleteFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetRequestT = Model::DeleteFleetRequest>
        void DeleteFleetAsync(const DeleteFleetRequestT& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteFleet, request, handler, context);
        }

        /**
         * <p>Deletes a license endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteLicenseEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLicenseEndpointOutcome DeleteLicenseEndpoint(const Model::DeleteLicenseEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteLicenseEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLicenseEndpointRequestT = Model::DeleteLicenseEndpointRequest>
        Model::DeleteLicenseEndpointOutcomeCallable DeleteLicenseEndpointCallable(const DeleteLicenseEndpointRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteLicenseEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteLicenseEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLicenseEndpointRequestT = Model::DeleteLicenseEndpointRequest>
        void DeleteLicenseEndpointAsync(const DeleteLicenseEndpointRequestT& request, const DeleteLicenseEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteLicenseEndpoint, request, handler, context);
        }

        /**
         * <p>Removes a limit from the specified farm. Before you delete a limit you must
         * use the <code>DeleteQueueLimitAssociation</code> operation to remove the
         * association with any queues. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLimitOutcome DeleteLimit(const Model::DeleteLimitRequest& request) const;

        /**
         * A Callable wrapper for DeleteLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLimitRequestT = Model::DeleteLimitRequest>
        Model::DeleteLimitOutcomeCallable DeleteLimitCallable(const DeleteLimitRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteLimit, request);
        }

        /**
         * An Async wrapper for DeleteLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLimitRequestT = Model::DeleteLimitRequest>
        void DeleteLimitAsync(const DeleteLimitRequestT& request, const DeleteLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteLimit, request, handler, context);
        }

        /**
         * <p>Deletes a metered product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteMeteredProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeteredProductOutcome DeleteMeteredProduct(const Model::DeleteMeteredProductRequest& request) const;

        /**
         * A Callable wrapper for DeleteMeteredProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMeteredProductRequestT = Model::DeleteMeteredProductRequest>
        Model::DeleteMeteredProductOutcomeCallable DeleteMeteredProductCallable(const DeleteMeteredProductRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteMeteredProduct, request);
        }

        /**
         * An Async wrapper for DeleteMeteredProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMeteredProductRequestT = Model::DeleteMeteredProductRequest>
        void DeleteMeteredProductAsync(const DeleteMeteredProductRequestT& request, const DeleteMeteredProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteMeteredProduct, request, handler, context);
        }

        /**
         * <p>Removes a Deadline Cloud monitor. After you delete a monitor, you can create
         * a new one and attach farms to the monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMonitorOutcome DeleteMonitor(const Model::DeleteMonitorRequest& request) const;

        /**
         * A Callable wrapper for DeleteMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        Model::DeleteMonitorOutcomeCallable DeleteMonitorCallable(const DeleteMonitorRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteMonitor, request);
        }

        /**
         * An Async wrapper for DeleteMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMonitorRequestT = Model::DeleteMonitorRequest>
        void DeleteMonitorAsync(const DeleteMonitorRequestT& request, const DeleteMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteMonitor, request, handler, context);
        }

        /**
         * <p>Deletes a queue.</p>  <p>You can't recover the jobs in a queue if
         * you delete the queue. Deleting the queue also deletes the jobs in that
         * queue.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueOutcome DeleteQueue(const Model::DeleteQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        Model::DeleteQueueOutcomeCallable DeleteQueueCallable(const DeleteQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteQueue, request);
        }

        /**
         * An Async wrapper for DeleteQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueRequestT = Model::DeleteQueueRequest>
        void DeleteQueueAsync(const DeleteQueueRequestT& request, const DeleteQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteQueue, request, handler, context);
        }

        /**
         * <p>Deletes a queue environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteQueueEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueEnvironmentOutcome DeleteQueueEnvironment(const Model::DeleteQueueEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueueEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueEnvironmentRequestT = Model::DeleteQueueEnvironmentRequest>
        Model::DeleteQueueEnvironmentOutcomeCallable DeleteQueueEnvironmentCallable(const DeleteQueueEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteQueueEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteQueueEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueEnvironmentRequestT = Model::DeleteQueueEnvironmentRequest>
        void DeleteQueueEnvironmentAsync(const DeleteQueueEnvironmentRequestT& request, const DeleteQueueEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteQueueEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes a queue-fleet association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteQueueFleetAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueFleetAssociationOutcome DeleteQueueFleetAssociation(const Model::DeleteQueueFleetAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueueFleetAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueFleetAssociationRequestT = Model::DeleteQueueFleetAssociationRequest>
        Model::DeleteQueueFleetAssociationOutcomeCallable DeleteQueueFleetAssociationCallable(const DeleteQueueFleetAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteQueueFleetAssociation, request);
        }

        /**
         * An Async wrapper for DeleteQueueFleetAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueFleetAssociationRequestT = Model::DeleteQueueFleetAssociationRequest>
        void DeleteQueueFleetAssociationAsync(const DeleteQueueFleetAssociationRequestT& request, const DeleteQueueFleetAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteQueueFleetAssociation, request, handler, context);
        }

        /**
         * <p>Removes the association between a queue and a limit. You must use the
         * <code>UpdateQueueLimitAssociation</code> operation to set the status to
         * <code>STOP_LIMIT_USAGE_AND_COMPLETE_TASKS</code> or
         * <code>STOP_LIMIT_USAGE_AND_CANCEL_TASKS</code>. The status does not change
         * immediately. Use the <code>GetQueueLimitAssociation</code> operation to see if
         * the status changed to <code>STOPPED</code> before deleting the
         * association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteQueueLimitAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueueLimitAssociationOutcome DeleteQueueLimitAssociation(const Model::DeleteQueueLimitAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueueLimitAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueueLimitAssociationRequestT = Model::DeleteQueueLimitAssociationRequest>
        Model::DeleteQueueLimitAssociationOutcomeCallable DeleteQueueLimitAssociationCallable(const DeleteQueueLimitAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteQueueLimitAssociation, request);
        }

        /**
         * An Async wrapper for DeleteQueueLimitAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueueLimitAssociationRequestT = Model::DeleteQueueLimitAssociationRequest>
        void DeleteQueueLimitAssociationAsync(const DeleteQueueLimitAssociationRequestT& request, const DeleteQueueLimitAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteQueueLimitAssociation, request, handler, context);
        }

        /**
         * <p>Deletes a storage profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteStorageProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageProfileOutcome DeleteStorageProfile(const Model::DeleteStorageProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStorageProfileRequestT = Model::DeleteStorageProfileRequest>
        Model::DeleteStorageProfileOutcomeCallable DeleteStorageProfileCallable(const DeleteStorageProfileRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteStorageProfile, request);
        }

        /**
         * An Async wrapper for DeleteStorageProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStorageProfileRequestT = Model::DeleteStorageProfileRequest>
        void DeleteStorageProfileAsync(const DeleteStorageProfileRequestT& request, const DeleteStorageProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteStorageProfile, request, handler, context);
        }

        /**
         * <p>Deletes a worker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DeleteWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkerOutcome DeleteWorker(const Model::DeleteWorkerRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkerRequestT = Model::DeleteWorkerRequest>
        Model::DeleteWorkerOutcomeCallable DeleteWorkerCallable(const DeleteWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DeleteWorker, request);
        }

        /**
         * An Async wrapper for DeleteWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkerRequestT = Model::DeleteWorkerRequest>
        void DeleteWorkerAsync(const DeleteWorkerRequestT& request, const DeleteWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DeleteWorker, request, handler, context);
        }

        /**
         * <p>Disassociates a member from a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DisassociateMemberFromFarm">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromFarmOutcome DisassociateMemberFromFarm(const Model::DisassociateMemberFromFarmRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberFromFarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberFromFarmRequestT = Model::DisassociateMemberFromFarmRequest>
        Model::DisassociateMemberFromFarmOutcomeCallable DisassociateMemberFromFarmCallable(const DisassociateMemberFromFarmRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DisassociateMemberFromFarm, request);
        }

        /**
         * An Async wrapper for DisassociateMemberFromFarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberFromFarmRequestT = Model::DisassociateMemberFromFarmRequest>
        void DisassociateMemberFromFarmAsync(const DisassociateMemberFromFarmRequestT& request, const DisassociateMemberFromFarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DisassociateMemberFromFarm, request, handler, context);
        }

        /**
         * <p>Disassociates a member from a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DisassociateMemberFromFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromFleetOutcome DisassociateMemberFromFleet(const Model::DisassociateMemberFromFleetRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberFromFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberFromFleetRequestT = Model::DisassociateMemberFromFleetRequest>
        Model::DisassociateMemberFromFleetOutcomeCallable DisassociateMemberFromFleetCallable(const DisassociateMemberFromFleetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DisassociateMemberFromFleet, request);
        }

        /**
         * An Async wrapper for DisassociateMemberFromFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberFromFleetRequestT = Model::DisassociateMemberFromFleetRequest>
        void DisassociateMemberFromFleetAsync(const DisassociateMemberFromFleetRequestT& request, const DisassociateMemberFromFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DisassociateMemberFromFleet, request, handler, context);
        }

        /**
         * <p>Disassociates a member from a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DisassociateMemberFromJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromJobOutcome DisassociateMemberFromJob(const Model::DisassociateMemberFromJobRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberFromJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberFromJobRequestT = Model::DisassociateMemberFromJobRequest>
        Model::DisassociateMemberFromJobOutcomeCallable DisassociateMemberFromJobCallable(const DisassociateMemberFromJobRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DisassociateMemberFromJob, request);
        }

        /**
         * An Async wrapper for DisassociateMemberFromJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberFromJobRequestT = Model::DisassociateMemberFromJobRequest>
        void DisassociateMemberFromJobAsync(const DisassociateMemberFromJobRequestT& request, const DisassociateMemberFromJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DisassociateMemberFromJob, request, handler, context);
        }

        /**
         * <p>Disassociates a member from a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/DisassociateMemberFromQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateMemberFromQueueOutcome DisassociateMemberFromQueue(const Model::DisassociateMemberFromQueueRequest& request) const;

        /**
         * A Callable wrapper for DisassociateMemberFromQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateMemberFromQueueRequestT = Model::DisassociateMemberFromQueueRequest>
        Model::DisassociateMemberFromQueueOutcomeCallable DisassociateMemberFromQueueCallable(const DisassociateMemberFromQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::DisassociateMemberFromQueue, request);
        }

        /**
         * An Async wrapper for DisassociateMemberFromQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateMemberFromQueueRequestT = Model::DisassociateMemberFromQueueRequest>
        void DisassociateMemberFromQueueAsync(const DisassociateMemberFromQueueRequestT& request, const DisassociateMemberFromQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::DisassociateMemberFromQueue, request, handler, context);
        }

        /**
         * <p>Get a budget.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBudgetOutcome GetBudget(const Model::GetBudgetRequest& request) const;

        /**
         * A Callable wrapper for GetBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBudgetRequestT = Model::GetBudgetRequest>
        Model::GetBudgetOutcomeCallable GetBudgetCallable(const GetBudgetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetBudget, request);
        }

        /**
         * An Async wrapper for GetBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBudgetRequestT = Model::GetBudgetRequest>
        void GetBudgetAsync(const GetBudgetRequestT& request, const GetBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetBudget, request, handler, context);
        }

        /**
         * <p>Get a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetFarm">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFarmOutcome GetFarm(const Model::GetFarmRequest& request) const;

        /**
         * A Callable wrapper for GetFarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFarmRequestT = Model::GetFarmRequest>
        Model::GetFarmOutcomeCallable GetFarmCallable(const GetFarmRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetFarm, request);
        }

        /**
         * An Async wrapper for GetFarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFarmRequestT = Model::GetFarmRequest>
        void GetFarmAsync(const GetFarmRequestT& request, const GetFarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetFarm, request, handler, context);
        }

        /**
         * <p>Get a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFleetOutcome GetFleet(const Model::GetFleetRequest& request) const;

        /**
         * A Callable wrapper for GetFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFleetRequestT = Model::GetFleetRequest>
        Model::GetFleetOutcomeCallable GetFleetCallable(const GetFleetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetFleet, request);
        }

        /**
         * An Async wrapper for GetFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFleetRequestT = Model::GetFleetRequest>
        void GetFleetAsync(const GetFleetRequestT& request, const GetFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetFleet, request, handler, context);
        }

        /**
         * <p>Gets a Deadline Cloud job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetJob, request, handler, context);
        }

        /**
         * <p>Gets a licence endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetLicenseEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLicenseEndpointOutcome GetLicenseEndpoint(const Model::GetLicenseEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetLicenseEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLicenseEndpointRequestT = Model::GetLicenseEndpointRequest>
        Model::GetLicenseEndpointOutcomeCallable GetLicenseEndpointCallable(const GetLicenseEndpointRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetLicenseEndpoint, request);
        }

        /**
         * An Async wrapper for GetLicenseEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLicenseEndpointRequestT = Model::GetLicenseEndpointRequest>
        void GetLicenseEndpointAsync(const GetLicenseEndpointRequestT& request, const GetLicenseEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetLicenseEndpoint, request, handler, context);
        }

        /**
         * <p>Gets information about a specific limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLimitOutcome GetLimit(const Model::GetLimitRequest& request) const;

        /**
         * A Callable wrapper for GetLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLimitRequestT = Model::GetLimitRequest>
        Model::GetLimitOutcomeCallable GetLimitCallable(const GetLimitRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetLimit, request);
        }

        /**
         * An Async wrapper for GetLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLimitRequestT = Model::GetLimitRequest>
        void GetLimitAsync(const GetLimitRequestT& request, const GetLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetLimit, request, handler, context);
        }

        /**
         * <p>Gets information about the specified monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMonitorOutcome GetMonitor(const Model::GetMonitorRequest& request) const;

        /**
         * A Callable wrapper for GetMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        Model::GetMonitorOutcomeCallable GetMonitorCallable(const GetMonitorRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetMonitor, request);
        }

        /**
         * An Async wrapper for GetMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMonitorRequestT = Model::GetMonitorRequest>
        void GetMonitorAsync(const GetMonitorRequestT& request, const GetMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetMonitor, request, handler, context);
        }

        /**
         * <p>Gets a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueOutcome GetQueue(const Model::GetQueueRequest& request) const;

        /**
         * A Callable wrapper for GetQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueueRequestT = Model::GetQueueRequest>
        Model::GetQueueOutcomeCallable GetQueueCallable(const GetQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetQueue, request);
        }

        /**
         * An Async wrapper for GetQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueueRequestT = Model::GetQueueRequest>
        void GetQueueAsync(const GetQueueRequestT& request, const GetQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetQueue, request, handler, context);
        }

        /**
         * <p>Gets a queue environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetQueueEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueEnvironmentOutcome GetQueueEnvironment(const Model::GetQueueEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetQueueEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueueEnvironmentRequestT = Model::GetQueueEnvironmentRequest>
        Model::GetQueueEnvironmentOutcomeCallable GetQueueEnvironmentCallable(const GetQueueEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetQueueEnvironment, request);
        }

        /**
         * An Async wrapper for GetQueueEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueueEnvironmentRequestT = Model::GetQueueEnvironmentRequest>
        void GetQueueEnvironmentAsync(const GetQueueEnvironmentRequestT& request, const GetQueueEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetQueueEnvironment, request, handler, context);
        }

        /**
         * <p>Gets a queue-fleet association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetQueueFleetAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueFleetAssociationOutcome GetQueueFleetAssociation(const Model::GetQueueFleetAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetQueueFleetAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueueFleetAssociationRequestT = Model::GetQueueFleetAssociationRequest>
        Model::GetQueueFleetAssociationOutcomeCallable GetQueueFleetAssociationCallable(const GetQueueFleetAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetQueueFleetAssociation, request);
        }

        /**
         * An Async wrapper for GetQueueFleetAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueueFleetAssociationRequestT = Model::GetQueueFleetAssociationRequest>
        void GetQueueFleetAssociationAsync(const GetQueueFleetAssociationRequestT& request, const GetQueueFleetAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetQueueFleetAssociation, request, handler, context);
        }

        /**
         * <p>Gets information about a specific association between a queue and a
         * limit.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetQueueLimitAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueueLimitAssociationOutcome GetQueueLimitAssociation(const Model::GetQueueLimitAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetQueueLimitAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueueLimitAssociationRequestT = Model::GetQueueLimitAssociationRequest>
        Model::GetQueueLimitAssociationOutcomeCallable GetQueueLimitAssociationCallable(const GetQueueLimitAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetQueueLimitAssociation, request);
        }

        /**
         * An Async wrapper for GetQueueLimitAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueueLimitAssociationRequestT = Model::GetQueueLimitAssociationRequest>
        void GetQueueLimitAssociationAsync(const GetQueueLimitAssociationRequestT& request, const GetQueueLimitAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetQueueLimitAssociation, request, handler, context);
        }

        /**
         * <p>Gets a session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetSession, request, handler, context);
        }

        /**
         * <p>Gets a session action for the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetSessionAction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionActionOutcome GetSessionAction(const Model::GetSessionActionRequest& request) const;

        /**
         * A Callable wrapper for GetSessionAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionActionRequestT = Model::GetSessionActionRequest>
        Model::GetSessionActionOutcomeCallable GetSessionActionCallable(const GetSessionActionRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetSessionAction, request);
        }

        /**
         * An Async wrapper for GetSessionAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionActionRequestT = Model::GetSessionActionRequest>
        void GetSessionActionAsync(const GetSessionActionRequestT& request, const GetSessionActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetSessionAction, request, handler, context);
        }

        /**
         * <p>Gets a set of statistics for queues or farms. Before you can call the
         * <code>GetSessionStatisticsAggregation</code> operation, you must first call the
         * <code>StartSessionsStatisticsAggregation</code> operation. Statistics are
         * available for 1 hour after you call the
         * <code>StartSessionsStatisticsAggregation</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetSessionsStatisticsAggregation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSessionsStatisticsAggregationOutcome GetSessionsStatisticsAggregation(const Model::GetSessionsStatisticsAggregationRequest& request) const;

        /**
         * A Callable wrapper for GetSessionsStatisticsAggregation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionsStatisticsAggregationRequestT = Model::GetSessionsStatisticsAggregationRequest>
        Model::GetSessionsStatisticsAggregationOutcomeCallable GetSessionsStatisticsAggregationCallable(const GetSessionsStatisticsAggregationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetSessionsStatisticsAggregation, request);
        }

        /**
         * An Async wrapper for GetSessionsStatisticsAggregation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionsStatisticsAggregationRequestT = Model::GetSessionsStatisticsAggregationRequest>
        void GetSessionsStatisticsAggregationAsync(const GetSessionsStatisticsAggregationRequestT& request, const GetSessionsStatisticsAggregationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetSessionsStatisticsAggregation, request, handler, context);
        }

        /**
         * <p>Gets a step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetStep">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStepOutcome GetStep(const Model::GetStepRequest& request) const;

        /**
         * A Callable wrapper for GetStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStepRequestT = Model::GetStepRequest>
        Model::GetStepOutcomeCallable GetStepCallable(const GetStepRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetStep, request);
        }

        /**
         * An Async wrapper for GetStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStepRequestT = Model::GetStepRequest>
        void GetStepAsync(const GetStepRequestT& request, const GetStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetStep, request, handler, context);
        }

        /**
         * <p>Gets a storage profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetStorageProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageProfileOutcome GetStorageProfile(const Model::GetStorageProfileRequest& request) const;

        /**
         * A Callable wrapper for GetStorageProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStorageProfileRequestT = Model::GetStorageProfileRequest>
        Model::GetStorageProfileOutcomeCallable GetStorageProfileCallable(const GetStorageProfileRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetStorageProfile, request);
        }

        /**
         * An Async wrapper for GetStorageProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStorageProfileRequestT = Model::GetStorageProfileRequest>
        void GetStorageProfileAsync(const GetStorageProfileRequestT& request, const GetStorageProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetStorageProfile, request, handler, context);
        }

        /**
         * <p>Gets a storage profile for a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetStorageProfileForQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStorageProfileForQueueOutcome GetStorageProfileForQueue(const Model::GetStorageProfileForQueueRequest& request) const;

        /**
         * A Callable wrapper for GetStorageProfileForQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStorageProfileForQueueRequestT = Model::GetStorageProfileForQueueRequest>
        Model::GetStorageProfileForQueueOutcomeCallable GetStorageProfileForQueueCallable(const GetStorageProfileForQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetStorageProfileForQueue, request);
        }

        /**
         * An Async wrapper for GetStorageProfileForQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStorageProfileForQueueRequestT = Model::GetStorageProfileForQueueRequest>
        void GetStorageProfileForQueueAsync(const GetStorageProfileForQueueRequestT& request, const GetStorageProfileForQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetStorageProfileForQueue, request, handler, context);
        }

        /**
         * <p>Gets a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTaskOutcome GetTask(const Model::GetTaskRequest& request) const;

        /**
         * A Callable wrapper for GetTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTaskRequestT = Model::GetTaskRequest>
        Model::GetTaskOutcomeCallable GetTaskCallable(const GetTaskRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetTask, request);
        }

        /**
         * An Async wrapper for GetTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTaskRequestT = Model::GetTaskRequest>
        void GetTaskAsync(const GetTaskRequestT& request, const GetTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetTask, request, handler, context);
        }

        /**
         * <p>Gets a worker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/GetWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkerOutcome GetWorker(const Model::GetWorkerRequest& request) const;

        /**
         * A Callable wrapper for GetWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkerRequestT = Model::GetWorkerRequest>
        Model::GetWorkerOutcomeCallable GetWorkerCallable(const GetWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::GetWorker, request);
        }

        /**
         * An Async wrapper for GetWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkerRequestT = Model::GetWorkerRequest>
        void GetWorkerAsync(const GetWorkerRequestT& request, const GetWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::GetWorker, request, handler, context);
        }

        /**
         * <p>A list of the available metered products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListAvailableMeteredProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAvailableMeteredProductsOutcome ListAvailableMeteredProducts(const Model::ListAvailableMeteredProductsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAvailableMeteredProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAvailableMeteredProductsRequestT = Model::ListAvailableMeteredProductsRequest>
        Model::ListAvailableMeteredProductsOutcomeCallable ListAvailableMeteredProductsCallable(const ListAvailableMeteredProductsRequestT& request = {}) const
        {
            return SubmitCallable(&DeadlineClient::ListAvailableMeteredProducts, request);
        }

        /**
         * An Async wrapper for ListAvailableMeteredProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAvailableMeteredProductsRequestT = Model::ListAvailableMeteredProductsRequest>
        void ListAvailableMeteredProductsAsync(const ListAvailableMeteredProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAvailableMeteredProductsRequestT& request = {}) const
        {
            return SubmitAsync(&DeadlineClient::ListAvailableMeteredProducts, request, handler, context);
        }

        /**
         * <p>A list of budgets in a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListBudgets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBudgetsOutcome ListBudgets(const Model::ListBudgetsRequest& request) const;

        /**
         * A Callable wrapper for ListBudgets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBudgetsRequestT = Model::ListBudgetsRequest>
        Model::ListBudgetsOutcomeCallable ListBudgetsCallable(const ListBudgetsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListBudgets, request);
        }

        /**
         * An Async wrapper for ListBudgets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBudgetsRequestT = Model::ListBudgetsRequest>
        void ListBudgetsAsync(const ListBudgetsRequestT& request, const ListBudgetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListBudgets, request, handler, context);
        }

        /**
         * <p>Lists the members of a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListFarmMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFarmMembersOutcome ListFarmMembers(const Model::ListFarmMembersRequest& request) const;

        /**
         * A Callable wrapper for ListFarmMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFarmMembersRequestT = Model::ListFarmMembersRequest>
        Model::ListFarmMembersOutcomeCallable ListFarmMembersCallable(const ListFarmMembersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListFarmMembers, request);
        }

        /**
         * An Async wrapper for ListFarmMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFarmMembersRequestT = Model::ListFarmMembersRequest>
        void ListFarmMembersAsync(const ListFarmMembersRequestT& request, const ListFarmMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListFarmMembers, request, handler, context);
        }

        /**
         * <p>Lists farms.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListFarms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFarmsOutcome ListFarms(const Model::ListFarmsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListFarms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFarmsRequestT = Model::ListFarmsRequest>
        Model::ListFarmsOutcomeCallable ListFarmsCallable(const ListFarmsRequestT& request = {}) const
        {
            return SubmitCallable(&DeadlineClient::ListFarms, request);
        }

        /**
         * An Async wrapper for ListFarms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFarmsRequestT = Model::ListFarmsRequest>
        void ListFarmsAsync(const ListFarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListFarmsRequestT& request = {}) const
        {
            return SubmitAsync(&DeadlineClient::ListFarms, request, handler, context);
        }

        /**
         * <p>Lists fleet members.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListFleetMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetMembersOutcome ListFleetMembers(const Model::ListFleetMembersRequest& request) const;

        /**
         * A Callable wrapper for ListFleetMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFleetMembersRequestT = Model::ListFleetMembersRequest>
        Model::ListFleetMembersOutcomeCallable ListFleetMembersCallable(const ListFleetMembersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListFleetMembers, request);
        }

        /**
         * An Async wrapper for ListFleetMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFleetMembersRequestT = Model::ListFleetMembersRequest>
        void ListFleetMembersAsync(const ListFleetMembersRequestT& request, const ListFleetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListFleetMembers, request, handler, context);
        }

        /**
         * <p>Lists fleets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFleetsRequestT = Model::ListFleetsRequest>
        Model::ListFleetsOutcomeCallable ListFleetsCallable(const ListFleetsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListFleets, request);
        }

        /**
         * An Async wrapper for ListFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFleetsRequestT = Model::ListFleetsRequest>
        void ListFleetsAsync(const ListFleetsRequestT& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListFleets, request, handler, context);
        }

        /**
         * <p>Lists members on a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListJobMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobMembersOutcome ListJobMembers(const Model::ListJobMembersRequest& request) const;

        /**
         * A Callable wrapper for ListJobMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobMembersRequestT = Model::ListJobMembersRequest>
        Model::ListJobMembersOutcomeCallable ListJobMembersCallable(const ListJobMembersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListJobMembers, request);
        }

        /**
         * An Async wrapper for ListJobMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobMembersRequestT = Model::ListJobMembersRequest>
        void ListJobMembersAsync(const ListJobMembersRequestT& request, const ListJobMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListJobMembers, request, handler, context);
        }

        /**
         * <p>Lists parameter definitions of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListJobParameterDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobParameterDefinitionsOutcome ListJobParameterDefinitions(const Model::ListJobParameterDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListJobParameterDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobParameterDefinitionsRequestT = Model::ListJobParameterDefinitionsRequest>
        Model::ListJobParameterDefinitionsOutcomeCallable ListJobParameterDefinitionsCallable(const ListJobParameterDefinitionsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListJobParameterDefinitions, request);
        }

        /**
         * An Async wrapper for ListJobParameterDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobParameterDefinitionsRequestT = Model::ListJobParameterDefinitionsRequest>
        void ListJobParameterDefinitionsAsync(const ListJobParameterDefinitionsRequestT& request, const ListJobParameterDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListJobParameterDefinitions, request, handler, context);
        }

        /**
         * <p>Lists jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Lists license endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListLicenseEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLicenseEndpointsOutcome ListLicenseEndpoints(const Model::ListLicenseEndpointsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListLicenseEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLicenseEndpointsRequestT = Model::ListLicenseEndpointsRequest>
        Model::ListLicenseEndpointsOutcomeCallable ListLicenseEndpointsCallable(const ListLicenseEndpointsRequestT& request = {}) const
        {
            return SubmitCallable(&DeadlineClient::ListLicenseEndpoints, request);
        }

        /**
         * An Async wrapper for ListLicenseEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLicenseEndpointsRequestT = Model::ListLicenseEndpointsRequest>
        void ListLicenseEndpointsAsync(const ListLicenseEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListLicenseEndpointsRequestT& request = {}) const
        {
            return SubmitAsync(&DeadlineClient::ListLicenseEndpoints, request, handler, context);
        }

        /**
         * <p>Gets a list of limits defined in the specified farm.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLimitsOutcome ListLimits(const Model::ListLimitsRequest& request) const;

        /**
         * A Callable wrapper for ListLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLimitsRequestT = Model::ListLimitsRequest>
        Model::ListLimitsOutcomeCallable ListLimitsCallable(const ListLimitsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListLimits, request);
        }

        /**
         * An Async wrapper for ListLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLimitsRequestT = Model::ListLimitsRequest>
        void ListLimitsAsync(const ListLimitsRequestT& request, const ListLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListLimits, request, handler, context);
        }

        /**
         * <p>Lists metered products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListMeteredProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeteredProductsOutcome ListMeteredProducts(const Model::ListMeteredProductsRequest& request) const;

        /**
         * A Callable wrapper for ListMeteredProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMeteredProductsRequestT = Model::ListMeteredProductsRequest>
        Model::ListMeteredProductsOutcomeCallable ListMeteredProductsCallable(const ListMeteredProductsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListMeteredProducts, request);
        }

        /**
         * An Async wrapper for ListMeteredProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMeteredProductsRequestT = Model::ListMeteredProductsRequest>
        void ListMeteredProductsAsync(const ListMeteredProductsRequestT& request, const ListMeteredProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListMeteredProducts, request, handler, context);
        }

        /**
         * <p>Gets a list of your monitors in Deadline Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListMonitors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitorsOutcome ListMonitors(const Model::ListMonitorsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListMonitors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        Model::ListMonitorsOutcomeCallable ListMonitorsCallable(const ListMonitorsRequestT& request = {}) const
        {
            return SubmitCallable(&DeadlineClient::ListMonitors, request);
        }

        /**
         * An Async wrapper for ListMonitors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitorsRequestT = Model::ListMonitorsRequest>
        void ListMonitorsAsync(const ListMonitorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListMonitorsRequestT& request = {}) const
        {
            return SubmitAsync(&DeadlineClient::ListMonitors, request, handler, context);
        }

        /**
         * <p>Lists queue environments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListQueueEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueEnvironmentsOutcome ListQueueEnvironments(const Model::ListQueueEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListQueueEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueueEnvironmentsRequestT = Model::ListQueueEnvironmentsRequest>
        Model::ListQueueEnvironmentsOutcomeCallable ListQueueEnvironmentsCallable(const ListQueueEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListQueueEnvironments, request);
        }

        /**
         * An Async wrapper for ListQueueEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueueEnvironmentsRequestT = Model::ListQueueEnvironmentsRequest>
        void ListQueueEnvironmentsAsync(const ListQueueEnvironmentsRequestT& request, const ListQueueEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListQueueEnvironments, request, handler, context);
        }

        /**
         * <p>Lists queue-fleet associations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListQueueFleetAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueFleetAssociationsOutcome ListQueueFleetAssociations(const Model::ListQueueFleetAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListQueueFleetAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueueFleetAssociationsRequestT = Model::ListQueueFleetAssociationsRequest>
        Model::ListQueueFleetAssociationsOutcomeCallable ListQueueFleetAssociationsCallable(const ListQueueFleetAssociationsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListQueueFleetAssociations, request);
        }

        /**
         * An Async wrapper for ListQueueFleetAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueueFleetAssociationsRequestT = Model::ListQueueFleetAssociationsRequest>
        void ListQueueFleetAssociationsAsync(const ListQueueFleetAssociationsRequestT& request, const ListQueueFleetAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListQueueFleetAssociations, request, handler, context);
        }

        /**
         * <p>Gets a list of the associations between queues and limits defined in a
         * farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListQueueLimitAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueLimitAssociationsOutcome ListQueueLimitAssociations(const Model::ListQueueLimitAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListQueueLimitAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueueLimitAssociationsRequestT = Model::ListQueueLimitAssociationsRequest>
        Model::ListQueueLimitAssociationsOutcomeCallable ListQueueLimitAssociationsCallable(const ListQueueLimitAssociationsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListQueueLimitAssociations, request);
        }

        /**
         * An Async wrapper for ListQueueLimitAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueueLimitAssociationsRequestT = Model::ListQueueLimitAssociationsRequest>
        void ListQueueLimitAssociationsAsync(const ListQueueLimitAssociationsRequestT& request, const ListQueueLimitAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListQueueLimitAssociations, request, handler, context);
        }

        /**
         * <p>Lists the members in a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListQueueMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueueMembersOutcome ListQueueMembers(const Model::ListQueueMembersRequest& request) const;

        /**
         * A Callable wrapper for ListQueueMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueueMembersRequestT = Model::ListQueueMembersRequest>
        Model::ListQueueMembersOutcomeCallable ListQueueMembersCallable(const ListQueueMembersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListQueueMembers, request);
        }

        /**
         * An Async wrapper for ListQueueMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueueMembersRequestT = Model::ListQueueMembersRequest>
        void ListQueueMembersAsync(const ListQueueMembersRequestT& request, const ListQueueMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListQueueMembers, request, handler, context);
        }

        /**
         * <p>Lists queues.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueuesOutcome ListQueues(const Model::ListQueuesRequest& request) const;

        /**
         * A Callable wrapper for ListQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        Model::ListQueuesOutcomeCallable ListQueuesCallable(const ListQueuesRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListQueues, request);
        }

        /**
         * An Async wrapper for ListQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListQueuesRequestT = Model::ListQueuesRequest>
        void ListQueuesAsync(const ListQueuesRequestT& request, const ListQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListQueues, request, handler, context);
        }

        /**
         * <p>Lists session actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListSessionActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionActionsOutcome ListSessionActions(const Model::ListSessionActionsRequest& request) const;

        /**
         * A Callable wrapper for ListSessionActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionActionsRequestT = Model::ListSessionActionsRequest>
        Model::ListSessionActionsOutcomeCallable ListSessionActionsCallable(const ListSessionActionsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListSessionActions, request);
        }

        /**
         * An Async wrapper for ListSessionActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionActionsRequestT = Model::ListSessionActionsRequest>
        void ListSessionActionsAsync(const ListSessionActionsRequestT& request, const ListSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListSessionActions, request, handler, context);
        }

        /**
         * <p>Lists sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListSessions, request);
        }

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        void ListSessionsAsync(const ListSessionsRequestT& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListSessions, request, handler, context);
        }

        /**
         * <p>Lists sessions for a worker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListSessionsForWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsForWorkerOutcome ListSessionsForWorker(const Model::ListSessionsForWorkerRequest& request) const;

        /**
         * A Callable wrapper for ListSessionsForWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionsForWorkerRequestT = Model::ListSessionsForWorkerRequest>
        Model::ListSessionsForWorkerOutcomeCallable ListSessionsForWorkerCallable(const ListSessionsForWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListSessionsForWorker, request);
        }

        /**
         * An Async wrapper for ListSessionsForWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionsForWorkerRequestT = Model::ListSessionsForWorkerRequest>
        void ListSessionsForWorkerAsync(const ListSessionsForWorkerRequestT& request, const ListSessionsForWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListSessionsForWorker, request, handler, context);
        }

        /**
         * <p>Lists step consumers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListStepConsumers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStepConsumersOutcome ListStepConsumers(const Model::ListStepConsumersRequest& request) const;

        /**
         * A Callable wrapper for ListStepConsumers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStepConsumersRequestT = Model::ListStepConsumersRequest>
        Model::ListStepConsumersOutcomeCallable ListStepConsumersCallable(const ListStepConsumersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListStepConsumers, request);
        }

        /**
         * An Async wrapper for ListStepConsumers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStepConsumersRequestT = Model::ListStepConsumersRequest>
        void ListStepConsumersAsync(const ListStepConsumersRequestT& request, const ListStepConsumersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListStepConsumers, request, handler, context);
        }

        /**
         * <p>Lists the dependencies for a step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListStepDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStepDependenciesOutcome ListStepDependencies(const Model::ListStepDependenciesRequest& request) const;

        /**
         * A Callable wrapper for ListStepDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStepDependenciesRequestT = Model::ListStepDependenciesRequest>
        Model::ListStepDependenciesOutcomeCallable ListStepDependenciesCallable(const ListStepDependenciesRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListStepDependencies, request);
        }

        /**
         * An Async wrapper for ListStepDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStepDependenciesRequestT = Model::ListStepDependenciesRequest>
        void ListStepDependenciesAsync(const ListStepDependenciesRequestT& request, const ListStepDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListStepDependencies, request, handler, context);
        }

        /**
         * <p>Lists steps for a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStepsOutcome ListSteps(const Model::ListStepsRequest& request) const;

        /**
         * A Callable wrapper for ListSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStepsRequestT = Model::ListStepsRequest>
        Model::ListStepsOutcomeCallable ListStepsCallable(const ListStepsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListSteps, request);
        }

        /**
         * An Async wrapper for ListSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStepsRequestT = Model::ListStepsRequest>
        void ListStepsAsync(const ListStepsRequestT& request, const ListStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListSteps, request, handler, context);
        }

        /**
         * <p>Lists storage profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListStorageProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStorageProfilesOutcome ListStorageProfiles(const Model::ListStorageProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListStorageProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStorageProfilesRequestT = Model::ListStorageProfilesRequest>
        Model::ListStorageProfilesOutcomeCallable ListStorageProfilesCallable(const ListStorageProfilesRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListStorageProfiles, request);
        }

        /**
         * An Async wrapper for ListStorageProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStorageProfilesRequestT = Model::ListStorageProfilesRequest>
        void ListStorageProfilesAsync(const ListStorageProfilesRequestT& request, const ListStorageProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListStorageProfiles, request, handler, context);
        }

        /**
         * <p>Lists storage profiles for a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListStorageProfilesForQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStorageProfilesForQueueOutcome ListStorageProfilesForQueue(const Model::ListStorageProfilesForQueueRequest& request) const;

        /**
         * A Callable wrapper for ListStorageProfilesForQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStorageProfilesForQueueRequestT = Model::ListStorageProfilesForQueueRequest>
        Model::ListStorageProfilesForQueueOutcomeCallable ListStorageProfilesForQueueCallable(const ListStorageProfilesForQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListStorageProfilesForQueue, request);
        }

        /**
         * An Async wrapper for ListStorageProfilesForQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStorageProfilesForQueueRequestT = Model::ListStorageProfilesForQueueRequest>
        void ListStorageProfilesForQueueAsync(const ListStorageProfilesForQueueRequestT& request, const ListStorageProfilesForQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListStorageProfilesForQueue, request, handler, context);
        }

        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists tasks for a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTasksOutcome ListTasks(const Model::ListTasksRequest& request) const;

        /**
         * A Callable wrapper for ListTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTasksRequestT = Model::ListTasksRequest>
        Model::ListTasksOutcomeCallable ListTasksCallable(const ListTasksRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListTasks, request);
        }

        /**
         * An Async wrapper for ListTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTasksRequestT = Model::ListTasksRequest>
        void ListTasksAsync(const ListTasksRequestT& request, const ListTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListTasks, request, handler, context);
        }

        /**
         * <p>Lists workers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ListWorkers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkersOutcome ListWorkers(const Model::ListWorkersRequest& request) const;

        /**
         * A Callable wrapper for ListWorkers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkersRequestT = Model::ListWorkersRequest>
        Model::ListWorkersOutcomeCallable ListWorkersCallable(const ListWorkersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::ListWorkers, request);
        }

        /**
         * An Async wrapper for ListWorkers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkersRequestT = Model::ListWorkersRequest>
        void ListWorkersAsync(const ListWorkersRequestT& request, const ListWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::ListWorkers, request, handler, context);
        }

        /**
         * <p>Adds a metered product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/PutMeteredProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMeteredProductOutcome PutMeteredProduct(const Model::PutMeteredProductRequest& request) const;

        /**
         * A Callable wrapper for PutMeteredProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMeteredProductRequestT = Model::PutMeteredProductRequest>
        Model::PutMeteredProductOutcomeCallable PutMeteredProductCallable(const PutMeteredProductRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::PutMeteredProduct, request);
        }

        /**
         * An Async wrapper for PutMeteredProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMeteredProductRequestT = Model::PutMeteredProductRequest>
        void PutMeteredProductAsync(const PutMeteredProductRequestT& request, const PutMeteredProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::PutMeteredProduct, request, handler, context);
        }

        /**
         * <p>Searches for jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchJobsOutcome SearchJobs(const Model::SearchJobsRequest& request) const;

        /**
         * A Callable wrapper for SearchJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchJobsRequestT = Model::SearchJobsRequest>
        Model::SearchJobsOutcomeCallable SearchJobsCallable(const SearchJobsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::SearchJobs, request);
        }

        /**
         * An Async wrapper for SearchJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchJobsRequestT = Model::SearchJobsRequest>
        void SearchJobsAsync(const SearchJobsRequestT& request, const SearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::SearchJobs, request, handler, context);
        }

        /**
         * <p>Searches for steps.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchSteps">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchStepsOutcome SearchSteps(const Model::SearchStepsRequest& request) const;

        /**
         * A Callable wrapper for SearchSteps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchStepsRequestT = Model::SearchStepsRequest>
        Model::SearchStepsOutcomeCallable SearchStepsCallable(const SearchStepsRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::SearchSteps, request);
        }

        /**
         * An Async wrapper for SearchSteps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchStepsRequestT = Model::SearchStepsRequest>
        void SearchStepsAsync(const SearchStepsRequestT& request, const SearchStepsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::SearchSteps, request, handler, context);
        }

        /**
         * <p>Searches for tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTasksOutcome SearchTasks(const Model::SearchTasksRequest& request) const;

        /**
         * A Callable wrapper for SearchTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchTasksRequestT = Model::SearchTasksRequest>
        Model::SearchTasksOutcomeCallable SearchTasksCallable(const SearchTasksRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::SearchTasks, request);
        }

        /**
         * An Async wrapper for SearchTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchTasksRequestT = Model::SearchTasksRequest>
        void SearchTasksAsync(const SearchTasksRequestT& request, const SearchTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::SearchTasks, request, handler, context);
        }

        /**
         * <p>Searches for workers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SearchWorkers">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchWorkersOutcome SearchWorkers(const Model::SearchWorkersRequest& request) const;

        /**
         * A Callable wrapper for SearchWorkers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchWorkersRequestT = Model::SearchWorkersRequest>
        Model::SearchWorkersOutcomeCallable SearchWorkersCallable(const SearchWorkersRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::SearchWorkers, request);
        }

        /**
         * An Async wrapper for SearchWorkers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchWorkersRequestT = Model::SearchWorkersRequest>
        void SearchWorkersAsync(const SearchWorkersRequestT& request, const SearchWorkersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::SearchWorkers, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous request for getting aggregated statistics about queues
         * and farms. Get the statistics using the
         * <code>GetSessionsStatisticsAggregation</code> operation. You can only have one
         * running aggregation for your Deadline Cloud farm. Call the
         * <code>GetSessionsStatisticsAggregation</code> operation and check the
         * <code>status</code> field to see if an aggregation is running. Statistics are
         * available for 1 hour after you call the
         * <code>StartSessionsStatisticsAggregation</code> operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StartSessionsStatisticsAggregation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSessionsStatisticsAggregationOutcome StartSessionsStatisticsAggregation(const Model::StartSessionsStatisticsAggregationRequest& request) const;

        /**
         * A Callable wrapper for StartSessionsStatisticsAggregation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSessionsStatisticsAggregationRequestT = Model::StartSessionsStatisticsAggregationRequest>
        Model::StartSessionsStatisticsAggregationOutcomeCallable StartSessionsStatisticsAggregationCallable(const StartSessionsStatisticsAggregationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::StartSessionsStatisticsAggregation, request);
        }

        /**
         * An Async wrapper for StartSessionsStatisticsAggregation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSessionsStatisticsAggregationRequestT = Model::StartSessionsStatisticsAggregationRequest>
        void StartSessionsStatisticsAggregationAsync(const StartSessionsStatisticsAggregationRequestT& request, const StartSessionsStatisticsAggregationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::StartSessionsStatisticsAggregation, request, handler, context);
        }

        /**
         * <p>Tags a resource using the resource's ARN and desired tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource using the resource's ARN and tag to
         * remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a budget that sets spending thresholds for rendering
         * activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateBudget">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBudgetOutcome UpdateBudget(const Model::UpdateBudgetRequest& request) const;

        /**
         * A Callable wrapper for UpdateBudget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBudgetRequestT = Model::UpdateBudgetRequest>
        Model::UpdateBudgetOutcomeCallable UpdateBudgetCallable(const UpdateBudgetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateBudget, request);
        }

        /**
         * An Async wrapper for UpdateBudget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBudgetRequestT = Model::UpdateBudgetRequest>
        void UpdateBudgetAsync(const UpdateBudgetRequestT& request, const UpdateBudgetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateBudget, request, handler, context);
        }

        /**
         * <p>Updates a farm.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateFarm">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFarmOutcome UpdateFarm(const Model::UpdateFarmRequest& request) const;

        /**
         * A Callable wrapper for UpdateFarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFarmRequestT = Model::UpdateFarmRequest>
        Model::UpdateFarmOutcomeCallable UpdateFarmCallable(const UpdateFarmRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateFarm, request);
        }

        /**
         * An Async wrapper for UpdateFarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFarmRequestT = Model::UpdateFarmRequest>
        void UpdateFarmAsync(const UpdateFarmRequestT& request, const UpdateFarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateFarm, request, handler, context);
        }

        /**
         * <p>Updates a fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetOutcome UpdateFleet(const Model::UpdateFleetRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        Model::UpdateFleetOutcomeCallable UpdateFleetCallable(const UpdateFleetRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateFleet, request);
        }

        /**
         * An Async wrapper for UpdateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFleetRequestT = Model::UpdateFleetRequest>
        void UpdateFleetAsync(const UpdateFleetRequestT& request, const UpdateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateFleet, request, handler, context);
        }

        /**
         * <p>Updates a job. </p> <p>When you change the status of the job to
         * <code>ARCHIVED</code>, the job can't be scheduled or archived.</p> 
         * <p>An archived jobs and its steps and tasks are deleted after 120 days. The job
         * can't be recovered.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        Model::UpdateJobOutcomeCallable UpdateJobCallable(const UpdateJobRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateJob, request);
        }

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        void UpdateJobAsync(const UpdateJobRequestT& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateJob, request, handler, context);
        }

        /**
         * <p>Updates the properties of the specified limit. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLimitOutcome UpdateLimit(const Model::UpdateLimitRequest& request) const;

        /**
         * A Callable wrapper for UpdateLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLimitRequestT = Model::UpdateLimitRequest>
        Model::UpdateLimitOutcomeCallable UpdateLimitCallable(const UpdateLimitRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateLimit, request);
        }

        /**
         * An Async wrapper for UpdateLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLimitRequestT = Model::UpdateLimitRequest>
        void UpdateLimitAsync(const UpdateLimitRequestT& request, const UpdateLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateLimit, request, handler, context);
        }

        /**
         * <p>Modifies the settings for a Deadline Cloud monitor. You can modify one or all
         * of the settings when you call <code>UpdateMonitor</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateMonitor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMonitorOutcome UpdateMonitor(const Model::UpdateMonitorRequest& request) const;

        /**
         * A Callable wrapper for UpdateMonitor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        Model::UpdateMonitorOutcomeCallable UpdateMonitorCallable(const UpdateMonitorRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateMonitor, request);
        }

        /**
         * An Async wrapper for UpdateMonitor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMonitorRequestT = Model::UpdateMonitorRequest>
        void UpdateMonitorAsync(const UpdateMonitorRequestT& request, const UpdateMonitorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateMonitor, request, handler, context);
        }

        /**
         * <p>Updates a queue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueOutcome UpdateQueue(const Model::UpdateQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueRequestT = Model::UpdateQueueRequest>
        Model::UpdateQueueOutcomeCallable UpdateQueueCallable(const UpdateQueueRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateQueue, request);
        }

        /**
         * An Async wrapper for UpdateQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueRequestT = Model::UpdateQueueRequest>
        void UpdateQueueAsync(const UpdateQueueRequestT& request, const UpdateQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateQueue, request, handler, context);
        }

        /**
         * <p>Updates the queue environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateQueueEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueEnvironmentOutcome UpdateQueueEnvironment(const Model::UpdateQueueEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueEnvironmentRequestT = Model::UpdateQueueEnvironmentRequest>
        Model::UpdateQueueEnvironmentOutcomeCallable UpdateQueueEnvironmentCallable(const UpdateQueueEnvironmentRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateQueueEnvironment, request);
        }

        /**
         * An Async wrapper for UpdateQueueEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueEnvironmentRequestT = Model::UpdateQueueEnvironmentRequest>
        void UpdateQueueEnvironmentAsync(const UpdateQueueEnvironmentRequestT& request, const UpdateQueueEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateQueueEnvironment, request, handler, context);
        }

        /**
         * <p>Updates a queue-fleet association.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateQueueFleetAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueFleetAssociationOutcome UpdateQueueFleetAssociation(const Model::UpdateQueueFleetAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueFleetAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueFleetAssociationRequestT = Model::UpdateQueueFleetAssociationRequest>
        Model::UpdateQueueFleetAssociationOutcomeCallable UpdateQueueFleetAssociationCallable(const UpdateQueueFleetAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateQueueFleetAssociation, request);
        }

        /**
         * An Async wrapper for UpdateQueueFleetAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueFleetAssociationRequestT = Model::UpdateQueueFleetAssociationRequest>
        void UpdateQueueFleetAssociationAsync(const UpdateQueueFleetAssociationRequestT& request, const UpdateQueueFleetAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateQueueFleetAssociation, request, handler, context);
        }

        /**
         * <p>Updates the status of the queue. If you set the status to one of the
         * <code>STOP_LIMIT_USAGE*</code> values, there will be a delay before the status
         * transitions to the <code>STOPPED</code> state. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateQueueLimitAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateQueueLimitAssociationOutcome UpdateQueueLimitAssociation(const Model::UpdateQueueLimitAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateQueueLimitAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateQueueLimitAssociationRequestT = Model::UpdateQueueLimitAssociationRequest>
        Model::UpdateQueueLimitAssociationOutcomeCallable UpdateQueueLimitAssociationCallable(const UpdateQueueLimitAssociationRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateQueueLimitAssociation, request);
        }

        /**
         * An Async wrapper for UpdateQueueLimitAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateQueueLimitAssociationRequestT = Model::UpdateQueueLimitAssociationRequest>
        void UpdateQueueLimitAssociationAsync(const UpdateQueueLimitAssociationRequestT& request, const UpdateQueueLimitAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateQueueLimitAssociation, request, handler, context);
        }

        /**
         * <p>Updates a session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSessionOutcome UpdateSession(const Model::UpdateSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSessionRequestT = Model::UpdateSessionRequest>
        Model::UpdateSessionOutcomeCallable UpdateSessionCallable(const UpdateSessionRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateSession, request);
        }

        /**
         * An Async wrapper for UpdateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSessionRequestT = Model::UpdateSessionRequest>
        void UpdateSessionAsync(const UpdateSessionRequestT& request, const UpdateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateSession, request, handler, context);
        }

        /**
         * <p>Updates a step.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateStep">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStepOutcome UpdateStep(const Model::UpdateStepRequest& request) const;

        /**
         * A Callable wrapper for UpdateStep that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStepRequestT = Model::UpdateStepRequest>
        Model::UpdateStepOutcomeCallable UpdateStepCallable(const UpdateStepRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateStep, request);
        }

        /**
         * An Async wrapper for UpdateStep that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStepRequestT = Model::UpdateStepRequest>
        void UpdateStepAsync(const UpdateStepRequestT& request, const UpdateStepResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateStep, request, handler, context);
        }

        /**
         * <p>Updates a storage profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateStorageProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStorageProfileOutcome UpdateStorageProfile(const Model::UpdateStorageProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateStorageProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStorageProfileRequestT = Model::UpdateStorageProfileRequest>
        Model::UpdateStorageProfileOutcomeCallable UpdateStorageProfileCallable(const UpdateStorageProfileRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateStorageProfile, request);
        }

        /**
         * An Async wrapper for UpdateStorageProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStorageProfileRequestT = Model::UpdateStorageProfileRequest>
        void UpdateStorageProfileAsync(const UpdateStorageProfileRequestT& request, const UpdateStorageProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateStorageProfile, request, handler, context);
        }

        /**
         * <p>Updates a task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTaskOutcome UpdateTask(const Model::UpdateTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTaskRequestT = Model::UpdateTaskRequest>
        Model::UpdateTaskOutcomeCallable UpdateTaskCallable(const UpdateTaskRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateTask, request);
        }

        /**
         * An Async wrapper for UpdateTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTaskRequestT = Model::UpdateTaskRequest>
        void UpdateTaskAsync(const UpdateTaskRequestT& request, const UpdateTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateTask, request, handler, context);
        }

        /**
         * <p>Updates a worker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateWorker">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkerOutcome UpdateWorker(const Model::UpdateWorkerRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkerRequestT = Model::UpdateWorkerRequest>
        Model::UpdateWorkerOutcomeCallable UpdateWorkerCallable(const UpdateWorkerRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateWorker, request);
        }

        /**
         * An Async wrapper for UpdateWorker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkerRequestT = Model::UpdateWorkerRequest>
        void UpdateWorkerAsync(const UpdateWorkerRequestT& request, const UpdateWorkerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateWorker, request, handler, context);
        }

        /**
         * <p>Updates the schedule for a worker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/UpdateWorkerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkerScheduleOutcome UpdateWorkerSchedule(const Model::UpdateWorkerScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkerSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkerScheduleRequestT = Model::UpdateWorkerScheduleRequest>
        Model::UpdateWorkerScheduleOutcomeCallable UpdateWorkerScheduleCallable(const UpdateWorkerScheduleRequestT& request) const
        {
            return SubmitCallable(&DeadlineClient::UpdateWorkerSchedule, request);
        }

        /**
         * An Async wrapper for UpdateWorkerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkerScheduleRequestT = Model::UpdateWorkerScheduleRequest>
        void UpdateWorkerScheduleAsync(const UpdateWorkerScheduleRequestT& request, const UpdateWorkerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeadlineClient::UpdateWorkerSchedule, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DeadlineEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DeadlineClient>;
      void init(const DeadlineClientConfiguration& clientConfiguration);

      DeadlineClientConfiguration m_clientConfiguration;
      std::shared_ptr<DeadlineEndpointProviderBase> m_endpointProvider;
  };

} // namespace deadline
} // namespace Aws
