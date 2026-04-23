/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/FileSourceConvert608To708.h>
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
   * Settings for File-based Captions in Source<p><h3>See Also:</h3>   <a
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
     * If set to UPCONVERT, 608 caption data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline const FileSourceConvert608To708& GetConvert608To708() const{ return m_convert608To708; }

    /**
     * If set to UPCONVERT, 608 caption data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }

    /**
     * If set to UPCONVERT, 608 caption data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline void SetConvert608To708(const FileSourceConvert608To708& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }

    /**
     * If set to UPCONVERT, 608 caption data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline void SetConvert608To708(FileSourceConvert608To708&& value) { m_convert608To708HasBeenSet = true; m_convert608To708 = std::move(value); }

    /**
     * If set to UPCONVERT, 608 caption data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline FileSourceSettings& WithConvert608To708(const FileSourceConvert608To708& value) { SetConvert608To708(value); return *this;}

    /**
     * If set to UPCONVERT, 608 caption data is both passed through via the "608
     * compatibility bytes" fields of the 708 wrapper as well as translated into 708.
     * 708 data present in the source content will be discarded.
     */
    inline FileSourceSettings& WithConvert608To708(FileSourceConvert608To708&& value) { SetConvert608To708(std::move(value)); return *this;}


    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline const Aws::String& GetSourceFile() const{ return m_sourceFile; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline void SetSourceFile(const Aws::String& value) { m_sourceFileHasBeenSet = true; m_sourceFile = value; }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline void SetSourceFile(Aws::String&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::move(value); }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline void SetSourceFile(const char* value) { m_sourceFileHasBeenSet = true; m_sourceFile.assign(value); }

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline FileSourceSettings& WithSourceFile(const Aws::String& value) { SetSourceFile(value); return *this;}

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
     */
    inline FileSourceSettings& WithSourceFile(Aws::String&& value) { SetSourceFile(std::move(value)); return *this;}

    /**
     * External caption file used for loading captions. Accepted file extensions are
     * 'scc', 'ttml', 'dfxp', 'stl', 'srt', and 'smi'.
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

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet;

    int m_timeDelta;
    bool m_timeDeltaHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
