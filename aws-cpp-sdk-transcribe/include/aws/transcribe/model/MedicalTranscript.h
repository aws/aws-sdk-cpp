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
   * <p>Provides you with the Amazon S3 URI you can use to access your
   * transcript.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalTranscript">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API MedicalTranscript
  {
  public:
    MedicalTranscript();
    MedicalTranscript(Aws::Utils::Json::JsonView jsonValue);
    MedicalTranscript& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline const Aws::String& GetTranscriptFileUri() const{ return m_transcriptFileUri; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline void SetTranscriptFileUri(const Aws::String& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = value; }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline void SetTranscriptFileUri(Aws::String&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::move(value); }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline void SetTranscriptFileUri(const char* value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri.assign(value); }

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline MedicalTranscript& WithTranscriptFileUri(const Aws::String& value) { SetTranscriptFileUri(value); return *this;}

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline MedicalTranscript& WithTranscriptFileUri(Aws::String&& value) { SetTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 location of your transcript. You can use this URI to access or
     * download your transcript.</p> <p>If you included <code>OutputBucketName</code>
     * in your transcription job request, this is the URI of that bucket. If you also
     * included <code>OutputKey</code> in your request, your output is located in the
     * path you specified in your request.</p> <p>If you didn't include
     * <code>OutputBucketName</code> in your transcription job request, your transcript
     * is stored in a service-managed bucket, and <code>TranscriptFileUri</code>
     * provides you with a temporary URI you can use for secure access to your
     * transcript.</p>  <p>Temporary URIs for service-managed Amazon S3 buckets
     * are only valid for 15 minutes. If you get an <code>AccesDenied</code> error, you
     * can get a new temporary URI by running a <code>GetTranscriptionJob</code> or
     * <code>ListTranscriptionJob</code> request.</p> 
     */
    inline MedicalTranscript& WithTranscriptFileUri(const char* value) { SetTranscriptFileUri(value); return *this;}

  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
