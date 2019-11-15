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
#include <aws/mediaconvert/model/MpdCaptionContainerType.h>
#include <aws/mediaconvert/model/MpdScte35Esam.h>
#include <aws/mediaconvert/model/MpdScte35Source.h>
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
   * Settings for MP4 segments in DASH<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/MpdSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API MpdSettings
  {
  public:
    MpdSettings();
    MpdSettings(Aws::Utils::Json::JsonView jsonValue);
    MpdSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline const MpdCaptionContainerType& GetCaptionContainerType() const{ return m_captionContainerType; }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline bool CaptionContainerTypeHasBeenSet() const { return m_captionContainerTypeHasBeenSet; }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline void SetCaptionContainerType(const MpdCaptionContainerType& value) { m_captionContainerTypeHasBeenSet = true; m_captionContainerType = value; }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline void SetCaptionContainerType(MpdCaptionContainerType&& value) { m_captionContainerTypeHasBeenSet = true; m_captionContainerType = std::move(value); }

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline MpdSettings& WithCaptionContainerType(const MpdCaptionContainerType& value) { SetCaptionContainerType(value); return *this;}

    /**
     * Use this setting only in DASH output groups that include sidecar TTML or IMSC
     * captions.  You specify sidecar captions in a separate output from your audio and
     * video. Choose Raw (RAW) for captions in a single XML file in a raw container.
     * Choose Fragmented MPEG-4 (FRAGMENTED_MP4) for captions in XML format contained
     * within fragmented MP4 files. This set of fragmented MP4 files is separate from
     * your video and audio fragmented MP4 files.
     */
    inline MpdSettings& WithCaptionContainerType(MpdCaptionContainerType&& value) { SetCaptionContainerType(std::move(value)); return *this;}


    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline const MpdScte35Esam& GetScte35Esam() const{ return m_scte35Esam; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(const MpdScte35Esam& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = value; }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(MpdScte35Esam&& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = std::move(value); }

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline MpdSettings& WithScte35Esam(const MpdScte35Esam& value) { SetScte35Esam(value); return *this;}

    /**
     * Use this setting only when you specify SCTE-35 markers from ESAM. Choose INSERT
     * to put SCTE-35 markers in this output at the insertion points that you specify
     * in an ESAM XML document. Provide the document in the setting SCC XML (sccXml).
     */
    inline MpdSettings& WithScte35Esam(MpdScte35Esam&& value) { SetScte35Esam(std::move(value)); return *this;}


    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline const MpdScte35Source& GetScte35Source() const{ return m_scte35Source; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline void SetScte35Source(const MpdScte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline void SetScte35Source(MpdScte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline MpdSettings& WithScte35Source(const MpdScte35Source& value) { SetScte35Source(value); return *this;}

    /**
     * Ignore this setting unless you have SCTE-35 markers in your input video file.
     * Choose Passthrough (PASSTHROUGH) if you want SCTE-35 markers that appear in your
     * input to also appear in this output. Choose None (NONE) if you don't want those
     * SCTE-35 markers in this output.
     */
    inline MpdSettings& WithScte35Source(MpdScte35Source&& value) { SetScte35Source(std::move(value)); return *this;}

  private:

    MpdCaptionContainerType m_captionContainerType;
    bool m_captionContainerTypeHasBeenSet;

    MpdScte35Esam m_scte35Esam;
    bool m_scte35EsamHasBeenSet;

    MpdScte35Source m_scte35Source;
    bool m_scte35SourceHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
