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
    AWS_GLUE_API JobBookmarkEntry() = default;
    AWS_GLUE_API JobBookmarkEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API JobBookmarkEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the job in question.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    JobBookmarkEntry& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the job.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline JobBookmarkEntry& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run ID number.</p>
     */
    inline int GetRun() const { return m_run; }
    inline bool RunHasBeenSet() const { return m_runHasBeenSet; }
    inline void SetRun(int value) { m_runHasBeenSet = true; m_run = value; }
    inline JobBookmarkEntry& WithRun(int value) { SetRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attempt ID number.</p>
     */
    inline int GetAttempt() const { return m_attempt; }
    inline bool AttemptHasBeenSet() const { return m_attemptHasBeenSet; }
    inline void SetAttempt(int value) { m_attemptHasBeenSet = true; m_attempt = value; }
    inline JobBookmarkEntry& WithAttempt(int value) { SetAttempt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique run identifier associated with the previous job run.</p>
     */
    inline const Aws::String& GetPreviousRunId() const { return m_previousRunId; }
    inline bool PreviousRunIdHasBeenSet() const { return m_previousRunIdHasBeenSet; }
    template<typename PreviousRunIdT = Aws::String>
    void SetPreviousRunId(PreviousRunIdT&& value) { m_previousRunIdHasBeenSet = true; m_previousRunId = std::forward<PreviousRunIdT>(value); }
    template<typename PreviousRunIdT = Aws::String>
    JobBookmarkEntry& WithPreviousRunId(PreviousRunIdT&& value) { SetPreviousRunId(std::forward<PreviousRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run ID number.</p>
     */
    inline const Aws::String& GetRunId() const { return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    template<typename RunIdT = Aws::String>
    void SetRunId(RunIdT&& value) { m_runIdHasBeenSet = true; m_runId = std::forward<RunIdT>(value); }
    template<typename RunIdT = Aws::String>
    JobBookmarkEntry& WithRunId(RunIdT&& value) { SetRunId(std::forward<RunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bookmark itself.</p>
     */
    inline const Aws::String& GetJobBookmark() const { return m_jobBookmark; }
    inline bool JobBookmarkHasBeenSet() const { return m_jobBookmarkHasBeenSet; }
    template<typename JobBookmarkT = Aws::String>
    void SetJobBookmark(JobBookmarkT&& value) { m_jobBookmarkHasBeenSet = true; m_jobBookmark = std::forward<JobBookmarkT>(value); }
    template<typename JobBookmarkT = Aws::String>
    JobBookmarkEntry& WithJobBookmark(JobBookmarkT&& value) { SetJobBookmark(std::forward<JobBookmarkT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;

    int m_run{0};
    bool m_runHasBeenSet = false;

    int m_attempt{0};
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
