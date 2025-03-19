/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/UserProperty.h>
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
   * <p>Specifies MQTT Version 5.0 headers information. For more information, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/mqtt.html"> MQTT</a>
   * from Amazon Web Services IoT Core Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/MqttHeaders">AWS API
   * Reference</a></p>
   */
  class MqttHeaders
  {
  public:
    AWS_IOT_API MqttHeaders() = default;
    AWS_IOT_API MqttHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MqttHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8.</p> <p>Valid values are <code>UNSPECIFIED_BYTES</code> and
     * <code>UTF8_DATA</code>.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901111">
     * Payload Format Indicator</a> from the MQTT Version 5.0 specification.</p>
     * <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline const Aws::String& GetPayloadFormatIndicator() const { return m_payloadFormatIndicator; }
    inline bool PayloadFormatIndicatorHasBeenSet() const { return m_payloadFormatIndicatorHasBeenSet; }
    template<typename PayloadFormatIndicatorT = Aws::String>
    void SetPayloadFormatIndicator(PayloadFormatIndicatorT&& value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator = std::forward<PayloadFormatIndicatorT>(value); }
    template<typename PayloadFormatIndicatorT = Aws::String>
    MqttHeaders& WithPayloadFormatIndicator(PayloadFormatIndicatorT&& value) { SetPayloadFormatIndicator(std::forward<PayloadFormatIndicatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    MqttHeaders& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901114">
     * Response Topic</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline const Aws::String& GetResponseTopic() const { return m_responseTopic; }
    inline bool ResponseTopicHasBeenSet() const { return m_responseTopicHasBeenSet; }
    template<typename ResponseTopicT = Aws::String>
    void SetResponseTopic(ResponseTopicT&& value) { m_responseTopicHasBeenSet = true; m_responseTopic = std::forward<ResponseTopicT>(value); }
    template<typename ResponseTopicT = Aws::String>
    MqttHeaders& WithResponseTopic(ResponseTopicT&& value) { SetResponseTopic(std::forward<ResponseTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.</p>
     * <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901115">
     * Correlation Data</a> from the MQTT Version 5.0 specification.</p>  <p>
     * This binary data must be based64-encoded. </p>  <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline const Aws::String& GetCorrelationData() const { return m_correlationData; }
    inline bool CorrelationDataHasBeenSet() const { return m_correlationDataHasBeenSet; }
    template<typename CorrelationDataT = Aws::String>
    void SetCorrelationData(CorrelationDataT&& value) { m_correlationDataHasBeenSet = true; m_correlationData = std::forward<CorrelationDataT>(value); }
    template<typename CorrelationDataT = Aws::String>
    MqttHeaders& WithCorrelationData(CorrelationDataT&& value) { SetCorrelationData(std::forward<CorrelationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined integer value that will persist a message at the message
     * broker for a specified amount of time to ensure that the message will expire if
     * it's no longer relevant to the subscriber. The value of
     * <code>messageExpiry</code> represents the number of seconds before it expires.
     * For more information about the limits of <code>messageExpiry</code>, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/mqtt.html">Amazon
     * Web Services IoT Core message broker and protocol limits and quotas </a> from
     * the Amazon Web Services Reference Guide.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline const Aws::String& GetMessageExpiry() const { return m_messageExpiry; }
    inline bool MessageExpiryHasBeenSet() const { return m_messageExpiryHasBeenSet; }
    template<typename MessageExpiryT = Aws::String>
    void SetMessageExpiry(MessageExpiryT&& value) { m_messageExpiryHasBeenSet = true; m_messageExpiry = std::forward<MessageExpiryT>(value); }
    template<typename MessageExpiryT = Aws::String>
    MqttHeaders& WithMessageExpiry(MessageExpiryT&& value) { SetMessageExpiry(std::forward<MessageExpiryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline const Aws::Vector<UserProperty>& GetUserProperties() const { return m_userProperties; }
    inline bool UserPropertiesHasBeenSet() const { return m_userPropertiesHasBeenSet; }
    template<typename UserPropertiesT = Aws::Vector<UserProperty>>
    void SetUserProperties(UserPropertiesT&& value) { m_userPropertiesHasBeenSet = true; m_userProperties = std::forward<UserPropertiesT>(value); }
    template<typename UserPropertiesT = Aws::Vector<UserProperty>>
    MqttHeaders& WithUserProperties(UserPropertiesT&& value) { SetUserProperties(std::forward<UserPropertiesT>(value)); return *this;}
    template<typename UserPropertiesT = UserProperty>
    MqttHeaders& AddUserProperties(UserPropertiesT&& value) { m_userPropertiesHasBeenSet = true; m_userProperties.emplace_back(std::forward<UserPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_payloadFormatIndicator;
    bool m_payloadFormatIndicatorHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_responseTopic;
    bool m_responseTopicHasBeenSet = false;

    Aws::String m_correlationData;
    bool m_correlationDataHasBeenSet = false;

    Aws::String m_messageExpiry;
    bool m_messageExpiryHasBeenSet = false;

    Aws::Vector<UserProperty> m_userProperties;
    bool m_userPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
