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
    AWS_IOT_API MqttHeaders();
    AWS_IOT_API MqttHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API MqttHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline const Aws::String& GetPayloadFormatIndicator() const{ return m_payloadFormatIndicator; }

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
    inline bool PayloadFormatIndicatorHasBeenSet() const { return m_payloadFormatIndicatorHasBeenSet; }

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
    inline void SetPayloadFormatIndicator(const Aws::String& value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator = value; }

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
    inline void SetPayloadFormatIndicator(Aws::String&& value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator = std::move(value); }

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
    inline void SetPayloadFormatIndicator(const char* value) { m_payloadFormatIndicatorHasBeenSet = true; m_payloadFormatIndicator.assign(value); }

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
    inline MqttHeaders& WithPayloadFormatIndicator(const Aws::String& value) { SetPayloadFormatIndicator(value); return *this;}

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
    inline MqttHeaders& WithPayloadFormatIndicator(Aws::String&& value) { SetPayloadFormatIndicator(std::move(value)); return *this;}

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
    inline MqttHeaders& WithPayloadFormatIndicator(const char* value) { SetPayloadFormatIndicator(value); return *this;}


    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline MqttHeaders& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline MqttHeaders& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>A UTF-8 encoded string that describes the content of the publishing
     * message.</p> <p>For more information, see <a
     * href="https://docs.oasis-open.org/mqtt/mqtt/v5.0/os/mqtt-v5.0-os.html#_Toc3901118">
     * Content Type</a> from the MQTT Version 5.0 specification.</p> <p>Supports <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-substitution-templates.html">substitution
     * templates</a>.</p>
     */
    inline MqttHeaders& WithContentType(const char* value) { SetContentType(value); return *this;}


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
    inline const Aws::String& GetResponseTopic() const{ return m_responseTopic; }

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
    inline bool ResponseTopicHasBeenSet() const { return m_responseTopicHasBeenSet; }

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
    inline void SetResponseTopic(const Aws::String& value) { m_responseTopicHasBeenSet = true; m_responseTopic = value; }

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
    inline void SetResponseTopic(Aws::String&& value) { m_responseTopicHasBeenSet = true; m_responseTopic = std::move(value); }

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
    inline void SetResponseTopic(const char* value) { m_responseTopicHasBeenSet = true; m_responseTopic.assign(value); }

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
    inline MqttHeaders& WithResponseTopic(const Aws::String& value) { SetResponseTopic(value); return *this;}

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
    inline MqttHeaders& WithResponseTopic(Aws::String&& value) { SetResponseTopic(std::move(value)); return *this;}

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
    inline MqttHeaders& WithResponseTopic(const char* value) { SetResponseTopic(value); return *this;}


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
    inline const Aws::String& GetCorrelationData() const{ return m_correlationData; }

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
    inline bool CorrelationDataHasBeenSet() const { return m_correlationDataHasBeenSet; }

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
    inline void SetCorrelationData(const Aws::String& value) { m_correlationDataHasBeenSet = true; m_correlationData = value; }

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
    inline void SetCorrelationData(Aws::String&& value) { m_correlationDataHasBeenSet = true; m_correlationData = std::move(value); }

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
    inline void SetCorrelationData(const char* value) { m_correlationDataHasBeenSet = true; m_correlationData.assign(value); }

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
    inline MqttHeaders& WithCorrelationData(const Aws::String& value) { SetCorrelationData(value); return *this;}

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
    inline MqttHeaders& WithCorrelationData(Aws::String&& value) { SetCorrelationData(std::move(value)); return *this;}

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
    inline MqttHeaders& WithCorrelationData(const char* value) { SetCorrelationData(value); return *this;}


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
    inline const Aws::String& GetMessageExpiry() const{ return m_messageExpiry; }

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
    inline bool MessageExpiryHasBeenSet() const { return m_messageExpiryHasBeenSet; }

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
    inline void SetMessageExpiry(const Aws::String& value) { m_messageExpiryHasBeenSet = true; m_messageExpiry = value; }

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
    inline void SetMessageExpiry(Aws::String&& value) { m_messageExpiryHasBeenSet = true; m_messageExpiry = std::move(value); }

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
    inline void SetMessageExpiry(const char* value) { m_messageExpiryHasBeenSet = true; m_messageExpiry.assign(value); }

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
    inline MqttHeaders& WithMessageExpiry(const Aws::String& value) { SetMessageExpiry(value); return *this;}

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
    inline MqttHeaders& WithMessageExpiry(Aws::String&& value) { SetMessageExpiry(std::move(value)); return *this;}

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
    inline MqttHeaders& WithMessageExpiry(const char* value) { SetMessageExpiry(value); return *this;}


    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline const Aws::Vector<UserProperty>& GetUserProperties() const{ return m_userProperties; }

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline bool UserPropertiesHasBeenSet() const { return m_userPropertiesHasBeenSet; }

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline void SetUserProperties(const Aws::Vector<UserProperty>& value) { m_userPropertiesHasBeenSet = true; m_userProperties = value; }

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline void SetUserProperties(Aws::Vector<UserProperty>&& value) { m_userPropertiesHasBeenSet = true; m_userProperties = std::move(value); }

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline MqttHeaders& WithUserProperties(const Aws::Vector<UserProperty>& value) { SetUserProperties(value); return *this;}

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline MqttHeaders& WithUserProperties(Aws::Vector<UserProperty>&& value) { SetUserProperties(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline MqttHeaders& AddUserProperties(const UserProperty& value) { m_userPropertiesHasBeenSet = true; m_userProperties.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs that you define in the MQTT5 header.</p>
     */
    inline MqttHeaders& AddUserProperties(UserProperty&& value) { m_userPropertiesHasBeenSet = true; m_userProperties.push_back(std::move(value)); return *this; }

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
