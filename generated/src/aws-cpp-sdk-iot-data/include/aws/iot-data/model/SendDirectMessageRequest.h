/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/model/PayloadFormatIndicator.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace IoTDataPlane {
namespace Model {

/**
 */
class SendDirectMessageRequest : public StreamingIoTDataPlaneRequest {
 public:
  AWS_IOTDATAPLANE_API SendDirectMessageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendDirectMessage"; }

  AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_IOTDATAPLANE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the MQTT client to send the message to.</p>
   * <p>Client IDs must not exceed 128 characters and can't start with a dollar sign
   * ($). MQTT client IDs must be URL encoded (percent-encoded) when they contain
   * characters that are not valid in HTTP requests, such as spaces, forward slashes
   * (/), and UTF-8 characters. For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
   * Web Services IoT Core message broker and protocol limits and quotas</a>.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  SendDirectMessageRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The topic of the outbound MQTT Publish message to the receiving client. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
   * Web Services IoT Core message broker and protocol limits and quotas</a>.</p>
   */
  inline const Aws::String& GetTopic() const { return m_topic; }
  inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
  template <typename TopicT = Aws::String>
  void SetTopic(TopicT&& value) {
    m_topicHasBeenSet = true;
    m_topic = std::forward<TopicT>(value);
  }
  template <typename TopicT = Aws::String>
  SendDirectMessageRequest& WithTopic(TopicT&& value) {
    SetTopic(std::forward<TopicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A UTF-8 encoded string that's used as the topic name for a response message.
   * The response topic describes the topic which the receiver should publish to as
   * part of the request-response flow. The topic must not contain wildcard
   * characters. For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
   * Web Services IoT Core message broker and protocol limits and quotas</a>.</p>
   */
  inline const Aws::String& GetResponseTopic() const { return m_responseTopic; }
  inline bool ResponseTopicHasBeenSet() const { return m_responseTopicHasBeenSet; }
  template <typename ResponseTopicT = Aws::String>
  void SetResponseTopic(ResponseTopicT&& value) {
    m_responseTopicHasBeenSet = true;
    m_responseTopic = std::forward<ResponseTopicT>(value);
  }
  template <typename ResponseTopicT = Aws::String>
  SendDirectMessageRequest& WithResponseTopic(ResponseTopicT&& value) {
    SetResponseTopic(std::forward<ResponseTopicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value that specifies whether to wait for delivery confirmation from
   * the receiving client.</p> <p>When set to <code>true</code>, the API delivers the
   * message at QoS 1 and waits for the client to send a delivery confirmation
   * (PUBACK) before returning a successful response. If delivery confirmation is not
   * received within the specified <code>timeout</code> period, the API returns HTTP
   * 504.</p> <p>When set to <code>false</code>, the API delivers the message at QoS
   * 0 and returns after Amazon Web Services IoT Core attempts to deliver the
   * message.</p> <p>Valid values: <code>true</code> | <code>false</code> </p>
   * <p>Default value: <code>false</code> </p>
   */
  inline bool GetConfirmation() const { return m_confirmation; }
  inline bool ConfirmationHasBeenSet() const { return m_confirmationHasBeenSet; }
  inline void SetConfirmation(bool value) {
    m_confirmationHasBeenSet = true;
    m_confirmation = value;
  }
  inline SendDirectMessageRequest& WithConfirmation(bool value) {
    SetConfirmation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An integer that represents the maximum time, in seconds, to wait for a
   * delivery confirmation (PUBACK) from the receiving client after the message has
   * been delivered. This parameter is only used when <code>confirmation</code> is
   * set to <code>true</code>. If <code>confirmation</code> is <code>false</code>,
   * this parameter is ignored.</p> <p>The total API response time may be higher than
   * this value due to internal processing. Set your HTTP client timeout to a value
   * greater than this parameter.</p> <p>Valid range: 1 to 15 seconds.</p> <p>Default
   * value: <code>5</code> seconds.</p>
   */
  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline SendDirectMessageRequest& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSON string that contains an array of JSON objects. If you don't use Amazon
   * Web Services SDK or CLI, you must encode the JSON string to base64 format before
   * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
   * value in the API.</p> <p>For MQTT 3.1.1 clients, user properties are silently
   * dropped.</p> <p>The following example <code>userProperties</code> parameter is a
   * JSON string which represents two User Properties. Note that it needs to be
   * base64-encoded:</p> <p> <code>[{"deviceName": "alpha"}, {"deviceCnt":
   * "45"}]</code> </p>
   */
  inline const Aws::String& GetUserProperties() const { return m_userProperties; }
  inline bool UserPropertiesHasBeenSet() const { return m_userPropertiesHasBeenSet; }
  template <typename UserPropertiesT = Aws::String>
  void SetUserProperties(UserPropertiesT&& value) {
    m_userPropertiesHasBeenSet = true;
    m_userProperties = std::forward<UserPropertiesT>(value);
  }
  template <typename UserPropertiesT = Aws::String>
  SendDirectMessageRequest& WithUserProperties(UserPropertiesT&& value) {
    SetUserProperties(std::forward<UserPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An <code>Enum</code> string value that indicates whether the payload is
   * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
   * in the API.</p>
   */
  inline PayloadFormatIndicator GetPayloadFormatIndicator() const { return m_payloadFormatIndicator; }
  inline bool PayloadFormatIndicatorHasBeenSet() const { return m_payloadFormatIndicatorHasBeenSet; }
  inline void SetPayloadFormatIndicator(PayloadFormatIndicator value) {
    m_payloadFormatIndicatorHasBeenSet = true;
    m_payloadFormatIndicator = value;
  }
  inline SendDirectMessageRequest& WithPayloadFormatIndicator(PayloadFormatIndicator value) {
    SetPayloadFormatIndicator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The base64-encoded binary data used by the sender of the request message to
   * identify which request the response message is for when it's received.
   * <code>correlationData</code> is an HTTP header value in the API.</p>
   */
  inline const Aws::String& GetCorrelationData() const { return m_correlationData; }
  inline bool CorrelationDataHasBeenSet() const { return m_correlationDataHasBeenSet; }
  template <typename CorrelationDataT = Aws::String>
  void SetCorrelationData(CorrelationDataT&& value) {
    m_correlationDataHasBeenSet = true;
    m_correlationData = std::forward<CorrelationDataT>(value);
  }
  template <typename CorrelationDataT = Aws::String>
  SendDirectMessageRequest& WithCorrelationData(CorrelationDataT&& value) {
    SetCorrelationData(std::forward<CorrelationDataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_topic;

  Aws::String m_responseTopic;

  bool m_confirmation{false};

  int m_timeout{0};

  Aws::String m_userProperties;

  PayloadFormatIndicator m_payloadFormatIndicator{PayloadFormatIndicator::NOT_SET};

  Aws::String m_correlationData;
  bool m_clientIdHasBeenSet = false;
  bool m_topicHasBeenSet = false;
  bool m_responseTopicHasBeenSet = false;
  bool m_confirmationHasBeenSet = false;
  bool m_timeoutHasBeenSet = false;
  bool m_userPropertiesHasBeenSet = false;
  bool m_payloadFormatIndicatorHasBeenSet = false;
  bool m_correlationDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTDataPlane
}  // namespace Aws
