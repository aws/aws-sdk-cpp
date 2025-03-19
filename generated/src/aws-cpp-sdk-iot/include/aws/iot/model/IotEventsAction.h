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
    AWS_IOT_API IotEventsAction() = default;
    AWS_IOT_API IotEventsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API IotEventsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT Events input.</p>
     */
    inline const Aws::String& GetInputName() const { return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    template<typename InputNameT = Aws::String>
    void SetInputName(InputNameT&& value) { m_inputNameHasBeenSet = true; m_inputName = std::forward<InputNameT>(value); }
    template<typename InputNameT = Aws::String>
    IotEventsAction& WithInputName(InputNameT&& value) { SetInputName(std::forward<InputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the message. The default <code>messageId</code> is a new UUID
     * value.</p> <p>When <code>batchMode</code> is <code>true</code>, you can't
     * specify a <code>messageId</code>--a new UUID value will be assigned.</p>
     * <p>Assign a value to this property to ensure that only one input (message) with
     * a given <code>messageId</code> will be processed by an IoT Events detector.</p>
     */
    inline const Aws::String& GetMessageId() const { return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    template<typename MessageIdT = Aws::String>
    void SetMessageId(MessageIdT&& value) { m_messageIdHasBeenSet = true; m_messageId = std::forward<MessageIdT>(value); }
    template<typename MessageIdT = Aws::String>
    IotEventsAction& WithMessageId(MessageIdT&& value) { SetMessageId(std::forward<MessageIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline bool GetBatchMode() const { return m_batchMode; }
    inline bool BatchModeHasBeenSet() const { return m_batchModeHasBeenSet; }
    inline void SetBatchMode(bool value) { m_batchModeHasBeenSet = true; m_batchMode = value; }
    inline IotEventsAction& WithBatchMode(bool value) { SetBatchMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants IoT permission to send an input to an IoT
     * Events detector. ("Action":"iotevents:BatchPutMessage").</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IotEventsAction& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    bool m_batchMode{false};
    bool m_batchModeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
