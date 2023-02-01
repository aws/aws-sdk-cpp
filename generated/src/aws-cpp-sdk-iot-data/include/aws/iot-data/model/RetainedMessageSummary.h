/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoTDataPlane
{
namespace Model
{

  /**
   * <p>Information about a single retained message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/RetainedMessageSummary">AWS
   * API Reference</a></p>
   */
  class RetainedMessageSummary
  {
  public:
    AWS_IOTDATAPLANE_API RetainedMessageSummary();
    AWS_IOTDATAPLANE_API RetainedMessageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDATAPLANE_API RetainedMessageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline RetainedMessageSummary& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline RetainedMessageSummary& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline RetainedMessageSummary& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The size of the retained message's payload in bytes.</p>
     */
    inline long long GetPayloadSize() const{ return m_payloadSize; }

    /**
     * <p>The size of the retained message's payload in bytes.</p>
     */
    inline bool PayloadSizeHasBeenSet() const { return m_payloadSizeHasBeenSet; }

    /**
     * <p>The size of the retained message's payload in bytes.</p>
     */
    inline void SetPayloadSize(long long value) { m_payloadSizeHasBeenSet = true; m_payloadSize = value; }

    /**
     * <p>The size of the retained message's payload in bytes.</p>
     */
    inline RetainedMessageSummary& WithPayloadSize(long long value) { SetPayloadSize(value); return *this;}


    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline int GetQos() const{ return m_qos; }

    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }

    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }

    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline RetainedMessageSummary& WithQos(int value) { SetQos(value); return *this;}


    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline RetainedMessageSummary& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}

  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    long long m_payloadSize;
    bool m_payloadSizeHasBeenSet = false;

    int m_qos;
    bool m_qosHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
