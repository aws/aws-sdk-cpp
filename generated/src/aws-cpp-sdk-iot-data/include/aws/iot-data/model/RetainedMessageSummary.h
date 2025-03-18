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
    AWS_IOTDATAPLANE_API RetainedMessageSummary() = default;
    AWS_IOTDATAPLANE_API RetainedMessageSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDATAPLANE_API RetainedMessageSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTDATAPLANE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic name to which the retained message was published.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    RetainedMessageSummary& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the retained message's payload in bytes.</p>
     */
    inline long long GetPayloadSize() const { return m_payloadSize; }
    inline bool PayloadSizeHasBeenSet() const { return m_payloadSizeHasBeenSet; }
    inline void SetPayloadSize(long long value) { m_payloadSizeHasBeenSet = true; m_payloadSize = value; }
    inline RetainedMessageSummary& WithPayloadSize(long long value) { SetPayloadSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quality of service (QoS) level used to publish the retained message.</p>
     */
    inline int GetQos() const { return m_qos; }
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }
    inline RetainedMessageSummary& WithQos(int value) { SetQos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Epoch date and time, in milliseconds, when the retained message was
     * stored by IoT.</p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline RetainedMessageSummary& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}
  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    long long m_payloadSize{0};
    bool m_payloadSizeHasBeenSet = false;

    int m_qos{0};
    bool m_qosHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
