/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceConfiguredInput.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Configurable settings for the input device.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceConfigurableSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputDeviceConfigurableSettings
  {
  public:
    InputDeviceConfigurableSettings();
    InputDeviceConfigurableSettings(Aws::Utils::Json::JsonView jsonValue);
    InputDeviceConfigurableSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline const InputDeviceConfiguredInput& GetConfiguredInput() const{ return m_configuredInput; }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline void SetConfiguredInput(const InputDeviceConfiguredInput& value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline void SetConfiguredInput(InputDeviceConfiguredInput&& value) { m_configuredInputHasBeenSet = true; m_configuredInput = std::move(value); }

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline InputDeviceConfigurableSettings& WithConfiguredInput(const InputDeviceConfiguredInput& value) { SetConfiguredInput(value); return *this;}

    /**
     * The input source that you want to use. If the device has a source connected to
     * only one of its input ports, or if you don't care which source the device sends,
     * specify Auto. If the device has sources connected to both its input ports, and
     * you want to use a specific source, specify the source.
     */
    inline InputDeviceConfigurableSettings& WithConfiguredInput(InputDeviceConfiguredInput&& value) { SetConfiguredInput(std::move(value)); return *this;}


    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The maximum bitrate in bits per second. Set a value here to throttle the bitrate
     * of the source video.
     */
    inline InputDeviceConfigurableSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}

  private:

    InputDeviceConfiguredInput m_configuredInput;
    bool m_configuredInputHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
