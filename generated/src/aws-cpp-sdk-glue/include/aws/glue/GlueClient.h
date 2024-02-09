/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/GlueServiceClientModel.h>

namespace Aws
{
namespace Glue
{
  /**
   * <fullname>Glue</fullname> <p>Defines the public endpoint for the Glue
   * service.</p>
   */
  class AWS_GLUE_API GlueClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GlueClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GlueClientConfiguration ClientConfigurationType;
      typedef GlueEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Glue::GlueClientConfiguration& clientConfiguration = Aws::Glue::GlueClientConfiguration(),
                   std::shared_ptr<GlueEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<GlueEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::Glue::GlueClientConfiguration& clientConfiguration = Aws::Glue::GlueClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<GlueEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::Glue::GlueClientConfiguration& clientConfiguration = Aws::Glue::GlueClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GlueClient();

        /**
         * <p>Creates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchCreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreatePartitionOutcome BatchCreatePartition(const Model::BatchCreatePartitionRequest& request) const;

        /**
         * A Callable wrapper for BatchCreatePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchCreatePartitionRequestT = Model::BatchCreatePartitionRequest>
        Model::BatchCreatePartitionOutcomeCallable BatchCreatePartitionCallable(const BatchCreatePartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchCreatePartition, request);
        }

        /**
         * An Async wrapper for BatchCreatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchCreatePartitionRequestT = Model::BatchCreatePartitionRequest>
        void BatchCreatePartitionAsync(const BatchCreatePartitionRequestT& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchCreatePartition, request, handler, context);
        }

        /**
         * <p>Deletes a list of connection definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteConnectionOutcome BatchDeleteConnection(const Model::BatchDeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteConnectionRequestT = Model::BatchDeleteConnectionRequest>
        Model::BatchDeleteConnectionOutcomeCallable BatchDeleteConnectionCallable(const BatchDeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchDeleteConnection, request);
        }

        /**
         * An Async wrapper for BatchDeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteConnectionRequestT = Model::BatchDeleteConnectionRequest>
        void BatchDeleteConnectionAsync(const BatchDeleteConnectionRequestT& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchDeleteConnection, request, handler, context);
        }

        /**
         * <p>Deletes one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePartitionOutcome BatchDeletePartition(const Model::BatchDeletePartitionRequest& request) const;

        /**
         * A Callable wrapper for BatchDeletePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeletePartitionRequestT = Model::BatchDeletePartitionRequest>
        Model::BatchDeletePartitionOutcomeCallable BatchDeletePartitionCallable(const BatchDeletePartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchDeletePartition, request);
        }

        /**
         * An Async wrapper for BatchDeletePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeletePartitionRequestT = Model::BatchDeletePartitionRequest>
        void BatchDeletePartitionAsync(const BatchDeletePartitionRequestT& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchDeletePartition, request, handler, context);
        }

        /**
         * <p>Deletes multiple tables at once.</p>  <p>After completing this
         * operation, you no longer have access to the table versions and partitions that
         * belong to the deleted table. Glue deletes these "orphaned" resources
         * asynchronously in a timely manner, at the discretion of the service.</p> <p>To
         * ensure the immediate deletion of all related resources, before calling
         * <code>BatchDeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableOutcome BatchDeleteTable(const Model::BatchDeleteTableRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteTableRequestT = Model::BatchDeleteTableRequest>
        Model::BatchDeleteTableOutcomeCallable BatchDeleteTableCallable(const BatchDeleteTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchDeleteTable, request);
        }

        /**
         * An Async wrapper for BatchDeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteTableRequestT = Model::BatchDeleteTableRequest>
        void BatchDeleteTableAsync(const BatchDeleteTableRequestT& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchDeleteTable, request, handler, context);
        }

        /**
         * <p>Deletes a specified batch of versions of a table.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableVersionOutcome BatchDeleteTableVersion(const Model::BatchDeleteTableVersionRequest& request) const;

        /**
         * A Callable wrapper for BatchDeleteTableVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDeleteTableVersionRequestT = Model::BatchDeleteTableVersionRequest>
        Model::BatchDeleteTableVersionOutcomeCallable BatchDeleteTableVersionCallable(const BatchDeleteTableVersionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchDeleteTableVersion, request);
        }

        /**
         * An Async wrapper for BatchDeleteTableVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDeleteTableVersionRequestT = Model::BatchDeleteTableVersionRequest>
        void BatchDeleteTableVersionAsync(const BatchDeleteTableVersionRequestT& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchDeleteTableVersion, request, handler, context);
        }

        /**
         * <p>Retrieves information about a list of blueprints.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBlueprintsOutcome BatchGetBlueprints(const Model::BatchGetBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetBlueprintsRequestT = Model::BatchGetBlueprintsRequest>
        Model::BatchGetBlueprintsOutcomeCallable BatchGetBlueprintsCallable(const BatchGetBlueprintsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetBlueprints, request);
        }

        /**
         * An Async wrapper for BatchGetBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetBlueprintsRequestT = Model::BatchGetBlueprintsRequest>
        void BatchGetBlueprintsAsync(const BatchGetBlueprintsRequestT& request, const BatchGetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetBlueprints, request, handler, context);
        }

        /**
         * <p>Returns a list of resource metadata for a given list of crawler names. After
         * calling the <code>ListCrawlers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCrawlersOutcome BatchGetCrawlers(const Model::BatchGetCrawlersRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCrawlers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetCrawlersRequestT = Model::BatchGetCrawlersRequest>
        Model::BatchGetCrawlersOutcomeCallable BatchGetCrawlersCallable(const BatchGetCrawlersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetCrawlers, request);
        }

        /**
         * An Async wrapper for BatchGetCrawlers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCrawlersRequestT = Model::BatchGetCrawlersRequest>
        void BatchGetCrawlersAsync(const BatchGetCrawlersRequestT& request, const BatchGetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetCrawlers, request, handler, context);
        }

        /**
         * <p>Retrieves the details for the custom patterns specified by a list of
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetCustomEntityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCustomEntityTypesOutcome BatchGetCustomEntityTypes(const Model::BatchGetCustomEntityTypesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCustomEntityTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetCustomEntityTypesRequestT = Model::BatchGetCustomEntityTypesRequest>
        Model::BatchGetCustomEntityTypesOutcomeCallable BatchGetCustomEntityTypesCallable(const BatchGetCustomEntityTypesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetCustomEntityTypes, request);
        }

        /**
         * An Async wrapper for BatchGetCustomEntityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCustomEntityTypesRequestT = Model::BatchGetCustomEntityTypesRequest>
        void BatchGetCustomEntityTypesAsync(const BatchGetCustomEntityTypesRequestT& request, const BatchGetCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetCustomEntityTypes, request, handler, context);
        }

        /**
         * <p>Retrieves a list of data quality results for the specified result
         * IDs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetDataQualityResult">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDataQualityResultOutcome BatchGetDataQualityResult(const Model::BatchGetDataQualityResultRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDataQualityResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetDataQualityResultRequestT = Model::BatchGetDataQualityResultRequest>
        Model::BatchGetDataQualityResultOutcomeCallable BatchGetDataQualityResultCallable(const BatchGetDataQualityResultRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetDataQualityResult, request);
        }

        /**
         * An Async wrapper for BatchGetDataQualityResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetDataQualityResultRequestT = Model::BatchGetDataQualityResultRequest>
        void BatchGetDataQualityResultAsync(const BatchGetDataQualityResultRequestT& request, const BatchGetDataQualityResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetDataQualityResult, request, handler, context);
        }

        /**
         * <p>Returns a list of resource metadata for a given list of development endpoint
         * names. After calling the <code>ListDevEndpoints</code> operation, you can call
         * this operation to access the data to which you have been granted permissions.
         * This operation supports all IAM permissions, including permission conditions
         * that uses tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetDevEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetDevEndpointsOutcome BatchGetDevEndpoints(const Model::BatchGetDevEndpointsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetDevEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetDevEndpointsRequestT = Model::BatchGetDevEndpointsRequest>
        Model::BatchGetDevEndpointsOutcomeCallable BatchGetDevEndpointsCallable(const BatchGetDevEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetDevEndpoints, request);
        }

        /**
         * An Async wrapper for BatchGetDevEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetDevEndpointsRequestT = Model::BatchGetDevEndpointsRequest>
        void BatchGetDevEndpointsAsync(const BatchGetDevEndpointsRequestT& request, const BatchGetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetDevEndpoints, request, handler, context);
        }

        /**
         * <p>Returns a list of resource metadata for a given list of job names. After
         * calling the <code>ListJobs</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses tags.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetJobsOutcome BatchGetJobs(const Model::BatchGetJobsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetJobsRequestT = Model::BatchGetJobsRequest>
        Model::BatchGetJobsOutcomeCallable BatchGetJobsCallable(const BatchGetJobsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetJobs, request);
        }

        /**
         * An Async wrapper for BatchGetJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetJobsRequestT = Model::BatchGetJobsRequest>
        void BatchGetJobsAsync(const BatchGetJobsRequestT& request, const BatchGetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetJobs, request, handler, context);
        }

        /**
         * <p>Retrieves partitions in a batch request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetPartitionOutcome BatchGetPartition(const Model::BatchGetPartitionRequest& request) const;

        /**
         * A Callable wrapper for BatchGetPartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetPartitionRequestT = Model::BatchGetPartitionRequest>
        Model::BatchGetPartitionOutcomeCallable BatchGetPartitionCallable(const BatchGetPartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetPartition, request);
        }

        /**
         * An Async wrapper for BatchGetPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetPartitionRequestT = Model::BatchGetPartitionRequest>
        void BatchGetPartitionAsync(const BatchGetPartitionRequestT& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetPartition, request, handler, context);
        }

        /**
         * <p>Returns the configuration for the specified table optimizers.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTableOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTableOptimizerOutcome BatchGetTableOptimizer(const Model::BatchGetTableOptimizerRequest& request) const;

        /**
         * A Callable wrapper for BatchGetTableOptimizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetTableOptimizerRequestT = Model::BatchGetTableOptimizerRequest>
        Model::BatchGetTableOptimizerOutcomeCallable BatchGetTableOptimizerCallable(const BatchGetTableOptimizerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetTableOptimizer, request);
        }

        /**
         * An Async wrapper for BatchGetTableOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetTableOptimizerRequestT = Model::BatchGetTableOptimizerRequest>
        void BatchGetTableOptimizerAsync(const BatchGetTableOptimizerRequestT& request, const BatchGetTableOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetTableOptimizer, request, handler, context);
        }

        /**
         * <p>Returns a list of resource metadata for a given list of trigger names. After
         * calling the <code>ListTriggers</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTriggersOutcome BatchGetTriggers(const Model::BatchGetTriggersRequest& request) const;

        /**
         * A Callable wrapper for BatchGetTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetTriggersRequestT = Model::BatchGetTriggersRequest>
        Model::BatchGetTriggersOutcomeCallable BatchGetTriggersCallable(const BatchGetTriggersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetTriggers, request);
        }

        /**
         * An Async wrapper for BatchGetTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetTriggersRequestT = Model::BatchGetTriggersRequest>
        void BatchGetTriggersAsync(const BatchGetTriggersRequestT& request, const BatchGetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetTriggers, request, handler, context);
        }

        /**
         * <p>Returns a list of resource metadata for a given list of workflow names. After
         * calling the <code>ListWorkflows</code> operation, you can call this operation to
         * access the data to which you have been granted permissions. This operation
         * supports all IAM permissions, including permission conditions that uses
         * tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetWorkflowsOutcome BatchGetWorkflows(const Model::BatchGetWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetWorkflowsRequestT = Model::BatchGetWorkflowsRequest>
        Model::BatchGetWorkflowsOutcomeCallable BatchGetWorkflowsCallable(const BatchGetWorkflowsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchGetWorkflows, request);
        }

        /**
         * An Async wrapper for BatchGetWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetWorkflowsRequestT = Model::BatchGetWorkflowsRequest>
        void BatchGetWorkflowsAsync(const BatchGetWorkflowsRequestT& request, const BatchGetWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchGetWorkflows, request, handler, context);
        }

        /**
         * <p>Stops one or more job runs for a specified job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopJobRunOutcome BatchStopJobRun(const Model::BatchStopJobRunRequest& request) const;

        /**
         * A Callable wrapper for BatchStopJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStopJobRunRequestT = Model::BatchStopJobRunRequest>
        Model::BatchStopJobRunOutcomeCallable BatchStopJobRunCallable(const BatchStopJobRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchStopJobRun, request);
        }

        /**
         * An Async wrapper for BatchStopJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStopJobRunRequestT = Model::BatchStopJobRunRequest>
        void BatchStopJobRunAsync(const BatchStopJobRunRequestT& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchStopJobRun, request, handler, context);
        }

        /**
         * <p>Updates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePartitionOutcome BatchUpdatePartition(const Model::BatchUpdatePartitionRequest& request) const;

        /**
         * A Callable wrapper for BatchUpdatePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchUpdatePartitionRequestT = Model::BatchUpdatePartitionRequest>
        Model::BatchUpdatePartitionOutcomeCallable BatchUpdatePartitionCallable(const BatchUpdatePartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::BatchUpdatePartition, request);
        }

        /**
         * An Async wrapper for BatchUpdatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchUpdatePartitionRequestT = Model::BatchUpdatePartitionRequest>
        void BatchUpdatePartitionAsync(const BatchUpdatePartitionRequestT& request, const BatchUpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::BatchUpdatePartition, request, handler, context);
        }

        /**
         * <p>Cancels the specified recommendation run that was being used to generate
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelDataQualityRuleRecommendationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDataQualityRuleRecommendationRunOutcome CancelDataQualityRuleRecommendationRun(const Model::CancelDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * A Callable wrapper for CancelDataQualityRuleRecommendationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelDataQualityRuleRecommendationRunRequestT = Model::CancelDataQualityRuleRecommendationRunRequest>
        Model::CancelDataQualityRuleRecommendationRunOutcomeCallable CancelDataQualityRuleRecommendationRunCallable(const CancelDataQualityRuleRecommendationRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CancelDataQualityRuleRecommendationRun, request);
        }

        /**
         * An Async wrapper for CancelDataQualityRuleRecommendationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDataQualityRuleRecommendationRunRequestT = Model::CancelDataQualityRuleRecommendationRunRequest>
        void CancelDataQualityRuleRecommendationRunAsync(const CancelDataQualityRuleRecommendationRunRequestT& request, const CancelDataQualityRuleRecommendationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CancelDataQualityRuleRecommendationRun, request, handler, context);
        }

        /**
         * <p>Cancels a run where a ruleset is being evaluated against a data
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelDataQualityRulesetEvaluationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDataQualityRulesetEvaluationRunOutcome CancelDataQualityRulesetEvaluationRun(const Model::CancelDataQualityRulesetEvaluationRunRequest& request) const;

        /**
         * A Callable wrapper for CancelDataQualityRulesetEvaluationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelDataQualityRulesetEvaluationRunRequestT = Model::CancelDataQualityRulesetEvaluationRunRequest>
        Model::CancelDataQualityRulesetEvaluationRunOutcomeCallable CancelDataQualityRulesetEvaluationRunCallable(const CancelDataQualityRulesetEvaluationRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CancelDataQualityRulesetEvaluationRun, request);
        }

        /**
         * An Async wrapper for CancelDataQualityRulesetEvaluationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDataQualityRulesetEvaluationRunRequestT = Model::CancelDataQualityRulesetEvaluationRunRequest>
        void CancelDataQualityRulesetEvaluationRunAsync(const CancelDataQualityRulesetEvaluationRunRequestT& request, const CancelDataQualityRulesetEvaluationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CancelDataQualityRulesetEvaluationRun, request, handler, context);
        }

        /**
         * <p>Cancels (stops) a task run. Machine learning task runs are asynchronous tasks
         * that Glue runs on your behalf as part of various machine learning workflows. You
         * can cancel a machine learning task run at any time by calling
         * <code>CancelMLTaskRun</code> with a task run's parent transform's
         * <code>TransformID</code> and the task run's <code>TaskRunId</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelMLTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelMLTaskRunOutcome CancelMLTaskRun(const Model::CancelMLTaskRunRequest& request) const;

        /**
         * A Callable wrapper for CancelMLTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelMLTaskRunRequestT = Model::CancelMLTaskRunRequest>
        Model::CancelMLTaskRunOutcomeCallable CancelMLTaskRunCallable(const CancelMLTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CancelMLTaskRun, request);
        }

        /**
         * An Async wrapper for CancelMLTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelMLTaskRunRequestT = Model::CancelMLTaskRunRequest>
        void CancelMLTaskRunAsync(const CancelMLTaskRunRequestT& request, const CancelMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CancelMLTaskRun, request, handler, context);
        }

        /**
         * <p>Cancels the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;

        /**
         * A Callable wrapper for CancelStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelStatementRequestT = Model::CancelStatementRequest>
        Model::CancelStatementOutcomeCallable CancelStatementCallable(const CancelStatementRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CancelStatement, request);
        }

        /**
         * An Async wrapper for CancelStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelStatementRequestT = Model::CancelStatementRequest>
        void CancelStatementAsync(const CancelStatementRequestT& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CancelStatement, request, handler, context);
        }

        /**
         * <p>Validates the supplied schema. This call has no side effects, it simply
         * validates using the supplied schema using <code>DataFormat</code> as the format.
         * Since it does not take a schema set name, no compatibility checks are
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CheckSchemaVersionValidity">AWS
         * API Reference</a></p>
         */
        virtual Model::CheckSchemaVersionValidityOutcome CheckSchemaVersionValidity(const Model::CheckSchemaVersionValidityRequest& request) const;

