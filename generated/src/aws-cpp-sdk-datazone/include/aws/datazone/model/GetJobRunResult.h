/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/JobRunDetails.h>
#include <aws/datazone/model/JobRunError.h>
#include <aws/datazone/model/JobType.h>
#include <aws/datazone/model/JobRunMode.h>
#include <aws/datazone/model/JobRunStatus.h>
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
namespace DataZone
{
namespace Model
{
  class GetJobRunResult
  {
  public:
    AWS_DATAZONE_API GetJobRunResult();
    AWS_DATAZONE_API GetJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the job run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetJobRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetJobRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the job run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetJobRunResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetJobRunResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetJobRunResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the job run.</p>
     */
    inline const JobRunDetails& GetDetails() const{ return m_details; }
    inline void SetDetails(const JobRunDetails& value) { m_details = value; }
    inline void SetDetails(JobRunDetails&& value) { m_details = std::move(value); }
    inline GetJobRunResult& WithDetails(const JobRunDetails& value) { SetDetails(value); return *this;}
    inline GetJobRunResult& WithDetails(JobRunDetails&& value) { SetDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetJobRunResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetJobRunResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetJobRunResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job run ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetJobRunResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetJobRunResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error generated if the action is not completed successfully.</p>
     */
    inline const JobRunError& GetError() const{ return m_error; }
    inline void SetError(const JobRunError& value) { m_error = value; }
    inline void SetError(JobRunError&& value) { m_error = std::move(value); }
    inline GetJobRunResult& WithError(const JobRunError& value) { SetError(value); return *this;}
    inline GetJobRunResult& WithError(JobRunError&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetJobRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetJobRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetJobRunResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job run.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetJobRunResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetJobRunResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetJobRunResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the job run.</p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const JobType& value) { m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }
    inline GetJobRunResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline GetJobRunResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the job run.</p>
     */
    inline const JobRunMode& GetRunMode() const{ return m_runMode; }
    inline void SetRunMode(const JobRunMode& value) { m_runMode = value; }
    inline void SetRunMode(JobRunMode&& value) { m_runMode = std::move(value); }
    inline GetJobRunResult& WithRunMode(const JobRunMode& value) { SetRunMode(value); return *this;}
    inline GetJobRunResult& WithRunMode(JobRunMode&& value) { SetRunMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetJobRunResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetJobRunResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the job run.</p>
     */
    inline const JobRunStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const JobRunStatus& value) { m_status = value; }
    inline void SetStatus(JobRunStatus&& value) { m_status = std::move(value); }
    inline GetJobRunResult& WithStatus(const JobRunStatus& value) { SetStatus(value); return *this;}
    inline GetJobRunResult& WithStatus(JobRunStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    JobRunDetails m_details;

    Aws::String m_domainId;

    Aws::Utils::DateTime m_endTime;

    JobRunError m_error;

    Aws::String m_id;

    Aws::String m_jobId;

    JobType m_jobType;

    JobRunMode m_runMode;

    Aws::Utils::DateTime m_startTime;

    JobRunStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
