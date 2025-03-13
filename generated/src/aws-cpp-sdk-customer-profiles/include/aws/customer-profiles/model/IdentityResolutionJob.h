/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/IdentityResolutionJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/customer-profiles/model/JobStats.h>
#include <aws/customer-profiles/model/ExportingLocation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Information about the Identity Resolution Job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/IdentityResolutionJob">AWS
   * API Reference</a></p>
   */
  class IdentityResolutionJob
  {
  public:
    AWS_CUSTOMERPROFILES_API IdentityResolutionJob() = default;
    AWS_CUSTOMERPROFILES_API IdentityResolutionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API IdentityResolutionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    IdentityResolutionJob& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    IdentityResolutionJob& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IdentityResolutionJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IdentityResolutionJob& WithStatus(IdentityResolutionJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const { return m_jobStartTime; }
    inline bool JobStartTimeHasBeenSet() const { return m_jobStartTimeHasBeenSet; }
    template<typename JobStartTimeT = Aws::Utils::DateTime>
    void SetJobStartTime(JobStartTimeT&& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = std::forward<JobStartTimeT>(value); }
    template<typename JobStartTimeT = Aws::Utils::DateTime>
    IdentityResolutionJob& WithJobStartTime(JobStartTimeT&& value) { SetJobStartTime(std::forward<JobStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const { return m_jobEndTime; }
    inline bool JobEndTimeHasBeenSet() const { return m_jobEndTimeHasBeenSet; }
    template<typename JobEndTimeT = Aws::Utils::DateTime>
    void SetJobEndTime(JobEndTimeT&& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = std::forward<JobEndTimeT>(value); }
    template<typename JobEndTimeT = Aws::Utils::DateTime>
    IdentityResolutionJob& WithJobEndTime(JobEndTimeT&& value) { SetJobEndTime(std::forward<JobEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline const JobStats& GetJobStats() const { return m_jobStats; }
    inline bool JobStatsHasBeenSet() const { return m_jobStatsHasBeenSet; }
    template<typename JobStatsT = JobStats>
    void SetJobStats(JobStatsT&& value) { m_jobStatsHasBeenSet = true; m_jobStats = std::forward<JobStatsT>(value); }
    template<typename JobStatsT = JobStats>
    IdentityResolutionJob& WithJobStats(JobStatsT&& value) { SetJobStats(std::forward<JobStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline const ExportingLocation& GetExportingLocation() const { return m_exportingLocation; }
    inline bool ExportingLocationHasBeenSet() const { return m_exportingLocationHasBeenSet; }
    template<typename ExportingLocationT = ExportingLocation>
    void SetExportingLocation(ExportingLocationT&& value) { m_exportingLocationHasBeenSet = true; m_exportingLocation = std::forward<ExportingLocationT>(value); }
    template<typename ExportingLocationT = ExportingLocation>
    IdentityResolutionJob& WithExportingLocation(ExportingLocationT&& value) { SetExportingLocation(std::forward<ExportingLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    IdentityResolutionJob& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    IdentityResolutionJobStatus m_status{IdentityResolutionJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_jobStartTime{};
    bool m_jobStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_jobEndTime{};
    bool m_jobEndTimeHasBeenSet = false;

    JobStats m_jobStats;
    bool m_jobStatsHasBeenSet = false;

    ExportingLocation m_exportingLocation;
    bool m_exportingLocationHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