        /**
         * A Callable wrapper for CheckSchemaVersionValidity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CheckSchemaVersionValidityRequestT = Model::CheckSchemaVersionValidityRequest>
        Model::CheckSchemaVersionValidityOutcomeCallable CheckSchemaVersionValidityCallable(const CheckSchemaVersionValidityRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CheckSchemaVersionValidity, request);
        }

        /**
         * An Async wrapper for CheckSchemaVersionValidity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CheckSchemaVersionValidityRequestT = Model::CheckSchemaVersionValidityRequest>
        void CheckSchemaVersionValidityAsync(const CheckSchemaVersionValidityRequestT& request, const CheckSchemaVersionValidityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CheckSchemaVersionValidity, request, handler, context);
        }

        /**
         * <p>Registers a blueprint with Glue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest& request) const;

        /**
         * A Callable wrapper for CreateBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBlueprintRequestT = Model::CreateBlueprintRequest>
        Model::CreateBlueprintOutcomeCallable CreateBlueprintCallable(const CreateBlueprintRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateBlueprint, request);
        }

        /**
         * An Async wrapper for CreateBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBlueprintRequestT = Model::CreateBlueprintRequest>
        void CreateBlueprintAsync(const CreateBlueprintRequestT& request, const CreateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateBlueprint, request, handler, context);
        }

        /**
         * <p>Creates a classifier in the user's account. This can be a
         * <code>GrokClassifier</code>, an <code>XMLClassifier</code>, a
         * <code>JsonClassifier</code>, or a <code>CsvClassifier</code>, depending on which
         * field of the request is present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClassifierOutcome CreateClassifier(const Model::CreateClassifierRequest& request) const;

        /**
         * A Callable wrapper for CreateClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClassifierRequestT = Model::CreateClassifierRequest>
        Model::CreateClassifierOutcomeCallable CreateClassifierCallable(const CreateClassifierRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateClassifier, request);
        }

        /**
         * An Async wrapper for CreateClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClassifierRequestT = Model::CreateClassifierRequest>
        void CreateClassifierAsync(const CreateClassifierRequestT& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateClassifier, request, handler, context);
        }

        /**
         * <p>Creates a connection definition in the Data Catalog.</p> <p>Connections used
         * for creating federated resources require the IAM
         * <code>glue:PassConnection</code> permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const CreateConnectionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateConnection, request);
        }

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectionRequestT = Model::CreateConnectionRequest>
        void CreateConnectionAsync(const CreateConnectionRequestT& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateConnection, request, handler, context);
        }

        /**
         * <p>Creates a new crawler with specified targets, role, configuration, and
         * optional schedule. At least one crawl target must be specified, in the
         * <code>s3Targets</code> field, the <code>jdbcTargets</code> field, or the
         * <code>DynamoDBTargets</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCrawlerOutcome CreateCrawler(const Model::CreateCrawlerRequest& request) const;

        /**
         * A Callable wrapper for CreateCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCrawlerRequestT = Model::CreateCrawlerRequest>
        Model::CreateCrawlerOutcomeCallable CreateCrawlerCallable(const CreateCrawlerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateCrawler, request);
        }

        /**
         * An Async wrapper for CreateCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCrawlerRequestT = Model::CreateCrawlerRequest>
        void CreateCrawlerAsync(const CreateCrawlerRequestT& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateCrawler, request, handler, context);
        }

        /**
         * <p>Creates a custom pattern that is used to detect sensitive data across the
         * columns and rows of your structured data.</p> <p>Each custom pattern you create
         * specifies a regular expression and an optional list of context words. If no
         * context words are passed only a regular expression is checked.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateCustomEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomEntityTypeOutcome CreateCustomEntityType(const Model::CreateCustomEntityTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomEntityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCustomEntityTypeRequestT = Model::CreateCustomEntityTypeRequest>
        Model::CreateCustomEntityTypeOutcomeCallable CreateCustomEntityTypeCallable(const CreateCustomEntityTypeRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateCustomEntityType, request);
        }

        /**
         * An Async wrapper for CreateCustomEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomEntityTypeRequestT = Model::CreateCustomEntityTypeRequest>
        void CreateCustomEntityTypeAsync(const CreateCustomEntityTypeRequestT& request, const CreateCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateCustomEntityType, request, handler, context);
        }

        /**
         * <p>Creates a data quality ruleset with DQDL rules applied to a specified Glue
         * table.</p> <p>You create the ruleset using the Data Quality Definition Language
         * (DQDL). For more information, see the Glue developer guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDataQualityRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataQualityRulesetOutcome CreateDataQualityRuleset(const Model::CreateDataQualityRulesetRequest& request) const;

        /**
         * A Callable wrapper for CreateDataQualityRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataQualityRulesetRequestT = Model::CreateDataQualityRulesetRequest>
        Model::CreateDataQualityRulesetOutcomeCallable CreateDataQualityRulesetCallable(const CreateDataQualityRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateDataQualityRuleset, request);
        }

        /**
         * An Async wrapper for CreateDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataQualityRulesetRequestT = Model::CreateDataQualityRulesetRequest>
        void CreateDataQualityRulesetAsync(const CreateDataQualityRulesetRequestT& request, const CreateDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateDataQualityRuleset, request, handler, context);
        }

        /**
         * <p>Creates a new database in a Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDatabaseRequestT = Model::CreateDatabaseRequest>
        Model::CreateDatabaseOutcomeCallable CreateDatabaseCallable(const CreateDatabaseRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateDatabase, request);
        }

        /**
         * An Async wrapper for CreateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDatabaseRequestT = Model::CreateDatabaseRequest>
        void CreateDatabaseAsync(const CreateDatabaseRequestT& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateDatabase, request, handler, context);
        }

        /**
         * <p>Creates a new development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevEndpointOutcome CreateDevEndpoint(const Model::CreateDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDevEndpointRequestT = Model::CreateDevEndpointRequest>
        Model::CreateDevEndpointOutcomeCallable CreateDevEndpointCallable(const CreateDevEndpointRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateDevEndpoint, request);
        }

        /**
         * An Async wrapper for CreateDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDevEndpointRequestT = Model::CreateDevEndpointRequest>
        void CreateDevEndpointAsync(const CreateDevEndpointRequestT& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateDevEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a new job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateJob, request, handler, context);
        }

        /**
         * <p>Creates an Glue machine learning transform. This operation creates the
         * transform and all the necessary parameters to train it.</p> <p>Call this
         * operation as the first step in the process of using a machine learning transform
         * (such as the <code>FindMatches</code> transform) for deduplicating data. You can
         * provide an optional <code>Description</code>, in addition to the parameters that
         * you want to use for your algorithm.</p> <p>You must also specify certain
         * parameters for the tasks that Glue runs on your behalf as part of learning from
         * your data and creating a high-quality machine learning transform. These
         * parameters include <code>Role</code>, and optionally,
         * <code>AllocatedCapacity</code>, <code>Timeout</code>, and
         * <code>MaxRetries</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-jobs-job.html">Jobs</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMLTransformOutcome CreateMLTransform(const Model::CreateMLTransformRequest& request) const;

        /**
         * A Callable wrapper for CreateMLTransform that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateMLTransformRequestT = Model::CreateMLTransformRequest>
        Model::CreateMLTransformOutcomeCallable CreateMLTransformCallable(const CreateMLTransformRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateMLTransform, request);
        }

        /**
         * An Async wrapper for CreateMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMLTransformRequestT = Model::CreateMLTransformRequest>
        void CreateMLTransformAsync(const CreateMLTransformRequestT& request, const CreateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateMLTransform, request, handler, context);
        }

        /**
         * <p>Creates a new partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest& request) const;

        /**
         * A Callable wrapper for CreatePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePartitionRequestT = Model::CreatePartitionRequest>
        Model::CreatePartitionOutcomeCallable CreatePartitionCallable(const CreatePartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreatePartition, request);
        }

        /**
         * An Async wrapper for CreatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePartitionRequestT = Model::CreatePartitionRequest>
        void CreatePartitionAsync(const CreatePartitionRequestT& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreatePartition, request, handler, context);
        }

        /**
         * <p>Creates a specified partition index in an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartitionIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionIndexOutcome CreatePartitionIndex(const Model::CreatePartitionIndexRequest& request) const;

        /**
         * A Callable wrapper for CreatePartitionIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePartitionIndexRequestT = Model::CreatePartitionIndexRequest>
        Model::CreatePartitionIndexOutcomeCallable CreatePartitionIndexCallable(const CreatePartitionIndexRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreatePartitionIndex, request);
        }

        /**
         * An Async wrapper for CreatePartitionIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePartitionIndexRequestT = Model::CreatePartitionIndexRequest>
        void CreatePartitionIndexAsync(const CreatePartitionIndexRequestT& request, const CreatePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreatePartitionIndex, request, handler, context);
        }

        /**
         * <p>Creates a new registry which may be used to hold a collection of
         * schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;

        /**
         * A Callable wrapper for CreateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRegistryRequestT = Model::CreateRegistryRequest>
        Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const CreateRegistryRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateRegistry, request);
        }

        /**
         * An Async wrapper for CreateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRegistryRequestT = Model::CreateRegistryRequest>
        void CreateRegistryAsync(const CreateRegistryRequestT& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateRegistry, request, handler, context);
        }

        /**
         * <p>Creates a new schema set and registers the schema definition. Returns an
         * error if the schema set already exists without actually registering the
         * version.</p> <p>When the schema set is created, a version checkpoint will be set
         * to the first version. Compatibility mode "DISABLED" restricts any additional
         * schema versions from being added after the first schema version. For all other
         * compatibility modes, validation of compatibility settings will be applied only
         * from the second version onwards when the <code>RegisterSchemaVersion</code> API
         * is used.</p> <p>When this API is called without a <code>RegistryId</code>, this
         * will create an entry for a "default-registry" in the registry database tables,
         * if it is not already present.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSchemaOutcome CreateSchema(const Model::CreateSchemaRequest& request) const;

        /**
         * A Callable wrapper for CreateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSchemaRequestT = Model::CreateSchemaRequest>
        Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const CreateSchemaRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateSchema, request);
        }

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSchemaRequestT = Model::CreateSchemaRequest>
        void CreateSchemaAsync(const CreateSchemaRequestT& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateSchema, request, handler, context);
        }

        /**
         * <p>Transforms a directed acyclic graph (DAG) into code.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScriptOutcome CreateScript(const Model::CreateScriptRequest& request) const;

        /**
         * A Callable wrapper for CreateScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateScriptRequestT = Model::CreateScriptRequest>
        Model::CreateScriptOutcomeCallable CreateScriptCallable(const CreateScriptRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateScript, request);
        }

        /**
         * An Async wrapper for CreateScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScriptRequestT = Model::CreateScriptRequest>
        void CreateScriptAsync(const CreateScriptRequestT& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateScript, request, handler, context);
        }

        /**
         * <p>Creates a new security configuration. A security configuration is a set of
         * security properties that can be used by Glue. You can use a security
         * configuration to encrypt data at rest. For information about using security
         * configurations in Glue, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/encryption-security-configuration.html">Encrypting
         * Data Written by Crawlers, Jobs, and Development Endpoints</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityConfigurationOutcome CreateSecurityConfiguration(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecurityConfigurationRequestT = Model::CreateSecurityConfigurationRequest>
        Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const CreateSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for CreateSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityConfigurationRequestT = Model::CreateSecurityConfigurationRequest>
        void CreateSecurityConfigurationAsync(const CreateSecurityConfigurationRequestT& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a new session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        Model::CreateSessionOutcomeCallable CreateSessionCallable(const CreateSessionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateSession, request);
        }

        /**
         * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSessionRequestT = Model::CreateSessionRequest>
        void CreateSessionAsync(const CreateSessionRequestT& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateSession, request, handler, context);
        }

        /**
         * <p>Creates a new table definition in the Data Catalog.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        Model::CreateTableOutcomeCallable CreateTableCallable(const CreateTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateTable, request);
        }

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableRequestT = Model::CreateTableRequest>
        void CreateTableAsync(const CreateTableRequestT& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateTable, request, handler, context);
        }

        /**
         * <p>Creates a new table optimizer for a specific function.
         * <code>compaction</code> is the only currently supported optimizer
         * type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTableOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOptimizerOutcome CreateTableOptimizer(const Model::CreateTableOptimizerRequest& request) const;

        /**
         * A Callable wrapper for CreateTableOptimizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTableOptimizerRequestT = Model::CreateTableOptimizerRequest>
        Model::CreateTableOptimizerOutcomeCallable CreateTableOptimizerCallable(const CreateTableOptimizerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateTableOptimizer, request);
        }

        /**
         * An Async wrapper for CreateTableOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTableOptimizerRequestT = Model::CreateTableOptimizerRequest>
        void CreateTableOptimizerAsync(const CreateTableOptimizerRequestT& request, const CreateTableOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateTableOptimizer, request, handler, context);
        }

        /**
         * <p>Creates a new trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest& request) const;

        /**
         * A Callable wrapper for CreateTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTriggerRequestT = Model::CreateTriggerRequest>
        Model::CreateTriggerOutcomeCallable CreateTriggerCallable(const CreateTriggerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateTrigger, request);
        }

        /**
         * An Async wrapper for CreateTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTriggerRequestT = Model::CreateTriggerRequest>
        void CreateTriggerAsync(const CreateTriggerRequestT& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateTrigger, request, handler, context);
        }

        /**
         * <p>Creates a new function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserDefinedFunctionOutcome CreateUserDefinedFunction(const Model::CreateUserDefinedFunctionRequest& request) const;

        /**
         * A Callable wrapper for CreateUserDefinedFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUserDefinedFunctionRequestT = Model::CreateUserDefinedFunctionRequest>
        Model::CreateUserDefinedFunctionOutcomeCallable CreateUserDefinedFunctionCallable(const CreateUserDefinedFunctionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateUserDefinedFunction, request);
        }

        /**
         * An Async wrapper for CreateUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUserDefinedFunctionRequestT = Model::CreateUserDefinedFunctionRequest>
        void CreateUserDefinedFunctionAsync(const CreateUserDefinedFunctionRequestT& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateUserDefinedFunction, request, handler, context);
        }

        /**
         * <p>Creates a new workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for CreateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        Model::CreateWorkflowOutcomeCallable CreateWorkflowCallable(const CreateWorkflowRequestT& request) const
        {
            return SubmitCallable(&GlueClient::CreateWorkflow, request);
        }

        /**
         * An Async wrapper for CreateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWorkflowRequestT = Model::CreateWorkflowRequest>
        void CreateWorkflowAsync(const CreateWorkflowRequestT& request, const CreateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::CreateWorkflow, request, handler, context);
        }

        /**
         * <p>Deletes an existing blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBlueprintOutcome DeleteBlueprint(const Model::DeleteBlueprintRequest& request) const;

        /**
         * A Callable wrapper for DeleteBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBlueprintRequestT = Model::DeleteBlueprintRequest>
        Model::DeleteBlueprintOutcomeCallable DeleteBlueprintCallable(const DeleteBlueprintRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteBlueprint, request);
        }

        /**
         * An Async wrapper for DeleteBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBlueprintRequestT = Model::DeleteBlueprintRequest>
        void DeleteBlueprintAsync(const DeleteBlueprintRequestT& request, const DeleteBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteBlueprint, request, handler, context);
        }

        /**
         * <p>Removes a classifier from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClassifierOutcome DeleteClassifier(const Model::DeleteClassifierRequest& request) const;

        /**
         * A Callable wrapper for DeleteClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClassifierRequestT = Model::DeleteClassifierRequest>
        Model::DeleteClassifierOutcomeCallable DeleteClassifierCallable(const DeleteClassifierRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteClassifier, request);
        }

        /**
         * An Async wrapper for DeleteClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClassifierRequestT = Model::DeleteClassifierRequest>
        void DeleteClassifierAsync(const DeleteClassifierRequestT& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteClassifier, request, handler, context);
        }

        /**
         * <p>Delete the partition column statistics of a column.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>DeletePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteColumnStatisticsForPartitionOutcome DeleteColumnStatisticsForPartition(const Model::DeleteColumnStatisticsForPartitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteColumnStatisticsForPartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteColumnStatisticsForPartitionRequestT = Model::DeleteColumnStatisticsForPartitionRequest>
        Model::DeleteColumnStatisticsForPartitionOutcomeCallable DeleteColumnStatisticsForPartitionCallable(const DeleteColumnStatisticsForPartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteColumnStatisticsForPartition, request);
        }

        /**
         * An Async wrapper for DeleteColumnStatisticsForPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteColumnStatisticsForPartitionRequestT = Model::DeleteColumnStatisticsForPartitionRequest>
        void DeleteColumnStatisticsForPartitionAsync(const DeleteColumnStatisticsForPartitionRequestT& request, const DeleteColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteColumnStatisticsForPartition, request, handler, context);
        }

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>DeleteTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteColumnStatisticsForTableOutcome DeleteColumnStatisticsForTable(const Model::DeleteColumnStatisticsForTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteColumnStatisticsForTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteColumnStatisticsForTableRequestT = Model::DeleteColumnStatisticsForTableRequest>
        Model::DeleteColumnStatisticsForTableOutcomeCallable DeleteColumnStatisticsForTableCallable(const DeleteColumnStatisticsForTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteColumnStatisticsForTable, request);
        }

        /**
         * An Async wrapper for DeleteColumnStatisticsForTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteColumnStatisticsForTableRequestT = Model::DeleteColumnStatisticsForTableRequest>
        void DeleteColumnStatisticsForTableAsync(const DeleteColumnStatisticsForTableRequestT& request, const DeleteColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteColumnStatisticsForTable, request, handler, context);
        }

        /**
         * <p>Deletes a connection from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const DeleteConnectionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteConnection, request);
        }

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRequestT = Model::DeleteConnectionRequest>
        void DeleteConnectionAsync(const DeleteConnectionRequestT& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteConnection, request, handler, context);
        }

        /**
         * <p>Removes a specified crawler from the Glue Data Catalog, unless the crawler
         * state is <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrawlerOutcome DeleteCrawler(const Model::DeleteCrawlerRequest& request) const;

        /**
         * A Callable wrapper for DeleteCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCrawlerRequestT = Model::DeleteCrawlerRequest>
        Model::DeleteCrawlerOutcomeCallable DeleteCrawlerCallable(const DeleteCrawlerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteCrawler, request);
        }

        /**
         * An Async wrapper for DeleteCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCrawlerRequestT = Model::DeleteCrawlerRequest>
        void DeleteCrawlerAsync(const DeleteCrawlerRequestT& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteCrawler, request, handler, context);
        }

        /**
         * <p>Deletes a custom pattern by specifying its name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCustomEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomEntityTypeOutcome DeleteCustomEntityType(const Model::DeleteCustomEntityTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomEntityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCustomEntityTypeRequestT = Model::DeleteCustomEntityTypeRequest>
        Model::DeleteCustomEntityTypeOutcomeCallable DeleteCustomEntityTypeCallable(const DeleteCustomEntityTypeRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteCustomEntityType, request);
        }

        /**
         * An Async wrapper for DeleteCustomEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomEntityTypeRequestT = Model::DeleteCustomEntityTypeRequest>
        void DeleteCustomEntityTypeAsync(const DeleteCustomEntityTypeRequestT& request, const DeleteCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteCustomEntityType, request, handler, context);
        }

        /**
         * <p>Deletes a data quality ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDataQualityRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataQualityRulesetOutcome DeleteDataQualityRuleset(const Model::DeleteDataQualityRulesetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataQualityRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataQualityRulesetRequestT = Model::DeleteDataQualityRulesetRequest>
        Model::DeleteDataQualityRulesetOutcomeCallable DeleteDataQualityRulesetCallable(const DeleteDataQualityRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteDataQualityRuleset, request);
        }

        /**
         * An Async wrapper for DeleteDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataQualityRulesetRequestT = Model::DeleteDataQualityRulesetRequest>
        void DeleteDataQualityRulesetAsync(const DeleteDataQualityRulesetRequestT& request, const DeleteDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteDataQualityRuleset, request, handler, context);
        }

        /**
         * <p>Removes a specified database from a Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the tables (and all
         * table versions and partitions that might belong to the tables) and the
         * user-defined functions in the deleted database. Glue deletes these "orphaned"
         * resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteDatabase</code>, use <code>DeleteTableVersion</code>
         * or <code>BatchDeleteTableVersion</code>, <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, <code>DeleteUserDefinedFunction</code>, and
         * <code>DeleteTable</code> or <code>BatchDeleteTable</code>, to delete any
         * resources that belong to the database.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDatabaseOutcome DeleteDatabase(const Model::DeleteDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDatabaseRequestT = Model::DeleteDatabaseRequest>
        Model::DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const DeleteDatabaseRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteDatabase, request);
        }

        /**
         * An Async wrapper for DeleteDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDatabaseRequestT = Model::DeleteDatabaseRequest>
        void DeleteDatabaseAsync(const DeleteDatabaseRequestT& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteDatabase, request, handler, context);
        }

        /**
         * <p>Deletes a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevEndpointOutcome DeleteDevEndpoint(const Model::DeleteDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDevEndpointRequestT = Model::DeleteDevEndpointRequest>
        Model::DeleteDevEndpointOutcomeCallable DeleteDevEndpointCallable(const DeleteDevEndpointRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteDevEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDevEndpointRequestT = Model::DeleteDevEndpointRequest>
        void DeleteDevEndpointAsync(const DeleteDevEndpointRequestT& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteDevEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a specified job definition. If the job definition is not found, no
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        Model::DeleteJobOutcomeCallable DeleteJobCallable(const DeleteJobRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteJob, request);
        }

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        void DeleteJobAsync(const DeleteJobRequestT& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteJob, request, handler, context);
        }

        /**
         * <p>Deletes an Glue machine learning transform. Machine learning transforms are a
         * special type of transform that use machine learning to learn the details of the
         * transformation to be performed by learning from examples provided by humans.
         * These transformations are then saved by Glue. If you no longer need a transform,
         * you can delete it by calling <code>DeleteMLTransforms</code>. However, any Glue
         * jobs that still reference the deleted transform will no longer
         * succeed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMLTransformOutcome DeleteMLTransform(const Model::DeleteMLTransformRequest& request) const;

        /**
         * A Callable wrapper for DeleteMLTransform that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMLTransformRequestT = Model::DeleteMLTransformRequest>
        Model::DeleteMLTransformOutcomeCallable DeleteMLTransformCallable(const DeleteMLTransformRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteMLTransform, request);
        }

        /**
         * An Async wrapper for DeleteMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMLTransformRequestT = Model::DeleteMLTransformRequest>
        void DeleteMLTransformAsync(const DeleteMLTransformRequestT& request, const DeleteMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteMLTransform, request, handler, context);
        }

        /**
         * <p>Deletes a specified partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionOutcome DeletePartition(const Model::DeletePartitionRequest& request) const;

        /**
         * A Callable wrapper for DeletePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePartitionRequestT = Model::DeletePartitionRequest>
        Model::DeletePartitionOutcomeCallable DeletePartitionCallable(const DeletePartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeletePartition, request);
        }

        /**
         * An Async wrapper for DeletePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePartitionRequestT = Model::DeletePartitionRequest>
        void DeletePartitionAsync(const DeletePartitionRequestT& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeletePartition, request, handler, context);
        }

        /**
         * <p>Deletes a specified partition index from an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartitionIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionIndexOutcome DeletePartitionIndex(const Model::DeletePartitionIndexRequest& request) const;

        /**
         * A Callable wrapper for DeletePartitionIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePartitionIndexRequestT = Model::DeletePartitionIndexRequest>
        Model::DeletePartitionIndexOutcomeCallable DeletePartitionIndexCallable(const DeletePartitionIndexRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeletePartitionIndex, request);
        }

        /**
         * An Async wrapper for DeletePartitionIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePartitionIndexRequestT = Model::DeletePartitionIndexRequest>
        void DeletePartitionIndexAsync(const DeletePartitionIndexRequestT& request, const DeletePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeletePartitionIndex, request, handler, context);
        }

        /**
         * <p>Delete the entire registry including schema and all of its versions. To get
         * the status of the delete operation, you can call the <code>GetRegistry</code>
         * API after the asynchronous call. Deleting a registry will deactivate all online
         * operations for the registry such as the <code>UpdateRegistry</code>,
         * <code>CreateSchema</code>, <code>UpdateSchema</code>, and
         * <code>RegisterSchemaVersion</code> APIs. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistryOutcome DeleteRegistry(const Model::DeleteRegistryRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRegistryRequestT = Model::DeleteRegistryRequest>
        Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const DeleteRegistryRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteRegistry, request);
        }

        /**
         * An Async wrapper for DeleteRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistryRequestT = Model::DeleteRegistryRequest>
        void DeleteRegistryAsync(const DeleteRegistryRequestT& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteRegistry, request, handler, context);
        }

        /**
         * <p>Deletes a specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the entire schema set, including the schema set and all of its
         * versions. To get the status of the delete operation, you can call
         * <code>GetSchema</code> API after the asynchronous call. Deleting a registry will
         * deactivate all online operations for the schema, such as the
         * <code>GetSchemaByDefinition</code>, and <code>RegisterSchemaVersion</code>
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaOutcome DeleteSchema(const Model::DeleteSchemaRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSchemaRequestT = Model::DeleteSchemaRequest>
        Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const DeleteSchemaRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteSchema, request);
        }

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSchemaRequestT = Model::DeleteSchemaRequest>
        void DeleteSchemaAsync(const DeleteSchemaRequestT& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteSchema, request, handler, context);
        }

        /**
         * <p>Remove versions from the specified schema. A version number or range may be
         * supplied. If the compatibility mode forbids deleting of a version that is
         * necessary, such as BACKWARDS_FULL, an error is returned. Calling the
         * <code>GetSchemaVersions</code> API after this call will list the status of the
         * deleted versions.</p> <p>When the range of version numbers contain check pointed
         * version, the API will return a 409 conflict and will not proceed with the
         * deletion. You have to remove the checkpoint first using the
         * <code>DeleteSchemaCheckpoint</code> API before using this API.</p> <p>You cannot
         * use the <code>DeleteSchemaVersions</code> API to delete the first schema version
         * in the schema set. The first schema version can only be deleted by the
         * <code>DeleteSchema</code> API. This operation will also delete the attached
         * <code>SchemaVersionMetadata</code> under the schema versions. Hard deletes will
         * be enforced on the database.</p> <p>If the compatibility mode forbids deleting
         * of a version that is necessary, such as BACKWARDS_FULL, an error is
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSchemaVersionsOutcome DeleteSchemaVersions(const Model::DeleteSchemaVersionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteSchemaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSchemaVersionsRequestT = Model::DeleteSchemaVersionsRequest>
        Model::DeleteSchemaVersionsOutcomeCallable DeleteSchemaVersionsCallable(const DeleteSchemaVersionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteSchemaVersions, request);
        }

        /**
         * An Async wrapper for DeleteSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSchemaVersionsRequestT = Model::DeleteSchemaVersionsRequest>
        void DeleteSchemaVersionsAsync(const DeleteSchemaVersionsRequestT& request, const DeleteSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteSchemaVersions, request, handler, context);
        }

        /**
         * <p>Deletes a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSecurityConfigurationRequestT = Model::DeleteSecurityConfigurationRequest>
        Model::DeleteSecurityConfigurationOutcomeCallable DeleteSecurityConfigurationCallable(const DeleteSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecurityConfigurationRequestT = Model::DeleteSecurityConfigurationRequest>
        void DeleteSecurityConfigurationAsync(const DeleteSecurityConfigurationRequestT& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSessionRequestT = Model::DeleteSessionRequest>
        Model::DeleteSessionOutcomeCallable DeleteSessionCallable(const DeleteSessionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteSession, request);
        }

        /**
         * An Async wrapper for DeleteSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSessionRequestT = Model::DeleteSessionRequest>
        void DeleteSessionAsync(const DeleteSessionRequestT& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteSession, request, handler, context);
        }

        /**
         * <p>Removes a table definition from the Data Catalog.</p>  <p>After
         * completing this operation, you no longer have access to the table versions and
         * partitions that belong to the deleted table. Glue deletes these "orphaned"
         * resources asynchronously in a timely manner, at the discretion of the
         * service.</p> <p>To ensure the immediate deletion of all related resources,
         * before calling <code>DeleteTable</code>, use <code>DeleteTableVersion</code> or
         * <code>BatchDeleteTableVersion</code>, and <code>DeletePartition</code> or
         * <code>BatchDeletePartition</code>, to delete any resources that belong to the
         * table.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOutcome DeleteTable(const Model::DeleteTableRequest& request) const;

        /**
         * A Callable wrapper for DeleteTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        Model::DeleteTableOutcomeCallable DeleteTableCallable(const DeleteTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteTable, request);
        }

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableRequestT = Model::DeleteTableRequest>
        void DeleteTableAsync(const DeleteTableRequestT& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteTable, request, handler, context);
        }

        /**
         * <p>Deletes an optimizer and all associated metadata for a table. The
         * optimization will no longer be performed on the table.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableOptimizerOutcome DeleteTableOptimizer(const Model::DeleteTableOptimizerRequest& request) const;

        /**
         * A Callable wrapper for DeleteTableOptimizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableOptimizerRequestT = Model::DeleteTableOptimizerRequest>
        Model::DeleteTableOptimizerOutcomeCallable DeleteTableOptimizerCallable(const DeleteTableOptimizerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteTableOptimizer, request);
        }

        /**
         * An Async wrapper for DeleteTableOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableOptimizerRequestT = Model::DeleteTableOptimizerRequest>
        void DeleteTableOptimizerAsync(const DeleteTableOptimizerRequestT& request, const DeleteTableOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteTableOptimizer, request, handler, context);
        }

        /**
         * <p>Deletes a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableVersionOutcome DeleteTableVersion(const Model::DeleteTableVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteTableVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTableVersionRequestT = Model::DeleteTableVersionRequest>
        Model::DeleteTableVersionOutcomeCallable DeleteTableVersionCallable(const DeleteTableVersionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteTableVersion, request);
        }

        /**
         * An Async wrapper for DeleteTableVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTableVersionRequestT = Model::DeleteTableVersionRequest>
        void DeleteTableVersionAsync(const DeleteTableVersionRequestT& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteTableVersion, request, handler, context);
        }

        /**
         * <p>Deletes a specified trigger. If the trigger is not found, no exception is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTriggerOutcome DeleteTrigger(const Model::DeleteTriggerRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTriggerRequestT = Model::DeleteTriggerRequest>
        Model::DeleteTriggerOutcomeCallable DeleteTriggerCallable(const DeleteTriggerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteTrigger, request);
        }

        /**
         * An Async wrapper for DeleteTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTriggerRequestT = Model::DeleteTriggerRequest>
        void DeleteTriggerAsync(const DeleteTriggerRequestT& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteTrigger, request, handler, context);
        }

        /**
         * <p>Deletes an existing function definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserDefinedFunctionOutcome DeleteUserDefinedFunction(const Model::DeleteUserDefinedFunctionRequest& request) const;

        /**
         * A Callable wrapper for DeleteUserDefinedFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUserDefinedFunctionRequestT = Model::DeleteUserDefinedFunctionRequest>
        Model::DeleteUserDefinedFunctionOutcomeCallable DeleteUserDefinedFunctionCallable(const DeleteUserDefinedFunctionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteUserDefinedFunction, request);
        }

        /**
         * An Async wrapper for DeleteUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUserDefinedFunctionRequestT = Model::DeleteUserDefinedFunctionRequest>
        void DeleteUserDefinedFunctionAsync(const DeleteUserDefinedFunctionRequestT& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteUserDefinedFunction, request, handler, context);
        }

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;

        /**
         * A Callable wrapper for DeleteWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        Model::DeleteWorkflowOutcomeCallable DeleteWorkflowCallable(const DeleteWorkflowRequestT& request) const
        {
            return SubmitCallable(&GlueClient::DeleteWorkflow, request);
        }

        /**
         * An Async wrapper for DeleteWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWorkflowRequestT = Model::DeleteWorkflowRequest>
        void DeleteWorkflowAsync(const DeleteWorkflowRequestT& request, const DeleteWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::DeleteWorkflow, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintOutcome GetBlueprint(const Model::GetBlueprintRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlueprintRequestT = Model::GetBlueprintRequest>
        Model::GetBlueprintOutcomeCallable GetBlueprintCallable(const GetBlueprintRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetBlueprint, request);
        }

        /**
         * An Async wrapper for GetBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlueprintRequestT = Model::GetBlueprintRequest>
        void GetBlueprintAsync(const GetBlueprintRequestT& request, const GetBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetBlueprint, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a blueprint run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprintRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintRunOutcome GetBlueprintRun(const Model::GetBlueprintRunRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprintRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlueprintRunRequestT = Model::GetBlueprintRunRequest>
        Model::GetBlueprintRunOutcomeCallable GetBlueprintRunCallable(const GetBlueprintRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetBlueprintRun, request);
        }

        /**
         * An Async wrapper for GetBlueprintRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlueprintRunRequestT = Model::GetBlueprintRunRequest>
        void GetBlueprintRunAsync(const GetBlueprintRunRequestT& request, const GetBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetBlueprintRun, request, handler, context);
        }

        /**
         * <p>Retrieves the details of blueprint runs for a specified
         * blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprintRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintRunsOutcome GetBlueprintRuns(const Model::GetBlueprintRunsRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprintRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlueprintRunsRequestT = Model::GetBlueprintRunsRequest>
        Model::GetBlueprintRunsOutcomeCallable GetBlueprintRunsCallable(const GetBlueprintRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetBlueprintRuns, request);
        }

        /**
         * An Async wrapper for GetBlueprintRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlueprintRunsRequestT = Model::GetBlueprintRunsRequest>
        void GetBlueprintRunsAsync(const GetBlueprintRunsRequestT& request, const GetBlueprintRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetBlueprintRuns, request, handler, context);
        }

        /**
         * <p>Retrieves the status of a migration operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCatalogImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogImportStatusOutcome GetCatalogImportStatus(const Model::GetCatalogImportStatusRequest& request) const;

        /**
         * A Callable wrapper for GetCatalogImportStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCatalogImportStatusRequestT = Model::GetCatalogImportStatusRequest>
        Model::GetCatalogImportStatusOutcomeCallable GetCatalogImportStatusCallable(const GetCatalogImportStatusRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetCatalogImportStatus, request);
        }

        /**
         * An Async wrapper for GetCatalogImportStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCatalogImportStatusRequestT = Model::GetCatalogImportStatusRequest>
        void GetCatalogImportStatusAsync(const GetCatalogImportStatusRequestT& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetCatalogImportStatus, request, handler, context);
        }

        /**
         * <p>Retrieve a classifier by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifierOutcome GetClassifier(const Model::GetClassifierRequest& request) const;

        /**
         * A Callable wrapper for GetClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClassifierRequestT = Model::GetClassifierRequest>
        Model::GetClassifierOutcomeCallable GetClassifierCallable(const GetClassifierRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetClassifier, request);
        }

        /**
         * An Async wrapper for GetClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClassifierRequestT = Model::GetClassifierRequest>
        void GetClassifierAsync(const GetClassifierRequestT& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetClassifier, request, handler, context);
        }

        /**
         * <p>Lists all classifier objects in the Data Catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifiersOutcome GetClassifiers(const Model::GetClassifiersRequest& request) const;

        /**
         * A Callable wrapper for GetClassifiers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetClassifiersRequestT = Model::GetClassifiersRequest>
        Model::GetClassifiersOutcomeCallable GetClassifiersCallable(const GetClassifiersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetClassifiers, request);
        }

        /**
         * An Async wrapper for GetClassifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetClassifiersRequestT = Model::GetClassifiersRequest>
        void GetClassifiersAsync(const GetClassifiersRequestT& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetClassifiers, request, handler, context);
        }

        /**
         * <p>Retrieves partition statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetPartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsForPartitionOutcome GetColumnStatisticsForPartition(const Model::GetColumnStatisticsForPartitionRequest& request) const;

        /**
         * A Callable wrapper for GetColumnStatisticsForPartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetColumnStatisticsForPartitionRequestT = Model::GetColumnStatisticsForPartitionRequest>
        Model::GetColumnStatisticsForPartitionOutcomeCallable GetColumnStatisticsForPartitionCallable(const GetColumnStatisticsForPartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetColumnStatisticsForPartition, request);
        }

        /**
         * An Async wrapper for GetColumnStatisticsForPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetColumnStatisticsForPartitionRequestT = Model::GetColumnStatisticsForPartitionRequest>
        void GetColumnStatisticsForPartitionAsync(const GetColumnStatisticsForPartitionRequestT& request, const GetColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetColumnStatisticsForPartition, request, handler, context);
        }

        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsForTableOutcome GetColumnStatisticsForTable(const Model::GetColumnStatisticsForTableRequest& request) const;

        /**
         * A Callable wrapper for GetColumnStatisticsForTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetColumnStatisticsForTableRequestT = Model::GetColumnStatisticsForTableRequest>
        Model::GetColumnStatisticsForTableOutcomeCallable GetColumnStatisticsForTableCallable(const GetColumnStatisticsForTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetColumnStatisticsForTable, request);
        }

        /**
         * An Async wrapper for GetColumnStatisticsForTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetColumnStatisticsForTableRequestT = Model::GetColumnStatisticsForTableRequest>
        void GetColumnStatisticsForTableAsync(const GetColumnStatisticsForTableRequestT& request, const GetColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetColumnStatisticsForTable, request, handler, context);
        }

        /**
         * <p>Get the associated metadata/information for a task run, given a task run
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsTaskRunOutcome GetColumnStatisticsTaskRun(const Model::GetColumnStatisticsTaskRunRequest& request) const;

        /**
         * A Callable wrapper for GetColumnStatisticsTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetColumnStatisticsTaskRunRequestT = Model::GetColumnStatisticsTaskRunRequest>
        Model::GetColumnStatisticsTaskRunOutcomeCallable GetColumnStatisticsTaskRunCallable(const GetColumnStatisticsTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetColumnStatisticsTaskRun, request);
        }

        /**
         * An Async wrapper for GetColumnStatisticsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetColumnStatisticsTaskRunRequestT = Model::GetColumnStatisticsTaskRunRequest>
        void GetColumnStatisticsTaskRunAsync(const GetColumnStatisticsTaskRunRequestT& request, const GetColumnStatisticsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetColumnStatisticsTaskRun, request, handler, context);
        }

        /**
         * <p>Retrieves information about all runs associated with the specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsTaskRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsTaskRunsOutcome GetColumnStatisticsTaskRuns(const Model::GetColumnStatisticsTaskRunsRequest& request) const;

        /**
         * A Callable wrapper for GetColumnStatisticsTaskRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetColumnStatisticsTaskRunsRequestT = Model::GetColumnStatisticsTaskRunsRequest>
        Model::GetColumnStatisticsTaskRunsOutcomeCallable GetColumnStatisticsTaskRunsCallable(const GetColumnStatisticsTaskRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetColumnStatisticsTaskRuns, request);
        }

        /**
         * An Async wrapper for GetColumnStatisticsTaskRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetColumnStatisticsTaskRunsRequestT = Model::GetColumnStatisticsTaskRunsRequest>
        void GetColumnStatisticsTaskRunsAsync(const GetColumnStatisticsTaskRunsRequestT& request, const GetColumnStatisticsTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetColumnStatisticsTaskRuns, request, handler, context);
        }

        /**
         * <p>Retrieves a connection definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

        /**
         * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetConnection, request);
        }

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionRequestT = Model::GetConnectionRequest>
        void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetConnection, request, handler, context);
        }

        /**
         * <p>Retrieves a list of connection definitions from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionsOutcome GetConnections(const Model::GetConnectionsRequest& request) const;

        /**
         * A Callable wrapper for GetConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionsRequestT = Model::GetConnectionsRequest>
        Model::GetConnectionsOutcomeCallable GetConnectionsCallable(const GetConnectionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetConnections, request);
        }

        /**
         * An Async wrapper for GetConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionsRequestT = Model::GetConnectionsRequest>
        void GetConnectionsAsync(const GetConnectionsRequestT& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetConnections, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for a specified crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawler">AWS API
         * Reference</a></p>
         */
        virtual Model::GetCrawlerOutcome GetCrawler(const Model::GetCrawlerRequest& request) const;

