/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p> The identifier of the input routed to AWS IoT Events. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotEventsInputIdentifier">AWS
   * API Reference</a></p>
   */
  class IotEventsInputIdentifier
  {
  public:
    AWS_IOTEVENTS_API IotEventsInputIdentifier();
    AWS_IOTEVENTS_API IotEventsInputIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotEventsInputIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline IotEventsInputIdentifier& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline IotEventsInputIdentifier& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p> The name of the input routed to AWS IoT Events. </p>
     */
    inline IotEventsInputIdentifier& WithInputName(const char* value) { SetInputName(value); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
