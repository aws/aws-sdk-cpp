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
#include <aws/transcribe/model/TranscriptionJob.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
  class AWS_TRANSCRIBESERVICE_API StartTranscriptionJobResult
  {
  public:
    StartTranscriptionJobResult();
    StartTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline const TranscriptionJob& GetTranscriptionJob() const{ return m_transcriptionJob; }

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline void SetTranscriptionJob(const TranscriptionJob& value) { m_transcriptionJob = value; }

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline void SetTranscriptionJob(TranscriptionJob&& value) { m_transcriptionJob = std::move(value); }

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline StartTranscriptionJobResult& WithTranscriptionJob(const TranscriptionJob& value) { SetTranscriptionJob(value); return *this;}

    /**
     * <p>An object containing details of the asynchronous transcription job.</p>
     */
    inline StartTranscriptionJobResult& WithTranscriptionJob(TranscriptionJob&& value) { SetTranscriptionJob(std::move(value)); return *this;}

  private:

    TranscriptionJob m_transcriptionJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
