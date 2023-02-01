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
    AWS_IOTSITEWISE_API PropertyNotification();
    AWS_IOTSITEWISE_API PropertyNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API PropertyNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline PropertyNotification& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline PropertyNotification& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The MQTT topic to which IoT SiteWise publishes property value update
     * notifications.</p>
     */
    inline PropertyNotification& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The current notification state.</p>
     */
    inline const PropertyNotificationState& GetState() const{ return m_state; }

    /**
     * <p>The current notification state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current notification state.</p>
     */
    inline void SetState(const PropertyNotificationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current notification state.</p>
     */
    inline void SetState(PropertyNotificationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current notification state.</p>
     */
    inline PropertyNotification& WithState(const PropertyNotificationState& value) { SetState(value); return *this;}

    /**
     * <p>The current notification state.</p>
     */
    inline PropertyNotification& WithState(PropertyNotificationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    PropertyNotificationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