        /**
         * A Callable wrapper for GetCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCrawlerRequestT = Model::GetCrawlerRequest>
        Model::GetCrawlerOutcomeCallable GetCrawlerCallable(const GetCrawlerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetCrawler, request);
        }

        /**
         * An Async wrapper for GetCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCrawlerRequestT = Model::GetCrawlerRequest>
        void GetCrawlerAsync(const GetCrawlerRequestT& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetCrawler, request, handler, context);
        }

        /**
         * <p>Retrieves metrics about specified crawlers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlerMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlerMetricsOutcome GetCrawlerMetrics(const Model::GetCrawlerMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetCrawlerMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCrawlerMetricsRequestT = Model::GetCrawlerMetricsRequest>
        Model::GetCrawlerMetricsOutcomeCallable GetCrawlerMetricsCallable(const GetCrawlerMetricsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetCrawlerMetrics, request);
        }

        /**
         * An Async wrapper for GetCrawlerMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCrawlerMetricsRequestT = Model::GetCrawlerMetricsRequest>
        void GetCrawlerMetricsAsync(const GetCrawlerMetricsRequestT& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetCrawlerMetrics, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for all crawlers defined in the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlersOutcome GetCrawlers(const Model::GetCrawlersRequest& request) const;

        /**
         * A Callable wrapper for GetCrawlers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCrawlersRequestT = Model::GetCrawlersRequest>
        Model::GetCrawlersOutcomeCallable GetCrawlersCallable(const GetCrawlersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetCrawlers, request);
        }

        /**
         * An Async wrapper for GetCrawlers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCrawlersRequestT = Model::GetCrawlersRequest>
        void GetCrawlersAsync(const GetCrawlersRequestT& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetCrawlers, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a custom pattern by specifying its
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCustomEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomEntityTypeOutcome GetCustomEntityType(const Model::GetCustomEntityTypeRequest& request) const;

        /**
         * A Callable wrapper for GetCustomEntityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomEntityTypeRequestT = Model::GetCustomEntityTypeRequest>
        Model::GetCustomEntityTypeOutcomeCallable GetCustomEntityTypeCallable(const GetCustomEntityTypeRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetCustomEntityType, request);
        }

        /**
         * An Async wrapper for GetCustomEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomEntityTypeRequestT = Model::GetCustomEntityTypeRequest>
        void GetCustomEntityTypeAsync(const GetCustomEntityTypeRequestT& request, const GetCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetCustomEntityType, request, handler, context);
        }

        /**
         * <p>Retrieves the security configuration for a specified catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCatalogEncryptionSettingsOutcome GetDataCatalogEncryptionSettings(const Model::GetDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetDataCatalogEncryptionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataCatalogEncryptionSettingsRequestT = Model::GetDataCatalogEncryptionSettingsRequest>
        Model::GetDataCatalogEncryptionSettingsOutcomeCallable GetDataCatalogEncryptionSettingsCallable(const GetDataCatalogEncryptionSettingsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDataCatalogEncryptionSettings, request);
        }

        /**
         * An Async wrapper for GetDataCatalogEncryptionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataCatalogEncryptionSettingsRequestT = Model::GetDataCatalogEncryptionSettingsRequest>
        void GetDataCatalogEncryptionSettingsAsync(const GetDataCatalogEncryptionSettingsRequestT& request, const GetDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDataCatalogEncryptionSettings, request, handler, context);
        }

        /**
         * <p>Retrieves the result of a data quality rule evaluation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityResult">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataQualityResultOutcome GetDataQualityResult(const Model::GetDataQualityResultRequest& request) const;

        /**
         * A Callable wrapper for GetDataQualityResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataQualityResultRequestT = Model::GetDataQualityResultRequest>
        Model::GetDataQualityResultOutcomeCallable GetDataQualityResultCallable(const GetDataQualityResultRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDataQualityResult, request);
        }

        /**
         * An Async wrapper for GetDataQualityResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataQualityResultRequestT = Model::GetDataQualityResultRequest>
        void GetDataQualityResultAsync(const GetDataQualityResultRequestT& request, const GetDataQualityResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDataQualityResult, request, handler, context);
        }

        /**
         * <p>Gets the specified recommendation run that was used to generate
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityRuleRecommendationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataQualityRuleRecommendationRunOutcome GetDataQualityRuleRecommendationRun(const Model::GetDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * A Callable wrapper for GetDataQualityRuleRecommendationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataQualityRuleRecommendationRunRequestT = Model::GetDataQualityRuleRecommendationRunRequest>
        Model::GetDataQualityRuleRecommendationRunOutcomeCallable GetDataQualityRuleRecommendationRunCallable(const GetDataQualityRuleRecommendationRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDataQualityRuleRecommendationRun, request);
        }

        /**
         * An Async wrapper for GetDataQualityRuleRecommendationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataQualityRuleRecommendationRunRequestT = Model::GetDataQualityRuleRecommendationRunRequest>
        void GetDataQualityRuleRecommendationRunAsync(const GetDataQualityRuleRecommendationRunRequestT& request, const GetDataQualityRuleRecommendationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDataQualityRuleRecommendationRun, request, handler, context);
        }

        /**
         * <p>Returns an existing ruleset by identifier or name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataQualityRulesetOutcome GetDataQualityRuleset(const Model::GetDataQualityRulesetRequest& request) const;

        /**
         * A Callable wrapper for GetDataQualityRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataQualityRulesetRequestT = Model::GetDataQualityRulesetRequest>
        Model::GetDataQualityRulesetOutcomeCallable GetDataQualityRulesetCallable(const GetDataQualityRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDataQualityRuleset, request);
        }

        /**
         * An Async wrapper for GetDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataQualityRulesetRequestT = Model::GetDataQualityRulesetRequest>
        void GetDataQualityRulesetAsync(const GetDataQualityRulesetRequestT& request, const GetDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDataQualityRuleset, request, handler, context);
        }

        /**
         * <p>Retrieves a specific run where a ruleset is evaluated against a data
         * source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataQualityRulesetEvaluationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataQualityRulesetEvaluationRunOutcome GetDataQualityRulesetEvaluationRun(const Model::GetDataQualityRulesetEvaluationRunRequest& request) const;

        /**
         * A Callable wrapper for GetDataQualityRulesetEvaluationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataQualityRulesetEvaluationRunRequestT = Model::GetDataQualityRulesetEvaluationRunRequest>
        Model::GetDataQualityRulesetEvaluationRunOutcomeCallable GetDataQualityRulesetEvaluationRunCallable(const GetDataQualityRulesetEvaluationRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDataQualityRulesetEvaluationRun, request);
        }

        /**
         * An Async wrapper for GetDataQualityRulesetEvaluationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataQualityRulesetEvaluationRunRequestT = Model::GetDataQualityRulesetEvaluationRunRequest>
        void GetDataQualityRulesetEvaluationRunAsync(const GetDataQualityRulesetEvaluationRunRequestT& request, const GetDataQualityRulesetEvaluationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDataQualityRulesetEvaluationRun, request, handler, context);
        }

        /**
         * <p>Retrieves the definition of a specified database.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDatabaseRequestT = Model::GetDatabaseRequest>
        Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const GetDatabaseRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDatabase, request);
        }

        /**
         * An Async wrapper for GetDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatabaseRequestT = Model::GetDatabaseRequest>
        void GetDatabaseAsync(const GetDatabaseRequestT& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDatabase, request, handler, context);
        }

        /**
         * <p>Retrieves all databases defined in a given Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabasesOutcome GetDatabases(const Model::GetDatabasesRequest& request) const;

        /**
         * A Callable wrapper for GetDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDatabasesRequestT = Model::GetDatabasesRequest>
        Model::GetDatabasesOutcomeCallable GetDatabasesCallable(const GetDatabasesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDatabases, request);
        }

        /**
         * An Async wrapper for GetDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDatabasesRequestT = Model::GetDatabasesRequest>
        void GetDatabasesAsync(const GetDatabasesRequestT& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDatabases, request, handler, context);
        }

        /**
         * <p>Transforms a Python script into a directed acyclic graph (DAG).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataflowGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowGraphOutcome GetDataflowGraph(const Model::GetDataflowGraphRequest& request) const;

        /**
         * A Callable wrapper for GetDataflowGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataflowGraphRequestT = Model::GetDataflowGraphRequest>
        Model::GetDataflowGraphOutcomeCallable GetDataflowGraphCallable(const GetDataflowGraphRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDataflowGraph, request);
        }

        /**
         * An Async wrapper for GetDataflowGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataflowGraphRequestT = Model::GetDataflowGraphRequest>
        void GetDataflowGraphAsync(const GetDataflowGraphRequestT& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDataflowGraph, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specified development endpoint.</p> 
         * <p>When you create a development endpoint in a virtual private cloud (VPC), Glue
         * returns only a private IP address, and the public IP address field is not
         * populated. When you create a non-VPC development endpoint, Glue returns only a
         * public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevEndpointOutcome GetDevEndpoint(const Model::GetDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDevEndpointRequestT = Model::GetDevEndpointRequest>
        Model::GetDevEndpointOutcomeCallable GetDevEndpointCallable(const GetDevEndpointRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDevEndpoint, request);
        }

        /**
         * An Async wrapper for GetDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevEndpointRequestT = Model::GetDevEndpointRequest>
        void GetDevEndpointAsync(const GetDevEndpointRequestT& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDevEndpoint, request, handler, context);
        }

        /**
         * <p>Retrieves all the development endpoints in this Amazon Web Services
         * account.</p>  <p>When you create a development endpoint in a virtual
         * private cloud (VPC), Glue returns only a private IP address and the public IP
         * address field is not populated. When you create a non-VPC development endpoint,
         * Glue returns only a public IP address.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDevEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevEndpointsOutcome GetDevEndpoints(const Model::GetDevEndpointsRequest& request) const;

        /**
         * A Callable wrapper for GetDevEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDevEndpointsRequestT = Model::GetDevEndpointsRequest>
        Model::GetDevEndpointsOutcomeCallable GetDevEndpointsCallable(const GetDevEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetDevEndpoints, request);
        }

        /**
         * An Async wrapper for GetDevEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevEndpointsRequestT = Model::GetDevEndpointsRequest>
        void GetDevEndpointsAsync(const GetDevEndpointsRequestT& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetDevEndpoints, request, handler, context);
        }

        /**
         * <p>Retrieves an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetJob, request, handler, context);
        }

        /**
         * <p>Returns information on a job bookmark entry.</p> <p>For more information
         * about enabling and using job bookmarks, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-continuations.html">Tracking
         * processed data using job bookmarks</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Job
         * parameters used by Glue</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-jobs-job.html#aws-glue-api-jobs-job-Job">Job
         * structure</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobBookmark">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobBookmarkOutcome GetJobBookmark(const Model::GetJobBookmarkRequest& request) const;

        /**
         * A Callable wrapper for GetJobBookmark that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobBookmarkRequestT = Model::GetJobBookmarkRequest>
        Model::GetJobBookmarkOutcomeCallable GetJobBookmarkCallable(const GetJobBookmarkRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetJobBookmark, request);
        }

        /**
         * An Async wrapper for GetJobBookmark that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobBookmarkRequestT = Model::GetJobBookmarkRequest>
        void GetJobBookmarkAsync(const GetJobBookmarkRequestT& request, const GetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetJobBookmark, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for a given job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRun">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRunRequestT = Model::GetJobRunRequest>
        Model::GetJobRunOutcomeCallable GetJobRunCallable(const GetJobRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetJobRun, request);
        }

        /**
         * An Async wrapper for GetJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRunRequestT = Model::GetJobRunRequest>
        void GetJobRunAsync(const GetJobRunRequestT& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetJobRun, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for all runs of a given job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRuns">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunsOutcome GetJobRuns(const Model::GetJobRunsRequest& request) const;

        /**
         * A Callable wrapper for GetJobRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRunsRequestT = Model::GetJobRunsRequest>
        Model::GetJobRunsOutcomeCallable GetJobRunsCallable(const GetJobRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetJobRuns, request);
        }

        /**
         * An Async wrapper for GetJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRunsRequestT = Model::GetJobRunsRequest>
        void GetJobRunsAsync(const GetJobRunsRequestT& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetJobRuns, request, handler, context);
        }

        /**
         * <p>Retrieves all current job definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobsOutcome GetJobs(const Model::GetJobsRequest& request) const;

        /**
         * A Callable wrapper for GetJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobsRequestT = Model::GetJobsRequest>
        Model::GetJobsOutcomeCallable GetJobsCallable(const GetJobsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetJobs, request);
        }

        /**
         * An Async wrapper for GetJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobsRequestT = Model::GetJobsRequest>
        void GetJobsAsync(const GetJobsRequestT& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetJobs, request, handler, context);
        }

        /**
         * <p>Gets details for a specific task run on a machine learning transform. Machine
         * learning task runs are asynchronous tasks that Glue runs on your behalf as part
         * of various machine learning workflows. You can check the stats of any task run
         * by calling <code>GetMLTaskRun</code> with the <code>TaskRunID</code> and its
         * parent transform's <code>TransformID</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTaskRunOutcome GetMLTaskRun(const Model::GetMLTaskRunRequest& request) const;

        /**
         * A Callable wrapper for GetMLTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLTaskRunRequestT = Model::GetMLTaskRunRequest>
        Model::GetMLTaskRunOutcomeCallable GetMLTaskRunCallable(const GetMLTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetMLTaskRun, request);
        }

        /**
         * An Async wrapper for GetMLTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLTaskRunRequestT = Model::GetMLTaskRunRequest>
        void GetMLTaskRunAsync(const GetMLTaskRunRequestT& request, const GetMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetMLTaskRun, request, handler, context);
        }

        /**
         * <p>Gets a list of runs for a machine learning transform. Machine learning task
         * runs are asynchronous tasks that Glue runs on your behalf as part of various
         * machine learning workflows. You can get a sortable, filterable list of machine
         * learning task runs by calling <code>GetMLTaskRuns</code> with their parent
         * transform's <code>TransformID</code> and other optional parameters as documented
         * in this section.</p> <p>This operation returns a list of historic runs and must
         * be paginated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTaskRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTaskRunsOutcome GetMLTaskRuns(const Model::GetMLTaskRunsRequest& request) const;

        /**
         * A Callable wrapper for GetMLTaskRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLTaskRunsRequestT = Model::GetMLTaskRunsRequest>
        Model::GetMLTaskRunsOutcomeCallable GetMLTaskRunsCallable(const GetMLTaskRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetMLTaskRuns, request);
        }

        /**
         * An Async wrapper for GetMLTaskRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLTaskRunsRequestT = Model::GetMLTaskRunsRequest>
        void GetMLTaskRunsAsync(const GetMLTaskRunsRequestT& request, const GetMLTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetMLTaskRuns, request, handler, context);
        }

        /**
         * <p>Gets an Glue machine learning transform artifact and all its corresponding
         * metadata. Machine learning transforms are a special type of transform that use
         * machine learning to learn the details of the transformation to be performed by
         * learning from examples provided by humans. These transformations are then saved
         * by Glue. You can retrieve their metadata by calling
         * <code>GetMLTransform</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTransformOutcome GetMLTransform(const Model::GetMLTransformRequest& request) const;

        /**
         * A Callable wrapper for GetMLTransform that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLTransformRequestT = Model::GetMLTransformRequest>
        Model::GetMLTransformOutcomeCallable GetMLTransformCallable(const GetMLTransformRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetMLTransform, request);
        }

        /**
         * An Async wrapper for GetMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLTransformRequestT = Model::GetMLTransformRequest>
        void GetMLTransformAsync(const GetMLTransformRequestT& request, const GetMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetMLTransform, request, handler, context);
        }

        /**
         * <p>Gets a sortable, filterable list of existing Glue machine learning
         * transforms. Machine learning transforms are a special type of transform that use
         * machine learning to learn the details of the transformation to be performed by
         * learning from examples provided by humans. These transformations are then saved
         * by Glue, and you can retrieve their metadata by calling
         * <code>GetMLTransforms</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMLTransforms">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMLTransformsOutcome GetMLTransforms(const Model::GetMLTransformsRequest& request) const;

        /**
         * A Callable wrapper for GetMLTransforms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMLTransformsRequestT = Model::GetMLTransformsRequest>
        Model::GetMLTransformsOutcomeCallable GetMLTransformsCallable(const GetMLTransformsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetMLTransforms, request);
        }

        /**
         * An Async wrapper for GetMLTransforms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMLTransformsRequestT = Model::GetMLTransformsRequest>
        void GetMLTransformsAsync(const GetMLTransformsRequestT& request, const GetMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetMLTransforms, request, handler, context);
        }

        /**
         * <p>Creates mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMapping">AWS API
         * Reference</a></p>
         */
        virtual Model::GetMappingOutcome GetMapping(const Model::GetMappingRequest& request) const;

