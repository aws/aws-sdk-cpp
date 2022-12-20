/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FrameCaptureIntervalUnit.h>
#include <aws/medialive/model/TimecodeBurninSettings.h>
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
   * Frame Capture Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureSettings">AWS
   * API Reference</a></p>
   */
  class FrameCaptureSettings
  {
  public:
    AWS_MEDIALIVE_API FrameCaptureSettings();
    AWS_MEDIALIVE_API FrameCaptureSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FrameCaptureSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The frequency at which to capture frames for inclusion in the output. May be
     * specified in either seconds or milliseconds, as specified by
     * captureIntervalUnits.
     */
    inline int GetCaptureInterval() const{ return m_captureInterval; }

    /**
     * The frequency at which to capture frames for inclusion in the output. May be
     * specified in either seconds or milliseconds, as specified by
     * captureIntervalUnits.
     */
    inline bool CaptureIntervalHasBeenSet() const { return m_captureIntervalHasBeenSet; }

    /**
     * The frequency at which to capture frames for inclusion in the output. May be
     * specified in either seconds or milliseconds, as specified by
     * captureIntervalUnits.
     */
    inline void SetCaptureInterval(int value) { m_captureIntervalHasBeenSet = true; m_captureInterval = value; }

    /**
     * The frequency at which to capture frames for inclusion in the output. May be
     * specified in either seconds or milliseconds, as specified by
     * captureIntervalUnits.
     */
    inline FrameCaptureSettings& WithCaptureInterval(int value) { SetCaptureInterval(value); return *this;}


    /**
     * Unit for the frame capture interval.
     */
    inline const FrameCaptureIntervalUnit& GetCaptureIntervalUnits() const{ return m_captureIntervalUnits; }

    /**
     * Unit for the frame capture interval.
     */
    inline bool CaptureIntervalUnitsHasBeenSet() const { return m_captureIntervalUnitsHasBeenSet; }

    /**
     * Unit for the frame capture interval.
     */
    inline void SetCaptureIntervalUnits(const FrameCaptureIntervalUnit& value) { m_captureIntervalUnitsHasBeenSet = true; m_captureIntervalUnits = value; }

    /**
     * Unit for the frame capture interval.
     */
    inline void SetCaptureIntervalUnits(FrameCaptureIntervalUnit&& value) { m_captureIntervalUnitsHasBeenSet = true; m_captureIntervalUnits = std::move(value); }

    /**
     * Unit for the frame capture interval.
     */
    inline FrameCaptureSettings& WithCaptureIntervalUnits(const FrameCaptureIntervalUnit& value) { SetCaptureIntervalUnits(value); return *this;}

    /**
     * Unit for the frame capture interval.
     */
    inline FrameCaptureSettings& WithCaptureIntervalUnits(FrameCaptureIntervalUnit&& value) { SetCaptureIntervalUnits(std::move(value)); return *this;}


    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const{ return m_timecodeBurninSettings; }

    /**
     * Timecode burn-in settings
     */
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }

    /**
     * Timecode burn-in settings
     */
    inline void SetTimecodeBurninSettings(const TimecodeBurninSettings& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = value; }

    /**
     * Timecode burn-in settings
     */
    inline void SetTimecodeBurninSettings(TimecodeBurninSettings&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::move(value); }

    /**
     * Timecode burn-in settings
     */
    inline FrameCaptureSettings& WithTimecodeBurninSettings(const TimecodeBurninSettings& value) { SetTimecodeBurninSettings(value); return *this;}

    /**
     * Timecode burn-in settings
     */
    inline FrameCaptureSettings& WithTimecodeBurninSettings(TimecodeBurninSettings&& value) { SetTimecodeBurninSettings(std::move(value)); return *this;}

  private:

    int m_captureInterval;
    bool m_captureIntervalHasBeenSet = false;

    FrameCaptureIntervalUnit m_captureIntervalUnits;
    bool m_captureIntervalUnitsHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
