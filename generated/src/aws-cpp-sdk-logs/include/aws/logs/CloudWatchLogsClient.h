/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/CloudWatchLogsServiceClientModel.h>

namespace Aws
{
namespace CloudWatchLogs
{
  /**
   * <p>You can use Amazon CloudWatch Logs to monitor, store, and access your log
   * files from EC2 instances, CloudTrail, and other sources. You can then retrieve
   * the associated log data from CloudWatch Logs using the CloudWatch console.
   * Alternatively, you can use CloudWatch Logs commands in the Amazon Web Services
   * CLI, CloudWatch Logs API, or CloudWatch Logs SDK.</p> <p>You can use CloudWatch
   * Logs to:</p> <ul> <li> <p> <b>Monitor logs from EC2 instances in real time</b>:
   * You can use CloudWatch Logs to monitor applications and systems using log data.
   * For example, CloudWatch Logs can track the number of errors that occur in your
   * application logs. Then, it can send you a notification whenever the rate of
   * errors exceeds a threshold that you specify. CloudWatch Logs uses your log data
   * for monitoring so no code changes are required. For example, you can monitor
   * application logs for specific literal terms (such as "NullReferenceException").
   * You can also count the number of occurrences of a literal term at a particular
   * position in log data (such as "404" status codes in an Apache access log). When
   * the term you are searching for is found, CloudWatch Logs reports the data to a
   * CloudWatch metric that you specify.</p> </li> <li> <p> <b>Monitor CloudTrail
   * logged events</b>: You can create alarms in CloudWatch and receive notifications
   * of particular API activity as captured by CloudTrail. You can use the
   * notification to perform troubleshooting.</p> </li> <li> <p> <b>Archive log
   * data</b>: You can use CloudWatch Logs to store your log data in highly durable
   * storage. You can change the log retention setting so that any log events earlier
   * than this setting are automatically deleted. The CloudWatch Logs agent helps to
   * quickly send both rotated and non-rotated log data off of a host and into the
   * log service. You can then access the raw log data when you need it.</p> </li>
   * </ul>
   */
  class AWS_CLOUDWATCHLOGS_API CloudWatchLogsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchLogsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef CloudWatchLogsClientConfiguration ClientConfigurationType;
      typedef CloudWatchLogsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration& clientConfiguration = Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration(),
                             std::shared_ptr<CloudWatchLogsEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<CloudWatchLogsEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration& clientConfiguration = Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchLogsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<CloudWatchLogsEndpointProviderBase> endpointProvider = Aws::MakeShared<CloudWatchLogsEndpointProvider>(ALLOCATION_TAG),
                             const Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration& clientConfiguration = Aws::CloudWatchLogs::CloudWatchLogsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudWatchLogsClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudWatchLogsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudWatchLogsClient();

