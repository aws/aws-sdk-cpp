/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/GlueServiceClientModel.h>
#include <aws/glue/GlueLegacyAsyncMacros.h>

namespace Aws
{
namespace Glue
{
  /**
   * <fullname>Glue</fullname> <p>Defines the public endpoint for the Glue
   * service.</p>
   */
  class AWS_GLUE_API GlueClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchCreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchCreatePartitionOutcome BatchCreatePartition(const Model::BatchCreatePartitionRequest& request) const;


        /**
         * <p>Deletes a list of connection definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteConnectionOutcome BatchDeleteConnection(const Model::BatchDeleteConnectionRequest& request) const;


        /**
         * <p>Deletes one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeletePartitionOutcome BatchDeletePartition(const Model::BatchDeletePartitionRequest& request) const;


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
         * <p>Deletes a specified batch of versions of a table.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchDeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDeleteTableVersionOutcome BatchDeleteTableVersion(const Model::BatchDeleteTableVersionRequest& request) const;


        /**
         * <p>Retrieves information about a list of blueprints.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetBlueprintsOutcome BatchGetBlueprints(const Model::BatchGetBlueprintsRequest& request) const;


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
         * <p>Retrieves the details for the custom patterns specified by a list of
         * names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetCustomEntityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCustomEntityTypesOutcome BatchGetCustomEntityTypes(const Model::BatchGetCustomEntityTypesRequest& request) const;


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
         * <p>Retrieves partitions in a batch request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchGetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetPartitionOutcome BatchGetPartition(const Model::BatchGetPartitionRequest& request) const;


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
         * <p>Stops one or more job runs for a specified job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchStopJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStopJobRunOutcome BatchStopJobRun(const Model::BatchStopJobRunRequest& request) const;


        /**
         * <p>Updates one or more partitions in a batch operation.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/BatchUpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchUpdatePartitionOutcome BatchUpdatePartition(const Model::BatchUpdatePartitionRequest& request) const;


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
         * <p>Cancels the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;


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
         * <p>Registers a blueprint with Glue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBlueprintOutcome CreateBlueprint(const Model::CreateBlueprintRequest& request) const;


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
         * <p>Creates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectionOutcome CreateConnection(const Model::CreateConnectionRequest& request) const;


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
         * <p>Creates a new database in a Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDatabaseOutcome CreateDatabase(const Model::CreateDatabaseRequest& request) const;


        /**
         * <p>Creates a new development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevEndpointOutcome CreateDevEndpoint(const Model::CreateDevEndpointRequest& request) const;


        /**
         * <p>Creates a new job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;


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
         * <p>Creates a new partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionOutcome CreatePartition(const Model::CreatePartitionRequest& request) const;


        /**
         * <p>Creates a specified partition index in an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreatePartitionIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePartitionIndexOutcome CreatePartitionIndex(const Model::CreatePartitionIndexRequest& request) const;


        /**
         * <p>Creates a new registry which may be used to hold a collection of
         * schemas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRegistryOutcome CreateRegistry(const Model::CreateRegistryRequest& request) const;


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
         * <p>Transforms a directed acyclic graph (DAG) into code.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScriptOutcome CreateScript(const Model::CreateScriptRequest& request) const;


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
         * <p>Creates a new session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSessionOutcome CreateSession(const Model::CreateSessionRequest& request) const;


        /**
         * <p>Creates a new table definition in the Data Catalog.</p><p><h3>See Also:</h3> 
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTableOutcome CreateTable(const Model::CreateTableRequest& request) const;


        /**
         * <p>Creates a new trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTriggerOutcome CreateTrigger(const Model::CreateTriggerRequest& request) const;


        /**
         * <p>Creates a new function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserDefinedFunctionOutcome CreateUserDefinedFunction(const Model::CreateUserDefinedFunctionRequest& request) const;


        /**
         * <p>Creates a new workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CreateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWorkflowOutcome CreateWorkflow(const Model::CreateWorkflowRequest& request) const;


        /**
         * <p>Deletes an existing blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBlueprintOutcome DeleteBlueprint(const Model::DeleteBlueprintRequest& request) const;


        /**
         * <p>Removes a classifier from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClassifierOutcome DeleteClassifier(const Model::DeleteClassifierRequest& request) const;


        /**
         * <p>Delete the partition column statistics of a column.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>DeletePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteColumnStatisticsForPartitionOutcome DeleteColumnStatisticsForPartition(const Model::DeleteColumnStatisticsForPartitionRequest& request) const;


        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>DeleteTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteColumnStatisticsForTableOutcome DeleteColumnStatisticsForTable(const Model::DeleteColumnStatisticsForTableRequest& request) const;


        /**
         * <p>Deletes a connection from the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionOutcome DeleteConnection(const Model::DeleteConnectionRequest& request) const;


        /**
         * <p>Removes a specified crawler from the Glue Data Catalog, unless the crawler
         * state is <code>RUNNING</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCrawlerOutcome DeleteCrawler(const Model::DeleteCrawlerRequest& request) const;


        /**
         * <p>Deletes a custom pattern by specifying its name.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteCustomEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomEntityTypeOutcome DeleteCustomEntityType(const Model::DeleteCustomEntityTypeRequest& request) const;


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
         * <p>Deletes a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevEndpointOutcome DeleteDevEndpoint(const Model::DeleteDevEndpointRequest& request) const;


        /**
         * <p>Deletes a specified job definition. If the job definition is not found, no
         * exception is thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;


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
         * <p>Deletes a specified partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionOutcome DeletePartition(const Model::DeletePartitionRequest& request) const;


        /**
         * <p>Deletes a specified partition index from an existing table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeletePartitionIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePartitionIndexOutcome DeletePartitionIndex(const Model::DeletePartitionIndexRequest& request) const;


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
         * <p>Deletes a specified policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;


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
         * <p>Deletes a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityConfigurationOutcome DeleteSecurityConfiguration(const Model::DeleteSecurityConfigurationRequest& request) const;


        /**
         * <p>Deletes the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSessionOutcome DeleteSession(const Model::DeleteSessionRequest& request) const;


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
         * <p>Deletes a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTableVersionOutcome DeleteTableVersion(const Model::DeleteTableVersionRequest& request) const;


        /**
         * <p>Deletes a specified trigger. If the trigger is not found, no exception is
         * thrown.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTriggerOutcome DeleteTrigger(const Model::DeleteTriggerRequest& request) const;


        /**
         * <p>Deletes an existing function definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserDefinedFunctionOutcome DeleteUserDefinedFunction(const Model::DeleteUserDefinedFunctionRequest& request) const;


        /**
         * <p>Deletes a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DeleteWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWorkflowOutcome DeleteWorkflow(const Model::DeleteWorkflowRequest& request) const;


        /**
         * <p>Retrieves the details of a blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintOutcome GetBlueprint(const Model::GetBlueprintRequest& request) const;


        /**
         * <p>Retrieves the details of a blueprint run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprintRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintRunOutcome GetBlueprintRun(const Model::GetBlueprintRunRequest& request) const;


        /**
         * <p>Retrieves the details of blueprint runs for a specified
         * blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetBlueprintRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintRunsOutcome GetBlueprintRuns(const Model::GetBlueprintRunsRequest& request) const;


        /**
         * <p>Retrieves the status of a migration operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCatalogImportStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCatalogImportStatusOutcome GetCatalogImportStatus(const Model::GetCatalogImportStatusRequest& request) const;


        /**
         * <p>Retrieve a classifier by name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifier">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifierOutcome GetClassifier(const Model::GetClassifierRequest& request) const;


        /**
         * <p>Lists all classifier objects in the Data Catalog.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetClassifiers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetClassifiersOutcome GetClassifiers(const Model::GetClassifiersRequest& request) const;


        /**
         * <p>Retrieves partition statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetPartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsForPartitionOutcome GetColumnStatisticsForPartition(const Model::GetColumnStatisticsForPartitionRequest& request) const;


        /**
         * <p>Retrieves table statistics of columns.</p> <p>The Identity and Access
         * Management (IAM) permission required for this operation is
         * <code>GetTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::GetColumnStatisticsForTableOutcome GetColumnStatisticsForTable(const Model::GetColumnStatisticsForTableRequest& request) const;


        /**
         * <p>Retrieves a connection definition from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;


        /**
         * <p>Retrieves a list of connection definitions from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionsOutcome GetConnections(const Model::GetConnectionsRequest& request) const;


        /**
         * <p>Retrieves metadata for a specified crawler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawler">AWS API
         * Reference</a></p>
         */
        virtual Model::GetCrawlerOutcome GetCrawler(const Model::GetCrawlerRequest& request) const;


