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
} // namespace Json
} // namespace Utils
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Describes the output of a transcription job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/Transcript">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API Transcript
  {
  public:
    Transcript();
    Transcript(const Aws::Utils::Json::JsonValue& jsonValue);
    Transcript& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline const Aws::String& GetTranscriptFileUri() const{ return m_transcriptFileUri; }

    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline void SetTranscriptFileUri(const Aws::String& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = value; }

    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline void SetTranscriptFileUri(Aws::String&& value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri = std::move(value); }

    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline void SetTranscriptFileUri(const char* value) { m_transcriptFileUriHasBeenSet = true; m_transcriptFileUri.assign(value); }

    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline Transcript& WithTranscriptFileUri(const Aws::String& value) { SetTranscriptFileUri(value); return *this;}

    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline Transcript& WithTranscriptFileUri(Aws::String&& value) { SetTranscriptFileUri(std::move(value)); return *this;}

    /**
     * <p>The S3 location where the transcription result is stored. Use this URI to
     * access the results of the transcription job. </p>
     */
    inline Transcript& WithTranscriptFileUri(const char* value) { SetTranscriptFileUri(value); return *this;}

  private:

    Aws::String m_transcriptFileUri;
    bool m_transcriptFileUriHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