        /**
         * <p>Associates the specified KMS key with the specified log group.</p>
         * <p>Associating a KMS key with a log group overrides any existing associations
         * between the log group and a KMS key. After a KMS key is associated with a log
         * group, all newly ingested data for the log group is encrypted using the KMS key.
         * This association is stored as long as the data encrypted with the KMS keyis
         * still within CloudWatch Logs. This enables CloudWatch Logs to decrypt this data
         * whenever it is requested.</p>  <p>CloudWatch Logs supports only
         * symmetric KMS keys. Do not use an associate an asymmetric KMS key with your log
         * group. For more information, see <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p>  <p>It can take up to 5
         * minutes for this operation to take effect.</p> <p>If you attempt to associate a
         * KMS key with a log group but the KMS key does not exist or the KMS key is
         * disabled, you receive an <code>InvalidParameterException</code> error.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AssociateKmsKey">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateKmsKeyOutcome AssociateKmsKey(const Model::AssociateKmsKeyRequest& request) const;

        /**
         * A Callable wrapper for AssociateKmsKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateKmsKeyRequestT = Model::AssociateKmsKeyRequest>
        Model::AssociateKmsKeyOutcomeCallable AssociateKmsKeyCallable(const AssociateKmsKeyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::AssociateKmsKey, request);
        }

        /**
         * An Async wrapper for AssociateKmsKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateKmsKeyRequestT = Model::AssociateKmsKeyRequest>
        void AssociateKmsKeyAsync(const AssociateKmsKeyRequestT& request, const AssociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::AssociateKmsKey, request, handler, context);
        }

        /**
         * <p>Cancels the specified export task.</p> <p>The task must be in the
         * <code>PENDING</code> or <code>RUNNING</code> state.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CancelExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelExportTaskOutcome CancelExportTask(const Model::CancelExportTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelExportTaskRequestT = Model::CancelExportTaskRequest>
        Model::CancelExportTaskOutcomeCallable CancelExportTaskCallable(const CancelExportTaskRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::CancelExportTask, request);
        }

        /**
         * An Async wrapper for CancelExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelExportTaskRequestT = Model::CancelExportTaskRequest>
        void CancelExportTaskAsync(const CancelExportTaskRequestT& request, const CancelExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::CancelExportTask, request, handler, context);
        }

        /**
         * <p>Creates an export task so that you can efficiently export data from a log
         * group to an Amazon S3 bucket. When you perform a <code>CreateExportTask</code>
         * operation, you must use credentials that have permission to write to the S3
         * bucket that you specify as the destination.</p> <p>Exporting log data to S3
         * buckets that are encrypted by KMS is supported. Exporting log data to Amazon S3
         * buckets that have S3 Object Lock enabled with a retention period is also
         * supported.</p> <p>Exporting to S3 buckets that are encrypted with AES-256 is
         * supported. </p> <p>This is an asynchronous call. If all the required information
         * is provided, this operation initiates an export task and responds with the ID of
         * the task. After the task has started, you can use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_DescribeExportTasks.html">DescribeExportTasks</a>
         * to get the status of the export task. Each account can only have one active
         * (<code>RUNNING</code> or <code>PENDING</code>) export task at a time. To cancel
         * an export task, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_CancelExportTask.html">CancelExportTask</a>.</p>
         * <p>You can export logs from multiple log groups or multiple time ranges to the
         * same S3 bucket. To separate log data for each export task, specify a prefix to
         * be used as the Amazon S3 key prefix for all exported objects.</p> 
         * <p>Time-based sorting on chunks of log data inside an exported file is not
         * guaranteed. You can sort the exported log field data by using Linux
         * utilities.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateExportTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateExportTaskOutcome CreateExportTask(const Model::CreateExportTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateExportTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateExportTaskRequestT = Model::CreateExportTaskRequest>
        Model::CreateExportTaskOutcomeCallable CreateExportTaskCallable(const CreateExportTaskRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::CreateExportTask, request);
        }

        /**
         * An Async wrapper for CreateExportTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateExportTaskRequestT = Model::CreateExportTaskRequest>
        void CreateExportTaskAsync(const CreateExportTaskRequestT& request, const CreateExportTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::CreateExportTask, request, handler, context);
        }

        /**
         * <p>Creates a log group with the specified name. You can create up to 20,000 log
         * groups per account.</p> <p>You must use the following guidelines when naming a
         * log group:</p> <ul> <li> <p>Log group names must be unique within a Region for
         * an Amazon Web Services account.</p> </li> <li> <p>Log group names can be between
         * 1 and 512 characters long.</p> </li> <li> <p>Log group names consist of the
         * following characters: a-z, A-Z, 0-9, '_' (underscore), '-' (hyphen), '/'
         * (forward slash), '.' (period), and '#' (number sign)</p> </li> </ul> <p>When you
         * create a log group, by default the log events in the log group do not expire. To
         * set a retention policy so that events expire and are deleted after a specified
         * time, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutRetentionPolicy.html">PutRetentionPolicy</a>.</p>
         * <p>If you associate an KMS key with the log group, ingested data is encrypted
         * using the KMS key. This association is stored as long as the data encrypted with
         * the KMS key is still within CloudWatch Logs. This enables CloudWatch Logs to
         * decrypt this data whenever it is requested.</p> <p>If you attempt to associate a
         * KMS key with the log group but the KMS keydoes not exist or the KMS key is
         * disabled, you receive an <code>InvalidParameterException</code> error. </p>
         *  <p>CloudWatch Logs supports only symmetric KMS keys. Do not
         * associate an asymmetric KMS key with your log group. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
         * Symmetric and Asymmetric Keys</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogGroupOutcome CreateLogGroup(const Model::CreateLogGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateLogGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLogGroupRequestT = Model::CreateLogGroupRequest>
        Model::CreateLogGroupOutcomeCallable CreateLogGroupCallable(const CreateLogGroupRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::CreateLogGroup, request);
        }

        /**
         * An Async wrapper for CreateLogGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLogGroupRequestT = Model::CreateLogGroupRequest>
        void CreateLogGroupAsync(const CreateLogGroupRequestT& request, const CreateLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::CreateLogGroup, request, handler, context);
        }

        /**
         * <p>Creates a log stream for the specified log group. A log stream is a sequence
         * of log events that originate from a single source, such as an application
         * instance or a resource that is being monitored.</p> <p>There is no limit on the
         * number of log streams that you can create for a log group. There is a limit of
         * 50 TPS on <code>CreateLogStream</code> operations, after which transactions are
         * throttled.</p> <p>You must use the following guidelines when naming a log
         * stream:</p> <ul> <li> <p>Log stream names must be unique within the log
         * group.</p> </li> <li> <p>Log stream names can be between 1 and 512 characters
         * long.</p> </li> <li> <p>Don't use ':' (colon) or '*' (asterisk) characters.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/CreateLogStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogStreamOutcome CreateLogStream(const Model::CreateLogStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateLogStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLogStreamRequestT = Model::CreateLogStreamRequest>
        Model::CreateLogStreamOutcomeCallable CreateLogStreamCallable(const CreateLogStreamRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::CreateLogStream, request);
        }

        /**
         * An Async wrapper for CreateLogStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLogStreamRequestT = Model::CreateLogStreamRequest>
        void CreateLogStreamAsync(const CreateLogStreamRequestT& request, const CreateLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::CreateLogStream, request, handler, context);
        }

        /**
         * <p>Deletes the data protection policy from the specified log group. </p> <p>For
         * more information about data protection policies, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDataProtectionPolicy.html">PutDataProtectionPolicy</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataProtectionPolicyOutcome DeleteDataProtectionPolicy(const Model::DeleteDataProtectionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataProtectionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataProtectionPolicyRequestT = Model::DeleteDataProtectionPolicyRequest>
        Model::DeleteDataProtectionPolicyOutcomeCallable DeleteDataProtectionPolicyCallable(const DeleteDataProtectionPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteDataProtectionPolicy, request);
        }

        /**
         * An Async wrapper for DeleteDataProtectionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataProtectionPolicyRequestT = Model::DeleteDataProtectionPolicyRequest>
        void DeleteDataProtectionPolicyAsync(const DeleteDataProtectionPolicyRequestT& request, const DeleteDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteDataProtectionPolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified destination, and eventually disables all the
         * subscription filters that publish to it. This operation does not delete the
         * physical resource encapsulated by the destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const DeleteDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteDestination, request);
        }

        /**
         * An Async wrapper for DeleteDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        void DeleteDestinationAsync(const DeleteDestinationRequestT& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteDestination, request, handler, context);
        }

        /**
         * <p>Deletes the specified log group and permanently deletes all the archived log
         * events associated with the log group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogGroupOutcome DeleteLogGroup(const Model::DeleteLogGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteLogGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLogGroupRequestT = Model::DeleteLogGroupRequest>
        Model::DeleteLogGroupOutcomeCallable DeleteLogGroupCallable(const DeleteLogGroupRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteLogGroup, request);
        }

        /**
         * An Async wrapper for DeleteLogGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLogGroupRequestT = Model::DeleteLogGroupRequest>
        void DeleteLogGroupAsync(const DeleteLogGroupRequestT& request, const DeleteLogGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteLogGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified log stream and permanently deletes all the archived log
         * events associated with the log stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteLogStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogStreamOutcome DeleteLogStream(const Model::DeleteLogStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteLogStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLogStreamRequestT = Model::DeleteLogStreamRequest>
        Model::DeleteLogStreamOutcomeCallable DeleteLogStreamCallable(const DeleteLogStreamRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteLogStream, request);
        }

        /**
         * An Async wrapper for DeleteLogStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLogStreamRequestT = Model::DeleteLogStreamRequest>
        void DeleteLogStreamAsync(const DeleteLogStreamRequestT& request, const DeleteLogStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteLogStream, request, handler, context);
        }

        /**
         * <p>Deletes the specified metric filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMetricFilterOutcome DeleteMetricFilter(const Model::DeleteMetricFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteMetricFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteMetricFilterRequestT = Model::DeleteMetricFilterRequest>
        Model::DeleteMetricFilterOutcomeCallable DeleteMetricFilterCallable(const DeleteMetricFilterRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteMetricFilter, request);
        }

        /**
         * An Async wrapper for DeleteMetricFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMetricFilterRequestT = Model::DeleteMetricFilterRequest>
        void DeleteMetricFilterAsync(const DeleteMetricFilterRequestT& request, const DeleteMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteMetricFilter, request, handler, context);
        }

        /**
         * <p>Deletes a saved CloudWatch Logs Insights query definition. A query definition
         * contains details about a saved CloudWatch Logs Insights query.</p> <p>Each
         * <code>DeleteQueryDefinition</code> operation can delete one query
         * definition.</p> <p>You must have the <code>logs:DeleteQueryDefinition</code>
         * permission to be able to perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteQueryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueryDefinitionOutcome DeleteQueryDefinition(const Model::DeleteQueryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteQueryDefinitionRequestT = Model::DeleteQueryDefinitionRequest>
        Model::DeleteQueryDefinitionOutcomeCallable DeleteQueryDefinitionCallable(const DeleteQueryDefinitionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteQueryDefinition, request);
        }

        /**
         * An Async wrapper for DeleteQueryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteQueryDefinitionRequestT = Model::DeleteQueryDefinitionRequest>
        void DeleteQueryDefinitionAsync(const DeleteQueryDefinitionRequestT& request, const DeleteQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteQueryDefinition, request, handler, context);
        }

        /**
         * <p>Deletes a resource policy from this account. This revokes the access of the
         * identities in that policy to put log events to this account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified retention policy.</p> <p>Log events do not expire if
         * they belong to log groups without a retention policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionPolicyOutcome DeleteRetentionPolicy(const Model::DeleteRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRetentionPolicyRequestT = Model::DeleteRetentionPolicyRequest>
        Model::DeleteRetentionPolicyOutcomeCallable DeleteRetentionPolicyCallable(const DeleteRetentionPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteRetentionPolicy, request);
        }

        /**
         * An Async wrapper for DeleteRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRetentionPolicyRequestT = Model::DeleteRetentionPolicyRequest>
        void DeleteRetentionPolicyAsync(const DeleteRetentionPolicyRequestT& request, const DeleteRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteRetentionPolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified subscription filter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DeleteSubscriptionFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionFilterOutcome DeleteSubscriptionFilter(const Model::DeleteSubscriptionFilterRequest& request) const;

        /**
         * A Callable wrapper for DeleteSubscriptionFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSubscriptionFilterRequestT = Model::DeleteSubscriptionFilterRequest>
        Model::DeleteSubscriptionFilterOutcomeCallable DeleteSubscriptionFilterCallable(const DeleteSubscriptionFilterRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DeleteSubscriptionFilter, request);
        }

        /**
         * An Async wrapper for DeleteSubscriptionFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSubscriptionFilterRequestT = Model::DeleteSubscriptionFilterRequest>
        void DeleteSubscriptionFilterAsync(const DeleteSubscriptionFilterRequestT& request, const DeleteSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DeleteSubscriptionFilter, request, handler, context);
        }

        /**
         * <p>Lists all your destinations. The results are ASCII-sorted by destination
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDestinationsOutcome DescribeDestinations(const Model::DescribeDestinationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDestinationsRequestT = Model::DescribeDestinationsRequest>
        Model::DescribeDestinationsOutcomeCallable DescribeDestinationsCallable(const DescribeDestinationsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeDestinations, request);
        }

        /**
         * An Async wrapper for DescribeDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDestinationsRequestT = Model::DescribeDestinationsRequest>
        void DescribeDestinationsAsync(const DescribeDestinationsRequestT& request, const DescribeDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeDestinations, request, handler, context);
        }

        /**
         * <p>Lists the specified export tasks. You can list all your export tasks or
         * filter the results based on task ID or task status.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeExportTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExportTasksOutcome DescribeExportTasks(const Model::DescribeExportTasksRequest& request) const;

        /**
         * A Callable wrapper for DescribeExportTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExportTasksRequestT = Model::DescribeExportTasksRequest>
        Model::DescribeExportTasksOutcomeCallable DescribeExportTasksCallable(const DescribeExportTasksRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeExportTasks, request);
        }

        /**
         * An Async wrapper for DescribeExportTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExportTasksRequestT = Model::DescribeExportTasksRequest>
        void DescribeExportTasksAsync(const DescribeExportTasksRequestT& request, const DescribeExportTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeExportTasks, request, handler, context);
        }

        /**
         * <p>Lists the specified log groups. You can list all your log groups or filter
         * the results by prefix. The results are ASCII-sorted by log group name.</p>
         * <p>CloudWatch Logs doesn’t support IAM policies that control access to the
         * <code>DescribeLogGroups</code> action by using the
         * <code>aws:ResourceTag/<i>key-name</i> </code> condition key. Other CloudWatch
         * Logs actions do support the use of the <code>aws:ResourceTag/<i>key-name</i>
         * </code> condition key to control access. For more information about using tags
         * to control access, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html">Controlling
         * access to Amazon Web Services resources using tags</a>.</p> <p>If you are using
         * CloudWatch cross-account observability, you can use this operation in a
         * monitoring account and view data from the linked source accounts. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogGroupsOutcome DescribeLogGroups(const Model::DescribeLogGroupsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLogGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLogGroupsRequestT = Model::DescribeLogGroupsRequest>
        Model::DescribeLogGroupsOutcomeCallable DescribeLogGroupsCallable(const DescribeLogGroupsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeLogGroups, request);
        }

        /**
         * An Async wrapper for DescribeLogGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLogGroupsRequestT = Model::DescribeLogGroupsRequest>
        void DescribeLogGroupsAsync(const DescribeLogGroupsRequestT& request, const DescribeLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeLogGroups, request, handler, context);
        }

        /**
         * <p>Lists the log streams for the specified log group. You can list all the log
         * streams or filter the results by prefix. You can also control how the results
         * are ordered.</p> <p>You can specify the log group to search by using either
         * <code>logGroupIdentifier</code> or <code>logGroupName</code>. You must include
         * one of these two parameters, but you can't include both. </p> <p>This operation
         * has a limit of five transactions per second, after which transactions are
         * throttled.</p> <p>If you are using CloudWatch cross-account observability, you
         * can use this operation in a monitoring account and view data from the linked
         * source accounts. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeLogStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogStreamsOutcome DescribeLogStreams(const Model::DescribeLogStreamsRequest& request) const;

        /**
         * A Callable wrapper for DescribeLogStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLogStreamsRequestT = Model::DescribeLogStreamsRequest>
        Model::DescribeLogStreamsOutcomeCallable DescribeLogStreamsCallable(const DescribeLogStreamsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeLogStreams, request);
        }

        /**
         * An Async wrapper for DescribeLogStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLogStreamsRequestT = Model::DescribeLogStreamsRequest>
        void DescribeLogStreamsAsync(const DescribeLogStreamsRequestT& request, const DescribeLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeLogStreams, request, handler, context);
        }

        /**
         * <p>Lists the specified metric filters. You can list all of the metric filters or
         * filter the results by log name, prefix, metric name, or metric namespace. The
         * results are ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeMetricFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMetricFiltersOutcome DescribeMetricFilters(const Model::DescribeMetricFiltersRequest& request) const;

        /**
         * A Callable wrapper for DescribeMetricFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMetricFiltersRequestT = Model::DescribeMetricFiltersRequest>
        Model::DescribeMetricFiltersOutcomeCallable DescribeMetricFiltersCallable(const DescribeMetricFiltersRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeMetricFilters, request);
        }

        /**
         * An Async wrapper for DescribeMetricFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMetricFiltersRequestT = Model::DescribeMetricFiltersRequest>
        void DescribeMetricFiltersAsync(const DescribeMetricFiltersRequestT& request, const DescribeMetricFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeMetricFilters, request, handler, context);
        }

        /**
         * <p>Returns a list of CloudWatch Logs Insights queries that are scheduled,
         * running, or have been run recently in this account. You can request all queries
         * or limit it to queries of a specific log group or queries with a certain
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueriesOutcome DescribeQueries(const Model::DescribeQueriesRequest& request) const;

        /**
         * A Callable wrapper for DescribeQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQueriesRequestT = Model::DescribeQueriesRequest>
        Model::DescribeQueriesOutcomeCallable DescribeQueriesCallable(const DescribeQueriesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeQueries, request);
        }

        /**
         * An Async wrapper for DescribeQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQueriesRequestT = Model::DescribeQueriesRequest>
        void DescribeQueriesAsync(const DescribeQueriesRequestT& request, const DescribeQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeQueries, request, handler, context);
        }

        /**
         * <p>This operation returns a paginated list of your saved CloudWatch Logs
         * Insights query definitions.</p> <p>You can use the
         * <code>queryDefinitionNamePrefix</code> parameter to limit the results to only
         * the query definitions that have names that start with a certain
         * string.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeQueryDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeQueryDefinitionsOutcome DescribeQueryDefinitions(const Model::DescribeQueryDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeQueryDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeQueryDefinitionsRequestT = Model::DescribeQueryDefinitionsRequest>
        Model::DescribeQueryDefinitionsOutcomeCallable DescribeQueryDefinitionsCallable(const DescribeQueryDefinitionsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeQueryDefinitions, request);
        }

        /**
         * An Async wrapper for DescribeQueryDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeQueryDefinitionsRequestT = Model::DescribeQueryDefinitionsRequest>
        void DescribeQueryDefinitionsAsync(const DescribeQueryDefinitionsRequestT& request, const DescribeQueryDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeQueryDefinitions, request, handler, context);
        }

        /**
         * <p>Lists the resource policies in this account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePoliciesOutcome DescribeResourcePolicies(const Model::DescribeResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePoliciesRequestT = Model::DescribeResourcePoliciesRequest>
        Model::DescribeResourcePoliciesOutcomeCallable DescribeResourcePoliciesCallable(const DescribeResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeResourcePolicies, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePoliciesRequestT = Model::DescribeResourcePoliciesRequest>
        void DescribeResourcePoliciesAsync(const DescribeResourcePoliciesRequestT& request, const DescribeResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeResourcePolicies, request, handler, context);
        }

        /**
         * <p>Lists the subscription filters for the specified log group. You can list all
         * the subscription filters or filter the results by prefix. The results are
         * ASCII-sorted by filter name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DescribeSubscriptionFilters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSubscriptionFiltersOutcome DescribeSubscriptionFilters(const Model::DescribeSubscriptionFiltersRequest& request) const;

        /**
         * A Callable wrapper for DescribeSubscriptionFilters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSubscriptionFiltersRequestT = Model::DescribeSubscriptionFiltersRequest>
        Model::DescribeSubscriptionFiltersOutcomeCallable DescribeSubscriptionFiltersCallable(const DescribeSubscriptionFiltersRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DescribeSubscriptionFilters, request);
        }

        /**
         * An Async wrapper for DescribeSubscriptionFilters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSubscriptionFiltersRequestT = Model::DescribeSubscriptionFiltersRequest>
        void DescribeSubscriptionFiltersAsync(const DescribeSubscriptionFiltersRequestT& request, const DescribeSubscriptionFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DescribeSubscriptionFilters, request, handler, context);
        }

        /**
         * <p>Disassociates the associated KMS key from the specified log group.</p>
         * <p>After the KMS key is disassociated from the log group, CloudWatch Logs stops
         * encrypting newly ingested data for the log group. All previously ingested data
         * remains encrypted, and CloudWatch Logs requires permissions for the KMS key
         * whenever the encrypted data is requested.</p> <p>Note that it can take up to 5
         * minutes for this operation to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/DisassociateKmsKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateKmsKeyOutcome DisassociateKmsKey(const Model::DisassociateKmsKeyRequest& request) const;

        /**
         * A Callable wrapper for DisassociateKmsKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateKmsKeyRequestT = Model::DisassociateKmsKeyRequest>
        Model::DisassociateKmsKeyOutcomeCallable DisassociateKmsKeyCallable(const DisassociateKmsKeyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::DisassociateKmsKey, request);
        }

        /**
         * An Async wrapper for DisassociateKmsKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateKmsKeyRequestT = Model::DisassociateKmsKeyRequest>
        void DisassociateKmsKeyAsync(const DisassociateKmsKeyRequestT& request, const DisassociateKmsKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::DisassociateKmsKey, request, handler, context);
        }

        /**
         * <p>Lists log events from the specified log group. You can list all the log
         * events or filter the results using a filter pattern, a time range, and the name
         * of the log stream.</p> <p>You must have the <code>logs;FilterLogEvents</code>
         * permission to perform this operation.</p> <p>You can specify the log group to
         * search by using either <code>logGroupIdentifier</code> or
         * <code>logGroupName</code>. You must include one of these two parameters, but you
         * can't include both. </p> <p>By default, this operation returns as many log
         * events as can fit in 1 MB (up to 10,000 log events) or all the events found
         * within the specified time range. If the results include a token, that means
         * there are more log events available. You can get additional results by
         * specifying the token in a subsequent call. This operation can return empty
         * results while there are more log events available through the token.</p> <p>The
         * returned log events are sorted by event timestamp, the timestamp when the event
         * was ingested by CloudWatch Logs, and the ID of the <code>PutLogEvents</code>
         * request.</p> <p>If you are using CloudWatch cross-account observability, you can
         * use this operation in a monitoring account and view data from the linked source
         * accounts. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/FilterLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::FilterLogEventsOutcome FilterLogEvents(const Model::FilterLogEventsRequest& request) const;

        /**
         * A Callable wrapper for FilterLogEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename FilterLogEventsRequestT = Model::FilterLogEventsRequest>
        Model::FilterLogEventsOutcomeCallable FilterLogEventsCallable(const FilterLogEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::FilterLogEvents, request);
        }

        /**
         * An Async wrapper for FilterLogEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename FilterLogEventsRequestT = Model::FilterLogEventsRequest>
        void FilterLogEventsAsync(const FilterLogEventsRequestT& request, const FilterLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::FilterLogEvents, request, handler, context);
        }

        /**
         * <p>Returns information about a log group data protection policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataProtectionPolicyOutcome GetDataProtectionPolicy(const Model::GetDataProtectionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetDataProtectionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDataProtectionPolicyRequestT = Model::GetDataProtectionPolicyRequest>
        Model::GetDataProtectionPolicyOutcomeCallable GetDataProtectionPolicyCallable(const GetDataProtectionPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::GetDataProtectionPolicy, request);
        }

        /**
         * An Async wrapper for GetDataProtectionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDataProtectionPolicyRequestT = Model::GetDataProtectionPolicyRequest>
        void GetDataProtectionPolicyAsync(const GetDataProtectionPolicyRequestT& request, const GetDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::GetDataProtectionPolicy, request, handler, context);
        }

        /**
         * <p>Lists log events from the specified log stream. You can list all of the log
         * events or filter using a time range.</p> <p>By default, this operation returns
         * as many log events as can fit in a response size of 1MB (up to 10,000 log
         * events). You can get additional log events by specifying one of the tokens in a
         * subsequent call. This operation can return empty results while there are more
         * log events available through the token.</p> <p>If you are using CloudWatch
         * cross-account observability, you can use this operation in a monitoring account
         * and view data from the linked source accounts. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p> <p>You can specify the log group to search
         * by using either <code>logGroupIdentifier</code> or <code>logGroupName</code>.
         * You must include one of these two parameters, but you can't include both.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogEventsOutcome GetLogEvents(const Model::GetLogEventsRequest& request) const;

        /**
         * A Callable wrapper for GetLogEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLogEventsRequestT = Model::GetLogEventsRequest>
        Model::GetLogEventsOutcomeCallable GetLogEventsCallable(const GetLogEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::GetLogEvents, request);
        }

        /**
         * An Async wrapper for GetLogEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLogEventsRequestT = Model::GetLogEventsRequest>
        void GetLogEventsAsync(const GetLogEventsRequestT& request, const GetLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::GetLogEvents, request, handler, context);
        }

        /**
         * <p>Returns a list of the fields that are included in log events in the specified
         * log group. Includes the percentage of log events that contain each field. The
         * search is limited to a time period that you specify.</p> <p>You can specify the
         * log group to search by using either <code>logGroupIdentifier</code> or
         * <code>logGroupName</code>. You must specify one of these parameters, but you
         * can't specify both. </p> <p>In the results, fields that start with
         * <code>@</code> are fields generated by CloudWatch Logs. For example,
         * <code>@timestamp</code> is the timestamp of each log event. For more information
         * about the fields that are generated by CloudWatch logs, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_AnalyzeLogData-discoverable-fields.html">Supported
         * Logs and Discovered Fields</a>.</p> <p>The response results are sorted by the
         * frequency percentage, starting with the highest percentage.</p> <p>If you are
         * using CloudWatch cross-account observability, you can use this operation in a
         * monitoring account and view data from the linked source accounts. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogGroupFields">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogGroupFieldsOutcome GetLogGroupFields(const Model::GetLogGroupFieldsRequest& request) const;

        /**
         * A Callable wrapper for GetLogGroupFields that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLogGroupFieldsRequestT = Model::GetLogGroupFieldsRequest>
        Model::GetLogGroupFieldsOutcomeCallable GetLogGroupFieldsCallable(const GetLogGroupFieldsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::GetLogGroupFields, request);
        }

        /**
         * An Async wrapper for GetLogGroupFields that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLogGroupFieldsRequestT = Model::GetLogGroupFieldsRequest>
        void GetLogGroupFieldsAsync(const GetLogGroupFieldsRequestT& request, const GetLogGroupFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::GetLogGroupFields, request, handler, context);
        }

        /**
         * <p>Retrieves all of the fields and values of a single log event. All fields are
         * retrieved, even if the original query that produced the
         * <code>logRecordPointer</code> retrieved only a subset of fields. Fields are
         * returned as field name/field value pairs.</p> <p>The full unparsed log event is
         * returned within <code>@message</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetLogRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLogRecordOutcome GetLogRecord(const Model::GetLogRecordRequest& request) const;

        /**
         * A Callable wrapper for GetLogRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLogRecordRequestT = Model::GetLogRecordRequest>
        Model::GetLogRecordOutcomeCallable GetLogRecordCallable(const GetLogRecordRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::GetLogRecord, request);
        }

        /**
         * An Async wrapper for GetLogRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLogRecordRequestT = Model::GetLogRecordRequest>
        void GetLogRecordAsync(const GetLogRecordRequestT& request, const GetLogRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::GetLogRecord, request, handler, context);
        }

        /**
         * <p>Returns the results from the specified query.</p> <p>Only the fields
         * requested in the query are returned, along with a <code>@ptr</code> field, which
         * is the identifier for the log record. You can use the value of <code>@ptr</code>
         * in a <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetLogRecord.html">GetLogRecord</a>
         * operation to get the full log record.</p> <p> <code>GetQueryResults</code> does
         * not start running a query. To run a query, use <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>.</p>
         * <p>If the value of the <code>Status</code> field in the output is
         * <code>Running</code>, this operation returns only partial results. If you see a
         * value of <code>Scheduled</code> or <code>Running</code> for the status, you can
         * retry the operation later to see the final results. </p> <p>If you are using
         * CloudWatch cross-account observability, you can use this operation in a
         * monitoring account to start queries in linked source accounts. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/GetQueryResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryResultsOutcome GetQueryResults(const Model::GetQueryResultsRequest& request) const;

        /**
         * A Callable wrapper for GetQueryResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
        Model::GetQueryResultsOutcomeCallable GetQueryResultsCallable(const GetQueryResultsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::GetQueryResults, request);
        }

        /**
         * An Async wrapper for GetQueryResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetQueryResultsRequestT = Model::GetQueryResultsRequest>
        void GetQueryResultsAsync(const GetQueryResultsRequestT& request, const GetQueryResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::GetQueryResults, request, handler, context);
        }

        /**
         * <p>Displays the tags associated with a CloudWatch Logs resource. Currently, log
         * groups and destinations support tagging.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a data protection policy for the specified log group. A data
         * protection policy can help safeguard sensitive data that's ingested by the log
         * group by auditing and masking the sensitive log data.</p> 
         * <p>Sensitive data is detected and masked when it is ingested into the log group.
         * When you set a data protection policy, log events ingested into the log group
         * before that time are not masked.</p>  <p>By default, when a user
         * views a log event that includes masked data, the sensitive data is replaced by
         * asterisks. A user who has the <code>logs:Unmask</code> permission can use a <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetLogEvents.html">GetLogEvents</a>
         * or <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_FilterLogEvents.html">FilterLogEvents</a>
         * operation with the <code>unmask</code> parameter set to <code>true</code> to
         * view the unmasked log events. Users with the <code>logs:Unmask</code> can also
         * view unmasked data in the CloudWatch Logs console by running a CloudWatch Logs
         * Insights query with the <code>unmask</code> query command.</p> <p>For more
         * information, including a list of types of data that can be audited and masked,
         * see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data.html">Protect
         * sensitive log data with masking</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDataProtectionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDataProtectionPolicyOutcome PutDataProtectionPolicy(const Model::PutDataProtectionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutDataProtectionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDataProtectionPolicyRequestT = Model::PutDataProtectionPolicyRequest>
        Model::PutDataProtectionPolicyOutcomeCallable PutDataProtectionPolicyCallable(const PutDataProtectionPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutDataProtectionPolicy, request);
        }

        /**
         * An Async wrapper for PutDataProtectionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDataProtectionPolicyRequestT = Model::PutDataProtectionPolicyRequest>
        void PutDataProtectionPolicyAsync(const PutDataProtectionPolicyRequestT& request, const PutDataProtectionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutDataProtectionPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates a destination. This operation is used only to create
         * destinations for cross-account subscriptions.</p> <p>A destination encapsulates
         * a physical resource (such as an Amazon Kinesis stream). With a destination, you
         * can subscribe to a real-time stream of log events for a different account,
         * ingested using <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>Through an access policy, a destination controls what is written to it. By
         * default, <code>PutDestination</code> does not set any access policy with the
         * destination, which means a cross-account user cannot call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutSubscriptionFilter.html">PutSubscriptionFilter</a>
         * against this destination. To enable this, the destination owner must call <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutDestinationPolicy.html">PutDestinationPolicy</a>
         * after <code>PutDestination</code>.</p> <p>To perform a
         * <code>PutDestination</code> operation, you must also have the
         * <code>iam:PassRole</code> permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDestinationOutcome PutDestination(const Model::PutDestinationRequest& request) const;

        /**
         * A Callable wrapper for PutDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDestinationRequestT = Model::PutDestinationRequest>
        Model::PutDestinationOutcomeCallable PutDestinationCallable(const PutDestinationRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutDestination, request);
        }

        /**
         * An Async wrapper for PutDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDestinationRequestT = Model::PutDestinationRequest>
        void PutDestinationAsync(const PutDestinationRequestT& request, const PutDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutDestination, request, handler, context);
        }

        /**
         * <p>Creates or updates an access policy associated with an existing destination.
         * An access policy is an <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies_overview.html">IAM
         * policy document</a> that is used to authorize claims to register a subscription
         * filter against a given destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutDestinationPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDestinationPolicyOutcome PutDestinationPolicy(const Model::PutDestinationPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutDestinationPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDestinationPolicyRequestT = Model::PutDestinationPolicyRequest>
        Model::PutDestinationPolicyOutcomeCallable PutDestinationPolicyCallable(const PutDestinationPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutDestinationPolicy, request);
        }

        /**
         * An Async wrapper for PutDestinationPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDestinationPolicyRequestT = Model::PutDestinationPolicyRequest>
        void PutDestinationPolicyAsync(const PutDestinationPolicyRequestT& request, const PutDestinationPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutDestinationPolicy, request, handler, context);
        }

        /**
         * <p>Uploads a batch of log events to the specified log stream.</p> 
         * <p>The sequence token is now ignored in <code>PutLogEvents</code> actions.
         * <code>PutLogEvents</code> actions are always accepted and never return
         * <code>InvalidSequenceTokenException</code> or
         * <code>DataAlreadyAcceptedException</code> even if the sequence token is not
         * valid. You can use parallel <code>PutLogEvents</code> actions on the same log
         * stream. </p>  <p>The batch of events must satisfy the following
         * constraints:</p> <ul> <li> <p>The maximum batch size is 1,048,576 bytes. This
         * size is calculated as the sum of all event messages in UTF-8, plus 26 bytes for
         * each log event.</p> </li> <li> <p>None of the log events in the batch can be
         * more than 2 hours in the future.</p> </li> <li> <p>None of the log events in the
         * batch can be more than 14 days in the past. Also, none of the log events can be
         * from earlier than the retention period of the log group.</p> </li> <li> <p>The
         * log events in the batch must be in chronological order by their timestamp. The
         * timestamp is the time that the event occurred, expressed as the number of
         * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>. (In Amazon Web
         * Services Tools for PowerShell and the Amazon Web Services SDK for .NET, the
         * timestamp is specified in .NET format: <code>yyyy-mm-ddThh:mm:ss</code>. For
         * example, <code>2017-09-15T13:45:30</code>.) </p> </li> <li> <p>A batch of log
         * events in a single request cannot span more than 24 hours. Otherwise, the
         * operation fails.</p> </li> <li> <p>The maximum number of log events in a batch
         * is 10,000.</p> </li> <li>  <p>The quota of five requests per second
         * per log stream has been removed. Instead, <code>PutLogEvents</code> actions are
         * throttled based on a per-second per-account quota. You can request an increase
         * to the per-second throttling quota by using the Service Quotas service.</p>
         *  </li> </ul> <p>If a call to <code>PutLogEvents</code> returns
         * "UnrecognizedClientException" the most likely cause is a non-valid Amazon Web
         * Services access key ID or secret key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLogEventsOutcome PutLogEvents(const Model::PutLogEventsRequest& request) const;

        /**
         * A Callable wrapper for PutLogEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutLogEventsRequestT = Model::PutLogEventsRequest>
        Model::PutLogEventsOutcomeCallable PutLogEventsCallable(const PutLogEventsRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutLogEvents, request);
        }

        /**
         * An Async wrapper for PutLogEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutLogEventsRequestT = Model::PutLogEventsRequest>
        void PutLogEventsAsync(const PutLogEventsRequestT& request, const PutLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutLogEvents, request, handler, context);
        }

        /**
         * <p>Creates or updates a metric filter and associates it with the specified log
         * group. With metric filters, you can configure rules to extract metric data from
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>.</p>
         * <p>The maximum number of metric filters that can be associated with a log group
         * is 100.</p> <p>When you create a metric filter, you can also optionally assign a
         * unit and dimensions to the metric that is created.</p>  <p>Metrics
         * extracted from log events are charged as custom metrics. To prevent unexpected
         * high charges, do not specify high-cardinality fields such as
         * <code>IPAddress</code> or <code>requestID</code> as dimensions. Each different
         * value found for a dimension is treated as a separate metric and accrues charges
         * as a separate custom metric. </p> <p>CloudWatch Logs disables a metric filter if
         * it generates 1,000 different name/value pairs for your specified dimensions
         * within a certain amount of time. This helps to prevent accidental high
         * charges.</p> <p>You can also set up a billing alarm to alert you if your charges
         * are higher than expected. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/monitor_estimated_charges_with_cloudwatch.html">
         * Creating a Billing Alarm to Monitor Your Estimated Amazon Web Services
         * Charges</a>. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMetricFilterOutcome PutMetricFilter(const Model::PutMetricFilterRequest& request) const;

        /**
         * A Callable wrapper for PutMetricFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMetricFilterRequestT = Model::PutMetricFilterRequest>
        Model::PutMetricFilterOutcomeCallable PutMetricFilterCallable(const PutMetricFilterRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutMetricFilter, request);
        }

        /**
         * An Async wrapper for PutMetricFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMetricFilterRequestT = Model::PutMetricFilterRequest>
        void PutMetricFilterAsync(const PutMetricFilterRequestT& request, const PutMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutMetricFilter, request, handler, context);
        }

        /**
         * <p>Creates or updates a query definition for CloudWatch Logs Insights. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/AnalyzingLogData.html">Analyzing
         * Log Data with CloudWatch Logs Insights</a>.</p> <p>To update a query definition,
         * specify its <code>queryDefinitionId</code> in your request. The values of
         * <code>name</code>, <code>queryString</code>, and <code>logGroupNames</code> are
         * changed to the values that you specify in your update operation. No current
         * values are retained from the current query definition. For example, imagine
         * updating a current query definition that includes log groups. If you don't
         * specify the <code>logGroupNames</code> parameter in your update operation, the
         * query definition changes to contain no log groups.</p> <p>You must have the
         * <code>logs:PutQueryDefinition</code> permission to be able to perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutQueryDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutQueryDefinitionOutcome PutQueryDefinition(const Model::PutQueryDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutQueryDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutQueryDefinitionRequestT = Model::PutQueryDefinitionRequest>
        Model::PutQueryDefinitionOutcomeCallable PutQueryDefinitionCallable(const PutQueryDefinitionRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutQueryDefinition, request);
        }

        /**
         * An Async wrapper for PutQueryDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutQueryDefinitionRequestT = Model::PutQueryDefinitionRequest>
        void PutQueryDefinitionAsync(const PutQueryDefinitionRequestT& request, const PutQueryDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutQueryDefinition, request, handler, context);
        }

        /**
         * <p>Creates or updates a resource policy allowing other Amazon Web Services
         * services to put log events to this account, such as Amazon Route 53. An account
         * can have up to 10 resource policies per Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Sets the retention of the specified log group. With a retention policy, you
         * can configure the number of days for which to retain log events in the specified
         * log group.</p>  <p>CloudWatch Logs doesn’t immediately delete log events
         * when they reach their retention setting. It typically takes up to 72 hours after
         * that before log events are deleted, but in rare situations might take
         * longer.</p> <p>To illustrate, imagine that you change a log group to have a
         * longer retention setting when it contains log events that are past the
         * expiration date, but haven’t been deleted. Those log events will take up to 72
         * hours to be deleted after the new retention date is reached. To make sure that
         * log data is deleted permanently, keep a log group at its lower retention setting
         * until 72 hours after the previous retention period ends. Alternatively, wait to
         * change the retention setting until you confirm that the earlier log events are
         * deleted. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutRetentionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionPolicyOutcome PutRetentionPolicy(const Model::PutRetentionPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutRetentionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRetentionPolicyRequestT = Model::PutRetentionPolicyRequest>
        Model::PutRetentionPolicyOutcomeCallable PutRetentionPolicyCallable(const PutRetentionPolicyRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutRetentionPolicy, request);
        }

        /**
         * An Async wrapper for PutRetentionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRetentionPolicyRequestT = Model::PutRetentionPolicyRequest>
        void PutRetentionPolicyAsync(const PutRetentionPolicyRequestT& request, const PutRetentionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutRetentionPolicy, request, handler, context);
        }

        /**
         * <p>Creates or updates a subscription filter and associates it with the specified
         * log group. With subscription filters, you can subscribe to a real-time stream of
         * log events ingested through <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_PutLogEvents.html">PutLogEvents</a>
         * and have them delivered to a specific destination. When log events are sent to
         * the receiving service, they are Base64 encoded and compressed with the GZIP
         * format.</p> <p>The following destinations are supported for subscription
         * filters:</p> <ul> <li> <p>An Amazon Kinesis data stream belonging to the same
         * account as the subscription filter, for same-account delivery.</p> </li> <li>
         * <p>A logical destination that belongs to a different account, for cross-account
         * delivery.</p> </li> <li> <p>An Amazon Kinesis Data Firehose delivery stream that
         * belongs to the same account as the subscription filter, for same-account
         * delivery.</p> </li> <li> <p>An Lambda function that belongs to the same account
         * as the subscription filter, for same-account delivery.</p> </li> </ul> <p>Each
         * log group can have up to two subscription filters associated with it. If you are
         * updating an existing filter, you must specify the correct name in
         * <code>filterName</code>. </p> <p>To perform a <code>PutSubscriptionFilter</code>
         * operation, you must also have the <code>iam:PassRole</code>
         * permission.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/PutSubscriptionFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSubscriptionFilterOutcome PutSubscriptionFilter(const Model::PutSubscriptionFilterRequest& request) const;

        /**
         * A Callable wrapper for PutSubscriptionFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSubscriptionFilterRequestT = Model::PutSubscriptionFilterRequest>
        Model::PutSubscriptionFilterOutcomeCallable PutSubscriptionFilterCallable(const PutSubscriptionFilterRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::PutSubscriptionFilter, request);
        }

        /**
         * An Async wrapper for PutSubscriptionFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSubscriptionFilterRequestT = Model::PutSubscriptionFilterRequest>
        void PutSubscriptionFilterAsync(const PutSubscriptionFilterRequestT& request, const PutSubscriptionFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::PutSubscriptionFilter, request, handler, context);
        }

        /**
         * <p>Schedules a query of a log group using CloudWatch Logs Insights. You specify
         * the log group and time range to query and the query string to use.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CWL_QuerySyntax.html">CloudWatch
         * Logs Insights Query Syntax</a>.</p> <p>Queries time out after 15 minutes of
         * runtime. If your queries are timing out, reduce the time range being searched or
         * partition your query into a number of queries.</p> <p>If you are using
         * CloudWatch cross-account observability, you can use this operation in a
         * monitoring account to start a query in a linked source account. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Unified-Cross-Account.html">CloudWatch
         * cross-account observability</a>. For a cross-account <code>StartQuery</code>
         * operation, the query definition must be defined in the monitoring account.</p>
         * <p>You can have up to 20 concurrent CloudWatch Logs insights queries, including
         * queries that have been added to dashboards. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StartQuery">AWS API
         * Reference</a></p>
         */
        virtual Model::StartQueryOutcome StartQuery(const Model::StartQueryRequest& request) const;

