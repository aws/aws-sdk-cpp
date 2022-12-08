/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/FileSourceConvert608To708.h>
#include <aws/mediaconvert/model/CaptionSourceFramerate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/FileSourceTimeDeltaUnits.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
   * xml file, specify the URI of the input caption source file. If your caption
   * source is IMSC in an IMF package, use TrackSourceSettings instead of
   * FileSoureSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FileSourceSettings">AWS
   * API Reference</a></p>
   */
  class FileSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API FileSourceSettings();
    AWS_MEDIACONVERT_API FileSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API FileSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert (UPCONVERT), MediaConvert includes the
     * captions data in two ways: it passes the 608 data through using the 608
     * compatibility bytes fields of the 708 wrapper, and it also translates the 608
     * data into 708.
     */
    inline const FileSourceConvert608To708& GetConvert608To708() const{ return m_convert608To708; }

    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert (UPCONVERT), MediaConvert includes the
     * captions data in two ways: it passes the 608 data through using the 608
     * compatibility bytes fields of the 708 wrapper, and it also translates the 608
     * data into 708.
     */
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }

    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert (UPCONVERT), MediaConvert includes the
     * captions data in two ways: it passes the 608 data through using the 608
     * compatibility bytes fields of the 708 wrapper, and it also translates the 608
     * data into 708.
     */
    inline void SetConvert608To708(const FileSourceConvert608To708& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }

    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert (UPCONVERT), MediaConvert includes the
     * captions data in two ways: it passes the 608 data through using the 608
     * compatibility bytes fields of the 708 wrapper, and it also translates the 608
     * data into 708.
     */
    inline void SetConvert608To708(FileSourceConvert608To708&& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = std::move(value); }

    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert (UPCONVERT), MediaConvert includes the
     * captions data in two ways: it passes the 608 data through using the 608
     * compatibility bytes fields of the 708 wrapper, and it also translates the 608
     * data into 708.
     */
    inline FileSourceSettings& WithConvert608To708(const FileSourceConvert608To708& value) { SetConvert608To708(value); return *this;}

    /**
     * Specify whether this set of input captions appears in your outputs in both 608
     * and 708 format. If you choose Upconvert (UPCONVERT), MediaConvert includes the
     * captions data in two ways: it passes the 608 data through using the 608
     * compatibility bytes fields of the 708 wrapper, and it also translates the 608
     * data into 708.
     */
    inline FileSourceSettings& WithConvert608To708(FileSourceConvert608To708&& value) { SetConvert608To708(std::move(value)); return *this;}


    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. When you work directly in your JSON job specification, use the
     * settings framerateNumerator and framerateDenominator. For example, you might
     * specify 24 / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or
     * 30000 / 1001 for 29.97 fps.
     */
    inline const CaptionSourceFramerate& GetFramerate() const{ return m_framerate; }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. When you work directly in your JSON job specification, use the
     * settings framerateNumerator and framerateDenominator. For example, you might
     * specify 24 / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or
     * 30000 / 1001 for 29.97 fps.
     */
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. When you work directly in your JSON job specification, use the
     * settings framerateNumerator and framerateDenominator. For example, you might
     * specify 24 / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or
     * 30000 / 1001 for 29.97 fps.
     */
    inline void SetFramerate(const CaptionSourceFramerate& value) { m_framerateHasBeenSet = true; m_framerate = value; }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. When you work directly in your JSON job specification, use the
     * settings framerateNumerator and framerateDenominator. For example, you might
     * specify 24 / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or
     * 30000 / 1001 for 29.97 fps.
     */
    inline void SetFramerate(CaptionSourceFramerate&& value) { m_framerateHasBeenSet = true; m_framerate = std::move(value); }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. When you work directly in your JSON job specification, use the
     * settings framerateNumerator and framerateDenominator. For example, you might
     * specify 24 / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or
     * 30000 / 1001 for 29.97 fps.
     */
    inline FileSourceSettings& WithFramerate(const CaptionSourceFramerate& value) { SetFramerate(value); return *this;}

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction. When you work directly in your JSON job specification, use the
     * settings framerateNumerator and framerateDenominator. For example, you might
     * specify 24 / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or
     * 30000 / 1001 for 29.97 fps.
     */
    inline FileSourceSettings& WithFramerate(CaptionSourceFramerate&& value) { SetFramerate(std::move(value)); return *this;}


    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline const Aws::String& GetSourceFile() const{ return m_sourceFile; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline void SetSourceFile(const Aws::String& value) { m_sourceFileHasBeenSet = true; m_sourceFile = value; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline void SetSourceFile(Aws::String&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::move(value); }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline void SetSourceFile(const char* value) { m_sourceFileHasBeenSet = true; m_sourceFile.assign(value); }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline FileSourceSettings& WithSourceFile(const Aws::String& value) { SetSourceFile(value); return *this;}

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline FileSourceSettings& WithSourceFile(Aws::String&& value) { SetSourceFile(std::move(value)); return *this;}

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', 'smi', 'webvtt', and 'vtt'.
     */
    inline FileSourceSettings& WithSourceFile(const char* value) { SetSourceFile(value); return *this;}


    /**
     * Optional. Use this setting when you need to adjust the sync between your sidecar
     * captions and your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/time-delta-use-cases.html.
     * Enter a positive or negative number to modify the times in the captions file.
     * For example, type 15 to add 15 seconds to all the times in the captions file.
     * Type -5 to subtract 5 seconds from the times in the captions file. You can
     * optionally specify your time delta in milliseconds instead of seconds. When you
     * do so, set the related setting, Time delta units (TimeDeltaUnits) to
     * Milliseconds (MILLISECONDS). Note that, when you specify a time delta for
     * timecode-based caption sources, such as SCC and STL, and your time delta isn't a
     * multiple of the input frame rate, MediaConvert snaps the captions to the nearest
     * frame. For example, when your input video frame rate is 25 fps and you specify
     * 1010ms for time delta, MediaConvert delays your captions by 1000 ms.
     */
    inline int GetTimeDelta() const{ return m_timeDelta; }

    /**
     * Optional. Use this setting when you need to adjust the sync between your sidecar
     * captions and your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/time-delta-use-cases.html.
     * Enter a positive or negative number to modify the times in the captions file.
     * For example, type 15 to add 15 seconds to all the times in the captions file.
     * Type -5 to subtract 5 seconds from the times in the captions file. You can
     * optionally specify your time delta in milliseconds instead of seconds. When you
     * do so, set the related setting, Time delta units (TimeDeltaUnits) to
     * Milliseconds (MILLISECONDS). Note that, when you specify a time delta for
     * timecode-based caption sources, such as SCC and STL, and your time delta isn't a
     * multiple of the input frame rate, MediaConvert snaps the captions to the nearest
     * frame. For example, when your input video frame rate is 25 fps and you specify
     * 1010ms for time delta, MediaConvert delays your captions by 1000 ms.
     */
    inline bool TimeDeltaHasBeenSet() const { return m_timeDeltaHasBeenSet; }

    /**
     * Optional. Use this setting when you need to adjust the sync between your sidecar
     * captions and your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/time-delta-use-cases.html.
     * Enter a positive or negative number to modify the times in the captions file.
     * For example, type 15 to add 15 seconds to all the times in the captions file.
     * Type -5 to subtract 5 seconds from the times in the captions file. You can
     * optionally specify your time delta in milliseconds instead of seconds. When you
     * do so, set the related setting, Time delta units (TimeDeltaUnits) to
     * Milliseconds (MILLISECONDS). Note that, when you specify a time delta for
     * timecode-based caption sources, such as SCC and STL, and your time delta isn't a
     * multiple of the input frame rate, MediaConvert snaps the captions to the nearest
     * frame. For example, when your input video frame rate is 25 fps and you specify
     * 1010ms for time delta, MediaConvert delays your captions by 1000 ms.
     */
    inline void SetTimeDelta(int value) { m_timeDeltaHasBeenSet = true; m_timeDelta = value; }

    /**
     * Optional. Use this setting when you need to adjust the sync between your sidecar
     * captions and your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/time-delta-use-cases.html.
     * Enter a positive or negative number to modify the times in the captions file.
     * For example, type 15 to add 15 seconds to all the times in the captions file.
     * Type -5 to subtract 5 seconds from the times in the captions file. You can
     * optionally specify your time delta in milliseconds instead of seconds. When you
     * do so, set the related setting, Time delta units (TimeDeltaUnits) to
     * Milliseconds (MILLISECONDS). Note that, when you specify a time delta for
     * timecode-based caption sources, such as SCC and STL, and your time delta isn't a
     * multiple of the input frame rate, MediaConvert snaps the captions to the nearest
     * frame. For example, when your input video frame rate is 25 fps and you specify
     * 1010ms for time delta, MediaConvert delays your captions by 1000 ms.
     */
    inline FileSourceSettings& WithTimeDelta(int value) { SetTimeDelta(value); return *this;}


    /**
     * When you use the setting Time delta (TimeDelta) to adjust the sync between your
     * sidecar captions and your video, use this setting to specify the units for the
     * delta that you specify. When you don't specify a value for Time delta units
     * (TimeDeltaUnits), MediaConvert uses seconds by default.
     */
    inline const FileSourceTimeDeltaUnits& GetTimeDeltaUnits() const{ return m_timeDeltaUnits; }

    /**
     * When you use the setting Time delta (TimeDelta) to adjust the sync between your
     * sidecar captions and your video, use this setting to specify the units for the
     * delta that you specify. When you don't specify a value for Time delta units
     * (TimeDeltaUnits), MediaConvert uses seconds by default.
     */
    inline bool TimeDeltaUnitsHasBeenSet() const { return m_timeDeltaUnitsHasBeenSet; }

    /**
     * When you use the setting Time delta (TimeDelta) to adjust the sync between your
     * sidecar captions and your video, use this setting to specify the units for the
     * delta that you specify. When you don't specify a value for Time delta units
     * (TimeDeltaUnits), MediaConvert uses seconds by default.
     */
    inline void SetTimeDeltaUnits(const FileSourceTimeDeltaUnits& value) { m_timeDeltaUnitsHasBeenSet = true; m_timeDeltaUnits = value; }

    /**
     * When you use the setting Time delta (TimeDelta) to adjust the sync between your
     * sidecar captions and your video, use this setting to specify the units for the
     * delta that you specify. When you don't specify a value for Time delta units
     * (TimeDeltaUnits), MediaConvert uses seconds by default.
     */
    inline void SetTimeDeltaUnits(FileSourceTimeDeltaUnits&& value) { m_timeDeltaUnitsHasBeenSet = true; m_timeDeltaUnits = std::move(value); }

    /**
     * When you use the setting Time delta (TimeDelta) to adjust the sync between your
     * sidecar captions and your video, use this setting to specify the units for the
     * delta that you specify. When you don't specify a value for Time delta units
     * (TimeDeltaUnits), MediaConvert uses seconds by default.
     */
    inline FileSourceSettings& WithTimeDeltaUnits(const FileSourceTimeDeltaUnits& value) { SetTimeDeltaUnits(value); return *this;}

    /**
     * When you use the setting Time delta (TimeDelta) to adjust the sync between your
     * sidecar captions and your video, use this setting to specify the units for the
     * delta that you specify. When you don't specify a value for Time delta units
     * (TimeDeltaUnits), MediaConvert uses seconds by default.
     */
    inline FileSourceSettings& WithTimeDeltaUnits(FileSourceTimeDeltaUnits&& value) { SetTimeDeltaUnits(std::move(value)); return *this;}

  private:

    FileSourceConvert608To708 m_convert608To708;
    bool m_convert608To708HasBeenSet = false;

    CaptionSourceFramerate m_framerate;
    bool m_framerateHasBeenSet = false;

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet = false;

    int m_timeDelta;
    bool m_timeDeltaHasBeenSet = false;

    FileSourceTimeDeltaUnits m_timeDeltaUnits;
    bool m_timeDeltaUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
