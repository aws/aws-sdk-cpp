/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/IdentityResolutionJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/AutoMerging.h>
#include <aws/customer-profiles/model/ExportingLocation.h>
#include <aws/customer-profiles/model/JobStats.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class GetIdentityResolutionJobResult
  {
  public:
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobResult();
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline GetIdentityResolutionJobResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetIdentityResolutionJobResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetIdentityResolutionJobResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetIdentityResolutionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetIdentityResolutionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetIdentityResolutionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Identity Resolution Job.</p> <ul> <li> <p>
     * <code>PENDING</code>: The Identity Resolution Job is scheduled but has not
     * started yet. If you turn off the Identity Resolution feature in your domain,
     * jobs in the <code>PENDING</code> state are deleted.</p> </li> <li> <p>
     * <code>PREPROCESSING</code>: The Identity Resolution Job is loading your
     * data.</p> </li> <li> <p> <code>FIND_MATCHING</code>: The Identity Resolution Job
     * is using the machine learning model to identify profiles that belong to the same
     * matching group.</p> </li> <li> <p> <code>MERGING</code>: The Identity Resolution
     * Job is merging duplicate profiles.</p> </li> <li> <p> <code>COMPLETED</code>:
     * The Identity Resolution Job completed successfully.</p> </li> <li> <p>
     * <code>PARTIAL_SUCCESS</code>: There's a system error and not all of the data is
     * merged. The Identity Resolution Job writes a message indicating the source of
     * the problem.</p> </li> <li> <p> <code>FAILED</code>: The Identity Resolution Job
     * did not merge any data. It writes a message indicating the source of the
     * problem.</p> </li> </ul>
     */
    inline const IdentityResolutionJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const IdentityResolutionJobStatus& value) { m_status = value; }
    inline void SetStatus(IdentityResolutionJobStatus&& value) { m_status = std::move(value); }
    inline GetIdentityResolutionJobResult& WithStatus(const IdentityResolutionJobStatus& value) { SetStatus(value); return *this;}
    inline GetIdentityResolutionJobResult& WithStatus(IdentityResolutionJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetIdentityResolutionJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetIdentityResolutionJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetIdentityResolutionJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const{ return m_jobStartTime; }
    inline void SetJobStartTime(const Aws::Utils::DateTime& value) { m_jobStartTime = value; }
    inline void SetJobStartTime(Aws::Utils::DateTime&& value) { m_jobStartTime = std::move(value); }
    inline GetIdentityResolutionJobResult& WithJobStartTime(const Aws::Utils::DateTime& value) { SetJobStartTime(value); return *this;}
    inline GetIdentityResolutionJobResult& WithJobStartTime(Aws::Utils::DateTime&& value) { SetJobStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const{ return m_jobEndTime; }
    inline void SetJobEndTime(const Aws::Utils::DateTime& value) { m_jobEndTime = value; }
    inline void SetJobEndTime(Aws::Utils::DateTime&& value) { m_jobEndTime = std::move(value); }
    inline GetIdentityResolutionJobResult& WithJobEndTime(const Aws::Utils::DateTime& value) { SetJobEndTime(value); return *this;}
    inline GetIdentityResolutionJobResult& WithJobEndTime(Aws::Utils::DateTime&& value) { SetJobEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetIdentityResolutionJobResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetIdentityResolutionJobResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpirationTime() const{ return m_jobExpirationTime; }
    inline void SetJobExpirationTime(const Aws::Utils::DateTime& value) { m_jobExpirationTime = value; }
    inline void SetJobExpirationTime(Aws::Utils::DateTime&& value) { m_jobExpirationTime = std::move(value); }
    inline GetIdentityResolutionJobResult& WithJobExpirationTime(const Aws::Utils::DateTime& value) { SetJobExpirationTime(value); return *this;}
    inline GetIdentityResolutionJobResult& WithJobExpirationTime(Aws::Utils::DateTime&& value) { SetJobExpirationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline const AutoMerging& GetAutoMerging() const{ return m_autoMerging; }
    inline void SetAutoMerging(const AutoMerging& value) { m_autoMerging = value; }
    inline void SetAutoMerging(AutoMerging&& value) { m_autoMerging = std::move(value); }
    inline GetIdentityResolutionJobResult& WithAutoMerging(const AutoMerging& value) { SetAutoMerging(value); return *this;}
    inline GetIdentityResolutionJobResult& WithAutoMerging(AutoMerging&& value) { SetAutoMerging(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline const ExportingLocation& GetExportingLocation() const{ return m_exportingLocation; }
    inline void SetExportingLocation(const ExportingLocation& value) { m_exportingLocation = value; }
    inline void SetExportingLocation(ExportingLocation&& value) { m_exportingLocation = std::move(value); }
    inline GetIdentityResolutionJobResult& WithExportingLocation(const ExportingLocation& value) { SetExportingLocation(value); return *this;}
    inline GetIdentityResolutionJobResult& WithExportingLocation(ExportingLocation&& value) { SetExportingLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline const JobStats& GetJobStats() const{ return m_jobStats; }
    inline void SetJobStats(const JobStats& value) { m_jobStats = value; }
    inline void SetJobStats(JobStats&& value) { m_jobStats = std::move(value); }
    inline GetIdentityResolutionJobResult& WithJobStats(const JobStats& value) { SetJobStats(value); return *this;}
    inline GetIdentityResolutionJobResult& WithJobStats(JobStats&& value) { SetJobStats(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIdentityResolutionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIdentityResolutionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIdentityResolutionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_jobId;

    IdentityResolutionJobStatus m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_jobStartTime;

    Aws::Utils::DateTime m_jobEndTime;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::Utils::DateTime m_jobExpirationTime;

    AutoMerging m_autoMerging;

    ExportingLocation m_exportingLocation;

    JobStats m_jobStats;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