        /**
         * A Callable wrapper for GetMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetMappingRequestT = Model::GetMappingRequest>
        Model::GetMappingOutcomeCallable GetMappingCallable(const GetMappingRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetMapping, request);
        }

        /**
         * An Async wrapper for GetMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetMappingRequestT = Model::GetMappingRequest>
        void GetMappingAsync(const GetMappingRequestT& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetMapping, request, handler, context);
        }

        /**
         * <p>Retrieves information about a specified partition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionOutcome GetPartition(const Model::GetPartitionRequest& request) const;

        /**
         * A Callable wrapper for GetPartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPartitionRequestT = Model::GetPartitionRequest>
        Model::GetPartitionOutcomeCallable GetPartitionCallable(const GetPartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetPartition, request);
        }

        /**
         * An Async wrapper for GetPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPartitionRequestT = Model::GetPartitionRequest>
        void GetPartitionAsync(const GetPartitionRequestT& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetPartition, request, handler, context);
        }

        /**
         * <p>Retrieves the partition indexes associated with a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitionIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionIndexesOutcome GetPartitionIndexes(const Model::GetPartitionIndexesRequest& request) const;

        /**
         * A Callable wrapper for GetPartitionIndexes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPartitionIndexesRequestT = Model::GetPartitionIndexesRequest>
        Model::GetPartitionIndexesOutcomeCallable GetPartitionIndexesCallable(const GetPartitionIndexesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetPartitionIndexes, request);
        }

        /**
         * An Async wrapper for GetPartitionIndexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPartitionIndexesRequestT = Model::GetPartitionIndexesRequest>
        void GetPartitionIndexesAsync(const GetPartitionIndexesRequestT& request, const GetPartitionIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetPartitionIndexes, request, handler, context);
        }

        /**
         * <p>Retrieves information about the partitions in a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionsOutcome GetPartitions(const Model::GetPartitionsRequest& request) const;

        /**
         * A Callable wrapper for GetPartitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPartitionsRequestT = Model::GetPartitionsRequest>
        Model::GetPartitionsOutcomeCallable GetPartitionsCallable(const GetPartitionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetPartitions, request);
        }

        /**
         * An Async wrapper for GetPartitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPartitionsRequestT = Model::GetPartitionsRequest>
        void GetPartitionsAsync(const GetPartitionsRequestT& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetPartitions, request, handler, context);
        }

        /**
         * <p>Gets code to perform a specified mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPlan">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPlanOutcome GetPlan(const Model::GetPlanRequest& request) const;

        /**
         * A Callable wrapper for GetPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlanRequestT = Model::GetPlanRequest>
        Model::GetPlanOutcomeCallable GetPlanCallable(const GetPlanRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetPlan, request);
        }

        /**
         * An Async wrapper for GetPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlanRequestT = Model::GetPlanRequest>
        void GetPlanAsync(const GetPlanRequestT& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetPlan, request, handler, context);
        }

        /**
         * <p>Describes the specified registry in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryOutcome GetRegistry(const Model::GetRegistryRequest& request) const;

        /**
         * A Callable wrapper for GetRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegistryRequestT = Model::GetRegistryRequest>
        Model::GetRegistryOutcomeCallable GetRegistryCallable(const GetRegistryRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetRegistry, request);
        }

        /**
         * An Async wrapper for GetRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegistryRequestT = Model::GetRegistryRequest>
        void GetRegistryAsync(const GetRegistryRequestT& request, const GetRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetRegistry, request, handler, context);
        }

        /**
         * <p>Retrieves the resource policies set on individual resources by Resource
         * Access Manager during cross-account permission grants. Also retrieves the Data
         * Catalog resource policy.</p> <p>If you enabled metadata encryption in Data
         * Catalog settings, and you do not have permission on the KMS key, the operation
         * can't return the Data Catalog resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const GetResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetResourcePolicies, request);
        }

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        void GetResourcePoliciesAsync(const GetResourcePoliciesRequestT& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetResourcePolicies, request, handler, context);
        }

        /**
         * <p>Retrieves a specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Describes the specified schema in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchema">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSchemaOutcome GetSchema(const Model::GetSchemaRequest& request) const;

        /**
         * A Callable wrapper for GetSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaRequestT = Model::GetSchemaRequest>
        Model::GetSchemaOutcomeCallable GetSchemaCallable(const GetSchemaRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSchema, request);
        }

        /**
         * An Async wrapper for GetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaRequestT = Model::GetSchemaRequest>
        void GetSchemaAsync(const GetSchemaRequestT& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSchema, request, handler, context);
        }

        /**
         * <p>Retrieves a schema by the <code>SchemaDefinition</code>. The schema
         * definition is sent to the Schema Registry, canonicalized, and hashed. If the
         * hash is matched within the scope of the <code>SchemaName</code> or ARN (or the
         * default registry, if none is supplied), that schema’s metadata is returned.
         * Otherwise, a 404 or NotFound error is returned. Schema versions in
         * <code>Deleted</code> statuses will not be included in the results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaByDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaByDefinitionOutcome GetSchemaByDefinition(const Model::GetSchemaByDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaByDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaByDefinitionRequestT = Model::GetSchemaByDefinitionRequest>
        Model::GetSchemaByDefinitionOutcomeCallable GetSchemaByDefinitionCallable(const GetSchemaByDefinitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSchemaByDefinition, request);
        }

        /**
         * An Async wrapper for GetSchemaByDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaByDefinitionRequestT = Model::GetSchemaByDefinitionRequest>
        void GetSchemaByDefinitionAsync(const GetSchemaByDefinitionRequestT& request, const GetSchemaByDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSchemaByDefinition, request, handler, context);
        }

        /**
         * <p>Get the specified schema by its unique ID assigned when a version of the
         * schema is created or registered. Schema versions in Deleted status will not be
         * included in the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaVersionOutcome GetSchemaVersion(const Model::GetSchemaVersionRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaVersionRequestT = Model::GetSchemaVersionRequest>
        Model::GetSchemaVersionOutcomeCallable GetSchemaVersionCallable(const GetSchemaVersionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSchemaVersion, request);
        }

        /**
         * An Async wrapper for GetSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaVersionRequestT = Model::GetSchemaVersionRequest>
        void GetSchemaVersionAsync(const GetSchemaVersionRequestT& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSchemaVersion, request, handler, context);
        }

        /**
         * <p>Fetches the schema version difference in the specified difference type
         * between two stored schema versions in the Schema Registry.</p> <p>This API
         * allows you to compare two schema versions between two schema definitions under
         * the same schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersionsDiff">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaVersionsDiffOutcome GetSchemaVersionsDiff(const Model::GetSchemaVersionsDiffRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaVersionsDiff that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaVersionsDiffRequestT = Model::GetSchemaVersionsDiffRequest>
        Model::GetSchemaVersionsDiffOutcomeCallable GetSchemaVersionsDiffCallable(const GetSchemaVersionsDiffRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSchemaVersionsDiff, request);
        }

        /**
         * An Async wrapper for GetSchemaVersionsDiff that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaVersionsDiffRequestT = Model::GetSchemaVersionsDiffRequest>
        void GetSchemaVersionsDiffAsync(const GetSchemaVersionsDiffRequestT& request, const GetSchemaVersionsDiffResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSchemaVersionsDiff, request, handler, context);
        }

        /**
         * <p>Retrieves a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationOutcome GetSecurityConfiguration(const Model::GetSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSecurityConfigurationRequestT = Model::GetSecurityConfigurationRequest>
        Model::GetSecurityConfigurationOutcomeCallable GetSecurityConfigurationCallable(const GetSecurityConfigurationRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSecurityConfiguration, request);
        }

        /**
         * An Async wrapper for GetSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSecurityConfigurationRequestT = Model::GetSecurityConfigurationRequest>
        void GetSecurityConfigurationAsync(const GetSecurityConfigurationRequestT& request, const GetSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSecurityConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all security configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationsOutcome GetSecurityConfigurations(const Model::GetSecurityConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSecurityConfigurationsRequestT = Model::GetSecurityConfigurationsRequest>
        Model::GetSecurityConfigurationsOutcomeCallable GetSecurityConfigurationsCallable(const GetSecurityConfigurationsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSecurityConfigurations, request);
        }

        /**
         * An Async wrapper for GetSecurityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSecurityConfigurationsRequestT = Model::GetSecurityConfigurationsRequest>
        void GetSecurityConfigurationsAsync(const GetSecurityConfigurationsRequestT& request, const GetSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSecurityConfigurations, request, handler, context);
        }

        /**
         * <p>Retrieves the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSession">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetSession, request, handler, context);
        }

        /**
         * <p>Retrieves the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementOutcome GetStatement(const Model::GetStatementRequest& request) const;

        /**
         * A Callable wrapper for GetStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStatementRequestT = Model::GetStatementRequest>
        Model::GetStatementOutcomeCallable GetStatementCallable(const GetStatementRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetStatement, request);
        }

        /**
         * An Async wrapper for GetStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStatementRequestT = Model::GetStatementRequest>
        void GetStatementAsync(const GetStatementRequestT& request, const GetStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetStatement, request, handler, context);
        }

        /**
         * <p>Retrieves the <code>Table</code> definition in a Data Catalog for a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTable">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTableOutcome GetTable(const Model::GetTableRequest& request) const;

        /**
         * A Callable wrapper for GetTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        Model::GetTableOutcomeCallable GetTableCallable(const GetTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTable, request);
        }

        /**
         * An Async wrapper for GetTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableRequestT = Model::GetTableRequest>
        void GetTableAsync(const GetTableRequestT& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTable, request, handler, context);
        }

        /**
         * <p>Returns the configuration of all optimizers associated with a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableOptimizerOutcome GetTableOptimizer(const Model::GetTableOptimizerRequest& request) const;

        /**
         * A Callable wrapper for GetTableOptimizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableOptimizerRequestT = Model::GetTableOptimizerRequest>
        Model::GetTableOptimizerOutcomeCallable GetTableOptimizerCallable(const GetTableOptimizerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTableOptimizer, request);
        }

        /**
         * An Async wrapper for GetTableOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableOptimizerRequestT = Model::GetTableOptimizerRequest>
        void GetTableOptimizerAsync(const GetTableOptimizerRequestT& request, const GetTableOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTableOptimizer, request, handler, context);
        }

        /**
         * <p>Retrieves a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionOutcome GetTableVersion(const Model::GetTableVersionRequest& request) const;

        /**
         * A Callable wrapper for GetTableVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableVersionRequestT = Model::GetTableVersionRequest>
        Model::GetTableVersionOutcomeCallable GetTableVersionCallable(const GetTableVersionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTableVersion, request);
        }

        /**
         * An Async wrapper for GetTableVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableVersionRequestT = Model::GetTableVersionRequest>
        void GetTableVersionAsync(const GetTableVersionRequestT& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTableVersion, request, handler, context);
        }

        /**
         * <p>Retrieves a list of strings that identify available versions of a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionsOutcome GetTableVersions(const Model::GetTableVersionsRequest& request) const;

        /**
         * A Callable wrapper for GetTableVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTableVersionsRequestT = Model::GetTableVersionsRequest>
        Model::GetTableVersionsOutcomeCallable GetTableVersionsCallable(const GetTableVersionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTableVersions, request);
        }

        /**
         * An Async wrapper for GetTableVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTableVersionsRequestT = Model::GetTableVersionsRequest>
        void GetTableVersionsAsync(const GetTableVersionsRequestT& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTableVersions, request, handler, context);
        }

        /**
         * <p>Retrieves the definitions of some or all of the tables in a given
         * <code>Database</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTables">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTablesOutcome GetTables(const Model::GetTablesRequest& request) const;

        /**
         * A Callable wrapper for GetTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTablesRequestT = Model::GetTablesRequest>
        Model::GetTablesOutcomeCallable GetTablesCallable(const GetTablesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTables, request);
        }

        /**
         * An Async wrapper for GetTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTablesRequestT = Model::GetTablesRequest>
        void GetTablesAsync(const GetTablesRequestT& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTables, request, handler, context);
        }

        /**
         * <p>Retrieves a list of tags associated with a resource.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        Model::GetTagsOutcomeCallable GetTagsCallable(const GetTagsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTags, request);
        }

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTagsRequestT = Model::GetTagsRequest>
        void GetTagsAsync(const GetTagsRequestT& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTags, request, handler, context);
        }

        /**
         * <p>Retrieves the definition of a trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTrigger">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTriggerOutcome GetTrigger(const Model::GetTriggerRequest& request) const;

        /**
         * A Callable wrapper for GetTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTriggerRequestT = Model::GetTriggerRequest>
        Model::GetTriggerOutcomeCallable GetTriggerCallable(const GetTriggerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTrigger, request);
        }

        /**
         * An Async wrapper for GetTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTriggerRequestT = Model::GetTriggerRequest>
        void GetTriggerAsync(const GetTriggerRequestT& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTrigger, request, handler, context);
        }

        /**
         * <p>Gets all the triggers associated with a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTriggersOutcome GetTriggers(const Model::GetTriggersRequest& request) const;

        /**
         * A Callable wrapper for GetTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTriggersRequestT = Model::GetTriggersRequest>
        Model::GetTriggersOutcomeCallable GetTriggersCallable(const GetTriggersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetTriggers, request);
        }

        /**
         * An Async wrapper for GetTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTriggersRequestT = Model::GetTriggersRequest>
        void GetTriggersAsync(const GetTriggersRequestT& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetTriggers, request, handler, context);
        }

        /**
         * <p>Retrieves partition metadata from the Data Catalog that contains unfiltered
         * metadata.</p> <p>For IAM authorization, the public IAM action associated with
         * this API is <code>glue:GetPartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUnfilteredPartitionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUnfilteredPartitionMetadataOutcome GetUnfilteredPartitionMetadata(const Model::GetUnfilteredPartitionMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetUnfilteredPartitionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUnfilteredPartitionMetadataRequestT = Model::GetUnfilteredPartitionMetadataRequest>
        Model::GetUnfilteredPartitionMetadataOutcomeCallable GetUnfilteredPartitionMetadataCallable(const GetUnfilteredPartitionMetadataRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetUnfilteredPartitionMetadata, request);
        }

        /**
         * An Async wrapper for GetUnfilteredPartitionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUnfilteredPartitionMetadataRequestT = Model::GetUnfilteredPartitionMetadataRequest>
        void GetUnfilteredPartitionMetadataAsync(const GetUnfilteredPartitionMetadataRequestT& request, const GetUnfilteredPartitionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetUnfilteredPartitionMetadata, request, handler, context);
        }

        /**
         * <p>Retrieves partition metadata from the Data Catalog that contains unfiltered
         * metadata.</p> <p>For IAM authorization, the public IAM action associated with
         * this API is <code>glue:GetPartitions</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUnfilteredPartitionsMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUnfilteredPartitionsMetadataOutcome GetUnfilteredPartitionsMetadata(const Model::GetUnfilteredPartitionsMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetUnfilteredPartitionsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUnfilteredPartitionsMetadataRequestT = Model::GetUnfilteredPartitionsMetadataRequest>
        Model::GetUnfilteredPartitionsMetadataOutcomeCallable GetUnfilteredPartitionsMetadataCallable(const GetUnfilteredPartitionsMetadataRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetUnfilteredPartitionsMetadata, request);
        }

        /**
         * An Async wrapper for GetUnfilteredPartitionsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUnfilteredPartitionsMetadataRequestT = Model::GetUnfilteredPartitionsMetadataRequest>
        void GetUnfilteredPartitionsMetadataAsync(const GetUnfilteredPartitionsMetadataRequestT& request, const GetUnfilteredPartitionsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetUnfilteredPartitionsMetadata, request, handler, context);
        }

        /**
         * <p>Retrieves table metadata from the Data Catalog that contains unfiltered
         * metadata.</p> <p>For IAM authorization, the public IAM action associated with
         * this API is <code>glue:GetTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUnfilteredTableMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUnfilteredTableMetadataOutcome GetUnfilteredTableMetadata(const Model::GetUnfilteredTableMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetUnfilteredTableMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUnfilteredTableMetadataRequestT = Model::GetUnfilteredTableMetadataRequest>
        Model::GetUnfilteredTableMetadataOutcomeCallable GetUnfilteredTableMetadataCallable(const GetUnfilteredTableMetadataRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetUnfilteredTableMetadata, request);
        }

        /**
         * An Async wrapper for GetUnfilteredTableMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUnfilteredTableMetadataRequestT = Model::GetUnfilteredTableMetadataRequest>
        void GetUnfilteredTableMetadataAsync(const GetUnfilteredTableMetadataRequestT& request, const GetUnfilteredTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetUnfilteredTableMetadata, request, handler, context);
        }

        /**
         * <p>Retrieves a specified function definition from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDefinedFunctionOutcome GetUserDefinedFunction(const Model::GetUserDefinedFunctionRequest& request) const;

        /**
         * A Callable wrapper for GetUserDefinedFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserDefinedFunctionRequestT = Model::GetUserDefinedFunctionRequest>
        Model::GetUserDefinedFunctionOutcomeCallable GetUserDefinedFunctionCallable(const GetUserDefinedFunctionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetUserDefinedFunction, request);
        }

        /**
         * An Async wrapper for GetUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserDefinedFunctionRequestT = Model::GetUserDefinedFunctionRequest>
        void GetUserDefinedFunctionAsync(const GetUserDefinedFunctionRequestT& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetUserDefinedFunction, request, handler, context);
        }

        /**
         * <p>Retrieves multiple function definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDefinedFunctionsOutcome GetUserDefinedFunctions(const Model::GetUserDefinedFunctionsRequest& request) const;

        /**
         * A Callable wrapper for GetUserDefinedFunctions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUserDefinedFunctionsRequestT = Model::GetUserDefinedFunctionsRequest>
        Model::GetUserDefinedFunctionsOutcomeCallable GetUserDefinedFunctionsCallable(const GetUserDefinedFunctionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetUserDefinedFunctions, request);
        }

        /**
         * An Async wrapper for GetUserDefinedFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUserDefinedFunctionsRequestT = Model::GetUserDefinedFunctionsRequest>
        void GetUserDefinedFunctionsAsync(const GetUserDefinedFunctionsRequestT& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetUserDefinedFunctions, request, handler, context);
        }

        /**
         * <p>Retrieves resource metadata for a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        Model::GetWorkflowOutcomeCallable GetWorkflowCallable(const GetWorkflowRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetWorkflow, request);
        }

        /**
         * An Async wrapper for GetWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRequestT = Model::GetWorkflowRequest>
        void GetWorkflowAsync(const GetWorkflowRequestT& request, const GetWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetWorkflow, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for a given workflow run. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
        Model::GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const GetWorkflowRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetWorkflowRun, request);
        }

        /**
         * An Async wrapper for GetWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRunRequestT = Model::GetWorkflowRunRequest>
        void GetWorkflowRunAsync(const GetWorkflowRunRequestT& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetWorkflowRun, request, handler, context);
        }

        /**
         * <p>Retrieves the workflow run properties which were set during the
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRunProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunPropertiesOutcome GetWorkflowRunProperties(const Model::GetWorkflowRunPropertiesRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowRunProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRunPropertiesRequestT = Model::GetWorkflowRunPropertiesRequest>
        Model::GetWorkflowRunPropertiesOutcomeCallable GetWorkflowRunPropertiesCallable(const GetWorkflowRunPropertiesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetWorkflowRunProperties, request);
        }

        /**
         * An Async wrapper for GetWorkflowRunProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRunPropertiesRequestT = Model::GetWorkflowRunPropertiesRequest>
        void GetWorkflowRunPropertiesAsync(const GetWorkflowRunPropertiesRequestT& request, const GetWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetWorkflowRunProperties, request, handler, context);
        }

        /**
         * <p>Retrieves metadata for all runs of a given workflow.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunsOutcome GetWorkflowRuns(const Model::GetWorkflowRunsRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowRunsRequestT = Model::GetWorkflowRunsRequest>
        Model::GetWorkflowRunsOutcomeCallable GetWorkflowRunsCallable(const GetWorkflowRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::GetWorkflowRuns, request);
        }

        /**
         * An Async wrapper for GetWorkflowRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowRunsRequestT = Model::GetWorkflowRunsRequest>
        void GetWorkflowRunsAsync(const GetWorkflowRunsRequestT& request, const GetWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::GetWorkflowRuns, request, handler, context);
        }

        /**
         * <p>Imports an existing Amazon Athena Data Catalog to Glue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ImportCatalogToGlue">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCatalogToGlueOutcome ImportCatalogToGlue(const Model::ImportCatalogToGlueRequest& request) const;

        /**
         * A Callable wrapper for ImportCatalogToGlue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportCatalogToGlueRequestT = Model::ImportCatalogToGlueRequest>
        Model::ImportCatalogToGlueOutcomeCallable ImportCatalogToGlueCallable(const ImportCatalogToGlueRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ImportCatalogToGlue, request);
        }

        /**
         * An Async wrapper for ImportCatalogToGlue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportCatalogToGlueRequestT = Model::ImportCatalogToGlueRequest>
        void ImportCatalogToGlueAsync(const ImportCatalogToGlueRequestT& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ImportCatalogToGlue, request, handler, context);
        }

        /**
         * <p>Lists all the blueprint names in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBlueprintsOutcome ListBlueprints(const Model::ListBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for ListBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBlueprintsRequestT = Model::ListBlueprintsRequest>
        Model::ListBlueprintsOutcomeCallable ListBlueprintsCallable(const ListBlueprintsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListBlueprints, request);
        }

        /**
         * An Async wrapper for ListBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBlueprintsRequestT = Model::ListBlueprintsRequest>
        void ListBlueprintsAsync(const ListBlueprintsRequestT& request, const ListBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListBlueprints, request, handler, context);
        }

        /**
         * <p>List all task runs for a particular account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListColumnStatisticsTaskRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListColumnStatisticsTaskRunsOutcome ListColumnStatisticsTaskRuns(const Model::ListColumnStatisticsTaskRunsRequest& request) const;

        /**
         * A Callable wrapper for ListColumnStatisticsTaskRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListColumnStatisticsTaskRunsRequestT = Model::ListColumnStatisticsTaskRunsRequest>
        Model::ListColumnStatisticsTaskRunsOutcomeCallable ListColumnStatisticsTaskRunsCallable(const ListColumnStatisticsTaskRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListColumnStatisticsTaskRuns, request);
        }

        /**
         * An Async wrapper for ListColumnStatisticsTaskRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListColumnStatisticsTaskRunsRequestT = Model::ListColumnStatisticsTaskRunsRequest>
        void ListColumnStatisticsTaskRunsAsync(const ListColumnStatisticsTaskRunsRequestT& request, const ListColumnStatisticsTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListColumnStatisticsTaskRuns, request, handler, context);
        }

        /**
         * <p>Retrieves the names of all crawler resources in this Amazon Web Services
         * account, or the resources with the specified tag. This operation allows you to
         * see which resources are available in your account, and their names.</p> <p>This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter on the response so that tagged resources can be retrieved as a group. If
         * you choose to use tags filtering, only resources with the tag are
         * retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCrawlersOutcome ListCrawlers(const Model::ListCrawlersRequest& request) const;

        /**
         * A Callable wrapper for ListCrawlers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrawlersRequestT = Model::ListCrawlersRequest>
        Model::ListCrawlersOutcomeCallable ListCrawlersCallable(const ListCrawlersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListCrawlers, request);
        }

        /**
         * An Async wrapper for ListCrawlers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrawlersRequestT = Model::ListCrawlersRequest>
        void ListCrawlersAsync(const ListCrawlersRequestT& request, const ListCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListCrawlers, request, handler, context);
        }

        /**
         * <p>Returns all the crawls of a specified crawler. Returns only the crawls that
         * have occurred since the launch date of the crawler history feature, and only
         * retains up to 12 months of crawls. Older crawls will not be returned.</p> <p>You
         * may use this API to:</p> <ul> <li> <p>Retrive all the crawls of a specified
         * crawler.</p> </li> <li> <p>Retrieve all the crawls of a specified crawler within
         * a limited count.</p> </li> <li> <p>Retrieve all the crawls of a specified
         * crawler in a specific time range.</p> </li> <li> <p>Retrieve all the crawls of a
         * specified crawler with a particular state, crawl ID, or DPU hour value.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCrawls">AWS API
         * Reference</a></p>
         */
        virtual Model::ListCrawlsOutcome ListCrawls(const Model::ListCrawlsRequest& request) const;

