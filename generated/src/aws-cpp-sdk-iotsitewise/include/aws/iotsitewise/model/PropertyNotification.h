/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/PropertyNotificationState.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains asset property value notification information. When the notification
   * state is enabled, IoT SiteWise publishes property value updates to a unique MQTT
   * topic. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/interact-with-other-services.html">Interacting
   * with other services</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/PropertyNotification">AWS
   * API Reference</a></p>
   */
  class PropertyNotification
  {
  public:
    AWS_IOTSITEWISE_API PropertyNotification() = default;
    AWS_IOTSITEWISE_API PropertyNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PropertyNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    PropertyNotification& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current notification state.</p>
     */
    inline PropertyNotificationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(PropertyNotificationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline PropertyNotification& WithState(PropertyNotificationState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    PropertyNotificationState m_state{PropertyNotificationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
