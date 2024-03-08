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
    AWS_IOTFLEETWISE_API MessageSignal();
    AWS_IOTFLEETWISE_API MessageSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API MessageSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline const Aws::String& GetTopicName() const{ return m_topicName; }

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline void SetTopicName(const Aws::String& value) { m_topicNameHasBeenSet = true; m_topicName = value; }

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline void SetTopicName(Aws::String&& value) { m_topicNameHasBeenSet = true; m_topicName = std::move(value); }

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline void SetTopicName(const char* value) { m_topicNameHasBeenSet = true; m_topicName.assign(value); }

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline MessageSignal& WithTopicName(const Aws::String& value) { SetTopicName(value); return *this;}

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline MessageSignal& WithTopicName(Aws::String&& value) { SetTopicName(std::move(value)); return *this;}

    /**
     * <p>The topic name for the message signal. It corresponds to topics in ROS 2.
     * </p>
     */
    inline MessageSignal& WithTopicName(const char* value) { SetTopicName(value); return *this;}


    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline const StructuredMessage& GetStructuredMessage() const{ return m_structuredMessage; }

    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline bool StructuredMessageHasBeenSet() const { return m_structuredMessageHasBeenSet; }

    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline void SetStructuredMessage(const StructuredMessage& value) { m_structuredMessageHasBeenSet = true; m_structuredMessage = value; }

    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline void SetStructuredMessage(StructuredMessage&& value) { m_structuredMessageHasBeenSet = true; m_structuredMessage = std::move(value); }

    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline MessageSignal& WithStructuredMessage(const StructuredMessage& value) { SetStructuredMessage(value); return *this;}

    /**
     * <p>The structured message for the message signal. It can be defined with either
     * a <code>primitiveMessageDefinition</code>,
     * <code>structuredMessageListDefinition</code>, or
     * <code>structuredMessageDefinition</code> recursively.</p>
     */
    inline MessageSignal& WithStructuredMessage(StructuredMessage&& value) { SetStructuredMessage(std::move(value)); return *this;}

  private:

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    StructuredMessage m_structuredMessage;
    bool m_structuredMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
