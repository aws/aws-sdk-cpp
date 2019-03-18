/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DominantLanguageDetectionJobFilter">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API DominantLanguageDetectionJobFilter
  {
  public:
    DominantLanguageDetectionJobFilter();
    DominantLanguageDetectionJobFilter(Aws::Utils::Json::JsonView jsonValue);
    DominantLanguageDetectionJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters on the name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Filters on the name of the job.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Filters the list of jobs based on job status. Returns only jobs with the
     * specified status.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const{ return m_submitTimeBefore; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline void SetSubmitTimeBefore(const Aws::Utils::DateTime& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = value; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline void SetSubmitTimeBefore(Aws::Utils::DateTime&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::move(value); }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithSubmitTimeBefore(const Aws::Utils::DateTime& value) { SetSubmitTimeBefore(value); return *this;}

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted before the specified time. Jobs are
     * returned in ascending order, oldest to newest.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithSubmitTimeBefore(Aws::Utils::DateTime&& value) { SetSubmitTimeBefore(std::move(value)); return *this;}


    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const{ return m_submitTimeAfter; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmitTimeAfter(const Aws::Utils::DateTime& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = value; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmitTimeAfter(Aws::Utils::DateTime&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::move(value); }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithSubmitTimeAfter(const Aws::Utils::DateTime& value) { SetSubmitTimeAfter(value); return *this;}

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing. Returns only jobs submitted after the specified time. Jobs are
     * returned in descending order, newest to oldest.</p>
     */
    inline DominantLanguageDetectionJobFilter& WithSubmitTimeAfter(Aws::Utils::DateTime&& value) { SetSubmitTimeAfter(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet;

    Aws::Utils::DateTime m_submitTimeBefore;
    bool m_submitTimeBeforeHasBeenSet;

    Aws::Utils::DateTime m_submitTimeAfter;
    bool m_submitTimeAfterHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
