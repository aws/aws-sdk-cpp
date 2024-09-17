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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/JobStatus.h>
#include <aws/entityresolution/model/IdMappingJobOutputSource.h>
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


    ///@{
    /**
     * <p>The time at which the job has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetIdMappingJobResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetIdMappingJobResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetErrorDetails() const{ return m_errorDetails; }
    inline void SetErrorDetails(const ErrorDetails& value) { m_errorDetails = value; }
    inline void SetErrorDetails(ErrorDetails&& value) { m_errorDetails = std::move(value); }
    inline GetIdMappingJobResult& WithErrorDetails(const ErrorDetails& value) { SetErrorDetails(value); return *this;}
    inline GetIdMappingJobResult& WithErrorDetails(ErrorDetails&& value) { SetErrorDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetIdMappingJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetIdMappingJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetIdMappingJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics associated with the execution, specifically total records processed,
     * unique IDs generated, and records the execution skipped.</p>
     */
    inline const IdMappingJobMetrics& GetMetrics() const{ return m_metrics; }
    inline void SetMetrics(const IdMappingJobMetrics& value) { m_metrics = value; }
    inline void SetMetrics(IdMappingJobMetrics&& value) { m_metrics = std::move(value); }
    inline GetIdMappingJobResult& WithMetrics(const IdMappingJobMetrics& value) { SetMetrics(value); return *this;}
    inline GetIdMappingJobResult& WithMetrics(IdMappingJobMetrics&& value) { SetMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects.</p>
     */
    inline const Aws::Vector<IdMappingJobOutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }
    inline void SetOutputSourceConfig(const Aws::Vector<IdMappingJobOutputSource>& value) { m_outputSourceConfig = value; }
    inline void SetOutputSourceConfig(Aws::Vector<IdMappingJobOutputSource>&& value) { m_outputSourceConfig = std::move(value); }
    inline GetIdMappingJobResult& WithOutputSourceConfig(const Aws::Vector<IdMappingJobOutputSource>& value) { SetOutputSourceConfig(value); return *this;}
    inline GetIdMappingJobResult& WithOutputSourceConfig(Aws::Vector<IdMappingJobOutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}
    inline GetIdMappingJobResult& AddOutputSourceConfig(const IdMappingJobOutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }
    inline GetIdMappingJobResult& AddOutputSourceConfig(IdMappingJobOutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetIdMappingJobResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetIdMappingJobResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const JobStatus& value) { m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }
    inline GetIdMappingJobResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline GetIdMappingJobResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIdMappingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIdMappingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIdMappingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;

    ErrorDetails m_errorDetails;

    Aws::String m_jobId;

    IdMappingJobMetrics m_metrics;

    Aws::Vector<IdMappingJobOutputSource> m_outputSourceConfig;

    Aws::Utils::DateTime m_startTime;

    JobStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
