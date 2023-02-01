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


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline IdentityResolutionJob& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline IdentityResolutionJob& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline IdentityResolutionJob& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline IdentityResolutionJob& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline IdentityResolutionJob& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline IdentityResolutionJob& WithJobId(const char* value) { SetJobId(value); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const IdentityResolutionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(IdentityResolutionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline IdentityResolutionJob& WithStatus(const IdentityResolutionJobStatus& value) { SetStatus(value); return *this;}

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
    inline IdentityResolutionJob& WithStatus(IdentityResolutionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const{ return m_jobStartTime; }

    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline bool JobStartTimeHasBeenSet() const { return m_jobStartTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline void SetJobStartTime(const Aws::Utils::DateTime& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = value; }

    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline void SetJobStartTime(Aws::Utils::DateTime&& value) { m_jobStartTimeHasBeenSet = true; m_jobStartTime = std::move(value); }

    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline IdentityResolutionJob& WithJobStartTime(const Aws::Utils::DateTime& value) { SetJobStartTime(value); return *this;}

    /**
     * <p>The timestamp of when the job was started or will be started.</p>
     */
    inline IdentityResolutionJob& WithJobStartTime(Aws::Utils::DateTime&& value) { SetJobStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const{ return m_jobEndTime; }

    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline bool JobEndTimeHasBeenSet() const { return m_jobEndTimeHasBeenSet; }

    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline void SetJobEndTime(const Aws::Utils::DateTime& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = value; }

    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline void SetJobEndTime(Aws::Utils::DateTime&& value) { m_jobEndTimeHasBeenSet = true; m_jobEndTime = std::move(value); }

    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline IdentityResolutionJob& WithJobEndTime(const Aws::Utils::DateTime& value) { SetJobEndTime(value); return *this;}

    /**
     * <p>The timestamp of when the job was completed.</p>
     */
    inline IdentityResolutionJob& WithJobEndTime(Aws::Utils::DateTime&& value) { SetJobEndTime(std::move(value)); return *this;}


    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline const JobStats& GetJobStats() const{ return m_jobStats; }

    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline bool JobStatsHasBeenSet() const { return m_jobStatsHasBeenSet; }

    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline void SetJobStats(const JobStats& value) { m_jobStatsHasBeenSet = true; m_jobStats = value; }

    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline void SetJobStats(JobStats&& value) { m_jobStatsHasBeenSet = true; m_jobStats = std::move(value); }

    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline IdentityResolutionJob& WithJobStats(const JobStats& value) { SetJobStats(value); return *this;}

    /**
     * <p>Statistics about an Identity Resolution Job.</p>
     */
    inline IdentityResolutionJob& WithJobStats(JobStats&& value) { SetJobStats(std::move(value)); return *this;}


    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline const ExportingLocation& GetExportingLocation() const{ return m_exportingLocation; }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline bool ExportingLocationHasBeenSet() const { return m_exportingLocationHasBeenSet; }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline void SetExportingLocation(const ExportingLocation& value) { m_exportingLocationHasBeenSet = true; m_exportingLocation = value; }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline void SetExportingLocation(ExportingLocation&& value) { m_exportingLocationHasBeenSet = true; m_exportingLocation = std::move(value); }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline IdentityResolutionJob& WithExportingLocation(const ExportingLocation& value) { SetExportingLocation(value); return *this;}

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline IdentityResolutionJob& WithExportingLocation(ExportingLocation&& value) { SetExportingLocation(std::move(value)); return *this;}


    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline IdentityResolutionJob& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline IdentityResolutionJob& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline IdentityResolutionJob& WithMessage(const char* value) { SetMessage(value); return *this;}

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
