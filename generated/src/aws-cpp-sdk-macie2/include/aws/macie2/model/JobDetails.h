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
   * configured to analyze objects in an S3 bucket, and, if so, the details of the
   * job that ran most recently.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/JobDetails">AWS
   * API Reference</a></p>
   */
  class JobDetails
  {
  public:
    AWS_MACIE2_API JobDetails() = default;
    AWS_MACIE2_API JobDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API JobDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether any one-time or recurring jobs are configured to analyze
     * objects in the bucket. Possible values are:</p> <ul><li><p>TRUE - The bucket is
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
    inline IsDefinedInJob GetIsDefinedInJob() const { return m_isDefinedInJob; }
    inline bool IsDefinedInJobHasBeenSet() const { return m_isDefinedInJobHasBeenSet; }
    inline void SetIsDefinedInJob(IsDefinedInJob value) { m_isDefinedInJobHasBeenSet = true; m_isDefinedInJob = value; }
    inline JobDetails& WithIsDefinedInJob(IsDefinedInJob value) { SetIsDefinedInJob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether any recurring jobs are configured to analyze objects in the
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
    inline IsMonitoredByJob GetIsMonitoredByJob() const { return m_isMonitoredByJob; }
    inline bool IsMonitoredByJobHasBeenSet() const { return m_isMonitoredByJobHasBeenSet; }
    inline void SetIsMonitoredByJob(IsMonitoredByJob value) { m_isMonitoredByJobHasBeenSet = true; m_isMonitoredByJob = value; }
    inline JobDetails& WithIsMonitoredByJob(IsMonitoredByJob value) { SetIsMonitoredByJob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the job that ran most recently and is configured to
     * analyze objects in the bucket, either the latest run of a recurring job or the
     * only run of a one-time job.</p> <p>This value is typically null if the value for
     * the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline const Aws::String& GetLastJobId() const { return m_lastJobId; }
    inline bool LastJobIdHasBeenSet() const { return m_lastJobIdHasBeenSet; }
    template<typename LastJobIdT = Aws::String>
    void SetLastJobId(LastJobIdT&& value) { m_lastJobIdHasBeenSet = true; m_lastJobId = std::forward<LastJobIdT>(value); }
    template<typename LastJobIdT = Aws::String>
    JobDetails& WithLastJobId(LastJobIdT&& value) { SetLastJobId(std::forward<LastJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the job
     * (lastJobId) started. If the job is a recurring job, this value indicates when
     * the most recent run started.</p> <p>This value is typically null if the value
     * for the isDefinedInJob property is FALSE or UNKNOWN.</p>
     */
    inline const Aws::Utils::DateTime& GetLastJobRunTime() const { return m_lastJobRunTime; }
    inline bool LastJobRunTimeHasBeenSet() const { return m_lastJobRunTimeHasBeenSet; }
    template<typename LastJobRunTimeT = Aws::Utils::DateTime>
    void SetLastJobRunTime(LastJobRunTimeT&& value) { m_lastJobRunTimeHasBeenSet = true; m_lastJobRunTime = std::forward<LastJobRunTimeT>(value); }
    template<typename LastJobRunTimeT = Aws::Utils::DateTime>
    JobDetails& WithLastJobRunTime(LastJobRunTimeT&& value) { SetLastJobRunTime(std::forward<LastJobRunTimeT>(value)); return *this;}
    ///@}
  private:

    IsDefinedInJob m_isDefinedInJob{IsDefinedInJob::NOT_SET};
    bool m_isDefinedInJobHasBeenSet = false;

    IsMonitoredByJob m_isMonitoredByJob{IsMonitoredByJob::NOT_SET};
    bool m_isMonitoredByJobHasBeenSet = false;

    Aws::String m_lastJobId;
    bool m_lastJobIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastJobRunTime{};
    bool m_lastJobRunTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
