/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/model/Payload.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Sends an AWS IoT Events input, passing in information about the detector
   * model instance and the event that triggered the action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotEventsAction">AWS
   * API Reference</a></p>
   */
  class IotEventsAction
  {
  public:
    AWS_IOTEVENTS_API IotEventsAction();
    AWS_IOTEVENTS_API IotEventsAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotEventsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline IotEventsAction& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline IotEventsAction& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline IotEventsAction& WithInputName(const char* value) { SetInputName(value); return *this;}


    /**
     * <p>You can configure the action payload when you send a message to an AWS IoT
     * Events input.</p>
     */
    inline const Payload& GetPayload() const{ return m_payload; }

    /**
     * <p>You can configure the action payload when you send a message to an AWS IoT
     * Events input.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>You can configure the action payload when you send a message to an AWS IoT
     * Events input.</p>
     */
    inline void SetPayload(const Payload& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>You can configure the action payload when you send a message to an AWS IoT
     * Events input.</p>
     */
    inline void SetPayload(Payload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>You can configure the action payload when you send a message to an AWS IoT
     * Events input.</p>
     */
    inline IotEventsAction& WithPayload(const Payload& value) { SetPayload(value); return *this;}

    /**
     * <p>You can configure the action payload when you send a message to an AWS IoT
     * Events input.</p>
     */
    inline IotEventsAction& WithPayload(Payload&& value) { SetPayload(std::move(value)); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Payload m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
