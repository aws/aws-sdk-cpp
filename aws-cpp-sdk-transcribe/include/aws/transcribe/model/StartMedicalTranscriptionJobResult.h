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
#include <aws/transcribe/model/MedicalTranscriptionJob.h>
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
  class AWS_TRANSCRIBESERVICE_API StartMedicalTranscriptionJobResult
  {
  public:
    StartMedicalTranscriptionJobResult();
    StartMedicalTranscriptionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartMedicalTranscriptionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A batch job submitted to transcribe medical speech to text.</p>
     */
    inline const MedicalTranscriptionJob& GetMedicalTranscriptionJob() const{ return m_medicalTranscriptionJob; }

    /**
     * <p>A batch job submitted to transcribe medical speech to text.</p>
     */
    inline void SetMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { m_medicalTranscriptionJob = value; }

    /**
     * <p>A batch job submitted to transcribe medical speech to text.</p>
     */
    inline void SetMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { m_medicalTranscriptionJob = std::move(value); }

    /**
     * <p>A batch job submitted to transcribe medical speech to text.</p>
     */
    inline StartMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(const MedicalTranscriptionJob& value) { SetMedicalTranscriptionJob(value); return *this;}

    /**
     * <p>A batch job submitted to transcribe medical speech to text.</p>
     */
    inline StartMedicalTranscriptionJobResult& WithMedicalTranscriptionJob(MedicalTranscriptionJob&& value) { SetMedicalTranscriptionJob(std::move(value)); return *this;}

  private:

    MedicalTranscriptionJob m_medicalTranscriptionJob;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