        /**
         * <p>Retrieves metrics about specified crawlers.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlerMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlerMetricsOutcome GetCrawlerMetrics(const Model::GetCrawlerMetricsRequest& request) const;


        /**
         * <p>Retrieves metadata for all crawlers defined in the customer
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCrawlers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCrawlersOutcome GetCrawlers(const Model::GetCrawlersRequest& request) const;


        /**
         * <p>Retrieves the details of a custom pattern by specifying its
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetCustomEntityType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomEntityTypeOutcome GetCustomEntityType(const Model::GetCustomEntityTypeRequest& request) const;


        /**
         * <p>Retrieves the security configuration for a specified catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataCatalogEncryptionSettingsOutcome GetDataCatalogEncryptionSettings(const Model::GetDataCatalogEncryptionSettingsRequest& request) const;


        /**
         * <p>Retrieves the definition of a specified database.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabaseOutcome GetDatabase(const Model::GetDatabaseRequest& request) const;


        /**
         * <p>Retrieves all databases defined in a given Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDatabasesOutcome GetDatabases(const Model::GetDatabasesRequest& request) const;


        /**
         * <p>Transforms a Python script into a directed acyclic graph (DAG).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetDataflowGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowGraphOutcome GetDataflowGraph(const Model::GetDataflowGraphRequest& request) const;


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
         * <p>Retrieves an existing job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJob">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;


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
         * <p>Retrieves the metadata for a given job run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRun">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunOutcome GetJobRun(const Model::GetJobRunRequest& request) const;


        /**
         * <p>Retrieves metadata for all runs of a given job definition.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobRuns">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobRunsOutcome GetJobRuns(const Model::GetJobRunsRequest& request) const;


        /**
         * <p>Retrieves all current job definitions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::GetJobsOutcome GetJobs(const Model::GetJobsRequest& request) const;


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
         * <p>Creates mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetMapping">AWS API
         * Reference</a></p>
         */
        virtual Model::GetMappingOutcome GetMapping(const Model::GetMappingRequest& request) const;


