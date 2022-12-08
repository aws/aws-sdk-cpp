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


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetIdentityResolutionJobResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetIdentityResolutionJobResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetIdentityResolutionJobResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


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
    inline void SetStatus(const IdentityResolutionJobStatus& value) { m_status = value; }

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
    inline void SetStatus(IdentityResolutionJobStatus&& value) { m_status = std::move(value); }

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
    inline GetIdentityResolutionJobResult& WithStatus(const IdentityResolutionJobStatus& value) { SetStatus(value); return *this;}

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
    inline GetIdentityResolutionJobResult& WithStatus(IdentityResolutionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline GetIdentityResolutionJobResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline GetIdentityResolutionJobResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error messages that are generated when the Identity Resolution Job
     * runs.</p>
     */
    inline GetIdentityResolutionJobResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetJobStartTime() const{ return m_jobStartTime; }

    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline void SetJobStartTime(const Aws::Utils::DateTime& value) { m_jobStartTime = value; }

    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline void SetJobStartTime(Aws::Utils::DateTime&& value) { m_jobStartTime = std::move(value); }

    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobStartTime(const Aws::Utils::DateTime& value) { SetJobStartTime(value); return *this;}

    /**
     * <p>The timestamp of when the Identity Resolution Job was started or will be
     * started.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobStartTime(Aws::Utils::DateTime&& value) { SetJobStartTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetJobEndTime() const{ return m_jobEndTime; }

    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline void SetJobEndTime(const Aws::Utils::DateTime& value) { m_jobEndTime = value; }

    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline void SetJobEndTime(Aws::Utils::DateTime&& value) { m_jobEndTime = std::move(value); }

    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobEndTime(const Aws::Utils::DateTime& value) { SetJobEndTime(value); return *this;}

    /**
     * <p>The timestamp of when the Identity Resolution Job was completed.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobEndTime(Aws::Utils::DateTime&& value) { SetJobEndTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline GetIdentityResolutionJobResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the Identity Resolution Job was most recently
     * edited.</p>
     */
    inline GetIdentityResolutionJobResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetJobExpirationTime() const{ return m_jobExpirationTime; }

    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline void SetJobExpirationTime(const Aws::Utils::DateTime& value) { m_jobExpirationTime = value; }

    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline void SetJobExpirationTime(Aws::Utils::DateTime&& value) { m_jobExpirationTime = std::move(value); }

    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobExpirationTime(const Aws::Utils::DateTime& value) { SetJobExpirationTime(value); return *this;}

    /**
     * <p>The timestamp of when the Identity Resolution Job will expire.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobExpirationTime(Aws::Utils::DateTime&& value) { SetJobExpirationTime(std::move(value)); return *this;}


    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline const AutoMerging& GetAutoMerging() const{ return m_autoMerging; }

    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline void SetAutoMerging(const AutoMerging& value) { m_autoMerging = value; }

    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline void SetAutoMerging(AutoMerging&& value) { m_autoMerging = std::move(value); }

    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline GetIdentityResolutionJobResult& WithAutoMerging(const AutoMerging& value) { SetAutoMerging(value); return *this;}

    /**
     * <p>Configuration settings for how to perform the auto-merging of profiles.</p>
     */
    inline GetIdentityResolutionJobResult& WithAutoMerging(AutoMerging&& value) { SetAutoMerging(std::move(value)); return *this;}


    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline const ExportingLocation& GetExportingLocation() const{ return m_exportingLocation; }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline void SetExportingLocation(const ExportingLocation& value) { m_exportingLocation = value; }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline void SetExportingLocation(ExportingLocation&& value) { m_exportingLocation = std::move(value); }

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline GetIdentityResolutionJobResult& WithExportingLocation(const ExportingLocation& value) { SetExportingLocation(value); return *this;}

    /**
     * <p>The S3 location where the Identity Resolution Job writes result files.</p>
     */
    inline GetIdentityResolutionJobResult& WithExportingLocation(ExportingLocation&& value) { SetExportingLocation(std::move(value)); return *this;}


    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline const JobStats& GetJobStats() const{ return m_jobStats; }

    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline void SetJobStats(const JobStats& value) { m_jobStats = value; }

    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline void SetJobStats(JobStats&& value) { m_jobStats = std::move(value); }

    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobStats(const JobStats& value) { SetJobStats(value); return *this;}

    /**
     * <p>Statistics about the Identity Resolution Job.</p>
     */
    inline GetIdentityResolutionJobResult& WithJobStats(JobStats&& value) { SetJobStats(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
