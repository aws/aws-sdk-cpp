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
   * <p>Identifies the location of a medical transcript.</p><p><h3>See Also:</h3>  
   * <a
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
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline const Aws::String& GetTranscriptFileUri() const{ return m_transcriptFileUri; }

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline bool TranscriptFileUriHasBeenSet() const { return m_transcriptFileUriHasBeenSet; }

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline void SetTranscriptFileUri(const Aws::String& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = value; }

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline void SetTranscriptFileUri(Aws::String&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::move(value); }

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline void SetTranscriptFileUri(const char* value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri.assign(value); }

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline MedicalTranscript& WithTranscriptFileUri(const Aws::String& value) { SetTranscriptFileUri(value); return *this;}

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline MedicalTranscript& WithTranscriptFileUri(Aws::String&& value) { SetTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 object location of the medical transcript.</p> <p>Use this URI to
     * access the medical transcript. This URI points to the S3 bucket you created to
     * store the medical transcript.</p>
     */
    inline MedicalTranscript& WithTranscriptFileUri(const char* value) { SetTranscriptFileUri(value); return *this;}

  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
