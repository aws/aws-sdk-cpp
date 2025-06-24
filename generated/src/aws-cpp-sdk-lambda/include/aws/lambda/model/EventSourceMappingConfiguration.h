/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/EventSourcePosition.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lambda/model/FilterCriteria.h>
#include <aws/lambda/model/DestinationConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/SelfManagedEventSource.h>
#include <aws/lambda/model/AmazonManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/SelfManagedKafkaEventSourceConfig.h>
#include <aws/lambda/model/ScalingConfig.h>
#include <aws/lambda/model/DocumentDBEventSourceConfig.h>
#include <aws/lambda/model/FilterCriteriaError.h>
#include <aws/lambda/model/EventSourceMappingMetricsConfig.h>
#include <aws/lambda/model/ProvisionedPollerConfig.h>
#include <aws/lambda/model/SourceAccessConfiguration.h>
#include <aws/lambda/model/FunctionResponseType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>A mapping between an Amazon Web Services resource and a Lambda function. For
   * details, see <a>CreateEventSourceMapping</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class EventSourceMappingConfiguration
  {
  public:
    AWS_LAMBDA_API EventSourceMappingConfiguration() = default;
    AWS_LAMBDA_API EventSourceMappingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API EventSourceMappingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline const Aws::String& GetUUID() const { return m_uUID; }
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
    template<typename UUIDT = Aws::String>
    void SetUUID(UUIDT&& value) { m_uUIDHasBeenSet = true; m_uUID = std::forward<UUIDT>(value); }
    template<typename UUIDT = Aws::String>
    EventSourceMappingConfiguration& WithUUID(UUIDT&& value) { SetUUID(std::forward<UUIDT>(value)); return *this;}
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
    inline EventSourceMappingConfiguration& WithStartingPosition(EventSourcePosition value) { SetStartingPosition(value); return *this;}
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
    EventSourceMappingConfiguration& WithStartingPositionTimestamp(StartingPositionTimestampT&& value) { SetStartingPositionTimestamp(std::forward<StartingPositionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records in each batch that Lambda pulls from your
     * stream or queue and sends to your function. Lambda passes all of the records in
     * the batch to the function in a single call, up to the payload limit for
     * synchronous invocation (6 MB).</p> <p>Default value: Varies by service. For
     * Amazon SQS, the default is 10. For all other services, the default is 100.</p>
     * <p>Related setting: When you set <code>BatchSize</code> to a value greater than
     * 10, you must set <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline int GetBatchSize() const { return m_batchSize; }
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }
    inline EventSourceMappingConfiguration& WithBatchSize(int value) { SetBatchSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of time, in seconds, that Lambda spends gathering records
     * before invoking the function. You can configure
     * <code>MaximumBatchingWindowInSeconds</code> to any value from 0 seconds to 300
     * seconds in increments of seconds.</p> <p>For streams and Amazon SQS event
     * sources, the default batching window is 0 seconds. For Amazon MSK, Self-managed
     * Apache Kafka, Amazon MQ, and DocumentDB event sources, the default batching
     * window is 500 ms. Note that because you can only change
     * <code>MaximumBatchingWindowInSeconds</code> in increments of seconds, you cannot
     * revert back to the 500 ms default batching window after you have changed it. To
     * restore the default batching window, you must create a new event source
     * mapping.</p> <p>Related setting: For streams and Amazon SQS event sources, when
     * you set <code>BatchSize</code> to a value greater than 10, you must set
     * <code>MaximumBatchingWindowInSeconds</code> to at least 1.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const { return m_maximumBatchingWindowInSeconds; }
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }
    inline EventSourceMappingConfiguration& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) The number of batches to process
     * concurrently from each shard. The default value is 1.</p>
     */
    inline int GetParallelizationFactor() const { return m_parallelizationFactor; }
    inline bool ParallelizationFactorHasBeenSet() const { return m_parallelizationFactorHasBeenSet; }
    inline void SetParallelizationFactor(int value) { m_parallelizationFactorHasBeenSet = true; m_parallelizationFactor = value; }
    inline EventSourceMappingConfiguration& WithParallelizationFactor(int value) { SetParallelizationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const { return m_eventSourceArn; }
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }
    template<typename EventSourceArnT = Aws::String>
    void SetEventSourceArn(EventSourceArnT&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::forward<EventSourceArnT>(value); }
    template<typename EventSourceArnT = Aws::String>
    EventSourceMappingConfiguration& WithEventSourceArn(EventSourceArnT&& value) { SetEventSourceArn(std::forward<EventSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the filter criteria that determine whether Lambda
     * should process an event. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html">Lambda
     * event filtering</a>.</p> <p>If filter criteria is encrypted, this field shows up
     * as <code>null</code> in the response of ListEventSourceMapping API calls. You
     * can view this field in plaintext in the response of GetEventSourceMapping and
     * DeleteEventSourceMapping calls if you have <code>kms:Decrypt</code> permissions
     * for the correct KMS key.</p>
     */
    inline const FilterCriteria& GetFilterCriteria() const { return m_filterCriteria; }
    inline bool FilterCriteriaHasBeenSet() const { return m_filterCriteriaHasBeenSet; }
    template<typename FilterCriteriaT = FilterCriteria>
    void SetFilterCriteria(FilterCriteriaT&& value) { m_filterCriteriaHasBeenSet = true; m_filterCriteria = std::forward<FilterCriteriaT>(value); }
    template<typename FilterCriteriaT = FilterCriteria>
    EventSourceMappingConfiguration& WithFilterCriteria(FilterCriteriaT&& value) { SetFilterCriteria(std::forward<FilterCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }
    template<typename FunctionArnT = Aws::String>
    void SetFunctionArn(FunctionArnT&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::forward<FunctionArnT>(value); }
    template<typename FunctionArnT = Aws::String>
    EventSourceMappingConfiguration& WithFunctionArn(FunctionArnT&& value) { SetFunctionArn(std::forward<FunctionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the event source mapping was last updated or that its state
     * changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    EventSourceMappingConfiguration& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result of the event source mapping's last processing attempt.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const { return m_lastProcessingResult; }
    inline bool LastProcessingResultHasBeenSet() const { return m_lastProcessingResultHasBeenSet; }
    template<typename LastProcessingResultT = Aws::String>
    void SetLastProcessingResult(LastProcessingResultT&& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = std::forward<LastProcessingResultT>(value); }
    template<typename LastProcessingResultT = Aws::String>
    EventSourceMappingConfiguration& WithLastProcessingResult(LastProcessingResultT&& value) { SetLastProcessingResult(std::forward<LastProcessingResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    EventSourceMappingConfiguration& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a user or Lambda made the last change to the event source
     * mapping.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const { return m_stateTransitionReason; }
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }
    template<typename StateTransitionReasonT = Aws::String>
    void SetStateTransitionReason(StateTransitionReasonT&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::forward<StateTransitionReasonT>(value); }
    template<typename StateTransitionReasonT = Aws::String>
    EventSourceMappingConfiguration& WithStateTransitionReason(StateTransitionReasonT&& value) { SetStateTransitionReason(std::forward<StateTransitionReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis, DynamoDB Streams, Amazon MSK, and self-managed Apache Kafka event
     * sources only) A configuration object that specifies the destination of an event
     * after Lambda processes it.</p>
     */
    inline const DestinationConfig& GetDestinationConfig() const { return m_destinationConfig; }
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }
    template<typename DestinationConfigT = DestinationConfig>
    void SetDestinationConfig(DestinationConfigT&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::forward<DestinationConfigT>(value); }
    template<typename DestinationConfigT = DestinationConfig>
    EventSourceMappingConfiguration& WithDestinationConfig(DestinationConfigT&& value) { SetDestinationConfig(std::forward<DestinationConfigT>(value)); return *this;}
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
    EventSourceMappingConfiguration& WithTopics(TopicsT&& value) { SetTopics(std::forward<TopicsT>(value)); return *this;}
    template<typename TopicsT = Aws::String>
    EventSourceMappingConfiguration& AddTopics(TopicsT&& value) { m_topicsHasBeenSet = true; m_topics.emplace_back(std::forward<TopicsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> (Amazon MQ) The name of the Amazon MQ broker destination queue to
     * consume.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueues() const { return m_queues; }
    inline bool QueuesHasBeenSet() const { return m_queuesHasBeenSet; }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    void SetQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues = std::forward<QueuesT>(value); }
    template<typename QueuesT = Aws::Vector<Aws::String>>
    EventSourceMappingConfiguration& WithQueues(QueuesT&& value) { SetQueues(std::forward<QueuesT>(value)); return *this;}
    template<typename QueuesT = Aws::String>
    EventSourceMappingConfiguration& AddQueues(QueuesT&& value) { m_queuesHasBeenSet = true; m_queues.emplace_back(std::forward<QueuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the authentication protocol, VPC components, or virtual host to
     * secure and define your event source.</p>
     */
    inline const Aws::Vector<SourceAccessConfiguration>& GetSourceAccessConfigurations() const { return m_sourceAccessConfigurations; }
    inline bool SourceAccessConfigurationsHasBeenSet() const { return m_sourceAccessConfigurationsHasBeenSet; }
    template<typename SourceAccessConfigurationsT = Aws::Vector<SourceAccessConfiguration>>
    void SetSourceAccessConfigurations(SourceAccessConfigurationsT&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations = std::forward<SourceAccessConfigurationsT>(value); }
    template<typename SourceAccessConfigurationsT = Aws::Vector<SourceAccessConfiguration>>
    EventSourceMappingConfiguration& WithSourceAccessConfigurations(SourceAccessConfigurationsT&& value) { SetSourceAccessConfigurations(std::forward<SourceAccessConfigurationsT>(value)); return *this;}
    template<typename SourceAccessConfigurationsT = SourceAccessConfiguration>
    EventSourceMappingConfiguration& AddSourceAccessConfigurations(SourceAccessConfigurationsT&& value) { m_sourceAccessConfigurationsHasBeenSet = true; m_sourceAccessConfigurations.emplace_back(std::forward<SourceAccessConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The self-managed Apache Kafka cluster for your event source.</p>
     */
    inline const SelfManagedEventSource& GetSelfManagedEventSource() const { return m_selfManagedEventSource; }
    inline bool SelfManagedEventSourceHasBeenSet() const { return m_selfManagedEventSourceHasBeenSet; }
    template<typename SelfManagedEventSourceT = SelfManagedEventSource>
    void SetSelfManagedEventSource(SelfManagedEventSourceT&& value) { m_selfManagedEventSourceHasBeenSet = true; m_selfManagedEventSource = std::forward<SelfManagedEventSourceT>(value); }
    template<typename SelfManagedEventSourceT = SelfManagedEventSource>
    EventSourceMappingConfiguration& WithSelfManagedEventSource(SelfManagedEventSourceT&& value) { SetSelfManagedEventSource(std::forward<SelfManagedEventSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records older than the specified
     * age. The default value is -1, which sets the maximum age to infinite. When the
     * value is set to infinite, Lambda never discards old records.</p>  <p>The
     * minimum valid value for maximum record age is 60s. Although values less than 60
     * and greater than -1 fall within the parameter's absolute range, they are not
     * allowed</p> 
     */
    inline int GetMaximumRecordAgeInSeconds() const { return m_maximumRecordAgeInSeconds; }
    inline bool MaximumRecordAgeInSecondsHasBeenSet() const { return m_maximumRecordAgeInSecondsHasBeenSet; }
    inline void SetMaximumRecordAgeInSeconds(int value) { m_maximumRecordAgeInSecondsHasBeenSet = true; m_maximumRecordAgeInSeconds = value; }
    inline EventSourceMappingConfiguration& WithMaximumRecordAgeInSeconds(int value) { SetMaximumRecordAgeInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) If the function returns an error, split
     * the batch in two and retry. The default value is false.</p>
     */
    inline bool GetBisectBatchOnFunctionError() const { return m_bisectBatchOnFunctionError; }
    inline bool BisectBatchOnFunctionErrorHasBeenSet() const { return m_bisectBatchOnFunctionErrorHasBeenSet; }
    inline void SetBisectBatchOnFunctionError(bool value) { m_bisectBatchOnFunctionErrorHasBeenSet = true; m_bisectBatchOnFunctionError = value; }
    inline EventSourceMappingConfiguration& WithBisectBatchOnFunctionError(bool value) { SetBisectBatchOnFunctionError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Kinesis and DynamoDB Streams only) Discard records after the specified
     * number of retries. The default value is -1, which sets the maximum number of
     * retries to infinite. When MaximumRetryAttempts is infinite, Lambda retries
     * failed records until the record expires in the event source.</p>
     */
    inline int GetMaximumRetryAttempts() const { return m_maximumRetryAttempts; }
    inline bool MaximumRetryAttemptsHasBeenSet() const { return m_maximumRetryAttemptsHasBeenSet; }
    inline void SetMaximumRetryAttempts(int value) { m_maximumRetryAttemptsHasBeenSet = true; m_maximumRetryAttempts = value; }
    inline EventSourceMappingConfiguration& WithMaximumRetryAttempts(int value) { SetMaximumRetryAttempts(value); return *this;}
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
    inline EventSourceMappingConfiguration& WithTumblingWindowInSeconds(int value) { SetTumblingWindowInSeconds(value); return *this;}
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
    EventSourceMappingConfiguration& WithFunctionResponseTypes(FunctionResponseTypesT&& value) { SetFunctionResponseTypes(std::forward<FunctionResponseTypesT>(value)); return *this;}
    inline EventSourceMappingConfiguration& AddFunctionResponseTypes(FunctionResponseType value) { m_functionResponseTypesHasBeenSet = true; m_functionResponseTypes.push_back(value); return *this; }
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
    EventSourceMappingConfiguration& WithAmazonManagedKafkaEventSourceConfig(AmazonManagedKafkaEventSourceConfigT&& value) { SetAmazonManagedKafkaEventSourceConfig(std::forward<AmazonManagedKafkaEventSourceConfigT>(value)); return *this;}
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
    EventSourceMappingConfiguration& WithSelfManagedKafkaEventSourceConfig(SelfManagedKafkaEventSourceConfigT&& value) { SetSelfManagedKafkaEventSourceConfig(std::forward<SelfManagedKafkaEventSourceConfigT>(value)); return *this;}
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
    EventSourceMappingConfiguration& WithScalingConfig(ScalingConfigT&& value) { SetScalingConfig(std::forward<ScalingConfigT>(value)); return *this;}
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
    EventSourceMappingConfiguration& WithDocumentDBEventSourceConfig(DocumentDBEventSourceConfigT&& value) { SetDocumentDBEventSourceConfig(std::forward<DocumentDBEventSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the Key Management Service (KMS) customer managed key that Lambda
     * uses to encrypt your function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventfiltering.html#filtering-basics">filter
     * criteria</a>.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const { return m_kMSKeyArn; }
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }
    template<typename KMSKeyArnT = Aws::String>
    void SetKMSKeyArn(KMSKeyArnT&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::forward<KMSKeyArnT>(value); }
    template<typename KMSKeyArnT = Aws::String>
    EventSourceMappingConfiguration& WithKMSKeyArn(KMSKeyArnT&& value) { SetKMSKeyArn(std::forward<KMSKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an error related to filter criteria
     * encryption.</p>
     */
    inline const FilterCriteriaError& GetFilterCriteriaError() const { return m_filterCriteriaError; }
    inline bool FilterCriteriaErrorHasBeenSet() const { return m_filterCriteriaErrorHasBeenSet; }
    template<typename FilterCriteriaErrorT = FilterCriteriaError>
    void SetFilterCriteriaError(FilterCriteriaErrorT&& value) { m_filterCriteriaErrorHasBeenSet = true; m_filterCriteriaError = std::forward<FilterCriteriaErrorT>(value); }
    template<typename FilterCriteriaErrorT = FilterCriteriaError>
    EventSourceMappingConfiguration& WithFilterCriteriaError(FilterCriteriaErrorT&& value) { SetFilterCriteriaError(std::forward<FilterCriteriaErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the event source mapping.</p>
     */
    inline const Aws::String& GetEventSourceMappingArn() const { return m_eventSourceMappingArn; }
    inline bool EventSourceMappingArnHasBeenSet() const { return m_eventSourceMappingArnHasBeenSet; }
    template<typename EventSourceMappingArnT = Aws::String>
    void SetEventSourceMappingArn(EventSourceMappingArnT&& value) { m_eventSourceMappingArnHasBeenSet = true; m_eventSourceMappingArn = std::forward<EventSourceMappingArnT>(value); }
    template<typename EventSourceMappingArnT = Aws::String>
    EventSourceMappingConfiguration& WithEventSourceMappingArn(EventSourceMappingArnT&& value) { SetEventSourceMappingArn(std::forward<EventSourceMappingArnT>(value)); return *this;}
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
    EventSourceMappingConfiguration& WithMetricsConfig(MetricsConfigT&& value) { SetMetricsConfig(std::forward<MetricsConfigT>(value)); return *this;}
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
    EventSourceMappingConfiguration& WithProvisionedPollerConfig(ProvisionedPollerConfigT&& value) { SetProvisionedPollerConfig(std::forward<ProvisionedPollerConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EventSourceMappingConfiguration& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet = false;

    EventSourcePosition m_startingPosition{EventSourcePosition::NOT_SET};
    bool m_startingPositionHasBeenSet = false;

    Aws::Utils::DateTime m_startingPositionTimestamp{};
    bool m_startingPositionTimestampHasBeenSet = false;

    int m_batchSize{0};
    bool m_batchSizeHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds{0};
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    int m_parallelizationFactor{0};
    bool m_parallelizationFactorHasBeenSet = false;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet = false;

    FilterCriteria m_filterCriteria;
    bool m_filterCriteriaHasBeenSet = false;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_lastProcessingResult;
    bool m_lastProcessingResultHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet = false;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_topics;
    bool m_topicsHasBeenSet = false;

    Aws::Vector<Aws::String> m_queues;
    bool m_queuesHasBeenSet = false;

    Aws::Vector<SourceAccessConfiguration> m_sourceAccessConfigurations;
    bool m_sourceAccessConfigurationsHasBeenSet = false;

    SelfManagedEventSource m_selfManagedEventSource;
    bool m_selfManagedEventSourceHasBeenSet = false;

    int m_maximumRecordAgeInSeconds{0};
    bool m_maximumRecordAgeInSecondsHasBeenSet = false;

    bool m_bisectBatchOnFunctionError{false};
    bool m_bisectBatchOnFunctionErrorHasBeenSet = false;

    int m_maximumRetryAttempts{0};
    bool m_maximumRetryAttemptsHasBeenSet = false;

    int m_tumblingWindowInSeconds{0};
    bool m_tumblingWindowInSecondsHasBeenSet = false;

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

    FilterCriteriaError m_filterCriteriaError;
    bool m_filterCriteriaErrorHasBeenSet = false;

    Aws::String m_eventSourceMappingArn;
    bool m_eventSourceMappingArnHasBeenSet = false;

    EventSourceMappingMetricsConfig m_metricsConfig;
    bool m_metricsConfigHasBeenSet = false;

    ProvisionedPollerConfig m_provisionedPollerConfig;
    bool m_provisionedPollerConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