        /**
         * A Callable wrapper for ListCrawls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCrawlsRequestT = Model::ListCrawlsRequest>
        Model::ListCrawlsOutcomeCallable ListCrawlsCallable(const ListCrawlsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListCrawls, request);
        }

        /**
         * An Async wrapper for ListCrawls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCrawlsRequestT = Model::ListCrawlsRequest>
        void ListCrawlsAsync(const ListCrawlsRequestT& request, const ListCrawlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListCrawls, request, handler, context);
        }

        /**
         * <p>Lists all the custom patterns that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCustomEntityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomEntityTypesOutcome ListCustomEntityTypes(const Model::ListCustomEntityTypesRequest& request) const;

        /**
         * A Callable wrapper for ListCustomEntityTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCustomEntityTypesRequestT = Model::ListCustomEntityTypesRequest>
        Model::ListCustomEntityTypesOutcomeCallable ListCustomEntityTypesCallable(const ListCustomEntityTypesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListCustomEntityTypes, request);
        }

        /**
         * An Async wrapper for ListCustomEntityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomEntityTypesRequestT = Model::ListCustomEntityTypesRequest>
        void ListCustomEntityTypesAsync(const ListCustomEntityTypesRequestT& request, const ListCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListCustomEntityTypes, request, handler, context);
        }

        /**
         * <p>Returns all data quality execution results for your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDataQualityResults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataQualityResultsOutcome ListDataQualityResults(const Model::ListDataQualityResultsRequest& request) const;

        /**
         * A Callable wrapper for ListDataQualityResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataQualityResultsRequestT = Model::ListDataQualityResultsRequest>
        Model::ListDataQualityResultsOutcomeCallable ListDataQualityResultsCallable(const ListDataQualityResultsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListDataQualityResults, request);
        }

        /**
         * An Async wrapper for ListDataQualityResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataQualityResultsRequestT = Model::ListDataQualityResultsRequest>
        void ListDataQualityResultsAsync(const ListDataQualityResultsRequestT& request, const ListDataQualityResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListDataQualityResults, request, handler, context);
        }

        /**
         * <p>Lists the recommendation runs meeting the filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDataQualityRuleRecommendationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataQualityRuleRecommendationRunsOutcome ListDataQualityRuleRecommendationRuns(const Model::ListDataQualityRuleRecommendationRunsRequest& request) const;

        /**
         * A Callable wrapper for ListDataQualityRuleRecommendationRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataQualityRuleRecommendationRunsRequestT = Model::ListDataQualityRuleRecommendationRunsRequest>
        Model::ListDataQualityRuleRecommendationRunsOutcomeCallable ListDataQualityRuleRecommendationRunsCallable(const ListDataQualityRuleRecommendationRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListDataQualityRuleRecommendationRuns, request);
        }

        /**
         * An Async wrapper for ListDataQualityRuleRecommendationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataQualityRuleRecommendationRunsRequestT = Model::ListDataQualityRuleRecommendationRunsRequest>
        void ListDataQualityRuleRecommendationRunsAsync(const ListDataQualityRuleRecommendationRunsRequestT& request, const ListDataQualityRuleRecommendationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListDataQualityRuleRecommendationRuns, request, handler, context);
        }

        /**
         * <p>Lists all the runs meeting the filter criteria, where a ruleset is evaluated
         * against a data source.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDataQualityRulesetEvaluationRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataQualityRulesetEvaluationRunsOutcome ListDataQualityRulesetEvaluationRuns(const Model::ListDataQualityRulesetEvaluationRunsRequest& request) const;

        /**
         * A Callable wrapper for ListDataQualityRulesetEvaluationRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataQualityRulesetEvaluationRunsRequestT = Model::ListDataQualityRulesetEvaluationRunsRequest>
        Model::ListDataQualityRulesetEvaluationRunsOutcomeCallable ListDataQualityRulesetEvaluationRunsCallable(const ListDataQualityRulesetEvaluationRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListDataQualityRulesetEvaluationRuns, request);
        }

        /**
         * An Async wrapper for ListDataQualityRulesetEvaluationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataQualityRulesetEvaluationRunsRequestT = Model::ListDataQualityRulesetEvaluationRunsRequest>
        void ListDataQualityRulesetEvaluationRunsAsync(const ListDataQualityRulesetEvaluationRunsRequestT& request, const ListDataQualityRulesetEvaluationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListDataQualityRulesetEvaluationRuns, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of rulesets for the specified list of Glue
         * tables.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDataQualityRulesets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataQualityRulesetsOutcome ListDataQualityRulesets(const Model::ListDataQualityRulesetsRequest& request) const;

        /**
         * A Callable wrapper for ListDataQualityRulesets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDataQualityRulesetsRequestT = Model::ListDataQualityRulesetsRequest>
        Model::ListDataQualityRulesetsOutcomeCallable ListDataQualityRulesetsCallable(const ListDataQualityRulesetsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListDataQualityRulesets, request);
        }

        /**
         * An Async wrapper for ListDataQualityRulesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDataQualityRulesetsRequestT = Model::ListDataQualityRulesetsRequest>
        void ListDataQualityRulesetsAsync(const ListDataQualityRulesetsRequestT& request, const ListDataQualityRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListDataQualityRulesets, request, handler, context);
        }

        /**
         * <p>Retrieves the names of all <code>DevEndpoint</code> resources in this Amazon
         * Web Services account, or the resources with the specified tag. This operation
         * allows you to see which resources are available in your account, and their
         * names.</p> <p>This operation takes the optional <code>Tags</code> field, which
         * you can use as a filter on the response so that tagged resources can be
         * retrieved as a group. If you choose to use tags filtering, only resources with
         * the tag are retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListDevEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevEndpointsOutcome ListDevEndpoints(const Model::ListDevEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListDevEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevEndpointsRequestT = Model::ListDevEndpointsRequest>
        Model::ListDevEndpointsOutcomeCallable ListDevEndpointsCallable(const ListDevEndpointsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListDevEndpoints, request);
        }

        /**
         * An Async wrapper for ListDevEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevEndpointsRequestT = Model::ListDevEndpointsRequest>
        void ListDevEndpointsAsync(const ListDevEndpointsRequestT& request, const ListDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListDevEndpoints, request, handler, context);
        }

        /**
         * <p>Retrieves the names of all job resources in this Amazon Web Services account,
         * or the resources with the specified tag. This operation allows you to see which
         * resources are available in your account, and their names.</p> <p>This operation
         * takes the optional <code>Tags</code> field, which you can use as a filter on the
         * response so that tagged resources can be retrieved as a group. If you choose to
         * use tags filtering, only resources with the tag are retrieved.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListJobs, request, handler, context);
        }

        /**
         * <p> Retrieves a sortable, filterable list of existing Glue machine learning
         * transforms in this Amazon Web Services account, or the resources with the
         * specified tag. This operation takes the optional <code>Tags</code> field, which
         * you can use as a filter of the responses so that tagged resources can be
         * retrieved as a group. If you choose to use tag filtering, only resources with
         * the tags are retrieved. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListMLTransforms">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMLTransformsOutcome ListMLTransforms(const Model::ListMLTransformsRequest& request) const;

        /**
         * A Callable wrapper for ListMLTransforms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMLTransformsRequestT = Model::ListMLTransformsRequest>
        Model::ListMLTransformsOutcomeCallable ListMLTransformsCallable(const ListMLTransformsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListMLTransforms, request);
        }

        /**
         * An Async wrapper for ListMLTransforms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMLTransformsRequestT = Model::ListMLTransformsRequest>
        void ListMLTransformsAsync(const ListMLTransformsRequestT& request, const ListMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListMLTransforms, request, handler, context);
        }

        /**
         * <p>Returns a list of registries that you have created, with minimal registry
         * information. Registries in the <code>Deleting</code> status will not be included
         * in the results. Empty results will be returned if there are no registries
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;

        /**
         * A Callable wrapper for ListRegistries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRegistriesRequestT = Model::ListRegistriesRequest>
        Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const ListRegistriesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListRegistries, request);
        }

        /**
         * An Async wrapper for ListRegistries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRegistriesRequestT = Model::ListRegistriesRequest>
        void ListRegistriesAsync(const ListRegistriesRequestT& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListRegistries, request, handler, context);
        }

        /**
         * <p>Returns a list of schema versions that you have created, with minimal
         * information. Schema versions in Deleted status will not be included in the
         * results. Empty results will be returned if there are no schema versions
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaVersionsOutcome ListSchemaVersions(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSchemaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemaVersionsRequestT = Model::ListSchemaVersionsRequest>
        Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const ListSchemaVersionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListSchemaVersions, request);
        }

        /**
         * An Async wrapper for ListSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemaVersionsRequestT = Model::ListSchemaVersionsRequest>
        void ListSchemaVersionsAsync(const ListSchemaVersionsRequestT& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListSchemaVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of schemas with minimal details. Schemas in Deleting status
         * will not be included in the results. Empty results will be returned if there are
         * no schemas available.</p> <p>When the <code>RegistryId</code> is not provided,
         * all the schemas across registries will be part of the API
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        Model::ListSchemasOutcomeCallable ListSchemasCallable(const ListSchemasRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListSchemas, request);
        }

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        void ListSchemasAsync(const ListSchemasRequestT& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListSchemas, request, handler, context);
        }

        /**
         * <p>Retrieve a list of sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListSessions, request);
        }

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        void ListSessionsAsync(const ListSessionsRequestT& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListSessions, request, handler, context);
        }

        /**
         * <p>Lists statements for the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;

        /**
         * A Callable wrapper for ListStatements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStatementsRequestT = Model::ListStatementsRequest>
        Model::ListStatementsOutcomeCallable ListStatementsCallable(const ListStatementsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListStatements, request);
        }

        /**
         * An Async wrapper for ListStatements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStatementsRequestT = Model::ListStatementsRequest>
        void ListStatementsAsync(const ListStatementsRequestT& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListStatements, request, handler, context);
        }

        /**
         * <p>Lists the history of previous optimizer runs for a specific
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListTableOptimizerRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTableOptimizerRunsOutcome ListTableOptimizerRuns(const Model::ListTableOptimizerRunsRequest& request) const;

        /**
         * A Callable wrapper for ListTableOptimizerRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTableOptimizerRunsRequestT = Model::ListTableOptimizerRunsRequest>
        Model::ListTableOptimizerRunsOutcomeCallable ListTableOptimizerRunsCallable(const ListTableOptimizerRunsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListTableOptimizerRuns, request);
        }

        /**
         * An Async wrapper for ListTableOptimizerRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTableOptimizerRunsRequestT = Model::ListTableOptimizerRunsRequest>
        void ListTableOptimizerRunsAsync(const ListTableOptimizerRunsRequestT& request, const ListTableOptimizerRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListTableOptimizerRuns, request, handler, context);
        }

        /**
         * <p>Retrieves the names of all trigger resources in this Amazon Web Services
         * account, or the resources with the specified tag. This operation allows you to
         * see which resources are available in your account, and their names.</p> <p>This
         * operation takes the optional <code>Tags</code> field, which you can use as a
         * filter on the response so that tagged resources can be retrieved as a group. If
         * you choose to use tags filtering, only resources with the tag are
         * retrieved.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTriggersOutcome ListTriggers(const Model::ListTriggersRequest& request) const;

        /**
         * A Callable wrapper for ListTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTriggersRequestT = Model::ListTriggersRequest>
        Model::ListTriggersOutcomeCallable ListTriggersCallable(const ListTriggersRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListTriggers, request);
        }

        /**
         * An Async wrapper for ListTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTriggersRequestT = Model::ListTriggersRequest>
        void ListTriggersAsync(const ListTriggersRequestT& request, const ListTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListTriggers, request, handler, context);
        }

        /**
         * <p>Lists names of workflows created in the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflows that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const ListWorkflowsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ListWorkflows, request);
        }

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowsRequestT = Model::ListWorkflowsRequest>
        void ListWorkflowsAsync(const ListWorkflowsRequestT& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ListWorkflows, request, handler, context);
        }

        /**
         * <p>Sets the security configuration for a specified catalog. After the
         * configuration has been set, the specified encryption is applied to every catalog
         * write thereafter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataCatalogEncryptionSettingsOutcome PutDataCatalogEncryptionSettings(const Model::PutDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * A Callable wrapper for PutDataCatalogEncryptionSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDataCatalogEncryptionSettingsRequestT = Model::PutDataCatalogEncryptionSettingsRequest>
        Model::PutDataCatalogEncryptionSettingsOutcomeCallable PutDataCatalogEncryptionSettingsCallable(const PutDataCatalogEncryptionSettingsRequestT& request) const
        {
            return SubmitCallable(&GlueClient::PutDataCatalogEncryptionSettings, request);
        }

        /**
         * An Async wrapper for PutDataCatalogEncryptionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDataCatalogEncryptionSettingsRequestT = Model::PutDataCatalogEncryptionSettingsRequest>
        void PutDataCatalogEncryptionSettingsAsync(const PutDataCatalogEncryptionSettingsRequestT& request, const PutDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::PutDataCatalogEncryptionSettings, request, handler, context);
        }

        /**
         * <p>Sets the Data Catalog resource policy for access control.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&GlueClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Puts the metadata key value pair for a specified schema version ID. A maximum
         * of 10 key value pairs will be allowed per schema version. They can be added over
         * one or more calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutSchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSchemaVersionMetadataOutcome PutSchemaVersionMetadata(const Model::PutSchemaVersionMetadataRequest& request) const;

        /**
         * A Callable wrapper for PutSchemaVersionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSchemaVersionMetadataRequestT = Model::PutSchemaVersionMetadataRequest>
        Model::PutSchemaVersionMetadataOutcomeCallable PutSchemaVersionMetadataCallable(const PutSchemaVersionMetadataRequestT& request) const
        {
            return SubmitCallable(&GlueClient::PutSchemaVersionMetadata, request);
        }

        /**
         * An Async wrapper for PutSchemaVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSchemaVersionMetadataRequestT = Model::PutSchemaVersionMetadataRequest>
        void PutSchemaVersionMetadataAsync(const PutSchemaVersionMetadataRequestT& request, const PutSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::PutSchemaVersionMetadata, request, handler, context);
        }

        /**
         * <p>Puts the specified workflow run properties for the given workflow run. If a
         * property already exists for the specified run, then it overrides the value
         * otherwise adds the property to existing properties.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutWorkflowRunProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::PutWorkflowRunPropertiesOutcome PutWorkflowRunProperties(const Model::PutWorkflowRunPropertiesRequest& request) const;

        /**
         * A Callable wrapper for PutWorkflowRunProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutWorkflowRunPropertiesRequestT = Model::PutWorkflowRunPropertiesRequest>
        Model::PutWorkflowRunPropertiesOutcomeCallable PutWorkflowRunPropertiesCallable(const PutWorkflowRunPropertiesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::PutWorkflowRunProperties, request);
        }

        /**
         * An Async wrapper for PutWorkflowRunProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutWorkflowRunPropertiesRequestT = Model::PutWorkflowRunPropertiesRequest>
        void PutWorkflowRunPropertiesAsync(const PutWorkflowRunPropertiesRequestT& request, const PutWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::PutWorkflowRunProperties, request, handler, context);
        }

        /**
         * <p>Queries for the schema version metadata information. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/QuerySchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::QuerySchemaVersionMetadataOutcome QuerySchemaVersionMetadata(const Model::QuerySchemaVersionMetadataRequest& request) const;

        /**
         * A Callable wrapper for QuerySchemaVersionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename QuerySchemaVersionMetadataRequestT = Model::QuerySchemaVersionMetadataRequest>
        Model::QuerySchemaVersionMetadataOutcomeCallable QuerySchemaVersionMetadataCallable(const QuerySchemaVersionMetadataRequestT& request) const
        {
            return SubmitCallable(&GlueClient::QuerySchemaVersionMetadata, request);
        }

        /**
         * An Async wrapper for QuerySchemaVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename QuerySchemaVersionMetadataRequestT = Model::QuerySchemaVersionMetadataRequest>
        void QuerySchemaVersionMetadataAsync(const QuerySchemaVersionMetadataRequestT& request, const QuerySchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::QuerySchemaVersionMetadata, request, handler, context);
        }

        /**
         * <p>Adds a new version to the existing schema. Returns an error if new version of
         * schema does not meet the compatibility requirements of the schema set. This API
         * will not create a new schema set and will return a 404 error if the schema set
         * is not already present in the Schema Registry.</p> <p>If this is the first
         * schema definition to be registered in the Schema Registry, this API will store
         * the schema version and return immediately. Otherwise, this call has the
         * potential to run longer than other operations due to compatibility modes. You
         * can call the <code>GetSchemaVersion</code> API with the
         * <code>SchemaVersionId</code> to check compatibility modes.</p> <p>If the same
         * schema definition is already stored in Schema Registry as a version, the schema
         * ID of the existing schema is returned to the caller.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RegisterSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterSchemaVersionOutcome RegisterSchemaVersion(const Model::RegisterSchemaVersionRequest& request) const;

        /**
         * A Callable wrapper for RegisterSchemaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterSchemaVersionRequestT = Model::RegisterSchemaVersionRequest>
        Model::RegisterSchemaVersionOutcomeCallable RegisterSchemaVersionCallable(const RegisterSchemaVersionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::RegisterSchemaVersion, request);
        }

        /**
         * An Async wrapper for RegisterSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterSchemaVersionRequestT = Model::RegisterSchemaVersionRequest>
        void RegisterSchemaVersionAsync(const RegisterSchemaVersionRequestT& request, const RegisterSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::RegisterSchemaVersion, request, handler, context);
        }

        /**
         * <p>Removes a key value pair from the schema version metadata for the specified
         * schema version ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RemoveSchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSchemaVersionMetadataOutcome RemoveSchemaVersionMetadata(const Model::RemoveSchemaVersionMetadataRequest& request) const;

        /**
         * A Callable wrapper for RemoveSchemaVersionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveSchemaVersionMetadataRequestT = Model::RemoveSchemaVersionMetadataRequest>
        Model::RemoveSchemaVersionMetadataOutcomeCallable RemoveSchemaVersionMetadataCallable(const RemoveSchemaVersionMetadataRequestT& request) const
        {
            return SubmitCallable(&GlueClient::RemoveSchemaVersionMetadata, request);
        }

        /**
         * An Async wrapper for RemoveSchemaVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveSchemaVersionMetadataRequestT = Model::RemoveSchemaVersionMetadataRequest>
        void RemoveSchemaVersionMetadataAsync(const RemoveSchemaVersionMetadataRequestT& request, const RemoveSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::RemoveSchemaVersionMetadata, request, handler, context);
        }

        /**
         * <p>Resets a bookmark entry.</p> <p>For more information about enabling and using
         * job bookmarks, see:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-continuations.html">Tracking
         * processed data using job bookmarks</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-programming-etl-glue-arguments.html">Job
         * parameters used by Glue</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-jobs-job.html#aws-glue-api-jobs-job-Job">Job
         * structure</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResetJobBookmark">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetJobBookmarkOutcome ResetJobBookmark(const Model::ResetJobBookmarkRequest& request) const;

        /**
         * A Callable wrapper for ResetJobBookmark that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetJobBookmarkRequestT = Model::ResetJobBookmarkRequest>
        Model::ResetJobBookmarkOutcomeCallable ResetJobBookmarkCallable(const ResetJobBookmarkRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ResetJobBookmark, request);
        }

        /**
         * An Async wrapper for ResetJobBookmark that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetJobBookmarkRequestT = Model::ResetJobBookmarkRequest>
        void ResetJobBookmarkAsync(const ResetJobBookmarkRequestT& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ResetJobBookmark, request, handler, context);
        }

        /**
         * <p>Restarts selected nodes of a previous partially completed workflow run and
         * resumes the workflow run. The selected nodes and all nodes that are downstream
         * from the selected nodes are run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResumeWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeWorkflowRunOutcome ResumeWorkflowRun(const Model::ResumeWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for ResumeWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResumeWorkflowRunRequestT = Model::ResumeWorkflowRunRequest>
        Model::ResumeWorkflowRunOutcomeCallable ResumeWorkflowRunCallable(const ResumeWorkflowRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::ResumeWorkflowRun, request);
        }

        /**
         * An Async wrapper for ResumeWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResumeWorkflowRunRequestT = Model::ResumeWorkflowRunRequest>
        void ResumeWorkflowRunAsync(const ResumeWorkflowRunRequestT& request, const ResumeWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::ResumeWorkflowRun, request, handler, context);
        }

        /**
         * <p>Executes the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RunStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::RunStatementOutcome RunStatement(const Model::RunStatementRequest& request) const;

        /**
         * A Callable wrapper for RunStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RunStatementRequestT = Model::RunStatementRequest>
        Model::RunStatementOutcomeCallable RunStatementCallable(const RunStatementRequestT& request) const
        {
            return SubmitCallable(&GlueClient::RunStatement, request);
        }

        /**
         * An Async wrapper for RunStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RunStatementRequestT = Model::RunStatementRequest>
        void RunStatementAsync(const RunStatementRequestT& request, const RunStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::RunStatement, request, handler, context);
        }

        /**
         * <p>Searches a set of tables based on properties in the table metadata as well as
         * on the parent database. You can search against text or filter conditions. </p>
         * <p>You can only get tables that you have access to based on the security
         * policies defined in Lake Formation. You need at least a read-only access to the
         * table for it to be returned. If you do not have access to all the columns in the
         * table, these columns will not be searched against when returning the list of
         * tables back to you. If you have access to the columns but not the data in the
         * columns, those columns and the associated metadata for those columns will be
         * included in the search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchTables">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchTablesOutcome SearchTables(const Model::SearchTablesRequest& request) const;

        /**
         * A Callable wrapper for SearchTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchTablesRequestT = Model::SearchTablesRequest>
        Model::SearchTablesOutcomeCallable SearchTablesCallable(const SearchTablesRequestT& request) const
        {
            return SubmitCallable(&GlueClient::SearchTables, request);
        }

        /**
         * An Async wrapper for SearchTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchTablesRequestT = Model::SearchTablesRequest>
        void SearchTablesAsync(const SearchTablesRequestT& request, const SearchTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::SearchTables, request, handler, context);
        }

        /**
         * <p>Starts a new run of the specified blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartBlueprintRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBlueprintRunOutcome StartBlueprintRun(const Model::StartBlueprintRunRequest& request) const;

        /**
         * A Callable wrapper for StartBlueprintRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartBlueprintRunRequestT = Model::StartBlueprintRunRequest>
        Model::StartBlueprintRunOutcomeCallable StartBlueprintRunCallable(const StartBlueprintRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartBlueprintRun, request);
        }

        /**
         * An Async wrapper for StartBlueprintRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartBlueprintRunRequestT = Model::StartBlueprintRunRequest>
        void StartBlueprintRunAsync(const StartBlueprintRunRequestT& request, const StartBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartBlueprintRun, request, handler, context);
        }

        /**
         * <p>Starts a column statistics task run, for a specified table and
         * columns.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartColumnStatisticsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartColumnStatisticsTaskRunOutcome StartColumnStatisticsTaskRun(const Model::StartColumnStatisticsTaskRunRequest& request) const;

        /**
         * A Callable wrapper for StartColumnStatisticsTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartColumnStatisticsTaskRunRequestT = Model::StartColumnStatisticsTaskRunRequest>
        Model::StartColumnStatisticsTaskRunOutcomeCallable StartColumnStatisticsTaskRunCallable(const StartColumnStatisticsTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartColumnStatisticsTaskRun, request);
        }

        /**
         * An Async wrapper for StartColumnStatisticsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartColumnStatisticsTaskRunRequestT = Model::StartColumnStatisticsTaskRunRequest>
        void StartColumnStatisticsTaskRunAsync(const StartColumnStatisticsTaskRunRequestT& request, const StartColumnStatisticsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartColumnStatisticsTaskRun, request, handler, context);
        }

        /**
         * <p>Starts a crawl using the specified crawler, regardless of what is scheduled.
         * If the crawler is already running, returns a <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/aws-glue-api-exceptions.html#aws-glue-api-exceptions-CrawlerRunningException">CrawlerRunningException</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCrawlerOutcome StartCrawler(const Model::StartCrawlerRequest& request) const;

        /**
         * A Callable wrapper for StartCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCrawlerRequestT = Model::StartCrawlerRequest>
        Model::StartCrawlerOutcomeCallable StartCrawlerCallable(const StartCrawlerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartCrawler, request);
        }

        /**
         * An Async wrapper for StartCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCrawlerRequestT = Model::StartCrawlerRequest>
        void StartCrawlerAsync(const StartCrawlerRequestT& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartCrawler, request, handler, context);
        }

        /**
         * <p>Changes the schedule state of the specified crawler to
         * <code>SCHEDULED</code>, unless the crawler is already running or the schedule
         * state is already <code>SCHEDULED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCrawlerScheduleOutcome StartCrawlerSchedule(const Model::StartCrawlerScheduleRequest& request) const;

        /**
         * A Callable wrapper for StartCrawlerSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCrawlerScheduleRequestT = Model::StartCrawlerScheduleRequest>
        Model::StartCrawlerScheduleOutcomeCallable StartCrawlerScheduleCallable(const StartCrawlerScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartCrawlerSchedule, request);
        }

        /**
         * An Async wrapper for StartCrawlerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCrawlerScheduleRequestT = Model::StartCrawlerScheduleRequest>
        void StartCrawlerScheduleAsync(const StartCrawlerScheduleRequestT& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartCrawlerSchedule, request, handler, context);
        }

        /**
         * <p>Starts a recommendation run that is used to generate rules when you don't
         * know what rules to write. Glue Data Quality analyzes the data and comes up with
         * recommendations for a potential ruleset. You can then triage the ruleset and
         * modify the generated ruleset to your liking.</p> <p>Recommendation runs are
         * automatically deleted after 90 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartDataQualityRuleRecommendationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataQualityRuleRecommendationRunOutcome StartDataQualityRuleRecommendationRun(const Model::StartDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * A Callable wrapper for StartDataQualityRuleRecommendationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataQualityRuleRecommendationRunRequestT = Model::StartDataQualityRuleRecommendationRunRequest>
        Model::StartDataQualityRuleRecommendationRunOutcomeCallable StartDataQualityRuleRecommendationRunCallable(const StartDataQualityRuleRecommendationRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartDataQualityRuleRecommendationRun, request);
        }

        /**
         * An Async wrapper for StartDataQualityRuleRecommendationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataQualityRuleRecommendationRunRequestT = Model::StartDataQualityRuleRecommendationRunRequest>
        void StartDataQualityRuleRecommendationRunAsync(const StartDataQualityRuleRecommendationRunRequestT& request, const StartDataQualityRuleRecommendationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartDataQualityRuleRecommendationRun, request, handler, context);
        }

        /**
         * <p>Once you have a ruleset definition (either recommended or your own), you call
         * this operation to evaluate the ruleset against a data source (Glue table). The
         * evaluation computes results which you can retrieve with the
         * <code>GetDataQualityResult</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartDataQualityRulesetEvaluationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataQualityRulesetEvaluationRunOutcome StartDataQualityRulesetEvaluationRun(const Model::StartDataQualityRulesetEvaluationRunRequest& request) const;

        /**
         * A Callable wrapper for StartDataQualityRulesetEvaluationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDataQualityRulesetEvaluationRunRequestT = Model::StartDataQualityRulesetEvaluationRunRequest>
        Model::StartDataQualityRulesetEvaluationRunOutcomeCallable StartDataQualityRulesetEvaluationRunCallable(const StartDataQualityRulesetEvaluationRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartDataQualityRulesetEvaluationRun, request);
        }

        /**
         * An Async wrapper for StartDataQualityRulesetEvaluationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDataQualityRulesetEvaluationRunRequestT = Model::StartDataQualityRulesetEvaluationRunRequest>
        void StartDataQualityRulesetEvaluationRunAsync(const StartDataQualityRulesetEvaluationRunRequestT& request, const StartDataQualityRulesetEvaluationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartDataQualityRulesetEvaluationRun, request, handler, context);
        }

        /**
         * <p>Begins an asynchronous task to export all labeled data for a particular
         * transform. This task is the only label-related API call that is not part of the
         * typical active learning workflow. You typically use
         * <code>StartExportLabelsTaskRun</code> when you want to work with all of your
         * existing labels at the same time, such as when you want to remove or change
         * labels that were previously submitted as truth. This API operation accepts the
         * <code>TransformId</code> whose labels you want to export and an Amazon Simple
         * Storage Service (Amazon S3) path to export the labels to. The operation returns
         * a <code>TaskRunId</code>. You can check on the status of your task run by
         * calling the <code>GetMLTaskRun</code> API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartExportLabelsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExportLabelsTaskRunOutcome StartExportLabelsTaskRun(const Model::StartExportLabelsTaskRunRequest& request) const;

        /**
         * A Callable wrapper for StartExportLabelsTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartExportLabelsTaskRunRequestT = Model::StartExportLabelsTaskRunRequest>
        Model::StartExportLabelsTaskRunOutcomeCallable StartExportLabelsTaskRunCallable(const StartExportLabelsTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartExportLabelsTaskRun, request);
        }

        /**
         * An Async wrapper for StartExportLabelsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartExportLabelsTaskRunRequestT = Model::StartExportLabelsTaskRunRequest>
        void StartExportLabelsTaskRunAsync(const StartExportLabelsTaskRunRequestT& request, const StartExportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartExportLabelsTaskRun, request, handler, context);
        }

        /**
         * <p>Enables you to provide additional labels (examples of truth) to be used to
         * teach the machine learning transform and improve its quality. This API operation
         * is generally used as part of the active learning workflow that starts with the
         * <code>StartMLLabelingSetGenerationTaskRun</code> call and that ultimately
         * results in improving the quality of your machine learning transform. </p>
         * <p>After the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, Glue
         * machine learning will have generated a series of questions for humans to answer.
         * (Answering these questions is often called 'labeling' in the machine learning
         * workflows). In the case of the <code>FindMatches</code> transform, these
         * questions are of the form, “What is the correct way to group these rows together
         * into groups composed entirely of matching records?” After the labeling process
         * is finished, users upload their answers/labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform use the new and improved labels and perform a higher-quality
         * transformation.</p> <p>By default,
         * <code>StartMLLabelingSetGenerationTaskRun</code> continually learns from and
         * combines all labels that you upload unless you set <code>Replace</code> to true.
         * If you set <code>Replace</code> to true, <code>StartImportLabelsTaskRun</code>
         * deletes and forgets all previously uploaded labels and learns only from the
         * exact set that you upload. Replacing labels can be helpful if you realize that
         * you previously uploaded incorrect labels, and you believe that they are having a
         * negative effect on your transform quality.</p> <p>You can check on the status of
         * your task run by calling the <code>GetMLTaskRun</code> operation. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartImportLabelsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportLabelsTaskRunOutcome StartImportLabelsTaskRun(const Model::StartImportLabelsTaskRunRequest& request) const;

        /**
         * A Callable wrapper for StartImportLabelsTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImportLabelsTaskRunRequestT = Model::StartImportLabelsTaskRunRequest>
        Model::StartImportLabelsTaskRunOutcomeCallable StartImportLabelsTaskRunCallable(const StartImportLabelsTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartImportLabelsTaskRun, request);
        }

        /**
         * An Async wrapper for StartImportLabelsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImportLabelsTaskRunRequestT = Model::StartImportLabelsTaskRunRequest>
        void StartImportLabelsTaskRunAsync(const StartImportLabelsTaskRunRequestT& request, const StartImportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartImportLabelsTaskRun, request, handler, context);
        }

        /**
         * <p>Starts a job run using a job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        Model::StartJobRunOutcomeCallable StartJobRunCallable(const StartJobRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartJobRun, request);
        }

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartJobRunRequestT = Model::StartJobRunRequest>
        void StartJobRunAsync(const StartJobRunRequestT& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartJobRun, request, handler, context);
        }

        /**
         * <p>Starts a task to estimate the quality of the transform. </p> <p>When you
         * provide label sets as examples of truth, Glue machine learning uses some of
         * those examples to learn from them. The rest of the labels are used as a test to
         * estimate quality.</p> <p>Returns a unique identifier for the run. You can call
         * <code>GetMLTaskRun</code> to get more information about the stats of the
         * <code>EvaluationTaskRun</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLEvaluationTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLEvaluationTaskRunOutcome StartMLEvaluationTaskRun(const Model::StartMLEvaluationTaskRunRequest& request) const;

        /**
         * A Callable wrapper for StartMLEvaluationTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMLEvaluationTaskRunRequestT = Model::StartMLEvaluationTaskRunRequest>
        Model::StartMLEvaluationTaskRunOutcomeCallable StartMLEvaluationTaskRunCallable(const StartMLEvaluationTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartMLEvaluationTaskRun, request);
        }

        /**
         * An Async wrapper for StartMLEvaluationTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMLEvaluationTaskRunRequestT = Model::StartMLEvaluationTaskRunRequest>
        void StartMLEvaluationTaskRunAsync(const StartMLEvaluationTaskRunRequestT& request, const StartMLEvaluationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartMLEvaluationTaskRun, request, handler, context);
        }

        /**
         * <p>Starts the active learning workflow for your machine learning transform to
         * improve the transform's quality by generating label sets and adding labels.</p>
         * <p>When the <code>StartMLLabelingSetGenerationTaskRun</code> finishes, Glue will
         * have generated a "labeling set" or a set of questions for humans to answer.</p>
         * <p>In the case of the <code>FindMatches</code> transform, these questions are of
         * the form, “What is the correct way to group these rows together into groups
         * composed entirely of matching records?” </p> <p>After the labeling process is
         * finished, you can upload your labels with a call to
         * <code>StartImportLabelsTaskRun</code>. After
         * <code>StartImportLabelsTaskRun</code> finishes, all future runs of the machine
         * learning transform will use the new and improved labels and perform a
         * higher-quality transformation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartMLLabelingSetGenerationTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMLLabelingSetGenerationTaskRunOutcome StartMLLabelingSetGenerationTaskRun(const Model::StartMLLabelingSetGenerationTaskRunRequest& request) const;

        /**
         * A Callable wrapper for StartMLLabelingSetGenerationTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMLLabelingSetGenerationTaskRunRequestT = Model::StartMLLabelingSetGenerationTaskRunRequest>
        Model::StartMLLabelingSetGenerationTaskRunOutcomeCallable StartMLLabelingSetGenerationTaskRunCallable(const StartMLLabelingSetGenerationTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartMLLabelingSetGenerationTaskRun, request);
        }

        /**
         * An Async wrapper for StartMLLabelingSetGenerationTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMLLabelingSetGenerationTaskRunRequestT = Model::StartMLLabelingSetGenerationTaskRunRequest>
        void StartMLLabelingSetGenerationTaskRunAsync(const StartMLLabelingSetGenerationTaskRunRequestT& request, const StartMLLabelingSetGenerationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartMLLabelingSetGenerationTaskRun, request, handler, context);
        }

        /**
         * <p>Starts an existing trigger. See <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
         * Jobs</a> for information about how different types of trigger are
         * started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTriggerOutcome StartTrigger(const Model::StartTriggerRequest& request) const;

        /**
         * A Callable wrapper for StartTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartTriggerRequestT = Model::StartTriggerRequest>
        Model::StartTriggerOutcomeCallable StartTriggerCallable(const StartTriggerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartTrigger, request);
        }

        /**
         * An Async wrapper for StartTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartTriggerRequestT = Model::StartTriggerRequest>
        void StartTriggerAsync(const StartTriggerRequestT& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartTrigger, request, handler, context);
        }

        /**
         * <p>Starts a new run of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowRunOutcome StartWorkflowRun(const Model::StartWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for StartWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWorkflowRunRequestT = Model::StartWorkflowRunRequest>
        Model::StartWorkflowRunOutcomeCallable StartWorkflowRunCallable(const StartWorkflowRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StartWorkflowRun, request);
        }

        /**
         * An Async wrapper for StartWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWorkflowRunRequestT = Model::StartWorkflowRunRequest>
        void StartWorkflowRunAsync(const StartWorkflowRunRequestT& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StartWorkflowRun, request, handler, context);
        }

        /**
         * <p>Stops a task run for the specified table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopColumnStatisticsTaskRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopColumnStatisticsTaskRunOutcome StopColumnStatisticsTaskRun(const Model::StopColumnStatisticsTaskRunRequest& request) const;

        /**
         * A Callable wrapper for StopColumnStatisticsTaskRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopColumnStatisticsTaskRunRequestT = Model::StopColumnStatisticsTaskRunRequest>
        Model::StopColumnStatisticsTaskRunOutcomeCallable StopColumnStatisticsTaskRunCallable(const StopColumnStatisticsTaskRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StopColumnStatisticsTaskRun, request);
        }

        /**
         * An Async wrapper for StopColumnStatisticsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopColumnStatisticsTaskRunRequestT = Model::StopColumnStatisticsTaskRunRequest>
        void StopColumnStatisticsTaskRunAsync(const StopColumnStatisticsTaskRunRequestT& request, const StopColumnStatisticsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StopColumnStatisticsTaskRun, request, handler, context);
        }

        /**
         * <p>If the specified crawler is running, stops the crawl.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCrawlerOutcome StopCrawler(const Model::StopCrawlerRequest& request) const;

        /**
         * A Callable wrapper for StopCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopCrawlerRequestT = Model::StopCrawlerRequest>
        Model::StopCrawlerOutcomeCallable StopCrawlerCallable(const StopCrawlerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StopCrawler, request);
        }

        /**
         * An Async wrapper for StopCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCrawlerRequestT = Model::StopCrawlerRequest>
        void StopCrawlerAsync(const StopCrawlerRequestT& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StopCrawler, request, handler, context);
        }

        /**
         * <p>Sets the schedule state of the specified crawler to
         * <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is already
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCrawlerScheduleOutcome StopCrawlerSchedule(const Model::StopCrawlerScheduleRequest& request) const;

        /**
         * A Callable wrapper for StopCrawlerSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopCrawlerScheduleRequestT = Model::StopCrawlerScheduleRequest>
        Model::StopCrawlerScheduleOutcomeCallable StopCrawlerScheduleCallable(const StopCrawlerScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StopCrawlerSchedule, request);
        }

        /**
         * An Async wrapper for StopCrawlerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopCrawlerScheduleRequestT = Model::StopCrawlerScheduleRequest>
        void StopCrawlerScheduleAsync(const StopCrawlerScheduleRequestT& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StopCrawlerSchedule, request, handler, context);
        }

        /**
         * <p>Stops the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSessionOutcome StopSession(const Model::StopSessionRequest& request) const;

        /**
         * A Callable wrapper for StopSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSessionRequestT = Model::StopSessionRequest>
        Model::StopSessionOutcomeCallable StopSessionCallable(const StopSessionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StopSession, request);
        }

        /**
         * An Async wrapper for StopSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSessionRequestT = Model::StopSessionRequest>
        void StopSessionAsync(const StopSessionRequestT& request, const StopSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StopSession, request, handler, context);
        }

        /**
         * <p>Stops a specified trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTriggerOutcome StopTrigger(const Model::StopTriggerRequest& request) const;

        /**
         * A Callable wrapper for StopTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopTriggerRequestT = Model::StopTriggerRequest>
        Model::StopTriggerOutcomeCallable StopTriggerCallable(const StopTriggerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StopTrigger, request);
        }

        /**
         * An Async wrapper for StopTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopTriggerRequestT = Model::StopTriggerRequest>
        void StopTriggerAsync(const StopTriggerRequestT& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StopTrigger, request, handler, context);
        }

        /**
         * <p>Stops the execution of the specified workflow run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkflowRunOutcome StopWorkflowRun(const Model::StopWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for StopWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopWorkflowRunRequestT = Model::StopWorkflowRunRequest>
        Model::StopWorkflowRunOutcomeCallable StopWorkflowRunCallable(const StopWorkflowRunRequestT& request) const
        {
            return SubmitCallable(&GlueClient::StopWorkflowRun, request);
        }

        /**
         * An Async wrapper for StopWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopWorkflowRunRequestT = Model::StopWorkflowRunRequest>
        void StopWorkflowRunAsync(const StopWorkflowRunRequestT& request, const StopWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::StopWorkflowRun, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource. A tag is a label you can assign to an Amazon Web
         * Services resource. In Glue, you can tag only certain resources. For information
         * about what resources you can tag, see <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/monitor-tags.html">Amazon Web
         * Services Tags in Glue</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GlueClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a registered blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBlueprintOutcome UpdateBlueprint(const Model::UpdateBlueprintRequest& request) const;

        /**
         * A Callable wrapper for UpdateBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBlueprintRequestT = Model::UpdateBlueprintRequest>
        Model::UpdateBlueprintOutcomeCallable UpdateBlueprintCallable(const UpdateBlueprintRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateBlueprint, request);
        }

        /**
         * An Async wrapper for UpdateBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBlueprintRequestT = Model::UpdateBlueprintRequest>
        void UpdateBlueprintAsync(const UpdateBlueprintRequestT& request, const UpdateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateBlueprint, request, handler, context);
        }

        /**
         * <p>Modifies an existing classifier (a <code>GrokClassifier</code>, an
         * <code>XMLClassifier</code>, a <code>JsonClassifier</code>, or a
         * <code>CsvClassifier</code>, depending on which field is present).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClassifierOutcome UpdateClassifier(const Model::UpdateClassifierRequest& request) const;

        /**
         * A Callable wrapper for UpdateClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClassifierRequestT = Model::UpdateClassifierRequest>
        Model::UpdateClassifierOutcomeCallable UpdateClassifierCallable(const UpdateClassifierRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateClassifier, request);
        }

        /**
         * An Async wrapper for UpdateClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClassifierRequestT = Model::UpdateClassifierRequest>
        void UpdateClassifierAsync(const UpdateClassifierRequestT& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateClassifier, request, handler, context);
        }

        /**
         * <p>Creates or updates partition statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdatePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateColumnStatisticsForPartitionOutcome UpdateColumnStatisticsForPartition(const Model::UpdateColumnStatisticsForPartitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateColumnStatisticsForPartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateColumnStatisticsForPartitionRequestT = Model::UpdateColumnStatisticsForPartitionRequest>
        Model::UpdateColumnStatisticsForPartitionOutcomeCallable UpdateColumnStatisticsForPartitionCallable(const UpdateColumnStatisticsForPartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateColumnStatisticsForPartition, request);
        }

        /**
         * An Async wrapper for UpdateColumnStatisticsForPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateColumnStatisticsForPartitionRequestT = Model::UpdateColumnStatisticsForPartitionRequest>
        void UpdateColumnStatisticsForPartitionAsync(const UpdateColumnStatisticsForPartitionRequestT& request, const UpdateColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateColumnStatisticsForPartition, request, handler, context);
        }

        /**
         * <p>Creates or updates table statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdateTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateColumnStatisticsForTableOutcome UpdateColumnStatisticsForTable(const Model::UpdateColumnStatisticsForTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateColumnStatisticsForTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateColumnStatisticsForTableRequestT = Model::UpdateColumnStatisticsForTableRequest>
        Model::UpdateColumnStatisticsForTableOutcomeCallable UpdateColumnStatisticsForTableCallable(const UpdateColumnStatisticsForTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateColumnStatisticsForTable, request);
        }

        /**
         * An Async wrapper for UpdateColumnStatisticsForTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateColumnStatisticsForTableRequestT = Model::UpdateColumnStatisticsForTableRequest>
        void UpdateColumnStatisticsForTableAsync(const UpdateColumnStatisticsForTableRequestT& request, const UpdateColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateColumnStatisticsForTable, request, handler, context);
        }

        /**
         * <p>Updates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const UpdateConnectionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateConnection, request);
        }

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectionRequestT = Model::UpdateConnectionRequest>
        void UpdateConnectionAsync(const UpdateConnectionRequestT& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateConnection, request, handler, context);
        }

        /**
         * <p>Updates a crawler. If a crawler is running, you must stop it using
         * <code>StopCrawler</code> before updating it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrawlerOutcome UpdateCrawler(const Model::UpdateCrawlerRequest& request) const;

        /**
         * A Callable wrapper for UpdateCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCrawlerRequestT = Model::UpdateCrawlerRequest>
        Model::UpdateCrawlerOutcomeCallable UpdateCrawlerCallable(const UpdateCrawlerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateCrawler, request);
        }

        /**
         * An Async wrapper for UpdateCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCrawlerRequestT = Model::UpdateCrawlerRequest>
        void UpdateCrawlerAsync(const UpdateCrawlerRequestT& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateCrawler, request, handler, context);
        }

        /**
         * <p>Updates the schedule of a crawler using a <code>cron</code> expression.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrawlerScheduleOutcome UpdateCrawlerSchedule(const Model::UpdateCrawlerScheduleRequest& request) const;

        /**
         * A Callable wrapper for UpdateCrawlerSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCrawlerScheduleRequestT = Model::UpdateCrawlerScheduleRequest>
        Model::UpdateCrawlerScheduleOutcomeCallable UpdateCrawlerScheduleCallable(const UpdateCrawlerScheduleRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateCrawlerSchedule, request);
        }

        /**
         * An Async wrapper for UpdateCrawlerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCrawlerScheduleRequestT = Model::UpdateCrawlerScheduleRequest>
        void UpdateCrawlerScheduleAsync(const UpdateCrawlerScheduleRequestT& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateCrawlerSchedule, request, handler, context);
        }

        /**
         * <p>Updates the specified data quality ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDataQualityRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataQualityRulesetOutcome UpdateDataQualityRuleset(const Model::UpdateDataQualityRulesetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataQualityRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataQualityRulesetRequestT = Model::UpdateDataQualityRulesetRequest>
        Model::UpdateDataQualityRulesetOutcomeCallable UpdateDataQualityRulesetCallable(const UpdateDataQualityRulesetRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateDataQualityRuleset, request);
        }

        /**
         * An Async wrapper for UpdateDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataQualityRulesetRequestT = Model::UpdateDataQualityRulesetRequest>
        void UpdateDataQualityRulesetAsync(const UpdateDataQualityRulesetRequestT& request, const UpdateDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateDataQualityRuleset, request, handler, context);
        }

        /**
         * <p>Updates an existing database definition in a Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDatabaseRequestT = Model::UpdateDatabaseRequest>
        Model::UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const UpdateDatabaseRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateDatabase, request);
        }

        /**
         * An Async wrapper for UpdateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDatabaseRequestT = Model::UpdateDatabaseRequest>
        void UpdateDatabaseAsync(const UpdateDatabaseRequestT& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateDatabase, request, handler, context);
        }

        /**
         * <p>Updates a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevEndpointOutcome UpdateDevEndpoint(const Model::UpdateDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDevEndpointRequestT = Model::UpdateDevEndpointRequest>
        Model::UpdateDevEndpointOutcomeCallable UpdateDevEndpointCallable(const UpdateDevEndpointRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateDevEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDevEndpointRequestT = Model::UpdateDevEndpointRequest>
        void UpdateDevEndpointAsync(const UpdateDevEndpointRequestT& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateDevEndpoint, request, handler, context);
        }

        /**
         * <p>Updates an existing job definition. The previous job definition is completely
         * overwritten by this information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        Model::UpdateJobOutcomeCallable UpdateJobCallable(const UpdateJobRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateJob, request);
        }

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        void UpdateJobAsync(const UpdateJobRequestT& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateJob, request, handler, context);
        }

        /**
         * <p>Synchronizes a job from the source control repository. This operation takes
         * the job artifacts that are located in the remote repository and updates the Glue
         * internal stores with these artifacts.</p> <p>This API supports optional
         * parameters which take in the repository information.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJobFromSourceControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateJobFromSourceControlOutcome UpdateJobFromSourceControl(const Model::UpdateJobFromSourceControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateJobFromSourceControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateJobFromSourceControlRequestT = Model::UpdateJobFromSourceControlRequest>
        Model::UpdateJobFromSourceControlOutcomeCallable UpdateJobFromSourceControlCallable(const UpdateJobFromSourceControlRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateJobFromSourceControl, request);
        }

        /**
         * An Async wrapper for UpdateJobFromSourceControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobFromSourceControlRequestT = Model::UpdateJobFromSourceControlRequest>
        void UpdateJobFromSourceControlAsync(const UpdateJobFromSourceControlRequestT& request, const UpdateJobFromSourceControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateJobFromSourceControl, request, handler, context);
        }

        /**
         * <p>Updates an existing machine learning transform. Call this operation to tune
         * the algorithm parameters to achieve better results.</p> <p>After calling this
         * operation, you can call the <code>StartMLEvaluationTaskRun</code> operation to
         * assess how well your new parameters achieved your goals (such as improving the
         * quality of your machine learning transform, or making it more
         * cost-effective).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateMLTransform">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMLTransformOutcome UpdateMLTransform(const Model::UpdateMLTransformRequest& request) const;

        /**
         * A Callable wrapper for UpdateMLTransform that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMLTransformRequestT = Model::UpdateMLTransformRequest>
        Model::UpdateMLTransformOutcomeCallable UpdateMLTransformCallable(const UpdateMLTransformRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateMLTransform, request);
        }

        /**
         * An Async wrapper for UpdateMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMLTransformRequestT = Model::UpdateMLTransformRequest>
        void UpdateMLTransformAsync(const UpdateMLTransformRequestT& request, const UpdateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateMLTransform, request, handler, context);
        }

        /**
         * <p>Updates a partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartitionOutcome UpdatePartition(const Model::UpdatePartitionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePartitionRequestT = Model::UpdatePartitionRequest>
        Model::UpdatePartitionOutcomeCallable UpdatePartitionCallable(const UpdatePartitionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdatePartition, request);
        }

        /**
         * An Async wrapper for UpdatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePartitionRequestT = Model::UpdatePartitionRequest>
        void UpdatePartitionAsync(const UpdatePartitionRequestT& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdatePartition, request, handler, context);
        }

        /**
         * <p>Updates an existing registry which is used to hold a collection of schemas.
         * The updated properties relate to the registry, and do not modify any of the
         * schemas within the registry. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;

        /**
         * A Callable wrapper for UpdateRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRegistryRequestT = Model::UpdateRegistryRequest>
        Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const UpdateRegistryRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateRegistry, request);
        }

        /**
         * An Async wrapper for UpdateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRegistryRequestT = Model::UpdateRegistryRequest>
        void UpdateRegistryAsync(const UpdateRegistryRequestT& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateRegistry, request, handler, context);
        }

        /**
         * <p>Updates the description, compatibility setting, or version checkpoint for a
         * schema set.</p> <p>For updating the compatibility setting, the call will not
         * validate compatibility for the entire set of schema versions with the new
         * compatibility setting. If the value for <code>Compatibility</code> is provided,
         * the <code>VersionNumber</code> (a checkpoint) is also required. The API will
         * validate the checkpoint version number for consistency.</p> <p>If the value for
         * the <code>VersionNumber</code> (checkpoint) is provided,
         * <code>Compatibility</code> is optional and this can be used to set/reset a
         * checkpoint for the schema.</p> <p>This update will happen only if the schema is
         * in the AVAILABLE state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSchemaOutcome UpdateSchema(const Model::UpdateSchemaRequest& request) const;

        /**
         * A Callable wrapper for UpdateSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSchemaRequestT = Model::UpdateSchemaRequest>
        Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const UpdateSchemaRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateSchema, request);
        }

        /**
         * An Async wrapper for UpdateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSchemaRequestT = Model::UpdateSchemaRequest>
        void UpdateSchemaAsync(const UpdateSchemaRequestT& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateSchema, request, handler, context);
        }

        /**
         * <p>Synchronizes a job to the source control repository. This operation takes the
         * job artifacts from the Glue internal stores and makes a commit to the remote
         * repository that is configured on the job.</p> <p>This API supports optional
         * parameters which take in the repository information.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateSourceControlFromJob">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceControlFromJobOutcome UpdateSourceControlFromJob(const Model::UpdateSourceControlFromJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateSourceControlFromJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSourceControlFromJobRequestT = Model::UpdateSourceControlFromJobRequest>
        Model::UpdateSourceControlFromJobOutcomeCallable UpdateSourceControlFromJobCallable(const UpdateSourceControlFromJobRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateSourceControlFromJob, request);
        }

        /**
         * An Async wrapper for UpdateSourceControlFromJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSourceControlFromJobRequestT = Model::UpdateSourceControlFromJobRequest>
        void UpdateSourceControlFromJobAsync(const UpdateSourceControlFromJobRequestT& request, const UpdateSourceControlFromJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateSourceControlFromJob, request, handler, context);
        }

        /**
         * <p>Updates a metadata table in the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        Model::UpdateTableOutcomeCallable UpdateTableCallable(const UpdateTableRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateTable, request);
        }

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableRequestT = Model::UpdateTableRequest>
        void UpdateTableAsync(const UpdateTableRequestT& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateTable, request, handler, context);
        }

        /**
         * <p>Updates the configuration for an existing table optimizer.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTableOptimizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOptimizerOutcome UpdateTableOptimizer(const Model::UpdateTableOptimizerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTableOptimizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTableOptimizerRequestT = Model::UpdateTableOptimizerRequest>
        Model::UpdateTableOptimizerOutcomeCallable UpdateTableOptimizerCallable(const UpdateTableOptimizerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateTableOptimizer, request);
        }

        /**
         * An Async wrapper for UpdateTableOptimizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTableOptimizerRequestT = Model::UpdateTableOptimizerRequest>
        void UpdateTableOptimizerAsync(const UpdateTableOptimizerRequestT& request, const UpdateTableOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateTableOptimizer, request, handler, context);
        }

        /**
         * <p>Updates a trigger definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTriggerOutcome UpdateTrigger(const Model::UpdateTriggerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTriggerRequestT = Model::UpdateTriggerRequest>
        Model::UpdateTriggerOutcomeCallable UpdateTriggerCallable(const UpdateTriggerRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateTrigger, request);
        }

        /**
         * An Async wrapper for UpdateTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTriggerRequestT = Model::UpdateTriggerRequest>
        void UpdateTriggerAsync(const UpdateTriggerRequestT& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateTrigger, request, handler, context);
        }

        /**
         * <p>Updates an existing function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserDefinedFunctionOutcome UpdateUserDefinedFunction(const Model::UpdateUserDefinedFunctionRequest& request) const;

        /**
         * A Callable wrapper for UpdateUserDefinedFunction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUserDefinedFunctionRequestT = Model::UpdateUserDefinedFunctionRequest>
        Model::UpdateUserDefinedFunctionOutcomeCallable UpdateUserDefinedFunctionCallable(const UpdateUserDefinedFunctionRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateUserDefinedFunction, request);
        }

        /**
         * An Async wrapper for UpdateUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUserDefinedFunctionRequestT = Model::UpdateUserDefinedFunctionRequest>
        void UpdateUserDefinedFunctionAsync(const UpdateUserDefinedFunctionRequestT& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateUserDefinedFunction, request, handler, context);
        }

        /**
         * <p>Updates an existing workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;

        /**
         * A Callable wrapper for UpdateWorkflow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
        Model::UpdateWorkflowOutcomeCallable UpdateWorkflowCallable(const UpdateWorkflowRequestT& request) const
        {
            return SubmitCallable(&GlueClient::UpdateWorkflow, request);
        }

        /**
         * An Async wrapper for UpdateWorkflow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWorkflowRequestT = Model::UpdateWorkflowRequest>
        void UpdateWorkflowAsync(const UpdateWorkflowRequestT& request, const UpdateWorkflowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GlueClient::UpdateWorkflow, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GlueEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GlueClient>;
      void init(const GlueClientConfiguration& clientConfiguration);

      GlueClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlueEndpointProviderBase> m_endpointProvider;
  };

} // namespace Glue
} // namespace Aws
