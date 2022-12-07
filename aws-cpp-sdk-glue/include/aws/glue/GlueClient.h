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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Glue::GlueClientConfiguration& clientConfiguration = Aws::Glue::GlueClientConfiguration(),
                   std::shared_ptr<GlueEndpointProviderBase> endpointProvider = Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GlueClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<GlueEndpointProviderBase> endpointProvider = Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG),
                   const Aws::Glue::GlueClientConfiguration& clientConfiguration = Aws::Glue::GlueClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GlueClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<GlueEndpointProviderBase> endpointProvider = Aws::MakeShared<GlueEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::BatchCreatePartitionOutcomeCallable BatchCreatePartitionCallable(const Model::BatchCreatePartitionRequest& request) const;

        /**
         * An Async wrapper for BatchCreatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchCreatePartitionAsync(const Model::BatchCreatePartitionRequest& request, const BatchCreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDeleteConnectionOutcomeCallable BatchDeleteConnectionCallable(const Model::BatchDeleteConnectionRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteConnectionAsync(const Model::BatchDeleteConnectionRequest& request, const BatchDeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDeletePartitionOutcomeCallable BatchDeletePartitionCallable(const Model::BatchDeletePartitionRequest& request) const;

        /**
         * An Async wrapper for BatchDeletePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeletePartitionAsync(const Model::BatchDeletePartitionRequest& request, const BatchDeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDeleteTableOutcomeCallable BatchDeleteTableCallable(const Model::BatchDeleteTableRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteTableAsync(const Model::BatchDeleteTableRequest& request, const BatchDeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchDeleteTableVersionOutcomeCallable BatchDeleteTableVersionCallable(const Model::BatchDeleteTableVersionRequest& request) const;

        /**
         * An Async wrapper for BatchDeleteTableVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchDeleteTableVersionAsync(const Model::BatchDeleteTableVersionRequest& request, const BatchDeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetBlueprintsOutcomeCallable BatchGetBlueprintsCallable(const Model::BatchGetBlueprintsRequest& request) const;

        /**
         * An Async wrapper for BatchGetBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetBlueprintsAsync(const Model::BatchGetBlueprintsRequest& request, const BatchGetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetCrawlersOutcomeCallable BatchGetCrawlersCallable(const Model::BatchGetCrawlersRequest& request) const;

        /**
         * An Async wrapper for BatchGetCrawlers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCrawlersAsync(const Model::BatchGetCrawlersRequest& request, const BatchGetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetCustomEntityTypesOutcomeCallable BatchGetCustomEntityTypesCallable(const Model::BatchGetCustomEntityTypesRequest& request) const;

        /**
         * An Async wrapper for BatchGetCustomEntityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetCustomEntityTypesAsync(const Model::BatchGetCustomEntityTypesRequest& request, const BatchGetCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetDataQualityResultOutcomeCallable BatchGetDataQualityResultCallable(const Model::BatchGetDataQualityResultRequest& request) const;

        /**
         * An Async wrapper for BatchGetDataQualityResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDataQualityResultAsync(const Model::BatchGetDataQualityResultRequest& request, const BatchGetDataQualityResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetDevEndpointsOutcomeCallable BatchGetDevEndpointsCallable(const Model::BatchGetDevEndpointsRequest& request) const;

        /**
         * An Async wrapper for BatchGetDevEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetDevEndpointsAsync(const Model::BatchGetDevEndpointsRequest& request, const BatchGetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetJobsOutcomeCallable BatchGetJobsCallable(const Model::BatchGetJobsRequest& request) const;

        /**
         * An Async wrapper for BatchGetJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetJobsAsync(const Model::BatchGetJobsRequest& request, const BatchGetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves partitions in a batch request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetPartitionOutcome BatchGetPartition(const Model::BatchGetPartitionRequest& request) const;

        /**
         * A Callable wrapper for BatchGetPartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetPartitionOutcomeCallable BatchGetPartitionCallable(const Model::BatchGetPartitionRequest& request) const;

        /**
         * An Async wrapper for BatchGetPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetPartitionAsync(const Model::BatchGetPartitionRequest& request, const BatchGetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetTriggersOutcomeCallable BatchGetTriggersCallable(const Model::BatchGetTriggersRequest& request) const;

        /**
         * An Async wrapper for BatchGetTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetTriggersAsync(const Model::BatchGetTriggersRequest& request, const BatchGetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchGetWorkflowsOutcomeCallable BatchGetWorkflowsCallable(const Model::BatchGetWorkflowsRequest& request) const;

        /**
         * An Async wrapper for BatchGetWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetWorkflowsAsync(const Model::BatchGetWorkflowsRequest& request, const BatchGetWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchStopJobRunOutcomeCallable BatchStopJobRunCallable(const Model::BatchStopJobRunRequest& request) const;

        /**
         * An Async wrapper for BatchStopJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchStopJobRunAsync(const Model::BatchStopJobRunRequest& request, const BatchStopJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::BatchUpdatePartitionOutcomeCallable BatchUpdatePartitionCallable(const Model::BatchUpdatePartitionRequest& request) const;

        /**
         * An Async wrapper for BatchUpdatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchUpdatePartitionAsync(const Model::BatchUpdatePartitionRequest& request, const BatchUpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CancelDataQualityRuleRecommendationRunOutcomeCallable CancelDataQualityRuleRecommendationRunCallable(const Model::CancelDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * An Async wrapper for CancelDataQualityRuleRecommendationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDataQualityRuleRecommendationRunAsync(const Model::CancelDataQualityRuleRecommendationRunRequest& request, const CancelDataQualityRuleRecommendationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CancelDataQualityRulesetEvaluationRunOutcomeCallable CancelDataQualityRulesetEvaluationRunCallable(const Model::CancelDataQualityRulesetEvaluationRunRequest& request) const;

        /**
         * An Async wrapper for CancelDataQualityRulesetEvaluationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDataQualityRulesetEvaluationRunAsync(const Model::CancelDataQualityRulesetEvaluationRunRequest& request, const CancelDataQualityRulesetEvaluationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CancelMLTaskRunOutcomeCallable CancelMLTaskRunCallable(const Model::CancelMLTaskRunRequest& request) const;

        /**
         * An Async wrapper for CancelMLTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelMLTaskRunAsync(const Model::CancelMLTaskRunRequest& request, const CancelMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;

        /**
         * A Callable wrapper for CancelStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelStatementOutcomeCallable CancelStatementCallable(const Model::CancelStatementRequest& request) const;

        /**
         * An Async wrapper for CancelStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelStatementAsync(const Model::CancelStatementRequest& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CheckSchemaVersionValidityOutcomeCallable CheckSchemaVersionValidityCallable(const Model::CheckSchemaVersionValidityRequest& request) const;

        /**
         * An Async wrapper for CheckSchemaVersionValidity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CheckSchemaVersionValidityAsync(const Model::CheckSchemaVersionValidityRequest& request, const CheckSchemaVersionValidityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a blueprint with Glue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest& request) const;

        /**
         * A Callable wrapper for CreateBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBlueprintOutcomeCallable CreateBlueprintCallable(const Model::CreateBlueprintRequest& request) const;

        /**
         * An Async wrapper for CreateBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBlueprintAsync(const Model::CreateBlueprintRequest& request, const CreateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateClassifierOutcomeCallable CreateClassifierCallable(const Model::CreateClassifierRequest& request) const;

        /**
         * An Async wrapper for CreateClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateClassifierAsync(const Model::CreateClassifierRequest& request, const CreateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectionOutcomeCallable CreateConnectionCallable(const Model::CreateConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectionAsync(const Model::CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCrawlerOutcomeCallable CreateCrawlerCallable(const Model::CreateCrawlerRequest& request) const;

        /**
         * An Async wrapper for CreateCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCrawlerAsync(const Model::CreateCrawlerRequest& request, const CreateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateCustomEntityTypeOutcomeCallable CreateCustomEntityTypeCallable(const Model::CreateCustomEntityTypeRequest& request) const;

        /**
         * An Async wrapper for CreateCustomEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomEntityTypeAsync(const Model::CreateCustomEntityTypeRequest& request, const CreateCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateDataQualityRulesetOutcomeCallable CreateDataQualityRulesetCallable(const Model::CreateDataQualityRulesetRequest& request) const;

        /**
         * An Async wrapper for CreateDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataQualityRulesetAsync(const Model::CreateDataQualityRulesetRequest& request, const CreateDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new database in a Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDatabaseOutcomeCallable CreateDatabaseCallable(const Model::CreateDatabaseRequest& request) const;

        /**
         * An Async wrapper for CreateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDatabaseAsync(const Model::CreateDatabaseRequest& request, const CreateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevEndpointOutcome CreateDevEndpoint(const Model::CreateDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDevEndpointOutcomeCallable CreateDevEndpointCallable(const Model::CreateDevEndpointRequest& request) const;

        /**
         * An Async wrapper for CreateDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDevEndpointAsync(const Model::CreateDevEndpointRequest& request, const CreateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateMLTransformOutcomeCallable CreateMLTransformCallable(const Model::CreateMLTransformRequest& request) const;

        /**
         * An Async wrapper for CreateMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMLTransformAsync(const Model::CreateMLTransformRequest& request, const CreateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest& request) const;

        /**
         * A Callable wrapper for CreatePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePartitionOutcomeCallable CreatePartitionCallable(const Model::CreatePartitionRequest& request) const;

        /**
         * An Async wrapper for CreatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartitionAsync(const Model::CreatePartitionRequest& request, const CreatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreatePartitionIndexOutcomeCallable CreatePartitionIndexCallable(const Model::CreatePartitionIndexRequest& request) const;

        /**
         * An Async wrapper for CreatePartitionIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePartitionIndexAsync(const Model::CreatePartitionIndexRequest& request, const CreatePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateRegistryOutcomeCallable CreateRegistryCallable(const Model::CreateRegistryRequest& request) const;

        /**
         * An Async wrapper for CreateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRegistryAsync(const Model::CreateRegistryRequest& request, const CreateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSchemaOutcomeCallable CreateSchemaCallable(const Model::CreateSchemaRequest& request) const;

        /**
         * An Async wrapper for CreateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSchemaAsync(const Model::CreateSchemaRequest& request, const CreateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request) const;

        /**
         * An Async wrapper for CreateScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateSecurityConfigurationOutcomeCallable CreateSecurityConfigurationCallable(const Model::CreateSecurityConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityConfigurationAsync(const Model::CreateSecurityConfigurationRequest& request, const CreateSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request) const;

        /**
         * An Async wrapper for CreateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new table definition in the Data Catalog.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;

        /**
         * A Callable wrapper for CreateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTableOutcomeCallable CreateTableCallable(const Model::CreateTableRequest& request) const;

        /**
         * An Async wrapper for CreateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTableAsync(const Model::CreateTableRequest& request, const CreateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest& request) const;

        /**
         * A Callable wrapper for CreateTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTriggerOutcomeCallable CreateTriggerCallable(const Model::CreateTriggerRequest& request) const;

        /**
         * An Async wrapper for CreateTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTriggerAsync(const Model::CreateTriggerRequest& request, const CreateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateUserDefinedFunctionOutcomeCallable CreateUserDefinedFunctionCallable(const Model::CreateUserDefinedFunctionRequest& request) const;

        /**
         * An Async wrapper for CreateUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserDefinedFunctionAsync(const Model::CreateUserDefinedFunctionRequest& request, const CreateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateWorkflow">AWS
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
         * <p>Deletes an existing blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBlueprintOutcome DeleteBlueprint(const Model::DeleteBlueprintRequest& request) const;

        /**
         * A Callable wrapper for DeleteBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBlueprintOutcomeCallable DeleteBlueprintCallable(const Model::DeleteBlueprintRequest& request) const;

        /**
         * An Async wrapper for DeleteBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBlueprintAsync(const Model::DeleteBlueprintRequest& request, const DeleteBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a classifier from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClassifierOutcome DeleteClassifier(const Model::DeleteClassifierRequest& request) const;

        /**
         * A Callable wrapper for DeleteClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteClassifierOutcomeCallable DeleteClassifierCallable(const Model::DeleteClassifierRequest& request) const;

        /**
         * An Async wrapper for DeleteClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteClassifierAsync(const Model::DeleteClassifierRequest& request, const DeleteClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteColumnStatisticsForPartitionOutcomeCallable DeleteColumnStatisticsForPartitionCallable(const Model::DeleteColumnStatisticsForPartitionRequest& request) const;

        /**
         * An Async wrapper for DeleteColumnStatisticsForPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteColumnStatisticsForPartitionAsync(const Model::DeleteColumnStatisticsForPartitionRequest& request, const DeleteColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteColumnStatisticsForTableOutcomeCallable DeleteColumnStatisticsForTableCallable(const Model::DeleteColumnStatisticsForTableRequest& request) const;

        /**
         * An Async wrapper for DeleteColumnStatisticsForTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteColumnStatisticsForTableAsync(const Model::DeleteColumnStatisticsForTableRequest& request, const DeleteColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a connection from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectionOutcomeCallable DeleteConnectionCallable(const Model::DeleteConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectionAsync(const Model::DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCrawlerOutcomeCallable DeleteCrawlerCallable(const Model::DeleteCrawlerRequest& request) const;

        /**
         * An Async wrapper for DeleteCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCrawlerAsync(const Model::DeleteCrawlerRequest& request, const DeleteCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteCustomEntityTypeOutcomeCallable DeleteCustomEntityTypeCallable(const Model::DeleteCustomEntityTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomEntityTypeAsync(const Model::DeleteCustomEntityTypeRequest& request, const DeleteCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a data quality ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDataQualityRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataQualityRulesetOutcome DeleteDataQualityRuleset(const Model::DeleteDataQualityRulesetRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataQualityRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataQualityRulesetOutcomeCallable DeleteDataQualityRulesetCallable(const Model::DeleteDataQualityRulesetRequest& request) const;

        /**
         * An Async wrapper for DeleteDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataQualityRulesetAsync(const Model::DeleteDataQualityRulesetRequest& request, const DeleteDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDatabaseOutcomeCallable DeleteDatabaseCallable(const Model::DeleteDatabaseRequest& request) const;

        /**
         * An Async wrapper for DeleteDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDatabaseAsync(const Model::DeleteDatabaseRequest& request, const DeleteDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevEndpointOutcome DeleteDevEndpoint(const Model::DeleteDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDevEndpointOutcomeCallable DeleteDevEndpointCallable(const Model::DeleteDevEndpointRequest& request) const;

        /**
         * An Async wrapper for DeleteDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDevEndpointAsync(const Model::DeleteDevEndpointRequest& request, const DeleteDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteMLTransformOutcomeCallable DeleteMLTransformCallable(const Model::DeleteMLTransformRequest& request) const;

        /**
         * An Async wrapper for DeleteMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMLTransformAsync(const Model::DeleteMLTransformRequest& request, const DeleteMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionOutcome DeletePartition(const Model::DeletePartitionRequest& request) const;

        /**
         * A Callable wrapper for DeletePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePartitionOutcomeCallable DeletePartitionCallable(const Model::DeletePartitionRequest& request) const;

        /**
         * An Async wrapper for DeletePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartitionAsync(const Model::DeletePartitionRequest& request, const DeletePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeletePartitionIndexOutcomeCallable DeletePartitionIndexCallable(const Model::DeletePartitionIndexRequest& request) const;

        /**
         * An Async wrapper for DeletePartitionIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePartitionIndexAsync(const Model::DeletePartitionIndexRequest& request, const DeletePartitionIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRegistryOutcomeCallable DeleteRegistryCallable(const Model::DeleteRegistryRequest& request) const;

        /**
         * An Async wrapper for DeleteRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistryAsync(const Model::DeleteRegistryRequest& request, const DeleteRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourcePolicyAsync(const Model::DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSchemaOutcomeCallable DeleteSchemaCallable(const Model::DeleteSchemaRequest& request) const;

        /**
         * An Async wrapper for DeleteSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaAsync(const Model::DeleteSchemaRequest& request, const DeleteSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteSchemaVersionsOutcomeCallable DeleteSchemaVersionsCallable(const Model::DeleteSchemaVersionsRequest& request) const;

        /**
         * An Async wrapper for DeleteSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSchemaVersionsAsync(const Model::DeleteSchemaVersionsRequest& request, const DeleteSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityConfigurationOutcomeCallable DeleteSecurityConfigurationCallable(const Model::DeleteSecurityConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityConfigurationAsync(const Model::DeleteSecurityConfigurationRequest& request, const DeleteSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSessionOutcomeCallable DeleteSessionCallable(const Model::DeleteSessionRequest& request) const;

        /**
         * An Async wrapper for DeleteSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSessionAsync(const Model::DeleteSessionRequest& request, const DeleteSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteTableOutcomeCallable DeleteTableCallable(const Model::DeleteTableRequest& request) const;

        /**
         * An Async wrapper for DeleteTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableAsync(const Model::DeleteTableRequest& request, const DeleteTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableVersionOutcome DeleteTableVersion(const Model::DeleteTableVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteTableVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTableVersionOutcomeCallable DeleteTableVersionCallable(const Model::DeleteTableVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteTableVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTableVersionAsync(const Model::DeleteTableVersionRequest& request, const DeleteTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteTriggerOutcomeCallable DeleteTriggerCallable(const Model::DeleteTriggerRequest& request) const;

        /**
         * An Async wrapper for DeleteTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTriggerAsync(const Model::DeleteTriggerRequest& request, const DeleteTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteUserDefinedFunctionOutcomeCallable DeleteUserDefinedFunctionCallable(const Model::DeleteUserDefinedFunctionRequest& request) const;

        /**
         * An Async wrapper for DeleteUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserDefinedFunctionAsync(const Model::DeleteUserDefinedFunctionRequest& request, const DeleteUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteWorkflow">AWS
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
         * <p>Retrieves the details of a blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintOutcome GetBlueprint(const Model::GetBlueprintRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlueprintOutcomeCallable GetBlueprintCallable(const Model::GetBlueprintRequest& request) const;

        /**
         * An Async wrapper for GetBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlueprintAsync(const Model::GetBlueprintRequest& request, const GetBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of a blueprint run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprintRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintRunOutcome GetBlueprintRun(const Model::GetBlueprintRunRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprintRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlueprintRunOutcomeCallable GetBlueprintRunCallable(const Model::GetBlueprintRunRequest& request) const;

        /**
         * An Async wrapper for GetBlueprintRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlueprintRunAsync(const Model::GetBlueprintRunRequest& request, const GetBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetBlueprintRunsOutcomeCallable GetBlueprintRunsCallable(const Model::GetBlueprintRunsRequest& request) const;

        /**
         * An Async wrapper for GetBlueprintRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlueprintRunsAsync(const Model::GetBlueprintRunsRequest& request, const GetBlueprintRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the status of a migration operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCatalogImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogImportStatusOutcome GetCatalogImportStatus(const Model::GetCatalogImportStatusRequest& request) const;

        /**
         * A Callable wrapper for GetCatalogImportStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCatalogImportStatusOutcomeCallable GetCatalogImportStatusCallable(const Model::GetCatalogImportStatusRequest& request) const;

        /**
         * An Async wrapper for GetCatalogImportStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCatalogImportStatusAsync(const Model::GetCatalogImportStatusRequest& request, const GetCatalogImportStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a classifier by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifierOutcome GetClassifier(const Model::GetClassifierRequest& request) const;

        /**
         * A Callable wrapper for GetClassifier that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetClassifierOutcomeCallable GetClassifierCallable(const Model::GetClassifierRequest& request) const;

        /**
         * An Async wrapper for GetClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassifierAsync(const Model::GetClassifierRequest& request, const GetClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetClassifiersOutcomeCallable GetClassifiersCallable(const Model::GetClassifiersRequest& request) const;

        /**
         * An Async wrapper for GetClassifiers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetClassifiersAsync(const Model::GetClassifiersRequest& request, const GetClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetColumnStatisticsForPartitionOutcomeCallable GetColumnStatisticsForPartitionCallable(const Model::GetColumnStatisticsForPartitionRequest& request) const;

        /**
         * An Async wrapper for GetColumnStatisticsForPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetColumnStatisticsForPartitionAsync(const Model::GetColumnStatisticsForPartitionRequest& request, const GetColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetColumnStatisticsForTableOutcomeCallable GetColumnStatisticsForTableCallable(const Model::GetColumnStatisticsForTableRequest& request) const;

        /**
         * An Async wrapper for GetColumnStatisticsForTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetColumnStatisticsForTableAsync(const Model::GetColumnStatisticsForTableRequest& request, const GetColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetConnectionOutcomeCallable GetConnectionCallable(const Model::GetConnectionRequest& request) const;

        /**
         * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionAsync(const Model::GetConnectionRequest& request, const GetConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetConnectionsOutcomeCallable GetConnectionsCallable(const Model::GetConnectionsRequest& request) const;

        /**
         * An Async wrapper for GetConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectionsAsync(const Model::GetConnectionsRequest& request, const GetConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metadata for a specified crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawler">AWS API
         * Reference</a></p>
         */
        virtual Model::GetCrawlerOutcome GetCrawler(const Model::GetCrawlerRequest& request) const;

        /**
         * A Callable wrapper for GetCrawler that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCrawlerOutcomeCallable GetCrawlerCallable(const Model::GetCrawlerRequest& request) const;

        /**
         * An Async wrapper for GetCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrawlerAsync(const Model::GetCrawlerRequest& request, const GetCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves metrics about specified crawlers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlerMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlerMetricsOutcome GetCrawlerMetrics(const Model::GetCrawlerMetricsRequest& request) const;

        /**
         * A Callable wrapper for GetCrawlerMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCrawlerMetricsOutcomeCallable GetCrawlerMetricsCallable(const Model::GetCrawlerMetricsRequest& request) const;

        /**
         * An Async wrapper for GetCrawlerMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrawlerMetricsAsync(const Model::GetCrawlerMetricsRequest& request, const GetCrawlerMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetCrawlersOutcomeCallable GetCrawlersCallable(const Model::GetCrawlersRequest& request) const;

        /**
         * An Async wrapper for GetCrawlers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCrawlersAsync(const Model::GetCrawlersRequest& request, const GetCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetCustomEntityTypeOutcomeCallable GetCustomEntityTypeCallable(const Model::GetCustomEntityTypeRequest& request) const;

        /**
         * An Async wrapper for GetCustomEntityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCustomEntityTypeAsync(const Model::GetCustomEntityTypeRequest& request, const GetCustomEntityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataCatalogEncryptionSettingsOutcomeCallable GetDataCatalogEncryptionSettingsCallable(const Model::GetDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * An Async wrapper for GetDataCatalogEncryptionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataCatalogEncryptionSettingsAsync(const Model::GetDataCatalogEncryptionSettingsRequest& request, const GetDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataQualityResultOutcomeCallable GetDataQualityResultCallable(const Model::GetDataQualityResultRequest& request) const;

        /**
         * An Async wrapper for GetDataQualityResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataQualityResultAsync(const Model::GetDataQualityResultRequest& request, const GetDataQualityResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataQualityRuleRecommendationRunOutcomeCallable GetDataQualityRuleRecommendationRunCallable(const Model::GetDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * An Async wrapper for GetDataQualityRuleRecommendationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataQualityRuleRecommendationRunAsync(const Model::GetDataQualityRuleRecommendationRunRequest& request, const GetDataQualityRuleRecommendationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataQualityRulesetOutcomeCallable GetDataQualityRulesetCallable(const Model::GetDataQualityRulesetRequest& request) const;

        /**
         * An Async wrapper for GetDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataQualityRulesetAsync(const Model::GetDataQualityRulesetRequest& request, const GetDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataQualityRulesetEvaluationRunOutcomeCallable GetDataQualityRulesetEvaluationRunCallable(const Model::GetDataQualityRulesetEvaluationRunRequest& request) const;

        /**
         * An Async wrapper for GetDataQualityRulesetEvaluationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataQualityRulesetEvaluationRunAsync(const Model::GetDataQualityRulesetEvaluationRunRequest& request, const GetDataQualityRulesetEvaluationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the definition of a specified database.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDatabaseOutcomeCallable GetDatabaseCallable(const Model::GetDatabaseRequest& request) const;

        /**
         * An Async wrapper for GetDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatabaseAsync(const Model::GetDatabaseRequest& request, const GetDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDatabasesOutcomeCallable GetDatabasesCallable(const Model::GetDatabasesRequest& request) const;

        /**
         * An Async wrapper for GetDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDatabasesAsync(const Model::GetDatabasesRequest& request, const GetDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDataflowGraphOutcomeCallable GetDataflowGraphCallable(const Model::GetDataflowGraphRequest& request) const;

        /**
         * An Async wrapper for GetDataflowGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataflowGraphAsync(const Model::GetDataflowGraphRequest& request, const GetDataflowGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDevEndpointOutcomeCallable GetDevEndpointCallable(const Model::GetDevEndpointRequest& request) const;

        /**
         * An Async wrapper for GetDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevEndpointAsync(const Model::GetDevEndpointRequest& request, const GetDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDevEndpointsOutcomeCallable GetDevEndpointsCallable(const Model::GetDevEndpointsRequest& request) const;

        /**
         * An Async wrapper for GetDevEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevEndpointsAsync(const Model::GetDevEndpointsRequest& request, const GetDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetJobBookmarkOutcomeCallable GetJobBookmarkCallable(const Model::GetJobBookmarkRequest& request) const;

        /**
         * An Async wrapper for GetJobBookmark that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobBookmarkAsync(const Model::GetJobBookmarkRequest& request, const GetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the metadata for a given job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRun">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;

        /**
         * A Callable wrapper for GetJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobRunOutcomeCallable GetJobRunCallable(const Model::GetJobRunRequest& request) const;

        /**
         * An Async wrapper for GetJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobRunAsync(const Model::GetJobRunRequest& request, const GetJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetJobRunsOutcomeCallable GetJobRunsCallable(const Model::GetJobRunsRequest& request) const;

        /**
         * An Async wrapper for GetJobRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobRunsAsync(const Model::GetJobRunsRequest& request, const GetJobRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all current job definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobsOutcome GetJobs(const Model::GetJobsRequest& request) const;

        /**
         * A Callable wrapper for GetJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobsOutcomeCallable GetJobsCallable(const Model::GetJobsRequest& request) const;

        /**
         * An Async wrapper for GetJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobsAsync(const Model::GetJobsRequest& request, const GetJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetMLTaskRunOutcomeCallable GetMLTaskRunCallable(const Model::GetMLTaskRunRequest& request) const;

        /**
         * An Async wrapper for GetMLTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTaskRunAsync(const Model::GetMLTaskRunRequest& request, const GetMLTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetMLTaskRunsOutcomeCallable GetMLTaskRunsCallable(const Model::GetMLTaskRunsRequest& request) const;

        /**
         * An Async wrapper for GetMLTaskRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTaskRunsAsync(const Model::GetMLTaskRunsRequest& request, const GetMLTaskRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetMLTransformOutcomeCallable GetMLTransformCallable(const Model::GetMLTransformRequest& request) const;

        /**
         * An Async wrapper for GetMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTransformAsync(const Model::GetMLTransformRequest& request, const GetMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetMLTransformsOutcomeCallable GetMLTransformsCallable(const Model::GetMLTransformsRequest& request) const;

        /**
         * An Async wrapper for GetMLTransforms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMLTransformsAsync(const Model::GetMLTransformsRequest& request, const GetMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMapping">AWS API
         * Reference</a></p>
         */
        virtual Model::GetMappingOutcome GetMapping(const Model::GetMappingRequest& request) const;

        /**
         * A Callable wrapper for GetMapping that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMappingOutcomeCallable GetMappingCallable(const Model::GetMappingRequest& request) const;

        /**
         * An Async wrapper for GetMapping that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMappingAsync(const Model::GetMappingRequest& request, const GetMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetPartitionOutcomeCallable GetPartitionCallable(const Model::GetPartitionRequest& request) const;

        /**
         * An Async wrapper for GetPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartitionAsync(const Model::GetPartitionRequest& request, const GetPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetPartitionIndexesOutcomeCallable GetPartitionIndexesCallable(const Model::GetPartitionIndexesRequest& request) const;

        /**
         * An Async wrapper for GetPartitionIndexes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartitionIndexesAsync(const Model::GetPartitionIndexesRequest& request, const GetPartitionIndexesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetPartitionsOutcomeCallable GetPartitionsCallable(const Model::GetPartitionsRequest& request) const;

        /**
         * An Async wrapper for GetPartitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPartitionsAsync(const Model::GetPartitionsRequest& request, const GetPartitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets code to perform a specified mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPlan">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPlanOutcome GetPlan(const Model::GetPlanRequest& request) const;

        /**
         * A Callable wrapper for GetPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlanOutcomeCallable GetPlanCallable(const Model::GetPlanRequest& request) const;

        /**
         * An Async wrapper for GetPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlanAsync(const Model::GetPlanRequest& request, const GetPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified registry in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryOutcome GetRegistry(const Model::GetRegistryRequest& request) const;

        /**
         * A Callable wrapper for GetRegistry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistryOutcomeCallable GetRegistryCallable(const Model::GetRegistryRequest& request) const;

        /**
         * An Async wrapper for GetRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistryAsync(const Model::GetRegistryRequest& request, const GetRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePoliciesAsync(const Model::GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const Model::GetResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourcePolicyAsync(const Model::GetResourcePolicyRequest& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the specified schema in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchema">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSchemaOutcome GetSchema(const Model::GetSchemaRequest& request) const;

        /**
         * A Callable wrapper for GetSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSchemaOutcomeCallable GetSchemaCallable(const Model::GetSchemaRequest& request) const;

        /**
         * An Async wrapper for GetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaAsync(const Model::GetSchemaRequest& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSchemaByDefinitionOutcomeCallable GetSchemaByDefinitionCallable(const Model::GetSchemaByDefinitionRequest& request) const;

        /**
         * An Async wrapper for GetSchemaByDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaByDefinitionAsync(const Model::GetSchemaByDefinitionRequest& request, const GetSchemaByDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSchemaVersionOutcomeCallable GetSchemaVersionCallable(const Model::GetSchemaVersionRequest& request) const;

        /**
         * An Async wrapper for GetSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaVersionAsync(const Model::GetSchemaVersionRequest& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSchemaVersionsDiffOutcomeCallable GetSchemaVersionsDiffCallable(const Model::GetSchemaVersionsDiffRequest& request) const;

        /**
         * An Async wrapper for GetSchemaVersionsDiff that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSchemaVersionsDiffAsync(const Model::GetSchemaVersionsDiffRequest& request, const GetSchemaVersionsDiffResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationOutcome GetSecurityConfiguration(const Model::GetSecurityConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetSecurityConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSecurityConfigurationOutcomeCallable GetSecurityConfigurationCallable(const Model::GetSecurityConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetSecurityConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecurityConfigurationAsync(const Model::GetSecurityConfigurationRequest& request, const GetSecurityConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetSecurityConfigurationsOutcomeCallable GetSecurityConfigurationsCallable(const Model::GetSecurityConfigurationsRequest& request) const;

        /**
         * An Async wrapper for GetSecurityConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSecurityConfigurationsAsync(const Model::GetSecurityConfigurationsRequest& request, const GetSecurityConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSession">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSessionOutcomeCallable GetSessionCallable(const Model::GetSessionRequest& request) const;

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSessionAsync(const Model::GetSessionRequest& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementOutcome GetStatement(const Model::GetStatementRequest& request) const;

        /**
         * A Callable wrapper for GetStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStatementOutcomeCallable GetStatementCallable(const Model::GetStatementRequest& request) const;

        /**
         * An Async wrapper for GetStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStatementAsync(const Model::GetStatementRequest& request, const GetStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetTableOutcomeCallable GetTableCallable(const Model::GetTableRequest& request) const;

        /**
         * An Async wrapper for GetTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableAsync(const Model::GetTableRequest& request, const GetTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionOutcome GetTableVersion(const Model::GetTableVersionRequest& request) const;

        /**
         * A Callable wrapper for GetTableVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTableVersionOutcomeCallable GetTableVersionCallable(const Model::GetTableVersionRequest& request) const;

        /**
         * An Async wrapper for GetTableVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableVersionAsync(const Model::GetTableVersionRequest& request, const GetTableVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetTableVersionsOutcomeCallable GetTableVersionsCallable(const Model::GetTableVersionsRequest& request) const;

        /**
         * An Async wrapper for GetTableVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTableVersionsAsync(const Model::GetTableVersionsRequest& request, const GetTableVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetTablesOutcomeCallable GetTablesCallable(const Model::GetTablesRequest& request) const;

        /**
         * An Async wrapper for GetTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTablesAsync(const Model::GetTablesRequest& request, const GetTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of tags associated with a resource.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * A Callable wrapper for GetTags that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * An Async wrapper for GetTags that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the definition of a trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTrigger">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTriggerOutcome GetTrigger(const Model::GetTriggerRequest& request) const;

        /**
         * A Callable wrapper for GetTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTriggerOutcomeCallable GetTriggerCallable(const Model::GetTriggerRequest& request) const;

        /**
         * An Async wrapper for GetTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTriggerAsync(const Model::GetTriggerRequest& request, const GetTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets all the triggers associated with a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTriggersOutcome GetTriggers(const Model::GetTriggersRequest& request) const;

        /**
         * A Callable wrapper for GetTriggers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTriggersOutcomeCallable GetTriggersCallable(const Model::GetTriggersRequest& request) const;

        /**
         * An Async wrapper for GetTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTriggersAsync(const Model::GetTriggersRequest& request, const GetTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetUnfilteredPartitionMetadataOutcome GetUnfilteredPartitionMetadata(const Model::GetUnfilteredPartitionMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetUnfilteredPartitionMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUnfilteredPartitionMetadataOutcomeCallable GetUnfilteredPartitionMetadataCallable(const Model::GetUnfilteredPartitionMetadataRequest& request) const;

        /**
         * An Async wrapper for GetUnfilteredPartitionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUnfilteredPartitionMetadataAsync(const Model::GetUnfilteredPartitionMetadataRequest& request, const GetUnfilteredPartitionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetUnfilteredPartitionsMetadataOutcome GetUnfilteredPartitionsMetadata(const Model::GetUnfilteredPartitionsMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetUnfilteredPartitionsMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUnfilteredPartitionsMetadataOutcomeCallable GetUnfilteredPartitionsMetadataCallable(const Model::GetUnfilteredPartitionsMetadataRequest& request) const;

        /**
         * An Async wrapper for GetUnfilteredPartitionsMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUnfilteredPartitionsMetadataAsync(const Model::GetUnfilteredPartitionsMetadataRequest& request, const GetUnfilteredPartitionsMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::GetUnfilteredTableMetadataOutcome GetUnfilteredTableMetadata(const Model::GetUnfilteredTableMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetUnfilteredTableMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUnfilteredTableMetadataOutcomeCallable GetUnfilteredTableMetadataCallable(const Model::GetUnfilteredTableMetadataRequest& request) const;

        /**
         * An Async wrapper for GetUnfilteredTableMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUnfilteredTableMetadataAsync(const Model::GetUnfilteredTableMetadataRequest& request, const GetUnfilteredTableMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUserDefinedFunctionOutcomeCallable GetUserDefinedFunctionCallable(const Model::GetUserDefinedFunctionRequest& request) const;

        /**
         * An Async wrapper for GetUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserDefinedFunctionAsync(const Model::GetUserDefinedFunctionRequest& request, const GetUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetUserDefinedFunctionsOutcomeCallable GetUserDefinedFunctionsCallable(const Model::GetUserDefinedFunctionsRequest& request) const;

        /**
         * An Async wrapper for GetUserDefinedFunctions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUserDefinedFunctionsAsync(const Model::GetUserDefinedFunctionsRequest& request, const GetUserDefinedFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves resource metadata for a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflow">AWS
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
         * <p>Retrieves the metadata for a given workflow run. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetWorkflowRunOutcomeCallable GetWorkflowRunCallable(const Model::GetWorkflowRunRequest& request) const;

        /**
         * An Async wrapper for GetWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowRunAsync(const Model::GetWorkflowRunRequest& request, const GetWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetWorkflowRunPropertiesOutcomeCallable GetWorkflowRunPropertiesCallable(const Model::GetWorkflowRunPropertiesRequest& request) const;

        /**
         * An Async wrapper for GetWorkflowRunProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowRunPropertiesAsync(const Model::GetWorkflowRunPropertiesRequest& request, const GetWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetWorkflowRunsOutcomeCallable GetWorkflowRunsCallable(const Model::GetWorkflowRunsRequest& request) const;

        /**
         * An Async wrapper for GetWorkflowRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetWorkflowRunsAsync(const Model::GetWorkflowRunsRequest& request, const GetWorkflowRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ImportCatalogToGlueOutcomeCallable ImportCatalogToGlueCallable(const Model::ImportCatalogToGlueRequest& request) const;

        /**
         * An Async wrapper for ImportCatalogToGlue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportCatalogToGlueAsync(const Model::ImportCatalogToGlueRequest& request, const ImportCatalogToGlueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the blueprint names in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBlueprintsOutcome ListBlueprints(const Model::ListBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for ListBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBlueprintsOutcomeCallable ListBlueprintsCallable(const Model::ListBlueprintsRequest& request) const;

        /**
         * An Async wrapper for ListBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBlueprintsAsync(const Model::ListBlueprintsRequest& request, const ListBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListCrawlersOutcomeCallable ListCrawlersCallable(const Model::ListCrawlersRequest& request) const;

        /**
         * An Async wrapper for ListCrawlers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCrawlersAsync(const Model::ListCrawlersRequest& request, const ListCrawlersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListCrawlsOutcomeCallable ListCrawlsCallable(const Model::ListCrawlsRequest& request) const;

        /**
         * An Async wrapper for ListCrawls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCrawlsAsync(const Model::ListCrawlsRequest& request, const ListCrawlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListCustomEntityTypesOutcomeCallable ListCustomEntityTypesCallable(const Model::ListCustomEntityTypesRequest& request) const;

        /**
         * An Async wrapper for ListCustomEntityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomEntityTypesAsync(const Model::ListCustomEntityTypesRequest& request, const ListCustomEntityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataQualityResultsOutcomeCallable ListDataQualityResultsCallable(const Model::ListDataQualityResultsRequest& request) const;

        /**
         * An Async wrapper for ListDataQualityResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataQualityResultsAsync(const Model::ListDataQualityResultsRequest& request, const ListDataQualityResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataQualityRuleRecommendationRunsOutcomeCallable ListDataQualityRuleRecommendationRunsCallable(const Model::ListDataQualityRuleRecommendationRunsRequest& request) const;

        /**
         * An Async wrapper for ListDataQualityRuleRecommendationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataQualityRuleRecommendationRunsAsync(const Model::ListDataQualityRuleRecommendationRunsRequest& request, const ListDataQualityRuleRecommendationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataQualityRulesetEvaluationRunsOutcomeCallable ListDataQualityRulesetEvaluationRunsCallable(const Model::ListDataQualityRulesetEvaluationRunsRequest& request) const;

        /**
         * An Async wrapper for ListDataQualityRulesetEvaluationRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataQualityRulesetEvaluationRunsAsync(const Model::ListDataQualityRulesetEvaluationRunsRequest& request, const ListDataQualityRulesetEvaluationRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDataQualityRulesetsOutcomeCallable ListDataQualityRulesetsCallable(const Model::ListDataQualityRulesetsRequest& request) const;

        /**
         * An Async wrapper for ListDataQualityRulesets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataQualityRulesetsAsync(const Model::ListDataQualityRulesetsRequest& request, const ListDataQualityRulesetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDevEndpointsOutcomeCallable ListDevEndpointsCallable(const Model::ListDevEndpointsRequest& request) const;

        /**
         * An Async wrapper for ListDevEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevEndpointsAsync(const Model::ListDevEndpointsRequest& request, const ListDevEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListMLTransformsOutcomeCallable ListMLTransformsCallable(const Model::ListMLTransformsRequest& request) const;

        /**
         * An Async wrapper for ListMLTransforms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMLTransformsAsync(const Model::ListMLTransformsRequest& request, const ListMLTransformsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRegistriesOutcomeCallable ListRegistriesCallable(const Model::ListRegistriesRequest& request) const;

        /**
         * An Async wrapper for ListRegistries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRegistriesAsync(const Model::ListRegistriesRequest& request, const ListRegistriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * An Async wrapper for ListSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemaVersionsAsync(const Model::ListSchemaVersionsRequest& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSchemasOutcomeCallable ListSchemasCallable(const Model::ListSchemasRequest& request) const;

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSchemasAsync(const Model::ListSchemasRequest& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSessionsOutcomeCallable ListSessionsCallable(const Model::ListSessionsRequest& request) const;

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSessionsAsync(const Model::ListSessionsRequest& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists statements for the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;

        /**
         * A Callable wrapper for ListStatements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStatementsOutcomeCallable ListStatementsCallable(const Model::ListStatementsRequest& request) const;

        /**
         * An Async wrapper for ListStatements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStatementsAsync(const Model::ListStatementsRequest& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTriggersOutcomeCallable ListTriggersCallable(const Model::ListTriggersRequest& request) const;

        /**
         * An Async wrapper for ListTriggers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTriggersAsync(const Model::ListTriggersRequest& request, const ListTriggersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListWorkflowsOutcomeCallable ListWorkflowsCallable(const Model::ListWorkflowsRequest& request) const;

        /**
         * An Async wrapper for ListWorkflows that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListWorkflowsAsync(const Model::ListWorkflowsRequest& request, const ListWorkflowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutDataCatalogEncryptionSettingsOutcomeCallable PutDataCatalogEncryptionSettingsCallable(const Model::PutDataCatalogEncryptionSettingsRequest& request) const;

        /**
         * An Async wrapper for PutDataCatalogEncryptionSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutDataCatalogEncryptionSettingsAsync(const Model::PutDataCatalogEncryptionSettingsRequest& request, const PutDataCatalogEncryptionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const Model::PutResourcePolicyRequest& request) const;

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutResourcePolicyAsync(const Model::PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutSchemaVersionMetadataOutcomeCallable PutSchemaVersionMetadataCallable(const Model::PutSchemaVersionMetadataRequest& request) const;

        /**
         * An Async wrapper for PutSchemaVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutSchemaVersionMetadataAsync(const Model::PutSchemaVersionMetadataRequest& request, const PutSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PutWorkflowRunPropertiesOutcomeCallable PutWorkflowRunPropertiesCallable(const Model::PutWorkflowRunPropertiesRequest& request) const;

        /**
         * An Async wrapper for PutWorkflowRunProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutWorkflowRunPropertiesAsync(const Model::PutWorkflowRunPropertiesRequest& request, const PutWorkflowRunPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::QuerySchemaVersionMetadataOutcomeCallable QuerySchemaVersionMetadataCallable(const Model::QuerySchemaVersionMetadataRequest& request) const;

        /**
         * An Async wrapper for QuerySchemaVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void QuerySchemaVersionMetadataAsync(const Model::QuerySchemaVersionMetadataRequest& request, const QuerySchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RegisterSchemaVersionOutcomeCallable RegisterSchemaVersionCallable(const Model::RegisterSchemaVersionRequest& request) const;

        /**
         * An Async wrapper for RegisterSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterSchemaVersionAsync(const Model::RegisterSchemaVersionRequest& request, const RegisterSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RemoveSchemaVersionMetadataOutcomeCallable RemoveSchemaVersionMetadataCallable(const Model::RemoveSchemaVersionMetadataRequest& request) const;

        /**
         * An Async wrapper for RemoveSchemaVersionMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveSchemaVersionMetadataAsync(const Model::RemoveSchemaVersionMetadataRequest& request, const RemoveSchemaVersionMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResetJobBookmarkOutcomeCallable ResetJobBookmarkCallable(const Model::ResetJobBookmarkRequest& request) const;

        /**
         * An Async wrapper for ResetJobBookmark that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetJobBookmarkAsync(const Model::ResetJobBookmarkRequest& request, const ResetJobBookmarkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ResumeWorkflowRunOutcomeCallable ResumeWorkflowRunCallable(const Model::ResumeWorkflowRunRequest& request) const;

        /**
         * An Async wrapper for ResumeWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeWorkflowRunAsync(const Model::ResumeWorkflowRunRequest& request, const ResumeWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Executes the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RunStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::RunStatementOutcome RunStatement(const Model::RunStatementRequest& request) const;

        /**
         * A Callable wrapper for RunStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RunStatementOutcomeCallable RunStatementCallable(const Model::RunStatementRequest& request) const;

        /**
         * An Async wrapper for RunStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RunStatementAsync(const Model::RunStatementRequest& request, const RunStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::SearchTablesOutcomeCallable SearchTablesCallable(const Model::SearchTablesRequest& request) const;

        /**
         * An Async wrapper for SearchTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchTablesAsync(const Model::SearchTablesRequest& request, const SearchTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new run of the specified blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartBlueprintRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBlueprintRunOutcome StartBlueprintRun(const Model::StartBlueprintRunRequest& request) const;

        /**
         * A Callable wrapper for StartBlueprintRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBlueprintRunOutcomeCallable StartBlueprintRunCallable(const Model::StartBlueprintRunRequest& request) const;

        /**
         * An Async wrapper for StartBlueprintRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBlueprintRunAsync(const Model::StartBlueprintRunRequest& request, const StartBlueprintRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartCrawlerOutcomeCallable StartCrawlerCallable(const Model::StartCrawlerRequest& request) const;

        /**
         * An Async wrapper for StartCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCrawlerAsync(const Model::StartCrawlerRequest& request, const StartCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartCrawlerScheduleOutcomeCallable StartCrawlerScheduleCallable(const Model::StartCrawlerScheduleRequest& request) const;

        /**
         * An Async wrapper for StartCrawlerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartCrawlerScheduleAsync(const Model::StartCrawlerScheduleRequest& request, const StartCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a recommendation run that is used to generate rules when you don't
         * know what rules to write. Glue Data Quality analyzes the data and comes up with
         * recommendations for a potential ruleset. You can then triage the ruleset and
         * modify the generated ruleset to your liking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartDataQualityRuleRecommendationRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDataQualityRuleRecommendationRunOutcome StartDataQualityRuleRecommendationRun(const Model::StartDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * A Callable wrapper for StartDataQualityRuleRecommendationRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDataQualityRuleRecommendationRunOutcomeCallable StartDataQualityRuleRecommendationRunCallable(const Model::StartDataQualityRuleRecommendationRunRequest& request) const;

        /**
         * An Async wrapper for StartDataQualityRuleRecommendationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataQualityRuleRecommendationRunAsync(const Model::StartDataQualityRuleRecommendationRunRequest& request, const StartDataQualityRuleRecommendationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartDataQualityRulesetEvaluationRunOutcomeCallable StartDataQualityRulesetEvaluationRunCallable(const Model::StartDataQualityRulesetEvaluationRunRequest& request) const;

        /**
         * An Async wrapper for StartDataQualityRulesetEvaluationRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDataQualityRulesetEvaluationRunAsync(const Model::StartDataQualityRulesetEvaluationRunRequest& request, const StartDataQualityRulesetEvaluationRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartExportLabelsTaskRunOutcomeCallable StartExportLabelsTaskRunCallable(const Model::StartExportLabelsTaskRunRequest& request) const;

        /**
         * An Async wrapper for StartExportLabelsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartExportLabelsTaskRunAsync(const Model::StartExportLabelsTaskRunRequest& request, const StartExportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartImportLabelsTaskRunOutcomeCallable StartImportLabelsTaskRunCallable(const Model::StartImportLabelsTaskRunRequest& request) const;

        /**
         * An Async wrapper for StartImportLabelsTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartImportLabelsTaskRunAsync(const Model::StartImportLabelsTaskRunRequest& request, const StartImportLabelsTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a job run using a job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;

        /**
         * A Callable wrapper for StartJobRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartJobRunOutcomeCallable StartJobRunCallable(const Model::StartJobRunRequest& request) const;

        /**
         * An Async wrapper for StartJobRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartJobRunAsync(const Model::StartJobRunRequest& request, const StartJobRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartMLEvaluationTaskRunOutcomeCallable StartMLEvaluationTaskRunCallable(const Model::StartMLEvaluationTaskRunRequest& request) const;

        /**
         * An Async wrapper for StartMLEvaluationTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMLEvaluationTaskRunAsync(const Model::StartMLEvaluationTaskRunRequest& request, const StartMLEvaluationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartMLLabelingSetGenerationTaskRunOutcomeCallable StartMLLabelingSetGenerationTaskRunCallable(const Model::StartMLLabelingSetGenerationTaskRunRequest& request) const;

        /**
         * An Async wrapper for StartMLLabelingSetGenerationTaskRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMLLabelingSetGenerationTaskRunAsync(const Model::StartMLLabelingSetGenerationTaskRunRequest& request, const StartMLLabelingSetGenerationTaskRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartTriggerOutcomeCallable StartTriggerCallable(const Model::StartTriggerRequest& request) const;

        /**
         * An Async wrapper for StartTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartTriggerAsync(const Model::StartTriggerRequest& request, const StartTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a new run of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowRunOutcome StartWorkflowRun(const Model::StartWorkflowRunRequest& request) const;

        /**
         * A Callable wrapper for StartWorkflowRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartWorkflowRunOutcomeCallable StartWorkflowRunCallable(const Model::StartWorkflowRunRequest& request) const;

        /**
         * An Async wrapper for StartWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartWorkflowRunAsync(const Model::StartWorkflowRunRequest& request, const StartWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopCrawlerOutcomeCallable StopCrawlerCallable(const Model::StopCrawlerRequest& request) const;

        /**
         * An Async wrapper for StopCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCrawlerAsync(const Model::StopCrawlerRequest& request, const StopCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopCrawlerScheduleOutcomeCallable StopCrawlerScheduleCallable(const Model::StopCrawlerScheduleRequest& request) const;

        /**
         * An Async wrapper for StopCrawlerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopCrawlerScheduleAsync(const Model::StopCrawlerScheduleRequest& request, const StopCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSessionOutcome StopSession(const Model::StopSessionRequest& request) const;

        /**
         * A Callable wrapper for StopSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopSessionOutcomeCallable StopSessionCallable(const Model::StopSessionRequest& request) const;

        /**
         * An Async wrapper for StopSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSessionAsync(const Model::StopSessionRequest& request, const StopSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specified trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTriggerOutcome StopTrigger(const Model::StopTriggerRequest& request) const;

        /**
         * A Callable wrapper for StopTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopTriggerOutcomeCallable StopTriggerCallable(const Model::StopTriggerRequest& request) const;

        /**
         * An Async wrapper for StopTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopTriggerAsync(const Model::StopTriggerRequest& request, const StopTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopWorkflowRunOutcomeCallable StopWorkflowRunCallable(const Model::StopWorkflowRunRequest& request) const;

        /**
         * An Async wrapper for StopWorkflowRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopWorkflowRunAsync(const Model::StopWorkflowRunRequest& request, const StopWorkflowRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UntagResource">AWS
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
         * <p>Updates a registered blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBlueprintOutcome UpdateBlueprint(const Model::UpdateBlueprintRequest& request) const;

        /**
         * A Callable wrapper for UpdateBlueprint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBlueprintOutcomeCallable UpdateBlueprintCallable(const Model::UpdateBlueprintRequest& request) const;

        /**
         * An Async wrapper for UpdateBlueprint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBlueprintAsync(const Model::UpdateBlueprintRequest& request, const UpdateBlueprintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateClassifierOutcomeCallable UpdateClassifierCallable(const Model::UpdateClassifierRequest& request) const;

        /**
         * An Async wrapper for UpdateClassifier that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateClassifierAsync(const Model::UpdateClassifierRequest& request, const UpdateClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateColumnStatisticsForPartitionOutcomeCallable UpdateColumnStatisticsForPartitionCallable(const Model::UpdateColumnStatisticsForPartitionRequest& request) const;

        /**
         * An Async wrapper for UpdateColumnStatisticsForPartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateColumnStatisticsForPartitionAsync(const Model::UpdateColumnStatisticsForPartitionRequest& request, const UpdateColumnStatisticsForPartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateColumnStatisticsForTableOutcomeCallable UpdateColumnStatisticsForTableCallable(const Model::UpdateColumnStatisticsForTableRequest& request) const;

        /**
         * An Async wrapper for UpdateColumnStatisticsForTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateColumnStatisticsForTableAsync(const Model::UpdateColumnStatisticsForTableRequest& request, const UpdateColumnStatisticsForTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateConnectionOutcomeCallable UpdateConnectionCallable(const Model::UpdateConnectionRequest& request) const;

        /**
         * An Async wrapper for UpdateConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectionAsync(const Model::UpdateConnectionRequest& request, const UpdateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateCrawlerOutcomeCallable UpdateCrawlerCallable(const Model::UpdateCrawlerRequest& request) const;

        /**
         * An Async wrapper for UpdateCrawler that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCrawlerAsync(const Model::UpdateCrawlerRequest& request, const UpdateCrawlerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateCrawlerScheduleOutcomeCallable UpdateCrawlerScheduleCallable(const Model::UpdateCrawlerScheduleRequest& request) const;

        /**
         * An Async wrapper for UpdateCrawlerSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCrawlerScheduleAsync(const Model::UpdateCrawlerScheduleRequest& request, const UpdateCrawlerScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified data quality ruleset.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDataQualityRuleset">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataQualityRulesetOutcome UpdateDataQualityRuleset(const Model::UpdateDataQualityRulesetRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataQualityRuleset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDataQualityRulesetOutcomeCallable UpdateDataQualityRulesetCallable(const Model::UpdateDataQualityRulesetRequest& request) const;

        /**
         * An Async wrapper for UpdateDataQualityRuleset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDataQualityRulesetAsync(const Model::UpdateDataQualityRulesetRequest& request, const UpdateDataQualityRulesetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDatabaseOutcomeCallable UpdateDatabaseCallable(const Model::UpdateDatabaseRequest& request) const;

        /**
         * An Async wrapper for UpdateDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDatabaseAsync(const Model::UpdateDatabaseRequest& request, const UpdateDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevEndpointOutcome UpdateDevEndpoint(const Model::UpdateDevEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDevEndpointOutcomeCallable UpdateDevEndpointCallable(const Model::UpdateDevEndpointRequest& request) const;

        /**
         * An Async wrapper for UpdateDevEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevEndpointAsync(const Model::UpdateDevEndpointRequest& request, const UpdateDevEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateJobFromSourceControlOutcomeCallable UpdateJobFromSourceControlCallable(const Model::UpdateJobFromSourceControlRequest& request) const;

        /**
         * An Async wrapper for UpdateJobFromSourceControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobFromSourceControlAsync(const Model::UpdateJobFromSourceControlRequest& request, const UpdateJobFromSourceControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateMLTransformOutcomeCallable UpdateMLTransformCallable(const Model::UpdateMLTransformRequest& request) const;

        /**
         * An Async wrapper for UpdateMLTransform that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMLTransformAsync(const Model::UpdateMLTransformRequest& request, const UpdateMLTransformResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartitionOutcome UpdatePartition(const Model::UpdatePartitionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePartition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePartitionOutcomeCallable UpdatePartitionCallable(const Model::UpdatePartitionRequest& request) const;

        /**
         * An Async wrapper for UpdatePartition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePartitionAsync(const Model::UpdatePartitionRequest& request, const UpdatePartitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateRegistryOutcomeCallable UpdateRegistryCallable(const Model::UpdateRegistryRequest& request) const;

        /**
         * An Async wrapper for UpdateRegistry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRegistryAsync(const Model::UpdateRegistryRequest& request, const UpdateRegistryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSchemaOutcomeCallable UpdateSchemaCallable(const Model::UpdateSchemaRequest& request) const;

        /**
         * An Async wrapper for UpdateSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSchemaAsync(const Model::UpdateSchemaRequest& request, const UpdateSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateSourceControlFromJobOutcomeCallable UpdateSourceControlFromJobCallable(const Model::UpdateSourceControlFromJobRequest& request) const;

        /**
         * An Async wrapper for UpdateSourceControlFromJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSourceControlFromJobAsync(const Model::UpdateSourceControlFromJobRequest& request, const UpdateSourceControlFromJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a metadata table in the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;

        /**
         * A Callable wrapper for UpdateTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTableOutcomeCallable UpdateTableCallable(const Model::UpdateTableRequest& request) const;

        /**
         * An Async wrapper for UpdateTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTableAsync(const Model::UpdateTableRequest& request, const UpdateTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a trigger definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTriggerOutcome UpdateTrigger(const Model::UpdateTriggerRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrigger that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTriggerOutcomeCallable UpdateTriggerCallable(const Model::UpdateTriggerRequest& request) const;

        /**
         * An Async wrapper for UpdateTrigger that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTriggerAsync(const Model::UpdateTriggerRequest& request, const UpdateTriggerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateUserDefinedFunctionOutcomeCallable UpdateUserDefinedFunctionCallable(const Model::UpdateUserDefinedFunctionRequest& request) const;

        /**
         * An Async wrapper for UpdateUserDefinedFunction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserDefinedFunctionAsync(const Model::UpdateUserDefinedFunctionRequest& request, const UpdateUserDefinedFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateWorkflow">AWS
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
