/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a point that a job can resume processing.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/JobBookmarkEntry">AWS
   * API Reference</a></p>
   */
  class JobBookmarkEntry
  {
  public:
    AWS_GLUE_API JobBookmarkEntry();
    AWS_GLUE_API JobBookmarkEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobBookmarkEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the job in question.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job in question.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job in question.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job in question.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job in question.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job in question.</p>
     */
    inline JobBookmarkEntry& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job in question.</p>
     */
    inline JobBookmarkEntry& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job in question.</p>
     */
    inline JobBookmarkEntry& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The version of the job.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version of the job.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the job.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the job.</p>
     */
    inline JobBookmarkEntry& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The run ID number.</p>
     */
    inline int GetRun() const{ return m_run; }

    /**
     * <p>The run ID number.</p>
     */
    inline bool RunHasBeenSet() const { return m_runHasBeenSet; }

    /**
     * <p>The run ID number.</p>
     */
    inline void SetRun(int value) { m_runHasBeenSet = true; m_run = value; }

    /**
     * <p>The run ID number.</p>
     */
    inline JobBookmarkEntry& WithRun(int value) { SetRun(value); return *this;}


    /**
     * <p>The attempt ID number.</p>
     */
    inline int GetAttempt() const{ return m_attempt; }

    /**
     * <p>The attempt ID number.</p>
     */
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }

    /**
     * <p>The attempt ID number.</p>
     */
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }

    /**
     * <p>The attempt ID number.</p>
     */
    inline JobBookmarkEntry& WithAttempt(int value) { SetAttempt(value); return *this;}


    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline const Aws::String& GetPreviousRunId() const{ return m_previousRunId; }

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline bool PreviousRunIdHasBeenSet() const { return m_previousRunIdHasBeenSet; }

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline void SetPreviousRunId(const Aws::String& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = value; }

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline void SetPreviousRunId(Aws::String&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::move(value); }

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline void SetPreviousRunId(const char* value) { m_previousRunIdHasBeenSet = true; m_previousRunId.assign(value); }

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline JobBookmarkEntry& WithPreviousRunId(const Aws::String& value) { SetPreviousRunId(value); return *this;}

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline JobBookmarkEntry& WithPreviousRunId(Aws::String&& value) { SetPreviousRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline JobBookmarkEntry& WithPreviousRunId(const char* value) { SetPreviousRunId(value); return *this;}


    /**
     * <p>The run ID number.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The run ID number.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The run ID number.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The run ID number.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The run ID number.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The run ID number.</p>
     */
    inline JobBookmarkEntry& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The run ID number.</p>
     */
    inline JobBookmarkEntry& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The run ID number.</p>
     */
    inline JobBookmarkEntry& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The bookmark itself.</p>
     */
    inline const Aws::String& GetJobBookmark() const{ return m_jobBookmark; }

    /**
     * <p>The bookmark itself.</p>
     */
    inline bool JobBookmarkHasBeenSet() const { return m_jobBookmarkHasBeenSet; }

    /**
     * <p>The bookmark itself.</p>
     */
    inline void SetJobBookmark(const Aws::String& value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark = value; }

    /**
     * <p>The bookmark itself.</p>
     */
    inline void SetJobBookmark(Aws::String&& value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark = std::move(value); }

    /**
     * <p>The bookmark itself.</p>
     */
    inline void SetJobBookmark(const char* value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark.assign(value); }

    /**
     * <p>The bookmark itself.</p>
     */
    inline JobBookmarkEntry& WithJobBookmark(const Aws::String& value) { SetJobBookmark(value); return *this;}

    /**
     * <p>The bookmark itself.</p>
     */
    inline JobBookmarkEntry& WithJobBookmark(Aws::String&& value) { SetJobBookmark(std::move(value)); return *this;}

    /**
     * <p>The bookmark itself.</p>
     */
    inline JobBookmarkEntry& WithJobBookmark(const char* value) { SetJobBookmark(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    int m_run;
    bool m_runHasBeenSet = false;

    int m_attempt;
    bool m_attemptHasBeenSet = false;

    Aws::String m_previousRunId;
    bool m_previousRunIdHasBeenSet = false;

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_jobBookmark;
    bool m_jobBookmarkHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
