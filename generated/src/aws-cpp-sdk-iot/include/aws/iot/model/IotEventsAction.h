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
   * <p>Sends an input to an IoT Events detector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/IotEventsAction">AWS
   * API Reference</a></p>
   */
  class IotEventsAction
  {
  public:
    AWS_IOT_API IotEventsAction();
    AWS_IOT_API IotEventsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IotEventsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline IotEventsAction& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline IotEventsAction& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline IotEventsAction& WithInputName(const char* value) { SetInputName(value); return *this;}


    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline IotEventsAction& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline IotEventsAction& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline IotEventsAction& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>Whether to process the event actions as a batch. The default value is
     * <code>false</code>.</p> <p>When <code>batchMode</code> is <code>true</code>, you
     * can't specify a <code>messageId</code>. </p> <p>When <code>batchMode</code> is
     * <code>true</code> and the rule SQL statement evaluates to an Array, each Array
     * element is treated as a separate message when it's sent to IoT Events by calling
     * <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_BatchPutMessage.html">
     * <code>BatchPutMessage</code> </a>. The resulting array can't have more than 10
     * messages.</p>
     */
    inline bool GetBatchMode() const{ return m_batchMode; }

    /**
     * <p>Whether to process the event actions as a batch. The default value is
     * <code>false</code>.</p> <p>When <code>batchMode</code> is <code>true</code>, you
     * can't specify a <code>messageId</code>. </p> <p>When <code>batchMode</code> is
     * <code>true</code> and the rule SQL statement evaluates to an Array, each Array
     * element is treated as a separate message when it's sent to IoT Events by calling
     * <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_BatchPutMessage.html">
     * <code>BatchPutMessage</code> </a>. The resulting array can't have more than 10
     * messages.</p>
     */
    inline bool BatchModeHasBeenSet() const { return m_batchModeHasBeenSet; }

    /**
     * <p>Whether to process the event actions as a batch. The default value is
     * <code>false</code>.</p> <p>When <code>batchMode</code> is <code>true</code>, you
     * can't specify a <code>messageId</code>. </p> <p>When <code>batchMode</code> is
     * <code>true</code> and the rule SQL statement evaluates to an Array, each Array
     * element is treated as a separate message when it's sent to IoT Events by calling
     * <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_BatchPutMessage.html">
     * <code>BatchPutMessage</code> </a>. The resulting array can't have more than 10
     * messages.</p>
     */
    inline void SetBatchMode(bool value) { m_batchModeHasBeenSet = true; m_batchMode = value; }

    /**
     * <p>Whether to process the event actions as a batch. The default value is
     * <code>false</code>.</p> <p>When <code>batchMode</code> is <code>true</code>, you
     * can't specify a <code>messageId</code>. </p> <p>When <code>batchMode</code> is
     * <code>true</code> and the rule SQL statement evaluates to an Array, each Array
     * element is treated as a separate message when it's sent to IoT Events by calling
     * <a
     * href="https://docs.aws.amazon.com/iotevents/latest/apireference/API_iotevents-data_BatchPutMessage.html">
     * <code>BatchPutMessage</code> </a>. The resulting array can't have more than 10
     * messages.</p>
     */
    inline IotEventsAction& WithBatchMode(bool value) { SetBatchMode(value); return *this;}


    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline IotEventsAction& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline IotEventsAction& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline IotEventsAction& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    bool m_batchMode;
    bool m_batchModeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
