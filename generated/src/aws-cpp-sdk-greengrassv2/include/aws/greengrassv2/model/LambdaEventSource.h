/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/LambdaEventSourceType.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about an event source for an Lambda function. The event
   * source defines the topics on which this Lambda function subscribes to receive
   * messages that run the function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaEventSource">AWS
   * API Reference</a></p>
   */
  class LambdaEventSource
  {
  public:
    AWS_GREENGRASSV2_API LambdaEventSource() = default;
    AWS_GREENGRASSV2_API LambdaEventSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaEventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The topic to which to subscribe to receive event messages.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    LambdaEventSource& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of event source. Choose from the following options:</p> <ul> <li>
     * <p> <code>PUB_SUB</code> – Subscribe to local publish/subscribe messages. This
     * event source type doesn't support MQTT wildcards (<code>+</code> and
     * <code>#</code>) in the event source topic.</p> </li> <li> <p>
     * <code>IOT_CORE</code> – Subscribe to Amazon Web Services IoT Core MQTT messages.
     * This event source type supports MQTT wildcards (<code>+</code> and
     * <code>#</code>) in the event source topic.</p> </li> </ul>
     */
    inline LambdaEventSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(LambdaEventSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline LambdaEventSource& WithType(LambdaEventSourceType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    LambdaEventSourceType m_type{LambdaEventSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
