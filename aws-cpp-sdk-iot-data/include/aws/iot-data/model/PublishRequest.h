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
    AWS_IOTDATAPLANE_API PublishRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Publish"; }

    AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_IOTDATAPLANE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline PublishRequest& WithTopic(const Aws::String& value) { SetTopic(value); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline PublishRequest& WithTopic(Aws::String&& value) { SetTopic(std::move(value)); return *this;}

    /**
     * <p>The name of the MQTT topic.</p>
     */
    inline PublishRequest& WithTopic(const char* value) { SetTopic(value); return *this;}


    /**
     * <p>The Quality of Service (QoS) level. The default QoS level is 0.</p>
     */
    inline int GetQos() const{ return m_qos; }

    /**
     * <p>The Quality of Service (QoS) level. The default QoS level is 0.</p>
     */
    inline bool QosHasBeenSet() const { return m_qosHasBeenSet; }

    /**
     * <p>The Quality of Service (QoS) level. The default QoS level is 0.</p>
     */
    inline void SetQos(int value) { m_qosHasBeenSet = true; m_qos = value; }

    /**
     * <p>The Quality of Service (QoS) level. The default QoS level is 0.</p>
     */
    inline PublishRequest& WithQos(int value) { SetQos(value); return *this;}


    /**
     * <p>A Boolean value that determines whether to set the RETAIN flag when the
     * message is published.</p> <p>Setting the RETAIN flag causes the message to be
     * retained and sent to new subscribers to the topic.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Default value: <code>false</code>
     * </p>
     */
    inline bool GetRetain() const{ return m_retain; }

    /**
     * <p>A Boolean value that determines whether to set the RETAIN flag when the
     * message is published.</p> <p>Setting the RETAIN flag causes the message to be
     * retained and sent to new subscribers to the topic.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Default value: <code>false</code>
     * </p>
     */
    inline bool RetainHasBeenSet() const { return m_retainHasBeenSet; }

    /**
     * <p>A Boolean value that determines whether to set the RETAIN flag when the
     * message is published.</p> <p>Setting the RETAIN flag causes the message to be
     * retained and sent to new subscribers to the topic.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Default value: <code>false</code>
     * </p>
     */
    inline void SetRetain(bool value) { m_retainHasBeenSet = true; m_retain = value; }

    /**
     * <p>A Boolean value that determines whether to set the RETAIN flag when the
     * message is published.</p> <p>Setting the RETAIN flag causes the message to be
     * retained and sent to new subscribers to the topic.</p> <p>Valid values:
     * <code>true</code> | <code>false</code> </p> <p>Default value: <code>false</code>
     * </p>
     */
    inline PublishRequest& WithRetain(bool value) { SetRetain(value); return *this;}


    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline const Aws::String& GetUserProperties() const{ return m_userProperties; }

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline bool UserPropertiesHasBeenSet() const { return m_userPropertiesHasBeenSet; }

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline void SetUserProperties(const Aws::String& value) { m_userPropertiesHasBeenSet = true; m_userProperties = value; }

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline void SetUserProperties(Aws::String&& value) { m_userPropertiesHasBeenSet = true; m_userProperties = std::move(value); }

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline void SetUserProperties(const char* value) { m_userPropertiesHasBeenSet = true; m_userProperties.assign(value); }

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline PublishRequest& WithUserProperties(const Aws::String& value) { SetUserProperties(value); return *this;}

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline PublishRequest& WithUserProperties(Aws::String&& value) { SetUserProperties(std::move(value)); return *this;}

    /**
     * <p>A JSON string that contains an array of JSON objects. If you don’t use Amazon
     * Web Services SDK or CLI, you must encode the JSON string to base64 format before
     * adding it to the HTTP header. <code>userProperties</code> is an HTTP header
     * value in the API.</p> <p>The following example <code>userProperties</code>
     * parameter is a JSON string which represents two User Properties. Note that it
     * needs to be base64-encoded:</p> <p> <code>[{"deviceName": "alpha"},
     * {"deviceCnt": "45"}]</code> </p>
     */
    inline PublishRequest& WithUserProperties(const char* value) { SetUserProperties(value); return *this;}


    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline const PayloadFormatIndicator& GetPayloadFormatIndicator() const{ return m_payloadFormatIndicator; }

    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline bool PayloadFormatIndicatorHasBeenSet() const { return m_payloadFormatIndicatorHasBeenSet; }

    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline void SetPayloadFormatIndicator(const PayloadFormatIndicator& value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator = value; }

    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline void SetPayloadFormatIndicator(PayloadFormatIndicator&& value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator = std::move(value); }

    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline PublishRequest& WithPayloadFormatIndicator(const PayloadFormatIndicator& value) { SetPayloadFormatIndicator(value); return *this;}

    /**
     * <p>An <code>Enum</code> string value that indicates whether the payload is
     * formatted as UTF-8. <code>payloadFormatIndicator</code> is an HTTP header value
     * in the API.</p>
     */
    inline PublishRequest& WithPayloadFormatIndicator(PayloadFormatIndicator&& value) { SetPayloadFormatIndicator(std::move(value)); return *this;}


    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline const Aws::String& GetResponseTopic() const{ return m_responseTopic; }

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline bool ResponseTopicHasBeenSet() const { return m_responseTopicHasBeenSet; }

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline void SetResponseTopic(const Aws::String& value) { m_responseTopicHasBeenSet = true; m_responseTopic = value; }

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline void SetResponseTopic(Aws::String&& value) { m_responseTopicHasBeenSet = true; m_responseTopic = std::move(value); }

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline void SetResponseTopic(const char* value) { m_responseTopicHasBeenSet = true; m_responseTopic.assign(value); }

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline PublishRequest& WithResponseTopic(const Aws::String& value) { SetResponseTopic(value); return *this;}

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline PublishRequest& WithResponseTopic(Aws::String&& value) { SetResponseTopic(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 encoded string that's used as the topic name for a response message.
     * The response topic is used to describe the topic which the receiver should
     * publish to as part of the request-response flow. The topic must not contain
     * wildcard characters.</p>
     */
    inline PublishRequest& WithResponseTopic(const char* value) { SetResponseTopic(value); return *this;}


    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline const Aws::String& GetCorrelationData() const{ return m_correlationData; }

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline bool CorrelationDataHasBeenSet() const { return m_correlationDataHasBeenSet; }

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline void SetCorrelationData(const Aws::String& value) { m_correlationDataHasBeenSet = true; m_correlationData = value; }

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline void SetCorrelationData(Aws::String&& value) { m_correlationDataHasBeenSet = true; m_correlationData = std::move(value); }

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline void SetCorrelationData(const char* value) { m_correlationDataHasBeenSet = true; m_correlationData.assign(value); }

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline PublishRequest& WithCorrelationData(const Aws::String& value) { SetCorrelationData(value); return *this;}

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline PublishRequest& WithCorrelationData(Aws::String&& value) { SetCorrelationData(std::move(value)); return *this;}

    /**
     * <p>The base64-encoded binary data used by the sender of the request message to
     * identify which request the response message is for when it's received.
     * <code>correlationData</code> is an HTTP header value in the API.</p>
     */
    inline PublishRequest& WithCorrelationData(const char* value) { SetCorrelationData(value); return *this;}


    /**
     * <p>A user-defined integer value that represents the message expiry interval in
     * seconds. If absent, the message doesn't expire. For more information about the
     * limits of <code>messageExpiry</code>, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
     * Web Services IoT Core message broker and protocol limits and quotas </a> from
     * the Amazon Web Services Reference Guide.</p>
     */
    inline long long GetMessageExpiry() const{ return m_messageExpiry; }

    /**
     * <p>A user-defined integer value that represents the message expiry interval in
     * seconds. If absent, the message doesn't expire. For more information about the
     * limits of <code>messageExpiry</code>, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
     * Web Services IoT Core message broker and protocol limits and quotas </a> from
     * the Amazon Web Services Reference Guide.</p>
     */
    inline bool MessageExpiryHasBeenSet() const { return m_messageExpiryHasBeenSet; }

    /**
     * <p>A user-defined integer value that represents the message expiry interval in
     * seconds. If absent, the message doesn't expire. For more information about the
     * limits of <code>messageExpiry</code>, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
     * Web Services IoT Core message broker and protocol limits and quotas </a> from
     * the Amazon Web Services Reference Guide.</p>
     */
    inline void SetMessageExpiry(long long value) { m_messageExpiryHasBeenSet = true; m_messageExpiry = value; }

    /**
     * <p>A user-defined integer value that represents the message expiry interval in
     * seconds. If absent, the message doesn't expire. For more information about the
     * limits of <code>messageExpiry</code>, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html#message-broker-limits">Amazon
     * Web Services IoT Core message broker and protocol limits and quotas </a> from
     * the Amazon Web Services Reference Guide.</p>
     */
    inline PublishRequest& WithMessageExpiry(long long value) { SetMessageExpiry(value); return *this;}

  private:

    Aws::String m_topic;
    bool m_topicHasBeenSet = false;

    int m_qos;
    bool m_qosHasBeenSet = false;

    bool m_retain;
    bool m_retainHasBeenSet = false;


    Aws::String m_userProperties;
    bool m_userPropertiesHasBeenSet = false;

    PayloadFormatIndicator m_payloadFormatIndicator;
    bool m_payloadFormatIndicatorHasBeenSet = false;

    Aws::String m_responseTopic;
    bool m_responseTopicHasBeenSet = false;

    Aws::String m_correlationData;
    bool m_correlationDataHasBeenSet = false;

    long long m_messageExpiry;
    bool m_messageExpiryHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
