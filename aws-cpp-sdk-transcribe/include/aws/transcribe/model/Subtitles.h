/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/SubtitleFormat.h>
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
   * <p>Generate subtitles for your media file with your transcription request.</p>
   * <p>You can choose a start index of 0 or 1, and you can specify either WebVTT or
   * SubRip (or both) as your output format.</p> <p>Note that your subtitle files are
   * placed in the same location as your transcription output.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Subtitles">AWS
   * API Reference</a></p>
   */
  class Subtitles
  {
  public:
    AWS_TRANSCRIBESERVICE_API Subtitles();
    AWS_TRANSCRIBESERVICE_API Subtitles(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Subtitles& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline const Aws::Vector<SubtitleFormat>& GetFormats() const{ return m_formats; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline bool FormatsHasBeenSet() const { return m_formatsHasBeenSet; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline void SetFormats(const Aws::Vector<SubtitleFormat>& value) { m_formatsHasBeenSet = true; m_formats = value; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline void SetFormats(Aws::Vector<SubtitleFormat>&& value) { m_formatsHasBeenSet = true; m_formats = std::move(value); }

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline Subtitles& WithFormats(const Aws::Vector<SubtitleFormat>& value) { SetFormats(value); return *this;}

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline Subtitles& WithFormats(Aws::Vector<SubtitleFormat>&& value) { SetFormats(std::move(value)); return *this;}

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline Subtitles& AddFormats(const SubtitleFormat& value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both WebVTT
     * (<code>vtt</code>) and SubRip (<code>srt</code>) formats, two output files are
     * generated.</p>
     */
    inline Subtitles& AddFormats(SubtitleFormat&& value) { m_formatsHasBeenSet = true; m_formats.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify the starting value that is assigned to the first subtitle
     * segment.</p> <p>The default start index for Amazon Transcribe is <code>0</code>,
     * which differs from the more widely used standard of <code>1</code>. If you're
     * uncertain which value to use, we recommend choosing <code>1</code>, as this may
     * improve compatibility with other services.</p>
     */
    inline int GetOutputStartIndex() const{ return m_outputStartIndex; }

    /**
     * <p>Specify the starting value that is assigned to the first subtitle
     * segment.</p> <p>The default start index for Amazon Transcribe is <code>0</code>,
     * which differs from the more widely used standard of <code>1</code>. If you're
     * uncertain which value to use, we recommend choosing <code>1</code>, as this may
     * improve compatibility with other services.</p>
     */
    inline bool OutputStartIndexHasBeenSet() const { return m_outputStartIndexHasBeenSet; }

    /**
     * <p>Specify the starting value that is assigned to the first subtitle
     * segment.</p> <p>The default start index for Amazon Transcribe is <code>0</code>,
     * which differs from the more widely used standard of <code>1</code>. If you're
     * uncertain which value to use, we recommend choosing <code>1</code>, as this may
     * improve compatibility with other services.</p>
     */
    inline void SetOutputStartIndex(int value) { m_outputStartIndexHasBeenSet = true; m_outputStartIndex = value; }

    /**
     * <p>Specify the starting value that is assigned to the first subtitle
     * segment.</p> <p>The default start index for Amazon Transcribe is <code>0</code>,
     * which differs from the more widely used standard of <code>1</code>. If you're
     * uncertain which value to use, we recommend choosing <code>1</code>, as this may
     * improve compatibility with other services.</p>
     */
    inline Subtitles& WithOutputStartIndex(int value) { SetOutputStartIndex(value); return *this;}

  private:

    Aws::Vector<SubtitleFormat> m_formats;
    bool m_formatsHasBeenSet = false;

    int m_outputStartIndex;
    bool m_outputStartIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
