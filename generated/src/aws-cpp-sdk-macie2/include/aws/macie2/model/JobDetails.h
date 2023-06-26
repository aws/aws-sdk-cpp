/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/IsDefinedInJob.h>
#include <aws/macie2/model/IsMonitoredByJob.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies whether any one-time or recurring classification jobs are
   * configured to analyze data in an S3 bucket, and, if so, the details of the job
   * that ran most recently.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobDetails">AWS
   * API Reference</a></p>
   */
  class JobDetails
  {
  public:
    AWS_MACIE2_API JobDetails();
    AWS_MACIE2_API JobDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * data in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for one
     * or more jobs and at least one of those jobs has a status other than CANCELLED.
     * Or the bucket matched the bucket criteria (S3BucketCriteriaForJob) for at least
     * one job that previously ran.</p></li> <li><p>FALSE - The bucket isn't explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for any jobs, all
     * the jobs that explicitly include the bucket in their bucket definitions have a
     * status of CANCELLED, or the bucket didn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any jobs that previously ran.</p></li>
     * <li><p>UNKNOWN - An exception occurred when Amazon Macie attempted to retrieve
     * job data for the bucket.</p></li></ul>
     */
    inline const IsDefinedInJob& GetIsDefinedInJob() const{ return m_isDefinedInJob; }

    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * data in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for one
     * or more jobs and at least one of those jobs has a status other than CANCELLED.
     * Or the bucket matched the bucket criteria (S3BucketCriteriaForJob) for at least
     * one job that previously ran.</p></li> <li><p>FALSE - The bucket isn't explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for any jobs, all
     * the jobs that explicitly include the bucket in their bucket definitions have a
     * status of CANCELLED, or the bucket didn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any jobs that previously ran.</p></li>
     * <li><p>UNKNOWN - An exception occurred when Amazon Macie attempted to retrieve
     * job data for the bucket.</p></li></ul>
     */
    inline bool IsDefinedInJobHasBeenSet() const { return m_isDefinedInJobHasBeenSet; }

    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * data in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for one
     * or more jobs and at least one of those jobs has a status other than CANCELLED.
     * Or the bucket matched the bucket criteria (S3BucketCriteriaForJob) for at least
     * one job that previously ran.</p></li> <li><p>FALSE - The bucket isn't explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for any jobs, all
     * the jobs that explicitly include the bucket in their bucket definitions have a
     * status of CANCELLED, or the bucket didn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any jobs that previously ran.</p></li>
     * <li><p>UNKNOWN - An exception occurred when Amazon Macie attempted to retrieve
     * job data for the bucket.</p></li></ul>
     */
    inline void SetIsDefinedInJob(const IsDefinedInJob& value) { m_isDefinedInJobHasBeenSet = true; m_isDefinedInJob = value; }

    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * data in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for one
     * or more jobs and at least one of those jobs has a status other than CANCELLED.
     * Or the bucket matched the bucket criteria (S3BucketCriteriaForJob) for at least
     * one job that previously ran.</p></li> <li><p>FALSE - The bucket isn't explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for any jobs, all
     * the jobs that explicitly include the bucket in their bucket definitions have a
     * status of CANCELLED, or the bucket didn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any jobs that previously ran.</p></li>
     * <li><p>UNKNOWN - An exception occurred when Amazon Macie attempted to retrieve
     * job data for the bucket.</p></li></ul>
     */
    inline void SetIsDefinedInJob(IsDefinedInJob&& value) { m_isDefinedInJobHasBeenSet = true; m_isDefinedInJob = std::move(value); }

    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * data in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for one
     * or more jobs and at least one of those jobs has a status other than CANCELLED.
     * Or the bucket matched the bucket criteria (S3BucketCriteriaForJob) for at least
     * one job that previously ran.</p></li> <li><p>FALSE - The bucket isn't explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for any jobs, all
     * the jobs that explicitly include the bucket in their bucket definitions have a
     * status of CANCELLED, or the bucket didn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any jobs that previously ran.</p></li>
     * <li><p>UNKNOWN - An exception occurred when Amazon Macie attempted to retrieve
     * job data for the bucket.</p></li></ul>
     */
    inline JobDetails& WithIsDefinedInJob(const IsDefinedInJob& value) { SetIsDefinedInJob(value); return *this;}

    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * data in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for one
     * or more jobs and at least one of those jobs has a status other than CANCELLED.
     * Or the bucket matched the bucket criteria (S3BucketCriteriaForJob) for at least
     * one job that previously ran.</p></li> <li><p>FALSE - The bucket isn't explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for any jobs, all
     * the jobs that explicitly include the bucket in their bucket definitions have a
     * status of CANCELLED, or the bucket didn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any jobs that previously ran.</p></li>
     * <li><p>UNKNOWN - An exception occurred when Amazon Macie attempted to retrieve
     * job data for the bucket.</p></li></ul>
     */
    inline JobDetails& WithIsDefinedInJob(IsDefinedInJob&& value) { SetIsDefinedInJob(std::move(value)); return *this;}


    /**
     * <p>Specifies whether any recurring jobs are configured to analyze data in the
     * bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for one or more
     * recurring jobs or the bucket matches the bucket criteria
     * (S3BucketCriteriaForJob) for one or more recurring jobs. At least one of those
     * jobs has a status other than CANCELLED.</p></li> <li><p>FALSE - The bucket isn't
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for any
     * recurring jobs, the bucket doesn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any recurring jobs, or all the recurring jobs that
     * are configured to analyze data in the bucket have a status of
     * CANCELLED.</p></li> <li><p>UNKNOWN - An exception occurred when Amazon Macie
     * attempted to retrieve job data for the bucket.</p></li></ul>
     */
    inline const IsMonitoredByJob& GetIsMonitoredByJob() const{ return m_isMonitoredByJob; }

    /**
     * <p>Specifies whether any recurring jobs are configured to analyze data in the
     * bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for one or more
     * recurring jobs or the bucket matches the bucket criteria
     * (S3BucketCriteriaForJob) for one or more recurring jobs. At least one of those
     * jobs has a status other than CANCELLED.</p></li> <li><p>FALSE - The bucket isn't
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for any
     * recurring jobs, the bucket doesn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any recurring jobs, or all the recurring jobs that
     * are configured to analyze data in the bucket have a status of
     * CANCELLED.</p></li> <li><p>UNKNOWN - An exception occurred when Amazon Macie
     * attempted to retrieve job data for the bucket.</p></li></ul>
     */
    inline bool IsMonitoredByJobHasBeenSet() const { return m_isMonitoredByJobHasBeenSet; }

    /**
     * <p>Specifies whether any recurring jobs are configured to analyze data in the
     * bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for one or more
     * recurring jobs or the bucket matches the bucket criteria
     * (S3BucketCriteriaForJob) for one or more recurring jobs. At least one of those
     * jobs has a status other than CANCELLED.</p></li> <li><p>FALSE - The bucket isn't
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for any
     * recurring jobs, the bucket doesn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any recurring jobs, or all the recurring jobs that
     * are configured to analyze data in the bucket have a status of
     * CANCELLED.</p></li> <li><p>UNKNOWN - An exception occurred when Amazon Macie
     * attempted to retrieve job data for the bucket.</p></li></ul>
     */
    inline void SetIsMonitoredByJob(const IsMonitoredByJob& value) { m_isMonitoredByJobHasBeenSet = true; m_isMonitoredByJob = value; }

    /**
     * <p>Specifies whether any recurring jobs are configured to analyze data in the
     * bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for one or more
     * recurring jobs or the bucket matches the bucket criteria
     * (S3BucketCriteriaForJob) for one or more recurring jobs. At least one of those
     * jobs has a status other than CANCELLED.</p></li> <li><p>FALSE - The bucket isn't
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for any
     * recurring jobs, the bucket doesn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any recurring jobs, or all the recurring jobs that
     * are configured to analyze data in the bucket have a status of
     * CANCELLED.</p></li> <li><p>UNKNOWN - An exception occurred when Amazon Macie
     * attempted to retrieve job data for the bucket.</p></li></ul>
     */
    inline void SetIsMonitoredByJob(IsMonitoredByJob&& value) { m_isMonitoredByJobHasBeenSet = true; m_isMonitoredByJob = std::move(value); }

    /**
     * <p>Specifies whether any recurring jobs are configured to analyze data in the
     * bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for one or more
     * recurring jobs or the bucket matches the bucket criteria
     * (S3BucketCriteriaForJob) for one or more recurring jobs. At least one of those
     * jobs has a status other than CANCELLED.</p></li> <li><p>FALSE - The bucket isn't
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for any
     * recurring jobs, the bucket doesn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any recurring jobs, or all the recurring jobs that
     * are configured to analyze data in the bucket have a status of
     * CANCELLED.</p></li> <li><p>UNKNOWN - An exception occurred when Amazon Macie
     * attempted to retrieve job data for the bucket.</p></li></ul>
     */
    inline JobDetails& WithIsMonitoredByJob(const IsMonitoredByJob& value) { SetIsMonitoredByJob(value); return *this;}

    /**
     * <p>Specifies whether any recurring jobs are configured to analyze data in the
     * bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is explicitly
     * included in the bucket definition (S3BucketDefinitionForJob) for one or more
     * recurring jobs or the bucket matches the bucket criteria
     * (S3BucketCriteriaForJob) for one or more recurring jobs. At least one of those
     * jobs has a status other than CANCELLED.</p></li> <li><p>FALSE - The bucket isn't
     * explicitly included in the bucket definition (S3BucketDefinitionForJob) for any
     * recurring jobs, the bucket doesn't match the bucket criteria
     * (S3BucketCriteriaForJob) for any recurring jobs, or all the recurring jobs that
     * are configured to analyze data in the bucket have a status of
     * CANCELLED.</p></li> <li><p>UNKNOWN - An exception occurred when Amazon Macie
     * attempted to retrieve job data for the bucket.</p></li></ul>
     */
    inline JobDetails& WithIsMonitoredByJob(IsMonitoredByJob&& value) { SetIsMonitoredByJob(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline const Aws::String& GetLastJobId() const{ return m_lastJobId; }

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline bool LastJobIdHasBeenSet() const { return m_lastJobIdHasBeenSet; }

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline void SetLastJobId(const Aws::String& value) { m_lastJobIdHasBeenSet = true; m_lastJobId = value; }

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline void SetLastJobId(Aws::String&& value) { m_lastJobIdHasBeenSet = true; m_lastJobId = std::move(value); }

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline void SetLastJobId(const char* value) { m_lastJobIdHasBeenSet = true; m_lastJobId.assign(value); }

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline JobDetails& WithLastJobId(const Aws::String& value) { SetLastJobId(value); return *this;}

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline JobDetails& WithLastJobId(Aws::String&& value) { SetLastJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze data in the bucket, either the latest run of a recurring job or the only
     * run of a one-time job.</p> <p>This value is typically null if the value for the
     * isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline JobDetails& WithLastJobId(const char* value) { SetLastJobId(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline const Aws::Utils::DateTime& GetLastJobRunTime() const{ return m_lastJobRunTime; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline bool LastJobRunTimeHasBeenSet() const { return m_lastJobRunTimeHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline void SetLastJobRunTime(const Aws::Utils::DateTime& value) { m_lastJobRunTimeHasBeenSet = true; m_lastJobRunTime = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline void SetLastJobRunTime(Aws::Utils::DateTime&& value) { m_lastJobRunTimeHasBeenSet = true; m_lastJobRunTime = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline JobDetails& WithLastJobRunTime(const Aws::Utils::DateTime& value) { SetLastJobRunTime(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline JobDetails& WithLastJobRunTime(Aws::Utils::DateTime&& value) { SetLastJobRunTime(std::move(value)); return *this;}

  private:

    IsDefinedInJob m_isDefinedInJob;
    bool m_isDefinedInJobHasBeenSet = false;

    IsMonitoredByJob m_isMonitoredByJob;
    bool m_isMonitoredByJobHasBeenSet = false;

    Aws::String m_lastJobId;
    bool m_lastJobIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastJobRunTime;
    bool m_lastJobRunTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
