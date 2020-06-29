/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/medialive/model/InputDeviceConfigurableSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update an input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputDeviceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateInputDeviceRequest : public MediaLiveRequest
  {
  public:
    UpdateInputDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInputDevice"; }

    Aws::String SerializePayload() const override;


    /**
     * The settings that you want to apply to the input device.
     */
    inline const InputDeviceConfigurableSettings& GetHdDeviceSettings() const{ return m_hdDeviceSettings; }

    /**
     * The settings that you want to apply to the input device.
     */
    inline bool HdDeviceSettingsHasBeenSet() const { return m_hdDeviceSettingsHasBeenSet; }

    /**
     * The settings that you want to apply to the input device.
     */
    inline void SetHdDeviceSettings(const InputDeviceConfigurableSettings& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = value; }

    /**
     * The settings that you want to apply to the input device.
     */
    inline void SetHdDeviceSettings(InputDeviceConfigurableSettings&& value) { m_hdDeviceSettingsHasBeenSet = true; m_hdDeviceSettings = std::move(value); }

    /**
     * The settings that you want to apply to the input device.
     */
    inline UpdateInputDeviceRequest& WithHdDeviceSettings(const InputDeviceConfigurableSettings& value) { SetHdDeviceSettings(value); return *this;}

    /**
     * The settings that you want to apply to the input device.
     */
    inline UpdateInputDeviceRequest& WithHdDeviceSettings(InputDeviceConfigurableSettings&& value) { SetHdDeviceSettings(std::move(value)); return *this;}


    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline const Aws::String& GetInputDeviceId() const{ return m_inputDeviceId; }

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline bool InputDeviceIdHasBeenSet() const { return m_inputDeviceIdHasBeenSet; }

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline void SetInputDeviceId(const Aws::String& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = value; }

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline void SetInputDeviceId(Aws::String&& value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId = std::move(value); }

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline void SetInputDeviceId(const char* value) { m_inputDeviceIdHasBeenSet = true; m_inputDeviceId.assign(value); }

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline UpdateInputDeviceRequest& WithInputDeviceId(const Aws::String& value) { SetInputDeviceId(value); return *this;}

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline UpdateInputDeviceRequest& WithInputDeviceId(Aws::String&& value) { SetInputDeviceId(std::move(value)); return *this;}

    /**
     * The unique ID of the input device. For example, hd-123456789abcdef.
     */
    inline UpdateInputDeviceRequest& WithInputDeviceId(const char* value) { SetInputDeviceId(value); return *this;}


    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline UpdateInputDeviceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline UpdateInputDeviceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name that you assigned to this input device (not the unique ID).
     */
    inline UpdateInputDeviceRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    InputDeviceConfigurableSettings m_hdDeviceSettings;
    bool m_hdDeviceSettingsHasBeenSet;

    Aws::String m_inputDeviceId;
    bool m_inputDeviceIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
