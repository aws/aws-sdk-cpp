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
   * <p>Specify the output format for your subtitle file.</p><p><h3>See Also:</h3>  
   * <a
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
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline const Aws::Vector<SubtitleFormat>& GetFormats() const{ return m_formats; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline bool FormatsHasBeenSet() const { return m_formatsHasBeenSet; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline void SetFormats(const Aws::Vector<SubtitleFormat>& value) { m_formatsHasBeenSet = true; m_formats = value; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline void SetFormats(Aws::Vector<SubtitleFormat>&& value) { m_formatsHasBeenSet = true; m_formats = std::move(value); }

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline SubtitlesOutput& WithFormats(const Aws::Vector<SubtitleFormat>& value) { SetFormats(value); return *this;}

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline SubtitlesOutput& WithFormats(Aws::Vector<SubtitleFormat>&& value) { SetFormats(std::move(value)); return *this;}

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline SubtitlesOutput& AddFormats(const SubtitleFormat& value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }

    /**
     * <p>Specify the output format for your subtitle file; if you select both SRT and
     * VTT formats, two output files are genereated.</p>
     */
    inline SubtitlesOutput& AddFormats(SubtitleFormat&& value) { m_formatsHasBeenSet = true; m_formats.push_back(std::move(value)); return *this; }


    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubtitleFileUris() const{ return m_subtitleFileUris; }

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline bool SubtitleFileUrisHasBeenSet() const { return m_subtitleFileUrisHasBeenSet; }

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline void SetSubtitleFileUris(const Aws::Vector<Aws::String>& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris = value; }

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline void SetSubtitleFileUris(Aws::Vector<Aws::String>&& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris = std::move(value); }

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& WithSubtitleFileUris(const Aws::Vector<Aws::String>& value) { SetSubtitleFileUris(value); return *this;}

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& WithSubtitleFileUris(Aws::Vector<Aws::String>&& value) { SetSubtitleFileUris(std::move(value)); return *this;}

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& AddSubtitleFileUris(const Aws::String& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(value); return *this; }

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& AddSubtitleFileUris(Aws::String&& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(std::move(value)); return *this; }

    /**
     * <p>Choose the output location for your subtitle file. This location must be an
     * S3 bucket.</p>
     */
    inline SubtitlesOutput& AddSubtitleFileUris(const char* value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(value); return *this; }

  private:

    Aws::Vector<SubtitleFormat> m_formats;
    bool m_formatsHasBeenSet;

    Aws::Vector<Aws::String> m_subtitleFileUris;
    bool m_subtitleFileUrisHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
