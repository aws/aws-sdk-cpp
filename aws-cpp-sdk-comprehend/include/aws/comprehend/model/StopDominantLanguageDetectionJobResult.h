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
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
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
namespace Comprehend
{
namespace Model
{
  class AWS_COMPREHEND_API StopDominantLanguageDetectionJobResult
  {
  public:
    StopDominantLanguageDetectionJobResult();
    StopDominantLanguageDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StopDominantLanguageDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline StopDominantLanguageDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline StopDominantLanguageDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the dominant language detection job to stop.</p>
     */
    inline StopDominantLanguageDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopDominantLanguageDetectionJob</code> operation.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopDominantLanguageDetectionJob</code> operation.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopDominantLanguageDetectionJob</code> operation.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopDominantLanguageDetectionJob</code> operation.</p>
     */
    inline StopDominantLanguageDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopDominantLanguageDetectionJob</code> operation.</p>
     */
    inline StopDominantLanguageDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
