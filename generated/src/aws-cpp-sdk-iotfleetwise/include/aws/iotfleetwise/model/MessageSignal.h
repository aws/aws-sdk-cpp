/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/StructuredMessage.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The decoding information for a specific message which support higher order
   * data types. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/MessageSignal">AWS
   * API Reference</a></p>
   */
  class MessageSignal
  {
  public:
    AWS_IOTFLEETWISE_API MessageSignal() = default;
    AWS_IOTFLEETWISE_API MessageSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API MessageSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    MessageSignal& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline const StructuredMessage& GetStructuredMessage() const { return m_structuredMessage; }
    inline bool StructuredMessageHasBeenSet() const { return m_structuredMessageHasBeenSet; }
    template<typename StructuredMessageT = StructuredMessage>
    void SetStructuredMessage(StructuredMessageT&& value) { m_structuredMessageHasBeenSet = true; m_structuredMessage = std::forward<StructuredMessageT>(value); }
    template<typename StructuredMessageT = StructuredMessage>
    MessageSignal& WithStructuredMessage(StructuredMessageT&& value) { SetStructuredMessage(std::forward<StructuredMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    StructuredMessage m_structuredMessage;
    bool m_structuredMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
