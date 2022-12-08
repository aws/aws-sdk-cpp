/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/JobStatus.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Provides information for filtering a list of translation jobs. For more
   * information, see <a>ListTextTranslationJobs</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/TextTranslationJobFilter">AWS
   * API Reference</a></p>
   */
  class TextTranslationJobFilter
  {
  public:
    AWS_TRANSLATE_API TextTranslationJobFilter();
    AWS_TRANSLATE_API TextTranslationJobFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API TextTranslationJobFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline TextTranslationJobFilter& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline TextTranslationJobFilter& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Filters the list of jobs by name.</p>
     */
    inline TextTranslationJobFilter& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline TextTranslationJobFilter& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Filters the list of jobs based by job status.</p>
     */
    inline TextTranslationJobFilter& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedBeforeTime() const{ return m_submittedBeforeTime; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline bool SubmittedBeforeTimeHasBeenSet() const { return m_submittedBeforeTimeHasBeenSet; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline void SetSubmittedBeforeTime(const Aws::Utils::DateTime& value) { m_submittedBeforeTimeHasBeenSet = true; m_submittedBeforeTime = value; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline void SetSubmittedBeforeTime(Aws::Utils::DateTime&& value) { m_submittedBeforeTimeHasBeenSet = true; m_submittedBeforeTime = std::move(value); }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline TextTranslationJobFilter& WithSubmittedBeforeTime(const Aws::Utils::DateTime& value) { SetSubmittedBeforeTime(value); return *this;}

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted before the specified time. Jobs
     * are returned in ascending order, oldest to newest.</p>
     */
    inline TextTranslationJobFilter& WithSubmittedBeforeTime(Aws::Utils::DateTime&& value) { SetSubmittedBeforeTime(std::move(value)); return *this;}


    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAfterTime() const{ return m_submittedAfterTime; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline bool SubmittedAfterTimeHasBeenSet() const { return m_submittedAfterTimeHasBeenSet; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmittedAfterTime(const Aws::Utils::DateTime& value) { m_submittedAfterTimeHasBeenSet = true; m_submittedAfterTime = value; }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline void SetSubmittedAfterTime(Aws::Utils::DateTime&& value) { m_submittedAfterTimeHasBeenSet = true; m_submittedAfterTime = std::move(value); }

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline TextTranslationJobFilter& WithSubmittedAfterTime(const Aws::Utils::DateTime& value) { SetSubmittedAfterTime(value); return *this;}

    /**
     * <p>Filters the list of jobs based on the time that the job was submitted for
     * processing and returns only the jobs submitted after the specified time. Jobs
     * are returned in descending order, newest to oldest.</p>
     */
    inline TextTranslationJobFilter& WithSubmittedAfterTime(Aws::Utils::DateTime&& value) { SetSubmittedAfterTime(std::move(value)); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submittedBeforeTime;
    bool m_submittedBeforeTimeHasBeenSet = false;

    Aws::Utils::DateTime m_submittedAfterTime;
    bool m_submittedAfterTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