        /**
         * <p>Retrieves information about a specified partition.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionOutcome GetPartition(const Model::GetPartitionRequest& request) const;


        /**
         * <p>Retrieves the partition indexes associated with a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitionIndexes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionIndexesOutcome GetPartitionIndexes(const Model::GetPartitionIndexesRequest& request) const;


        /**
         * <p>Retrieves information about the partitions in a table.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPartitions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPartitionsOutcome GetPartitions(const Model::GetPartitionsRequest& request) const;


        /**
         * <p>Gets code to perform a specified mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetPlan">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPlanOutcome GetPlan(const Model::GetPlanRequest& request) const;


        /**
         * <p>Describes the specified registry in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistryOutcome GetRegistry(const Model::GetRegistryRequest& request) const;


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
         * <p>Retrieves a specified resource policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;


        /**
         * <p>Describes the specified schema in detail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchema">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSchemaOutcome GetSchema(const Model::GetSchemaRequest& request) const;


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
         * <p>Get the specified schema by its unique ID assigned when a version of the
         * schema is created or registered. Schema versions in Deleted status will not be
         * included in the results.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaVersionOutcome GetSchemaVersion(const Model::GetSchemaVersionRequest& request) const;


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
         * <p>Retrieves a specified security configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationOutcome GetSecurityConfiguration(const Model::GetSecurityConfigurationRequest& request) const;


        /**
         * <p>Retrieves a list of all security configurations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSecurityConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecurityConfigurationsOutcome GetSecurityConfigurations(const Model::GetSecurityConfigurationsRequest& request) const;


        /**
         * <p>Retrieves the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetSession">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;


        /**
         * <p>Retrieves the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementOutcome GetStatement(const Model::GetStatementRequest& request) const;


        /**
         * <p>Retrieves the <code>Table</code> definition in a Data Catalog for a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTable">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTableOutcome GetTable(const Model::GetTableRequest& request) const;


        /**
         * <p>Retrieves a specified version of a table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionOutcome GetTableVersion(const Model::GetTableVersionRequest& request) const;


        /**
         * <p>Retrieves a list of strings that identify available versions of a specified
         * table.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTableVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTableVersionsOutcome GetTableVersions(const Model::GetTableVersionsRequest& request) const;


        /**
         * <p>Retrieves the definitions of some or all of the tables in a given
         * <code>Database</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTables">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTablesOutcome GetTables(const Model::GetTablesRequest& request) const;


        /**
         * <p>Retrieves a list of tags associated with a resource.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTags">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;


        /**
         * <p>Retrieves the definition of a trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTrigger">AWS API
         * Reference</a></p>
         */
        virtual Model::GetTriggerOutcome GetTrigger(const Model::GetTriggerRequest& request) const;


