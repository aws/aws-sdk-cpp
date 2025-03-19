/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/FilterCriteria.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SelfManagedEventSource.h>
#include <aws/lambda/model/AmazonManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/SelfManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/ScalingConfig.h>
#include <aws/lambda/model/DocumentDBEventSourceConfig.h>
#include <aws/lambda/model/EventSourceMappingMetricsConfig.h>
#include <aws/lambda/model/ProvisionedPollerConfig.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
#include <aws/lambda/model/FunctionResponseType.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class CreateEventSourceMappingRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API CreateEventSourceMappingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEventSourceMapping"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p> <ul> <li> <p>
     * <b>Amazon Kinesis</b> – The ARN of the data stream or a stream consumer.</p>
     * </li> <li> <p> <b>Amazon DynamoDB Streams</b> – The ARN of the stream.</p> </li>
     * <li> <p> <b>Amazon Simple Queue Service</b> – The ARN of the queue.</p> </li>
     * <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> – The ARN of the
     * cluster or the ARN of the VPC connection (for <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-msk.html#msk-multi-vpc">cross-account
     * event source mappings</a>).</p> </li> <li> <p> <b>Amazon MQ</b> – The ARN of the
     * broker.</p> </li> <li> <p> <b>Amazon DocumentDB</b> – The ARN of the DocumentDB
     * change stream.</p> </li> </ul>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    CreateEventSourceMappingRequest& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or ARN of the Lambda function.</p> <p class="title"> <b>Name
     * formats</b> </p> <ul> <li> <p> <b>Function name</b> –
     * <code>MyFunction</code>.</p> </li> <li> <p> <b>Function ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction</code>.</p>
     * </li> <li> <p> <b>Version or Alias ARN</b> –
     * <code>arn:aws:lambda:us-west-2:123456789012:function:MyFunction:PROD</code>.</p>
     * </li> <li> <p> <b>Partial ARN</b> –
     * <code>123456789012:function:MyFunction</code>.</p> </li> </ul> <p>The length
     * constraint applies only to the full ARN. If you specify only the function name,
     * it's limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    CreateEventSourceMappingRequest& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, the event source mapping is active. When false, Lambda pauses
     * polling and invocation.</p> <p>Default: True</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CreateEventSourceMappingRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <ul> <li> <p> <b>Amazon Kinesis</b> – Default
     * 100. Max 10,000.</p> </li> <li> <p> <b>Amazon DynamoDB Streams</b> – Default
     * 100. Max 10,000.</p> </li> <li> <p> <b>Amazon Simple Queue Service</b> – Default
     * 10. For standard queues the max is 10,000. For FIFO queues the max is 10.</p>
     * </li> <li> <p> <b>Amazon Managed Streaming for Apache Kafka</b> – Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Self-managed Apache Kafka</b> – Default 100.
     * Max 10,000.</p> </li> <li> <p> <b>Amazon MQ (ActiveMQ and RabbitMQ)</b> –
     * Default 100. Max 10,000.</p> </li> <li> <p> <b>DocumentDB</b> – Default 100. Max
     * 10,000.</p> </li> </ul>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline CreateEventSourceMappingRequest& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = FilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = FilterCriteria>
    CreateEventSourceMappingRequest& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that Lambda spends gathering records
     * before invoking the function. You can configure
     * <code>MaximumBatchingWindowInSeconds</code> to any value from 0 seconds to 300
     * seconds in increments of seconds.</p> <p>For Kinesis, DynamoDB, and Amazon SQS
     * event sources, the default batching window is 0 seconds. For Amazon MSK,
     * Self-managed Apache Kafka, Amazon MQ, and DocumentDB event sources, the default
     * batching window is 500 ms. Note that because you can only change
     * <code>MaximumBatchingWindowInSeconds</code> in increments of seconds, you cannot
     * revert back to the 500 ms default batching window after you have changed it. To
     * restore the default batching window, you must create a new event source
     * mapping.</p> <p>Related setting: For Kinesis, DynamoDB, and Amazon SQS event
     * sources, when you set <code>BatchSize</code> to a value greater than 10, you
     * must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const { return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline CreateEventSourceMappingRequest& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) The number of batches to process from
     * each shard concurrently.</p>
     */
    inline int GetParallelizationFactor() const { return m_parallelizationFactor; }
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }
    inline CreateEventSourceMappingRequest& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position in a stream from which to start reading. Required for Amazon
     * Kinesis and Amazon DynamoDB Stream event sources. <code>AT_TIMESTAMP</code> is
     * supported only for Amazon Kinesis streams, Amazon DocumentDB, Amazon MSK, and
     * self-managed Apache Kafka.</p>
     */
    inline EventSourcePosition GetStartingPosition() const { return m_startingPosition; }
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }
    inline void SetStartingPosition(EventSourcePosition value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }
    inline CreateEventSourceMappingRequest& WithStartingPosition(EventSourcePosition value) { SetStartingPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>With <code>StartingPosition</code> set to <code>AT_TIMESTAMP</code>, the time
     * from which to start reading. <code>StartingPositionTimestamp</code> cannot be in
     * the future.</p>
     */
    inline const Aws::Utils::DateTime& GetStartingPositionTimestamp() const { return m_startingPositionTimestamp; }
    inline bool StartingPositionTimestampHasBeenSet() const { return m_startingPositionTimestampHasBeenSet; }
    template<typename StartingPositionTimestampT = Aws::Utils::DateTime>
    void SetStartingPositionTimestamp(StartingPositionTimestampT&& value) { m_startingPositionTimestampHasBeenSet = true; m_startingPositionTimestamp = std::forward<StartingPositionTimestampT>(value); }
    template<typename StartingPositionTimestampT = Aws::Utils::DateTime>
    CreateEventSourceMappingRequest& WithStartingPositionTimestamp(StartingPositionTimestampT&& value) { SetStartingPositionTimestamp(std::forward<StartingPositionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis, DynamoDB Streams, Amazon MSK, and self-managed Kafka only) A
     * configuration object that specifies the destination of an event after Lambda
     * processes it.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const { return m_destinationConfig; }
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }
    template<typename DestinationConfigT = DestinationConfig>
    void SetDestinationConfig(DestinationConfigT&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::forward<DestinationConfigT>(value); }
    template<typename DestinationConfigT = DestinationConfig>
    CreateEventSourceMappingRequest& WithDestinationConfig(DestinationConfigT&& value) { SetDestinationConfig(std::forward<DestinationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records older than the specified
     * age. The default value is infinite (-1).</p>
     */
    inline int GetMaximumRecordAgeInSeconds() const { return m_maximumRecordAgeInSeconds; }
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }
    inline CreateEventSourceMappingRequest& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) If the function returns an error, split
     * the batch in two and retry.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const { return m_bisectBatchOnFunctionError; }
    inline bool BisectBatchOnFunctionErrorHasBeenSet() const { return m_bisectBatchOnFunctionErrorHasBeenSet; }
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionErrorHasBeenSet = true; m_bisectBatchOnFunctionError = value; }
    inline CreateEventSourceMappingRequest& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records after the specified
     * number of retries. The default value is infinite (-1). When set to infinite
     * (-1), failed records are retried until the record expires.</p>
     */
    inline int GetMaximumRetryAttempts() const { return m_maximumRetryAttempts; }
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }
    inline CreateEventSourceMappingRequest& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the event source mapping.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEventSourceMappingRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEventSourceMappingRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) The duration in seconds of a processing
     * window for DynamoDB and Kinesis Streams event sources. A value of 0 seconds
     * indicates no tumbling window.</p>
     */
    inline int GetTumblingWindowInSeconds() const { return m_tumblingWindowInSeconds; }
    inline bool TumblingWindowInSecondsHasBeenSet() const { return m_tumblingWindowInSecondsHasBeenSet; }
    inline void SetTumblingWindowInSeconds(int value) { m_tumblingWindowInSecondsHasBeenSet = true; m_tumblingWindowInSeconds = value; }
    inline CreateEventSourceMappingRequest& WithTumblingWindowInSeconds(int value) { SetTumblingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Kafka topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTopics() const { return m_topics; }
    inline bool TopicsHasBeenSet() const { return m_topicsHasBeenSet; }
    template<typename TopicsT = Aws::Vector<Aws::String>>
    void SetTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics = std::forward<TopicsT>(value); }
    template<typename TopicsT = Aws::Vector<Aws::String>>
    CreateEventSourceMappingRequest& WithTopics(TopicsT&& value) { SetTopics(std::forward<TopicsT>(value)); return *this;}
    template<typename TopicsT = Aws::String>
    CreateEventSourceMappingRequest& AddTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics.emplace_back(std::forward<TopicsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> (MQ) The name of the Amazon MQ broker destination queue to consume. </p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const { return m_queues; }
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    CreateEventSourceMappingRequest& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = Aws::String>
    CreateEventSourceMappingRequest& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of authentication protocols or VPC components required to secure
     * your event source.</p>
     */
    inline const Aws::Vector<SourceAccessConfiguration>& GetSourceAccessConfigurations() const { return m_sourceAccessConfigurations; }
    inline bool SourceAccessConfigurationsHasBeenSet() const { return m_sourceAccessConfigurationsHasBeenSet; }
    template<typename SourceAccessConfigurationsT = Aws::Vector<SourceAccessConfiguration>>
    void SetSourceAccessConfigurations(SourceAccessConfigurationsT&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = std::forward<SourceAccessConfigurationsT>(value); }
    template<typename SourceAccessConfigurationsT = Aws::Vector<SourceAccessConfiguration>>
    CreateEventSourceMappingRequest& WithSourceAccessConfigurations(SourceAccessConfigurationsT&& value) { SetSourceAccessConfigurations(std::forward<SourceAccessConfigurationsT>(value)); return *this;}
    template<typename SourceAccessConfigurationsT = SourceAccessConfiguration>
    CreateEventSourceMappingRequest& AddSourceAccessConfigurations(SourceAccessConfigurationsT&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.emplace_back(std::forward<SourceAccessConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The self-managed Apache Kafka cluster to receive records from.</p>
     */
    inline const SelfManagedEventSource& GetSelfManagedEventSource() const { return m_selfManagedEventSource; }
    inline bool SelfManagedEventSourceHasBeenSet() const { return m_selfManagedEventSourceHasBeenSet; }
    template<typename SelfManagedEventSourceT = SelfManagedEventSource>
    void SetSelfManagedEventSource(SelfManagedEventSourceT&& value) { m_selfManagedEventSourceHasBeenSet = true; m_selfManagedEventSource = std::forward<SelfManagedEventSourceT>(value); }
    template<typename SelfManagedEventSourceT = SelfManagedEventSource>
    CreateEventSourceMappingRequest& WithSelfManagedEventSource(SelfManagedEventSourceT&& value) { SetSelfManagedEventSource(std::forward<SelfManagedEventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis, DynamoDB Streams, and Amazon SQS) A list of current response type
     * enums applied to the event source mapping.</p>
     */
    inline const Aws::Vector<FunctionResponseType>& GetFunctionResponseTypes() const { return m_functionResponseTypes; }
    inline bool FunctionResponseTypesHasBeenSet() const { return m_functionResponseTypesHasBeenSet; }
    template<typename FunctionResponseTypesT = Aws::Vector<FunctionResponseType>>
    void SetFunctionResponseTypes(FunctionResponseTypesT&& value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes = std::forward<FunctionResponseTypesT>(value); }
    template<typename FunctionResponseTypesT = Aws::Vector<FunctionResponseType>>
    CreateEventSourceMappingRequest& WithFunctionResponseTypes(FunctionResponseTypesT&& value) { SetFunctionResponseTypes(std::forward<FunctionResponseTypesT>(value)); return *this;}
    inline CreateEventSourceMappingRequest& AddFunctionResponseTypes(FunctionResponseType value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specific configuration settings for an Amazon Managed Streaming for Apache
     * Kafka (Amazon MSK) event source.</p>
     */
    inline const AmazonManagedKafkaEventSourceConfig& GetAmazonManagedKafkaEventSourceConfig() const { return m_amazonManagedKafkaEventSourceConfig; }
    inline bool AmazonManagedKafkaEventSourceConfigHasBeenSet() const { return m_amazonManagedKafkaEventSourceConfigHasBeenSet; }
    template<typename AmazonManagedKafkaEventSourceConfigT = AmazonManagedKafkaEventSourceConfig>
    void SetAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfigT&& value) { m_amazonManagedKafkaEventSourceConfigHasBeenSet = true; m_amazonManagedKafkaEventSourceConfig = std::forward<AmazonManagedKafkaEventSourceConfigT>(value); }
    template<typename AmazonManagedKafkaEventSourceConfigT = AmazonManagedKafkaEventSourceConfig>
    CreateEventSourceMappingRequest& WithAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfigT&& value) { SetAmazonManagedKafkaEventSourceConfig(std::forward<AmazonManagedKafkaEventSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific configuration settings for a self-managed Apache Kafka event
     * source.</p>
     */
    inline const SelfManagedKafkaEventSourceConfig& GetSelfManagedKafkaEventSourceConfig() const { return m_selfManagedKafkaEventSourceConfig; }
    inline bool SelfManagedKafkaEventSourceConfigHasBeenSet() const { return m_selfManagedKafkaEventSourceConfigHasBeenSet; }
    template<typename SelfManagedKafkaEventSourceConfigT = SelfManagedKafkaEventSourceConfig>
    void SetSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfigT&& value) { m_selfManagedKafkaEventSourceConfigHasBeenSet = true; m_selfManagedKafkaEventSourceConfig = std::forward<SelfManagedKafkaEventSourceConfigT>(value); }
    template<typename SelfManagedKafkaEventSourceConfigT = SelfManagedKafkaEventSourceConfig>
    CreateEventSourceMappingRequest& WithSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfigT&& value) { SetSelfManagedKafkaEventSourceConfig(std::forward<SelfManagedKafkaEventSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Amazon SQS only) The scaling configuration for the event source. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/with-sqs.html#events-sqs-max-concurrency">Configuring
     * maximum concurrency for Amazon SQS event sources</a>.</p>
     */
    inline const ScalingConfig& GetScalingConfig() const { return m_scalingConfig; }
    inline bool ScalingConfigHasBeenSet() const { return m_scalingConfigHasBeenSet; }
    template<typename ScalingConfigT = ScalingConfig>
    void SetScalingConfig(ScalingConfigT&& value) { m_scalingConfigHasBeenSet = true; m_scalingConfig = std::forward<ScalingConfigT>(value); }
    template<typename ScalingConfigT = ScalingConfig>
    CreateEventSourceMappingRequest& WithScalingConfig(ScalingConfigT&& value) { SetScalingConfig(std::forward<ScalingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific configuration settings for a DocumentDB event source.</p>
     */
    inline const DocumentDBEventSourceConfig& GetDocumentDBEventSourceConfig() const { return m_documentDBEventSourceConfig; }
    inline bool DocumentDBEventSourceConfigHasBeenSet() const { return m_documentDBEventSourceConfigHasBeenSet; }
    template<typename DocumentDBEventSourceConfigT = DocumentDBEventSourceConfig>
    void SetDocumentDBEventSourceConfig(DocumentDBEventSourceConfigT&& value) { m_documentDBEventSourceConfigHasBeenSet = true; m_documentDBEventSourceConfig = std::forward<DocumentDBEventSourceConfigT>(value); }
    template<typename DocumentDBEventSourceConfigT = DocumentDBEventSourceConfig>
    CreateEventSourceMappingRequest& WithDocumentDBEventSourceConfig(DocumentDBEventSourceConfigT&& value) { SetDocumentDBEventSourceConfig(std::forward<DocumentDBEventSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the Key Management Service (KMS) customer managed key that Lambda
     * uses to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html#filtering-basics">filter
     * criteria</a>. By default, Lambda does not encrypt your filter criteria object.
     * Specify this property to encrypt data using your own customer managed key. </p>
     */
    inline const Aws::String& GetKMSKeyArn() const { return m_kMSKeyArn; }
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }
    template<typename KMSKeyArnT = Aws::String>
    void SetKMSKeyArn(KMSKeyArnT&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::forward<KMSKeyArnT>(value); }
    template<typename KMSKeyArnT = Aws::String>
    CreateEventSourceMappingRequest& WithKMSKeyArn(KMSKeyArnT&& value) { SetKMSKeyArn(std::forward<KMSKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics configuration for your event source. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/monitoring-metrics-types.html#event-source-mapping-metrics">Event
     * source mapping metrics</a>.</p>
     */
    inline const EventSourceMappingMetricsConfig& GetMetricsConfig() const { return m_metricsConfig; }
    inline bool MetricsConfigHasBeenSet() const { return m_metricsConfigHasBeenSet; }
    template<typename MetricsConfigT = EventSourceMappingMetricsConfig>
    void SetMetricsConfig(MetricsConfigT&& value) { m_metricsConfigHasBeenSet = true; m_metricsConfig = std::forward<MetricsConfigT>(value); }
    template<typename MetricsConfigT = EventSourceMappingMetricsConfig>
    CreateEventSourceMappingRequest& WithMetricsConfig(MetricsConfigT&& value) { SetMetricsConfig(std::forward<MetricsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Amazon MSK and self-managed Apache Kafka only) The provisioned mode
     * configuration for the event source. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#invocation-eventsourcemapping-provisioned-mode">provisioned
     * mode</a>.</p>
     */
    inline const ProvisionedPollerConfig& GetProvisionedPollerConfig() const { return m_provisionedPollerConfig; }
    inline bool ProvisionedPollerConfigHasBeenSet() const { return m_provisionedPollerConfigHasBeenSet; }
    template<typename ProvisionedPollerConfigT = ProvisionedPollerConfig>
    void SetProvisionedPollerConfig(ProvisionedPollerConfigT&& value) { m_provisionedPollerConfigHasBeenSet = true; m_provisionedPollerConfig = std::forward<ProvisionedPollerConfigT>(value); }
    template<typename ProvisionedPollerConfigT = ProvisionedPollerConfig>
    CreateEventSourceMappingRequest& WithProvisionedPollerConfig(ProvisionedPollerConfigT&& value) { SetProvisionedPollerConfig(std::forward<ProvisionedPollerConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds{0};
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    int m_parallelizationFactor{0};
    bool m_parallelizationFactorHasBeenSet = false;

    EventSourcePosition m_startingPosition{EventSourcePosition::NOT_SET};
    bool m_startingPositionHasBeenSet = false;

    Aws::Utils::DateTime m_startingPositionTimestamp{};
    bool m_startingPositionTimestampHasBeenSet = false;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;

    int m_maximumRecordAgeInSeconds{0};
    bool m_maximumRecordAgeInSecondsHasBeenSet = false;

    bool m_bisectBatchOnFunctionError{false};
    bool m_bisectBatchOnFunctionErrorHasBeenSet = false;

    int m_maximumRetryAttempts{0};
    bool m_maximumRetryAttemptsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    int m_tumblingWindowInSeconds{0};
    bool m_tumblingWindowInSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_topics;
    bool m_topicsHasBeenSet = false;

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet = false;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;
    bool m_sourceAccessConfigurationsHasBeenSet = false;

    SelfManagedEventSource m_selfManagedEventSource;
    bool m_selfManagedEventSourceHasBeenSet = false;

    Aws::Vector<FunctionResponseType> m_functionResponseTypes;
    bool m_functionResponseTypesHasBeenSet = false;

    AmazonManagedKafkaEventSourceConfig m_amazonManagedKafkaEventSourceConfig;
    bool m_amazonManagedKafkaEventSourceConfigHasBeenSet = false;

    SelfManagedKafkaEventSourceConfig m_selfManagedKafkaEventSourceConfig;
    bool m_selfManagedKafkaEventSourceConfigHasBeenSet = false;

    ScalingConfig m_scalingConfig;
    bool m_scalingConfigHasBeenSet = false;

    DocumentDBEventSourceConfig m_documentDBEventSourceConfig;
    bool m_documentDBEventSourceConfigHasBeenSet = false;

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;

    EventSourceMappingMetricsConfig m_metricsConfig;
    bool m_metricsConfigHasBeenSet = false;

    ProvisionedPollerConfig m_provisionedPollerConfig;
    bool m_provisionedPollerConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
