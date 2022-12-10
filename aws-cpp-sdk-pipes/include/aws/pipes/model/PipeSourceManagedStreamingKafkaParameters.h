/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/MSKAccessCredentials.h>
#include <aws/pipes/model/MSKStartPosition.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using an MSK stream as a source.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeSourceManagedStreamingKafkaParameters">AWS
   * API Reference</a></p>
   */
  class PipeSourceManagedStreamingKafkaParameters
  {
  public:
    AWS_PIPES_API PipeSourceManagedStreamingKafkaParameters();
    AWS_PIPES_API PipeSourceManagedStreamingKafkaParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeSourceManagedStreamingKafkaParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of records to include in each batch.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline const Aws::String& GetConsumerGroupID() const{ return m_consumerGroupID; }

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline bool ConsumerGroupIDHasBeenSet() const { return m_consumerGroupIDHasBeenSet; }

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline void SetConsumerGroupID(const Aws::String& value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID = value; }

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline void SetConsumerGroupID(Aws::String&& value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID = std::move(value); }

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline void SetConsumerGroupID(const char* value) { m_consumerGroupIDHasBeenSet = true; m_consumerGroupID.assign(value); }

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithConsumerGroupID(const Aws::String& value) { SetConsumerGroupID(value); return *this;}

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithConsumerGroupID(Aws::String&& value) { SetConsumerGroupID(std::move(value)); return *this;}

    /**
     * <p>The name of the destination queue to consume.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithConsumerGroupID(const char* value) { SetConsumerGroupID(value); return *this;}


    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline const MSKAccessCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline void SetCredentials(const MSKAccessCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline void SetCredentials(MSKAccessCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithCredentials(const MSKAccessCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials needed to access the resource.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithCredentials(MSKAccessCredentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline int GetMaximumBatchingWindowInSeconds() const{ return m_maximumBatchingWindowInSeconds; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline bool MaximumBatchingWindowInSecondsHasBeenSet() const { return m_maximumBatchingWindowInSecondsHasBeenSet; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline void SetMaximumBatchingWindowInSeconds(int value) { m_maximumBatchingWindowInSecondsHasBeenSet = true; m_maximumBatchingWindowInSeconds = value; }

    /**
     * <p>The maximum length of a time to wait for events.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithMaximumBatchingWindowInSeconds(int value) { SetMaximumBatchingWindowInSeconds(value); return *this;}


    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline const MSKStartPosition& GetStartingPosition() const{ return m_startingPosition; }

    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline bool StartingPositionHasBeenSet() const { return m_startingPositionHasBeenSet; }

    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline void SetStartingPosition(const MSKStartPosition& value) { m_startingPositionHasBeenSet = true; m_startingPosition = value; }

    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline void SetStartingPosition(MSKStartPosition&& value) { m_startingPositionHasBeenSet = true; m_startingPosition = std::move(value); }

    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithStartingPosition(const MSKStartPosition& value) { SetStartingPosition(value); return *this;}

    /**
     * <p>(Streams only) The position in a stream from which to start reading.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithStartingPosition(MSKStartPosition&& value) { SetStartingPosition(std::move(value)); return *this;}


    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic that the pipe will read from.</p>
     */
    inline PipeSourceManagedStreamingKafkaParameters& WithTopicName(const char* value) { SetTopicName(value); return *this;}

  private:

    int m_batchSize;
    bool m_batchSizeHasBeenSet = false;

    Aws::String m_consumerGroupID;
    bool m_consumerGroupIDHasBeenSet = false;

    MSKAccessCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    int m_maximumBatchingWindowInSeconds;
    bool m_maximumBatchingWindowInSecondsHasBeenSet = false;

    MSKStartPosition m_startingPosition;
    bool m_startingPositionHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