        /**
         * <p>Gets all the triggers associated with a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetTriggers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTriggersOutcome GetTriggers(const Model::GetTriggersRequest& request) const;


        /**
         * 
         */
        virtual Model::GetUnfilteredPartitionMetadataOutcome GetUnfilteredPartitionMetadata(const Model::GetUnfilteredPartitionMetadataRequest& request) const;


        /**
         * 
         */
        virtual Model::GetUnfilteredPartitionsMetadataOutcome GetUnfilteredPartitionsMetadata(const Model::GetUnfilteredPartitionsMetadataRequest& request) const;


        /**
         * 
         */
        virtual Model::GetUnfilteredTableMetadataOutcome GetUnfilteredTableMetadata(const Model::GetUnfilteredTableMetadataRequest& request) const;


        /**
         * <p>Retrieves a specified function definition from the Data
         * Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDefinedFunctionOutcome GetUserDefinedFunction(const Model::GetUserDefinedFunctionRequest& request) const;


        /**
         * <p>Retrieves multiple function definitions from the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetUserDefinedFunctions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUserDefinedFunctionsOutcome GetUserDefinedFunctions(const Model::GetUserDefinedFunctionsRequest& request) const;


        /**
         * <p>Retrieves resource metadata for a workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowOutcome GetWorkflow(const Model::GetWorkflowRequest& request) const;


        /**
         * <p>Retrieves the metadata for a given workflow run. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunOutcome GetWorkflowRun(const Model::GetWorkflowRunRequest& request) const;


        /**
         * <p>Retrieves the workflow run properties which were set during the
         * run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRunProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunPropertiesOutcome GetWorkflowRunProperties(const Model::GetWorkflowRunPropertiesRequest& request) const;


        /**
         * <p>Retrieves metadata for all runs of a given workflow.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GetWorkflowRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowRunsOutcome GetWorkflowRuns(const Model::GetWorkflowRunsRequest& request) const;


        /**
         * <p>Imports an existing Amazon Athena Data Catalog to Glue.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ImportCatalogToGlue">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportCatalogToGlueOutcome ImportCatalogToGlue(const Model::ImportCatalogToGlueRequest& request) const;


        /**
         * <p>Lists all the blueprint names in an account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBlueprintsOutcome ListBlueprints(const Model::ListBlueprintsRequest& request) const;


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
         * <p>Lists all the custom patterns that have been created.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListCustomEntityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomEntityTypesOutcome ListCustomEntityTypes(const Model::ListCustomEntityTypesRequest& request) const;


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
         * <p>Returns a list of registries that you have created, with minimal registry
         * information. Registries in the <code>Deleting</code> status will not be included
         * in the results. Empty results will be returned if there are no registries
         * available.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListRegistries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRegistriesOutcome ListRegistries(const Model::ListRegistriesRequest& request) const;


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
         * <p>Retrieve a list of sessions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;


        /**
         * <p>Lists statements for the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;


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
         * <p>Lists names of workflows created in the account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ListWorkflows">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowsOutcome ListWorkflows(const Model::ListWorkflowsRequest& request) const;


        /**
         * <p>Sets the security configuration for a specified catalog. After the
         * configuration has been set, the specified encryption is applied to every catalog
         * write thereafter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutDataCatalogEncryptionSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataCatalogEncryptionSettingsOutcome PutDataCatalogEncryptionSettings(const Model::PutDataCatalogEncryptionSettingsRequest& request) const;


        /**
         * <p>Sets the Data Catalog resource policy for access control.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;


        /**
         * <p>Puts the metadata key value pair for a specified schema version ID. A maximum
         * of 10 key value pairs will be allowed per schema version. They can be added over
         * one or more calls.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/PutSchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSchemaVersionMetadataOutcome PutSchemaVersionMetadata(const Model::PutSchemaVersionMetadataRequest& request) const;


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
         * <p>Queries for the schema version metadata information. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/QuerySchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::QuerySchemaVersionMetadataOutcome QuerySchemaVersionMetadata(const Model::QuerySchemaVersionMetadataRequest& request) const;


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
         * <p>Removes a key value pair from the schema version metadata for the specified
         * schema version ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RemoveSchemaVersionMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveSchemaVersionMetadataOutcome RemoveSchemaVersionMetadata(const Model::RemoveSchemaVersionMetadataRequest& request) const;


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
         * <p>Restarts selected nodes of a previous partially completed workflow run and
         * resumes the workflow run. The selected nodes and all nodes that are downstream
         * from the selected nodes are run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ResumeWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeWorkflowRunOutcome ResumeWorkflowRun(const Model::ResumeWorkflowRunRequest& request) const;


        /**
         * <p>Executes the statement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/RunStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::RunStatementOutcome RunStatement(const Model::RunStatementRequest& request) const;


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
         * <p>Starts a new run of the specified blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartBlueprintRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBlueprintRunOutcome StartBlueprintRun(const Model::StartBlueprintRunRequest& request) const;


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
         * <p>Changes the schedule state of the specified crawler to
         * <code>SCHEDULED</code>, unless the crawler is already running or the schedule
         * state is already <code>SCHEDULED</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCrawlerScheduleOutcome StartCrawlerSchedule(const Model::StartCrawlerScheduleRequest& request) const;


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
         * <p>Starts a job run using a job definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartJobRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartJobRunOutcome StartJobRun(const Model::StartJobRunRequest& request) const;


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
         * <p>Starts an existing trigger. See <a
         * href="https://docs.aws.amazon.com/glue/latest/dg/trigger-job.html">Triggering
         * Jobs</a> for information about how different types of trigger are
         * started.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StartTriggerOutcome StartTrigger(const Model::StartTriggerRequest& request) const;


        /**
         * <p>Starts a new run of the specified workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StartWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowRunOutcome StartWorkflowRun(const Model::StartWorkflowRunRequest& request) const;


        /**
         * <p>If the specified crawler is running, stops the crawl.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCrawlerOutcome StopCrawler(const Model::StopCrawlerRequest& request) const;


        /**
         * <p>Sets the schedule state of the specified crawler to
         * <code>NOT_SCHEDULED</code>, but does not stop the crawler if it is already
         * running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::StopCrawlerScheduleOutcome StopCrawlerSchedule(const Model::StopCrawlerScheduleRequest& request) const;


        /**
         * <p>Stops the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSessionOutcome StopSession(const Model::StopSessionRequest& request) const;


        /**
         * <p>Stops a specified trigger.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::StopTriggerOutcome StopTrigger(const Model::StopTriggerRequest& request) const;


        /**
         * <p>Stops the execution of the specified workflow run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/StopWorkflowRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopWorkflowRunOutcome StopWorkflowRun(const Model::StopWorkflowRunRequest& request) const;


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
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a registered blueprint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateBlueprint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBlueprintOutcome UpdateBlueprint(const Model::UpdateBlueprintRequest& request) const;


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
         * <p>Creates or updates partition statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdatePartition</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForPartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateColumnStatisticsForPartitionOutcome UpdateColumnStatisticsForPartition(const Model::UpdateColumnStatisticsForPartitionRequest& request) const;


        /**
         * <p>Creates or updates table statistics of columns.</p> <p>The Identity and
         * Access Management (IAM) permission required for this operation is
         * <code>UpdateTable</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateColumnStatisticsForTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateColumnStatisticsForTableOutcome UpdateColumnStatisticsForTable(const Model::UpdateColumnStatisticsForTableRequest& request) const;


        /**
         * <p>Updates a connection definition in the Data Catalog.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionOutcome UpdateConnection(const Model::UpdateConnectionRequest& request) const;


        /**
         * <p>Updates a crawler. If a crawler is running, you must stop it using
         * <code>StopCrawler</code> before updating it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawler">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrawlerOutcome UpdateCrawler(const Model::UpdateCrawlerRequest& request) const;


        /**
         * <p>Updates the schedule of a crawler using a <code>cron</code> expression.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateCrawlerSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCrawlerScheduleOutcome UpdateCrawlerSchedule(const Model::UpdateCrawlerScheduleRequest& request) const;


        /**
         * <p>Updates an existing database definition in a Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDatabaseOutcome UpdateDatabase(const Model::UpdateDatabaseRequest& request) const;


        /**
         * <p>Updates a specified development endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateDevEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevEndpointOutcome UpdateDevEndpoint(const Model::UpdateDevEndpointRequest& request) const;


        /**
         * <p>Updates an existing job definition. The previous job definition is completely
         * overwritten by this information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;


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
         * <p>Updates a partition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdatePartition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePartitionOutcome UpdatePartition(const Model::UpdatePartitionRequest& request) const;


        /**
         * <p>Updates an existing registry which is used to hold a collection of schemas.
         * The updated properties relate to the registry, and do not modify any of the
         * schemas within the registry. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateRegistry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRegistryOutcome UpdateRegistry(const Model::UpdateRegistryRequest& request) const;


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
         * <p>Updates a metadata table in the Data Catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTable">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTableOutcome UpdateTable(const Model::UpdateTableRequest& request) const;


        /**
         * <p>Updates a trigger definition.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateTrigger">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTriggerOutcome UpdateTrigger(const Model::UpdateTriggerRequest& request) const;


        /**
         * <p>Updates an existing function definition in the Data Catalog.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateUserDefinedFunction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserDefinedFunctionOutcome UpdateUserDefinedFunction(const Model::UpdateUserDefinedFunctionRequest& request) const;


        /**
         * <p>Updates an existing workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UpdateWorkflow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWorkflowOutcome UpdateWorkflow(const Model::UpdateWorkflowRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GlueEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const GlueClientConfiguration& clientConfiguration);

      GlueClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GlueEndpointProviderBase> m_endpointProvider;
  };

} // namespace Glue
} // namespace Aws
