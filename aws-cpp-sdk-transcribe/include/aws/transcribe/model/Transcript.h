/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline const Aws::String& GetTranscriptFileUri() const{ return m_transcriptFileUri; }

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline void SetTranscriptFileUri(const Aws::String& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = value; }

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline void SetTranscriptFileUri(Aws::String&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::move(value); }

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline void SetTranscriptFileUri(const char* value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri.assign(value); }

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline Transcript& WithTranscriptFileUri(const Aws::String& value) { SetTranscriptFileUri(value); return *this;}

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline Transcript& WithTranscriptFileUri(Aws::String&& value) { SetTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 object location of the transcript.</p> <p>Use this URI to access the
     * transcript. If you specified an S3 bucket in the <code>OutputBucketName</code>
     * field when you created the job, this is the URI of that bucket. If you chose to
     * store the transcript in Amazon Transcribe, this is a shareable URL that provides
     * secure access to that location.</p>
     */
    inline Transcript& WithTranscriptFileUri(const char* value) { SetTranscriptFileUri(value); return *this;}


    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline const Aws::String& GetRedactedTranscriptFileUri() const{ return m_redactedTranscriptFileUri; }

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline bool RedactedTranscriptFileUriHasBeenSet() const { return m_redactedTranscriptFileUriHasBeenSet; }

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline void SetRedactedTranscriptFileUri(const Aws::String& value) { m_redactedTranscriptFileUriHasBeenSet = true; m_redactedTranscriptFileUri = value; }

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline void SetRedactedTranscriptFileUri(Aws::String&& value) { m_redactedTranscriptFileUriHasBeenSet = true; m_redactedTranscriptFileUri = std::move(value); }

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline void SetRedactedTranscriptFileUri(const char* value) { m_redactedTranscriptFileUriHasBeenSet = true; m_redactedTranscriptFileUri.assign(value); }

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline Transcript& WithRedactedTranscriptFileUri(const Aws::String& value) { SetRedactedTranscriptFileUri(value); return *this;}

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline Transcript& WithRedactedTranscriptFileUri(Aws::String&& value) { SetRedactedTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 object location of the redacted transcript.</p> <p>Use this URI to
     * access the redacted transcript. If you specified an S3 bucket in the
     * <code>OutputBucketName</code> field when you created the job, this is the URI of
     * that bucket. If you chose to store the transcript in Amazon Transcribe, this is
     * a shareable URL that provides secure access to that location.</p>
     */
    inline Transcript& WithRedactedTranscriptFileUri(const char* value) { SetRedactedTranscriptFileUri(value); return *this;}

  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet;

    Aws::String m_redactedTranscriptFileUri;
    bool m_redactedTranscriptFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
