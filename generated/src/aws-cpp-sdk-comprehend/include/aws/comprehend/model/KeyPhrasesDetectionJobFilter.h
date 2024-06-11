﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/KeyPhrasesDetectionJobFilter">AWS
   * API Reference</a></p>
   */
  class KeyPhrasesDetectionJobFilter
  {
  public:
    AWS_COMPREHEND_API KeyPhrasesDetectionJobFilter();
    AWS_COMPREHEND_API KeyPhrasesDetectionJobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API KeyPhrasesDetectionJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters on the name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline KeyPhrasesDetectionJobFilter& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline KeyPhrasesDetectionJobFilter& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline KeyPhrasesDetectionJobFilter& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline KeyPhrasesDetectionJobFilter& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline KeyPhrasesDetectionJobFilter& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const{ return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    inline void SetSubmitTimeBefore(const Aws::Utils::DateTime& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = value; }
    inline void SetSubmitTimeBefore(Aws::Utils::DateTime&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::move(value); }
    inline KeyPhrasesDetectionJobFilter& WithSubmitTimeBefore(const Aws::Utils::DateTime& value) { SetSubmitTimeBefore(value); return *this;}
    inline KeyPhrasesDetectionJobFilter& WithSubmitTimeBefore(Aws::Utils::DateTime&& value) { SetSubmitTimeBefore(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const{ return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    inline void SetSubmitTimeAfter(const Aws::Utils::DateTime& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = value; }
    inline void SetSubmitTimeAfter(Aws::Utils::DateTime&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::move(value); }
    inline KeyPhrasesDetectionJobFilter& WithSubmitTimeAfter(const Aws::Utils::DateTime& value) { SetSubmitTimeAfter(value); return *this;}
    inline KeyPhrasesDetectionJobFilter& WithSubmitTimeAfter(Aws::Utils::DateTime&& value) { SetSubmitTimeAfter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore;
    bool m_submitTimeBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeAfter;
    bool m_submitTimeAfterHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
