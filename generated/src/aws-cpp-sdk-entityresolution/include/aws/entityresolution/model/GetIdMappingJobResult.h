/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/entityresolution/model/ErrorDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdMappingJobMetrics.h>
#include <aws/entityresolution/model/JobStatus.h>
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
namespace EntityResolution
{
namespace Model
{
  class GetIdMappingJobResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetIdMappingJobResult();
    AWS_ENTITYRESOLUTION_API GetIdMappingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetIdMappingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time at which the job has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The time at which the job has finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The time at which the job has finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The time at which the job has finished.</p>
     */
    inline GetIdMappingJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The time at which the job has finished.</p>
     */
    inline GetIdMappingJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }

    
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetails = value; }

    
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetails = std::move(value); }

    
    inline GetIdMappingJobResult& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}

    
    inline GetIdMappingJobResult& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}


    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline GetIdMappingJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline GetIdMappingJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline GetIdMappingJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Metrics associated with the execution, specifically total records processed,
     * unique IDs generated, and records the execution skipped.</p>
     */
    inline const IdMappingJobMetrics& GetMetrics() const{ return m_metrics; }

    /**
     * <p>Metrics associated with the execution, specifically total records processed,
     * unique IDs generated, and records the execution skipped.</p>
     */
    inline void SetMetrics(const IdMappingJobMetrics& value) { m_metrics = value; }

    /**
     * <p>Metrics associated with the execution, specifically total records processed,
     * unique IDs generated, and records the execution skipped.</p>
     */
    inline void SetMetrics(IdMappingJobMetrics&& value) { m_metrics = std::move(value); }

    /**
     * <p>Metrics associated with the execution, specifically total records processed,
     * unique IDs generated, and records the execution skipped.</p>
     */
    inline GetIdMappingJobResult& WithMetrics(const IdMappingJobMetrics& value) { SetMetrics(value); return *this;}

    /**
     * <p>Metrics associated with the execution, specifically total records processed,
     * unique IDs generated, and records the execution skipped.</p>
     */
    inline GetIdMappingJobResult& WithMetrics(IdMappingJobMetrics&& value) { SetMetrics(std::move(value)); return *this;}


    /**
     * <p>The time at which the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The time at which the job was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The time at which the job was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The time at which the job was started.</p>
     */
    inline GetIdMappingJobResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The time at which the job was started.</p>
     */
    inline GetIdMappingJobResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The current status of the job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the job.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_status = value; }

    /**
     * <p>The current status of the job.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the job.</p>
     */
    inline GetIdMappingJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the job.</p>
     */
    inline GetIdMappingJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIdMappingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIdMappingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIdMappingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_endTime;

    ErrorDetails m_errorDetails;

    Aws::String m_jobId;

    IdMappingJobMetrics m_metrics;

    Aws::Utils::DateTime m_startTime;

    JobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
