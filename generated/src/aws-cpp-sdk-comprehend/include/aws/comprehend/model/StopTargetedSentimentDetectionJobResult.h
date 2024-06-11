﻿/**
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
  class StopTargetedSentimentDetectionJobResult
  {
  public:
    AWS_COMPREHEND_API StopTargetedSentimentDetectionJobResult();
    AWS_COMPREHEND_API StopTargetedSentimentDetectionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API StopTargetedSentimentDetectionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the targeted sentiment detection job to stop.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StopTargetedSentimentDetectionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StopTargetedSentimentDetectionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StopTargetedSentimentDetectionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Either <code>STOP_REQUESTED</code> if the job is currently running, or
     * <code>STOPPED</code> if the job was previously stopped with the
     * <code>StopSentimentDetectionJob</code> operation.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline StopTargetedSentimentDetectionJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline StopTargetedSentimentDetectionJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StopTargetedSentimentDetectionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StopTargetedSentimentDetectionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StopTargetedSentimentDetectionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    JobStatus m_jobStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