        /**
         * A Callable wrapper for StartQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartQueryRequestT = Model::StartQueryRequest>
        Model::StartQueryOutcomeCallable StartQueryCallable(const StartQueryRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::StartQuery, request);
        }

        /**
         * An Async wrapper for StartQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartQueryRequestT = Model::StartQueryRequest>
        void StartQueryAsync(const StartQueryRequestT& request, const StartQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::StartQuery, request, handler, context);
        }

        /**
         * <p>Stops a CloudWatch Logs Insights query that is in progress. If the query has
         * already ended, the operation returns an error indicating that the specified
         * query is not running.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/StopQuery">AWS API
         * Reference</a></p>
         */
        virtual Model::StopQueryOutcome StopQuery(const Model::StopQueryRequest& request) const;

        /**
         * A Callable wrapper for StopQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopQueryRequestT = Model::StopQueryRequest>
        Model::StopQueryOutcomeCallable StopQueryCallable(const StopQueryRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::StopQuery, request);
        }

        /**
         * An Async wrapper for StopQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopQueryRequestT = Model::StopQueryRequest>
        void StopQueryAsync(const StopQueryRequestT& request, const StopQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::StopQuery, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified CloudWatch Logs
         * resource. Currently, the only CloudWatch Logs resources that can be tagged are
         * log groups and destinations. </p> <p>Tags can help you organize and categorize
         * your resources. You can also use them to scope user permissions by granting a
         * user permission to access or change only resources with certain tag values.</p>
         * <p>Tags don't have any semantic meaning to Amazon Web Services and are
         * interpreted strictly as strings of characters.</p> <p>You can use the
         * <code>TagResource</code> action with a resource that already has tags. If you
         * specify a new tag key for the alarm, this tag is appended to the list of tags
         * associated with the alarm. If you specify a tag key that is already associated
         * with the alarm, the new tag value that you specify replaces the previous value
         * for that tag.</p> <p>You can associate as many as 50 tags with a CloudWatch Logs
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Tests the filter pattern of a metric filter against a sample of log event
         * messages. You can use this operation to validate the correctness of a metric
         * filter pattern.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/TestMetricFilter">AWS
         * API Reference</a></p>
         */
        virtual Model::TestMetricFilterOutcome TestMetricFilter(const Model::TestMetricFilterRequest& request) const;

        /**
         * A Callable wrapper for TestMetricFilter that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestMetricFilterRequestT = Model::TestMetricFilterRequest>
        Model::TestMetricFilterOutcomeCallable TestMetricFilterCallable(const TestMetricFilterRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::TestMetricFilter, request);
        }

        /**
         * An Async wrapper for TestMetricFilter that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestMetricFilterRequestT = Model::TestMetricFilterRequest>
        void TestMetricFilterAsync(const TestMetricFilterRequestT& request, const TestMetricFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::TestMetricFilter, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&CloudWatchLogsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudWatchLogsClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudWatchLogsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudWatchLogsClient>;
      void init(const CloudWatchLogsClientConfiguration& clientConfiguration);

      CloudWatchLogsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<CloudWatchLogsEndpointProviderBase> m_endpointProvider;
  };

} // namespace CloudWatchLogs
} // namespace Aws
