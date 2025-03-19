/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/iot-data/model/PayloadFormatIndicator.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDataPlane
{
namespace Model
{

  /**
   * <p>The input for the Publish operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/PublishRequest">AWS
   * API Reference</a></p>
   */
  class PublishRequest : public StreamingIoTDataPlaneRequest
  {
  public:
    AWS_IOTDATAPLANE_API PublishRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Publish"; }

    AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_IOTDATAPLANE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline const Aws::String& GetTopic() const { return m_topic; }
    inline bool TopicHasBeenSet() const { return m_topicHasBeenSet; }
    template<typename TopicT = Aws::String>
    void SetTopic(TopicT&& value) { m_topicHasBeenSet = true; m_topic = std::forward<TopicT>(value); }
    template<typename TopicT = Aws::String>
    PublishRequest& WithTopic(TopicT&& value) { SetTopic(std::forward<TopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Quality of Service (QoS) level. The default QoS level is 0.</p>
     */
    inline int GetQos() const { return m_qos; }
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }
    inline PublishRequest& WithQos(int value) { SetQos(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that determines whether to set the RETAIN flag when the
     * message is published.</p> <p>Setting the RETAIN flag causes the message to be
     * retained and sent to new subscribers to the topic.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Default value: <code>false</code>
     * </p>
     */
    inline bool GetRetain() const { return m_retain; }
    inline bool RetainHasBeenSet() const { return m_retainHasBeenSet; }
    inline void SetRetain(bool value) { m_retainHasBeenSet = true; m_retain = value; }
    inline PublishRequest& WithRetain(bool value) { SetRetain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline const Aws::String& GetUserProperties() const { return m_userProperties; }
    inline bool UserPropertiesHasBeenSet() const { return m_userPropertiesHasBeenSet; }
    template<typename UserPropertiesT = Aws::String>
    void SetUserProperties(UserPropertiesT&& value) { m_userPropertiesHasBeenSet = true; m_userProperties = std::forward<UserPropertiesT>(value); }
    template<typename UserPropertiesT = Aws::String>
    PublishRequest& WithUserProperties(UserPropertiesT&& value) { SetUserProperties(std::forward<UserPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline PayloadFormatIndicator GetPayloadFormatIndicator() const { return m_payloadFormatIndicator; }
    inline bool PayloadFormatIndicatorHasBeenSet() const { return m_payloadFormatIndicatorHasBeenSet; }
    inline void SetPayloadFormatIndicator(PayloadFormatIndicator value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator = value; }
    inline PublishRequest& WithPayloadFormatIndicator(PayloadFormatIndicator value) { SetPayloadFormatIndicator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline const Aws::String& GetResponseTopic() const { return m_responseTopic; }
    inline bool ResponseTopicHasBeenSet() const { return m_responseTopicHasBeenSet; }
    template<typename ResponseTopicT = Aws::String>
    void SetResponseTopic(ResponseTopicT&& value) { m_responseTopicHasBeenSet = true; m_responseTopic = std::forward<ResponseTopicT>(value); }
    template<typename ResponseTopicT = Aws::String>
    PublishRequest& WithResponseTopic(ResponseTopicT&& value) { SetResponseTopic(std::forward<ResponseTopicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline const Aws::String& GetCorrelationData() const { return m_correlationData; }
    inline bool CorrelationDataHasBeenSet() const { return m_correlationDataHasBeenSet; }
    template<typename CorrelationDataT = Aws::String>
    void SetCorrelationData(CorrelationDataT&& value) { m_correlationDataHasBeenSet = true; m_correlationData = std::forward<CorrelationDataT>(value); }
    template<typename CorrelationDataT = Aws::String>
    PublishRequest& WithCorrelationData(CorrelationDataT&& value) { SetCorrelationData(std::forward<CorrelationDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-defined integer value that represents the message expiry interval in
     * seconds. If absent, the message doesn't expire. For more information about the
     * limits of <code>messageExpiry</code>, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
     * Web Services IoT Core message broker and protocol limits and quotas </a> from
     * the Amazon Web Services Reference Guide.</p>
     */
    inline long long GetMessageExpiry() const { return m_messageExpiry; }
    inline bool MessageExpiryHasBeenSet() const { return m_messageExpiryHasBeenSet; }
    inline void SetMessageExpiry(long long value) { m_messageExpiryHasBeenSet = true; m_messageExpiry = value; }
    inline PublishRequest& WithMessageExpiry(long long value) { SetMessageExpiry(value); return *this;}
    ///@}
  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    int m_qos{0};
    bool m_qosHasBeenSet = false;

    bool m_retain{false};
    bool m_retainHasBeenSet = false;


    Aws::String m_userProperties;
    bool m_userPropertiesHasBeenSet = false;

    PayloadFormatIndicator m_payloadFormatIndicator{PayloadFormatIndicator::NOT_SET};
    bool m_payloadFormatIndicatorHasBeenSet = false;

    Aws::String m_responseTopic;
    bool m_responseTopicHasBeenSet = false;

    Aws::String m_correlationData;
    bool m_correlationDataHasBeenSet = false;

    long long m_messageExpiry{0};
    bool m_messageExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
