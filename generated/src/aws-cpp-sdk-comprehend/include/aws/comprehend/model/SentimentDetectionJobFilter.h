/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/JobStatus.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Provides information for filtering a list of dominant language detection
   * jobs. For more information, see the operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/SentimentDetectionJobFilter">AWS
   * API Reference</a></p>
   */
  class SentimentDetectionJobFilter
  {
  public:
    AWS_COMPREHEND_API SentimentDetectionJobFilter() = default;
    AWS_COMPREHEND_API SentimentDetectionJobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API SentimentDetectionJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters on the name of the job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    SentimentDetectionJobFilter& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline SentimentDetectionJobFilter& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const { return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    void SetSubmitTimeBefore(SubmitTimeBeforeT&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::forward<SubmitTimeBeforeT>(value); }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    SentimentDetectionJobFilter& WithSubmitTimeBefore(SubmitTimeBeforeT&& value) { SetSubmitTimeBefore(std::forward<SubmitTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const { return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    void SetSubmitTimeAfter(SubmitTimeAfterT&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::forward<SubmitTimeAfterT>(value); }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    SentimentDetectionJobFilter& WithSubmitTimeAfter(SubmitTimeAfterT&& value) { SetSubmitTimeAfter(std::forward<SubmitTimeAfterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore{};
    bool m_submitTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeAfter{};
    bool m_submitTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
