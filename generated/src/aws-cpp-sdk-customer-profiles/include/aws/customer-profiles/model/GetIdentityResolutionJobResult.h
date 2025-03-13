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
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobResult() = default;
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API GetIdentityResolutionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetIdentityResolutionJobResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetIdentityResolutionJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
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
    inline IdentityResolutionJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(IdentityResolutionJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetIdentityResolutionJobResult& WithStatus(IdentityResolutionJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetIdentityResolutionJobResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const { return m_jobStartTime; }
    template<typename JobStartTimeT = Aws::Utils::DateTime>
    void SetJobStartTime(JobStartTimeT&& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = std::forward<JobStartTimeT>(value); }
    template<typename JobStartTimeT = Aws::Utils::DateTime>
    GetIdentityResolutionJobResult& WithJobStartTime(JobStartTimeT&& value) { SetJobStartTime(std::forward<JobStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const { return m_jobEndTime; }
    template<typename JobEndTimeT = Aws::Utils::DateTime>
    void SetJobEndTime(JobEndTimeT&& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = std::forward<JobEndTimeT>(value); }
    template<typename JobEndTimeT = Aws::Utils::DateTime>
    GetIdentityResolutionJobResult& WithJobEndTime(JobEndTimeT&& value) { SetJobEndTime(std::forward<JobEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetIdentityResolutionJobResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpirationTime() const { return m_jobExpirationTime; }
    template<typename JobExpirationTimeT = Aws::Utils::DateTime>
    void SetJobExpirationTime(JobExpirationTimeT&& value) { m_jobExpirationTimeHasBeenSet = true; m_jobExpirationTime = std::forward<JobExpirationTimeT>(value); }
    template<typename JobExpirationTimeT = Aws::Utils::DateTime>
    GetIdentityResolutionJobResult& WithJobExpirationTime(JobExpirationTimeT&& value) { SetJobExpirationTime(std::forward<JobExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline const AutoMerging& GetAutoMerging() const { return m_autoMerging; }
    template<typename AutoMergingT = AutoMerging>
    void SetAutoMerging(AutoMergingT&& value) { m_autoMergingHasBeenSet = true; m_autoMerging = std::forward<AutoMergingT>(value); }
    template<typename AutoMergingT = AutoMerging>
    GetIdentityResolutionJobResult& WithAutoMerging(AutoMergingT&& value) { SetAutoMerging(std::forward<AutoMergingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline const ExportingLocation& GetExportingLocation() const { return m_exportingLocation; }
    template<typename ExportingLocationT = ExportingLocation>
    void SetExportingLocation(ExportingLocationT&& value) { m_exportingLocationHasBeenSet = true; m_exportingLocation = std::forward<ExportingLocationT>(value); }
    template<typename ExportingLocationT = ExportingLocation>
    GetIdentityResolutionJobResult& WithExportingLocation(ExportingLocationT&& value) { SetExportingLocation(std::forward<ExportingLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline const JobStats& GetJobStats() const { return m_jobStats; }
    template<typename JobStatsT = JobStats>
    void SetJobStats(JobStatsT&& value) { m_jobStatsHasBeenSet = true; m_jobStats = std::forward<JobStatsT>(value); }
    template<typename JobStatsT = JobStats>
    GetIdentityResolutionJobResult& WithJobStats(JobStatsT&& value) { SetJobStats(std::forward<JobStatsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdentityResolutionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    IdentityResolutionJobStatus m_status{IdentityResolutionJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_jobStartTime{};
    bool m_jobStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_jobEndTime{};
    bool m_jobEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_jobExpirationTime{};
    bool m_jobExpirationTimeHasBeenSet = false;

    AutoMerging m_autoMerging;
    bool m_autoMergingHasBeenSet = false;

    ExportingLocation m_exportingLocation;
    bool m_exportingLocationHasBeenSet = false;

    JobStats m_jobStats;
    bool m_jobStatsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
