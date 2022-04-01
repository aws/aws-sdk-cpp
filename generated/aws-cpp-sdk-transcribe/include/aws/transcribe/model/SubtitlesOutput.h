/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/SubtitleFormat.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>The S3 location where your subtitle files are located. Note that your
   * subtitle files are placed in the same location as your transcription output.
   * Refer to <code>TranscriptFileUri</code> to download your files.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SubtitlesOutput">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API SubtitlesOutput
  {
  public:
    SubtitlesOutput();
    SubtitlesOutput(Aws::Utils::Json::JsonView jsonValue);
    SubtitlesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline const Aws::Vector<SubtitleFormat>& GetFormats() const{ return m_formats; }

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline bool FormatsHasBeenSet() const { return m_formatsHasBeenSet; }

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline void SetFormats(const Aws::Vector<SubtitleFormat>& value) { m_formatsHasBeenSet = true; m_formats = value; }

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline void SetFormats(Aws::Vector<SubtitleFormat>&& value) { m_formatsHasBeenSet = true; m_formats = std::move(value); }

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline SubtitlesOutput& WithFormats(const Aws::Vector<SubtitleFormat>& value) { SetFormats(value); return *this;}

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline SubtitlesOutput& WithFormats(Aws::Vector<SubtitleFormat>&& value) { SetFormats(std::move(value)); return *this;}

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline SubtitlesOutput& AddFormats(const SubtitleFormat& value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }

    /**
     * <p>The format of your subtitle files. If your request specified both
     * <code>srt</code> and <code>vtt</code> formats, both formats are shown.</p>
     */
    inline SubtitlesOutput& AddFormats(SubtitleFormat&& value) { m_formatsHasBeenSet = true; m_formats.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubtitleFileUris() const{ return m_subtitleFileUris; }

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline bool SubtitleFileUrisHasBeenSet() const { return m_subtitleFileUrisHasBeenSet; }

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline void SetSubtitleFileUris(const Aws::Vector<Aws::String>& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris = value; }

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline void SetSubtitleFileUris(Aws::Vector<Aws::String>&& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris = std::move(value); }

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& WithSubtitleFileUris(const Aws::Vector<Aws::String>& value) { SetSubtitleFileUris(value); return *this;}

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& WithSubtitleFileUris(Aws::Vector<Aws::String>&& value) { SetSubtitleFileUris(std::move(value)); return *this;}

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& AddSubtitleFileUris(const Aws::String& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(value); return *this; }

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& AddSubtitleFileUris(Aws::String&& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& AddSubtitleFileUris(const char* value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(value); return *this; }


    /**
     * <p>Shows the output start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline int GetOutputStartIndex() const{ return m_outputStartIndex; }

    /**
     * <p>Shows the output start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline bool OutputStartIndexHasBeenSet() const { return m_outputStartIndexHasBeenSet; }

    /**
     * <p>Shows the output start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline void SetOutputStartIndex(int value) { m_outputStartIndexHasBeenSet = true; m_outputStartIndex = value; }

    /**
     * <p>Shows the output start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline SubtitlesOutput& WithOutputStartIndex(int value) { SetOutputStartIndex(value); return *this;}

  private:

    Aws::Vector<SubtitleFormat> m_formats;
    bool m_formatsHasBeenSet;

    Aws::Vector<Aws::String> m_subtitleFileUris;
    bool m_subtitleFileUrisHasBeenSet;

    int m_outputStartIndex;
    bool m_outputStartIndexHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
