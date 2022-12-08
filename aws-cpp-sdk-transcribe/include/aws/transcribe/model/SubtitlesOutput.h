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
   * <p>Provides information about your subtitle file, including format, start index,
   * and Amazon S3 location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SubtitlesOutput">AWS
   * API Reference</a></p>
   */
  class SubtitlesOutput
  {
  public:
    AWS_TRANSCRIBESERVICE_API SubtitlesOutput();
    AWS_TRANSCRIBESERVICE_API SubtitlesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API SubtitlesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline const Aws::Vector<SubtitleFormat>& GetFormats() const{ return m_formats; }

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline bool FormatsHasBeenSet() const { return m_formatsHasBeenSet; }

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline void SetFormats(const Aws::Vector<SubtitleFormat>& value) { m_formatsHasBeenSet = true; m_formats = value; }

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline void SetFormats(Aws::Vector<SubtitleFormat>&& value) { m_formatsHasBeenSet = true; m_formats = std::move(value); }

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline SubtitlesOutput& WithFormats(const Aws::Vector<SubtitleFormat>& value) { SetFormats(value); return *this;}

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline SubtitlesOutput& WithFormats(Aws::Vector<SubtitleFormat>&& value) { SetFormats(std::move(value)); return *this;}

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline SubtitlesOutput& AddFormats(const SubtitleFormat& value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }

    /**
     * <p>Provides the format of your subtitle files. If your request included both
     * WebVTT (<code>vtt</code>) and SubRip (<code>srt</code>) formats, both formats
     * are shown.</p>
     */
    inline SubtitlesOutput& AddFormats(SubtitleFormat&& value) { m_formatsHasBeenSet = true; m_formats.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubtitleFileUris() const{ return m_subtitleFileUris; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline bool SubtitleFileUrisHasBeenSet() const { return m_subtitleFileUrisHasBeenSet; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline void SetSubtitleFileUris(const Aws::Vector<Aws::String>& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris = value; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline void SetSubtitleFileUris(Aws::Vector<Aws::String>&& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris = std::move(value); }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline SubtitlesOutput& WithSubtitleFileUris(const Aws::Vector<Aws::String>& value) { SetSubtitleFileUris(value); return *this;}

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline SubtitlesOutput& WithSubtitleFileUris(Aws::Vector<Aws::String>&& value) { SetSubtitleFileUris(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline SubtitlesOutput& AddSubtitleFileUris(const Aws::String& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(value); return *this; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline SubtitlesOutput& AddSubtitleFileUris(Aws::String&& value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your subtitle file. Your subtitle file is stored in the same location
     * as your transcript. If you specified both WebVTT and SubRip subtitle formats,
     * two URIs are provided.</p> <p>If you included <code>OutputBucketName</code> in
     * your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your subtitle
     * file is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your subtitle
     * file.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets are
     * only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you can
     * get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline SubtitlesOutput& AddSubtitleFileUris(const char* value) { m_subtitleFileUrisHasBeenSet = true; m_subtitleFileUris.push_back(value); return *this; }


    /**
     * <p>Provides the start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline int GetOutputStartIndex() const{ return m_outputStartIndex; }

    /**
     * <p>Provides the start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline bool OutputStartIndexHasBeenSet() const { return m_outputStartIndexHasBeenSet; }

    /**
     * <p>Provides the start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline void SetOutputStartIndex(int value) { m_outputStartIndexHasBeenSet = true; m_outputStartIndex = value; }

    /**
     * <p>Provides the start index value for your subtitle files. If you did not
     * specify a value in your request, the default value of <code>0</code> is
     * used.</p>
     */
    inline SubtitlesOutput& WithOutputStartIndex(int value) { SetOutputStartIndex(value); return *this;}

  private:

    Aws::Vector<SubtitleFormat> m_formats;
    bool m_formatsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subtitleFileUris;
    bool m_subtitleFileUrisHasBeenSet = false;

    int m_outputStartIndex;
    bool m_outputStartIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
