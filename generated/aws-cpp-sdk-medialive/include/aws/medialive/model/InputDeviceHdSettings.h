/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputDeviceActiveInput.h>
#include <aws/medialive/model/InputDeviceConfiguredInput.h>
#include <aws/medialive/model/InputDeviceState.h>
#include <aws/medialive/model/InputDeviceScanType.h>
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
   * Settings that describe the active source from the input device, and the video
   * characteristics of that source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceHdSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API InputDeviceHdSettings
  {
  public:
    InputDeviceHdSettings();
    InputDeviceHdSettings(Aws::Utils::Json::JsonView jsonValue);
    InputDeviceHdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline const InputDeviceActiveInput& GetActiveInput() const{ return m_activeInput; }

    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline bool ActiveInputHasBeenSet() const { return m_activeInputHasBeenSet; }

    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline void SetActiveInput(const InputDeviceActiveInput& value) { m_activeInputHasBeenSet = true; m_activeInput = value; }

    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline void SetActiveInput(InputDeviceActiveInput&& value) { m_activeInputHasBeenSet = true; m_activeInput = std::move(value); }

    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline InputDeviceHdSettings& WithActiveInput(const InputDeviceActiveInput& value) { SetActiveInput(value); return *this;}

    /**
     * If you specified Auto as the configured input, specifies which of the sources is
     * currently active (SDI or HDMI).
     */
    inline InputDeviceHdSettings& WithActiveInput(InputDeviceActiveInput&& value) { SetActiveInput(std::move(value)); return *this;}


    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline const InputDeviceConfiguredInput& GetConfiguredInput() const{ return m_configuredInput; }

    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline bool ConfiguredInputHasBeenSet() const { return m_configuredInputHasBeenSet; }

    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline void SetConfiguredInput(const InputDeviceConfiguredInput& value) { m_configuredInputHasBeenSet = true; m_configuredInput = value; }

    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline void SetConfiguredInput(InputDeviceConfiguredInput&& value) { m_configuredInputHasBeenSet = true; m_configuredInput = std::move(value); }

    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline InputDeviceHdSettings& WithConfiguredInput(const InputDeviceConfiguredInput& value) { SetConfiguredInput(value); return *this;}

    /**
     * The source at the input device that is currently active. You can specify this
     * source.
     */
    inline InputDeviceHdSettings& WithConfiguredInput(InputDeviceConfiguredInput&& value) { SetConfiguredInput(std::move(value)); return *this;}


    /**
     * The state of the input device.
     */
    inline const InputDeviceState& GetDeviceState() const{ return m_deviceState; }

    /**
     * The state of the input device.
     */
    inline bool DeviceStateHasBeenSet() const { return m_deviceStateHasBeenSet; }

    /**
     * The state of the input device.
     */
    inline void SetDeviceState(const InputDeviceState& value) { m_deviceStateHasBeenSet = true; m_deviceState = value; }

    /**
     * The state of the input device.
     */
    inline void SetDeviceState(InputDeviceState&& value) { m_deviceStateHasBeenSet = true; m_deviceState = std::move(value); }

    /**
     * The state of the input device.
     */
    inline InputDeviceHdSettings& WithDeviceState(const InputDeviceState& value) { SetDeviceState(value); return *this;}

    /**
     * The state of the input device.
     */
    inline InputDeviceHdSettings& WithDeviceState(InputDeviceState&& value) { SetDeviceState(std::move(value)); return *this;}


    /**
     * The frame rate of the video source.
     */
    inline double GetFramerate() const{ return m_framerate; }

    /**
     * The frame rate of the video source.
     */
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }

    /**
     * The frame rate of the video source.
     */
    inline void SetFramerate(double value) { m_framerateHasBeenSet = true; m_framerate = value; }

    /**
     * The frame rate of the video source.
     */
    inline InputDeviceHdSettings& WithFramerate(double value) { SetFramerate(value); return *this;}


    /**
     * The height of the video source, in pixels.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * The height of the video source, in pixels.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * The height of the video source, in pixels.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * The height of the video source, in pixels.
     */
    inline InputDeviceHdSettings& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * The current maximum bitrate for ingesting this source, in bits per second. You
     * can specify this maximum.
     */
    inline InputDeviceHdSettings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * The scan type of the video source.
     */
    inline const InputDeviceScanType& GetScanType() const{ return m_scanType; }

    /**
     * The scan type of the video source.
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * The scan type of the video source.
     */
    inline void SetScanType(const InputDeviceScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * The scan type of the video source.
     */
    inline void SetScanType(InputDeviceScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * The scan type of the video source.
     */
    inline InputDeviceHdSettings& WithScanType(const InputDeviceScanType& value) { SetScanType(value); return *this;}

    /**
     * The scan type of the video source.
     */
    inline InputDeviceHdSettings& WithScanType(InputDeviceScanType&& value) { SetScanType(std::move(value)); return *this;}


    /**
     * The width of the video source, in pixels.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * The width of the video source, in pixels.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * The width of the video source, in pixels.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * The width of the video source, in pixels.
     */
    inline InputDeviceHdSettings& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    InputDeviceActiveInput m_activeInput;
    bool m_activeInputHasBeenSet;

    InputDeviceConfiguredInput m_configuredInput;
    bool m_configuredInputHasBeenSet;

    InputDeviceState m_deviceState;
    bool m_deviceStateHasBeenSet;

    double m_framerate;
    bool m_framerateHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    InputDeviceScanType m_scanType;
    bool m_scanTypeHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
