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
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
   * <p>Identifies the location of a transcription.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Transcript">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API Transcript
  {
  public:
    Transcript();
    Transcript(Aws::Utils::Json::JsonView jsonValue);
    Transcript& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline const Aws::String& GetTranscriptFileUri() const{ return m_transcriptFileUri; }

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline void SetTranscriptFileUri(const Aws::String& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = value; }

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline void SetTranscriptFileUri(Aws::String&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::move(value); }

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline void SetTranscriptFileUri(const char* value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri.assign(value); }

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline Transcript& WithTranscriptFileUri(const Aws::String& value) { SetTranscriptFileUri(value); return *this;}

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline Transcript& WithTranscriptFileUri(Aws::String&& value) { SetTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>The location where the transcription is stored.</p> <p>Use this URI to access
     * the transcription. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcription in Amazon Transcribe, this
     * is a shareable URL that provides secure access to that location.</p>
     */
    inline Transcript& WithTranscriptFileUri(const char* value) { SetTranscriptFileUri(value); return *this;}

  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
