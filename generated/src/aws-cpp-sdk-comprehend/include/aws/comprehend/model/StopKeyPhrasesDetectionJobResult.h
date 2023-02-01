/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class StopKeyPhrasesDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API StopKeyPhrasesDetectionJobResult();
    AWS_COMPREHEND_API StopKeyPhrasesDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StopKeyPhrasesDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline StopKeyPhrasesDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline StopKeyPhrasesDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the key phrases detection job to stop.</p>
     */
    inline StopKeyPhrasesDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopKeyPhrasesDetectionJob</code> operation.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopKeyPhrasesDetectionJob</code> operation.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopKeyPhrasesDetectionJob</code> operation.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopKeyPhrasesDetectionJob</code> operation.</p>
     */
    inline StopKeyPhrasesDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopKeyPhrasesDetectionJob</code> operation.</p>
     */
    inline StopKeyPhrasesDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
