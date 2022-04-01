/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to republish to another topic.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RepublishAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOT_API RepublishAction
  {
  public:
    RepublishAction();
    RepublishAction(Aws::Utils::Json::JsonView jsonValue);
    RepublishAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline RepublishAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline RepublishAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline RepublishAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline RepublishAction& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline RepublishAction& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline RepublishAction& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The Quality of Service (QoS) level to use when republishing messages. The
     * default value is 0.</p>
     */
    inline int GetQos() const{ return m_qos; }

    /**
     * <p>The Quality of Service (QoS) level to use when republishing messages. The
     * default value is 0.</p>
     */
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }

    /**
     * <p>The Quality of Service (QoS) level to use when republishing messages. The
     * default value is 0.</p>
     */
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }

    /**
     * <p>The Quality of Service (QoS) level to use when republishing messages. The
     * default value is 0.</p>
     */
    inline RepublishAction& WithQos(int value) { SetQos(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::String m_topic;
    bool m_topicHasBeenSet;

    int m_qos;
    bool m_qosHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
