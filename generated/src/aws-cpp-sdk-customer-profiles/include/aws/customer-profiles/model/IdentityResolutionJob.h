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
    AWS_CUSTOMERPROFILES_API IdentityResolutionJob();
    AWS_CUSTOMERPROFILES_API IdentityResolutionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API IdentityResolutionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline IdentityResolutionJob& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline IdentityResolutionJob& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline IdentityResolutionJob& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline IdentityResolutionJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline IdentityResolutionJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline IdentityResolutionJob& WithJobId(const char* value) { SetJobId(value); return *this;}
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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IdentityResolutionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IdentityResolutionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IdentityResolutionJob& WithStatus(const IdentityResolutionJobStatus& value) { SetStatus(value); return *this;}
    inline IdentityResolutionJob& WithStatus(IdentityResolutionJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const{ return m_jobStartTime; }
    inline bool JobStartTimeHasBeenSet() const { return m_jobStartTimeHasBeenSet; }
    inline void SetJobStartTime(const Aws::Utils::DateTime& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = value; }
    inline void SetJobStartTime(Aws::Utils::DateTime&& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = std::move(value); }
    inline IdentityResolutionJob& WithJobStartTime(const Aws::Utils::DateTime& value) { SetJobStartTime(value); return *this;}
    inline IdentityResolutionJob& WithJobStartTime(Aws::Utils::DateTime&& value) { SetJobStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const{ return m_jobEndTime; }
    inline bool JobEndTimeHasBeenSet() const { return m_jobEndTimeHasBeenSet; }
    inline void SetJobEndTime(const Aws::Utils::DateTime& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = value; }
    inline void SetJobEndTime(Aws::Utils::DateTime&& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = std::move(value); }
    inline IdentityResolutionJob& WithJobEndTime(const Aws::Utils::DateTime& value) { SetJobEndTime(value); return *this;}
    inline IdentityResolutionJob& WithJobEndTime(Aws::Utils::DateTime&& value) { SetJobEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline const JobStats& GetJobStats() const{ return m_jobStats; }
    inline bool JobStatsHasBeenSet() const { return m_jobStatsHasBeenSet; }
    inline void SetJobStats(const JobStats& value) { m_jobStatsHasBeenSet = true; m_jobStats = value; }
    inline void SetJobStats(JobStats&& value) { m_jobStatsHasBeenSet = true; m_jobStats = std::move(value); }
    inline IdentityResolutionJob& WithJobStats(const JobStats& value) { SetJobStats(value); return *this;}
    inline IdentityResolutionJob& WithJobStats(JobStats&& value) { SetJobStats(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline const ExportingLocation& GetExportingLocation() const{ return m_exportingLocation; }
    inline bool ExportingLocationHasBeenSet() const { return m_exportingLocationHasBeenSet; }
    inline void SetExportingLocation(const ExportingLocation& value) { m_exportingLocationHasBeenSet = true; m_exportingLocation = value; }
    inline void SetExportingLocation(ExportingLocation&& value) { m_exportingLocationHasBeenSet = true; m_exportingLocation = std::move(value); }
    inline IdentityResolutionJob& WithExportingLocation(const ExportingLocation& value) { SetExportingLocation(value); return *this;}
    inline IdentityResolutionJob& WithExportingLocation(ExportingLocation&& value) { SetExportingLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline IdentityResolutionJob& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline IdentityResolutionJob& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline IdentityResolutionJob& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    IdentityResolutionJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_jobStartTime;
    bool m_jobStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_jobEndTime;
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
