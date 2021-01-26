/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/FileSourceConvert608To708.h>
#include <aws/mediaconvert/model/CaptionSourceFramerate.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * If your input captions are SCC, SMI, SRT, STL, TTML, or IMSC 1.1 in an xml file,
   * specify the URI of the input caption source file. If your caption source is IMSC
   * in an IMF package, use TrackSourceSettings instead of
   * FileSoureSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/FileSourceSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API FileSourceSettings
  {
  public:
    FileSourceSettings();
    FileSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    FileSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * a fraction, using the settings Framerate numerator (framerateNumerator) and
     * Framerate denominator (framerateDenominator). For example, you might specify 24
     * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
     * for 29.97 fps.
     */
    inline const CaptionSourceFramerate& GetFramerate() const{ return m_framerate; }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction, using the settings Framerate numerator (framerateNumerator) and
     * Framerate denominator (framerateDenominator). For example, you might specify 24
     * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
     * for 29.97 fps.
     */
    inline bool FramerateHasBeenSet() const { return m_framerateHasBeenSet; }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction, using the settings Framerate numerator (framerateNumerator) and
     * Framerate denominator (framerateDenominator). For example, you might specify 24
     * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
     * for 29.97 fps.
     */
    inline void SetFramerate(const CaptionSourceFramerate& value) { m_framerateHasBeenSet = true; m_framerate = value; }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction, using the settings Framerate numerator (framerateNumerator) and
     * Framerate denominator (framerateDenominator). For example, you might specify 24
     * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
     * for 29.97 fps.
     */
    inline void SetFramerate(CaptionSourceFramerate&& value) { m_framerateHasBeenSet = true; m_framerate = std::move(value); }

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction, using the settings Framerate numerator (framerateNumerator) and
     * Framerate denominator (framerateDenominator). For example, you might specify 24
     * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
     * for 29.97 fps.
     */
    inline FileSourceSettings& WithFramerate(const CaptionSourceFramerate& value) { SetFramerate(value); return *this;}

    /**
     * Ignore this setting unless your input captions format is SCC. To have the
     * service compensate for differing frame rates between your input captions and
     * input video, specify the frame rate of the captions file. Specify this value as
     * a fraction, using the settings Framerate numerator (framerateNumerator) and
     * Framerate denominator (framerateDenominator). For example, you might specify 24
     * / 1 for 24 fps, 25 / 1 for 25 fps, 24000 / 1001 for 23.976 fps, or 30000 / 1001
     * for 29.97 fps.
     */
    inline FileSourceSettings& WithFramerate(CaptionSourceFramerate&& value) { SetFramerate(std::move(value)); return *this;}


    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline const Aws::String& GetSourceFile() const{ return m_sourceFile; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline void SetSourceFile(const Aws::String& value) { m_sourceFileHasBeenSet = true; m_sourceFile = value; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline void SetSourceFile(Aws::String&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::move(value); }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline void SetSourceFile(const char* value) { m_sourceFileHasBeenSet = true; m_sourceFile.assign(value); }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline FileSourceSettings& WithSourceFile(const Aws::String& value) { SetSourceFile(value); return *this;}

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline FileSourceSettings& WithSourceFile(Aws::String&& value) { SetSourceFile(std::move(value)); return *this;}

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', 'xml', and 'smi'.
     */
    inline FileSourceSettings& WithSourceFile(const char* value) { SetSourceFile(value); return *this;}


    /**
     * Specifies a time delta in seconds to offset the captions from the source file.
     */
    inline int GetTimeDelta() const{ return m_timeDelta; }

    /**
     * Specifies a time delta in seconds to offset the captions from the source file.
     */
    inline bool TimeDeltaHasBeenSet() const { return m_timeDeltaHasBeenSet; }

    /**
     * Specifies a time delta in seconds to offset the captions from the source file.
     */
    inline void SetTimeDelta(int value) { m_timeDeltaHasBeenSet = true; m_timeDelta = value; }

    /**
     * Specifies a time delta in seconds to offset the captions from the source file.
     */
    inline FileSourceSettings& WithTimeDelta(int value) { SetTimeDelta(value); return *this;}

  private:

    FileSourceConvert608To708 m_convert608To708;
    bool m_convert608To708HasBeenSet;

    CaptionSourceFramerate m_framerate;
    bool m_framerateHasBeenSet;

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet;

    int m_timeDelta;
    bool m_timeDeltaHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
