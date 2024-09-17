/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/MqttHeaders.h>
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
  class RepublishAction
  {
  public:
    AWS_IOT_API RepublishAction();
    AWS_IOT_API RepublishAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API RepublishAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the IAM role that grants access.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline RepublishAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline RepublishAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline RepublishAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline const Aws::String& GetTopic() const{ return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    inline void SetTopic(const Aws::String& value) { m_topicHasBeenSet = true; m_topic = value; }
    inline void SetTopic(Aws::String&& value) { m_topicHasBeenSet = true; m_topic = std::move(value); }
    inline void SetTopic(const char* value) { m_topicHasBeenSet = true; m_topic.assign(value); }
    inline RepublishAction& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}
    inline RepublishAction& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}
    inline RepublishAction& WithTopic(const char* value) { SetTopic(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Quality of Service (QoS) level to use when republishing messages. The
     * default value is 0.</p>
     */
    inline int GetQos() const{ return m_qos; }
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }
    inline RepublishAction& WithQos(int value) { SetQos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>MQTT Version 5.0 headers information. For more information, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/mqtt.html"> MQTT</a>
     * from the Amazon Web Services IoT Core Developer Guide.</p>
     */
    inline const MqttHeaders& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const MqttHeaders& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(MqttHeaders&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline RepublishAction& WithHeaders(const MqttHeaders& value) { SetHeaders(value); return *this;}
    inline RepublishAction& WithHeaders(MqttHeaders&& value) { SetHeaders(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    int m_qos;
    bool m_qosHasBeenSet = false;

    MqttHeaders m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
