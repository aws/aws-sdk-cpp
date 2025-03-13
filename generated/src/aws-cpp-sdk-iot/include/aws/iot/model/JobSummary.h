/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TargetSelection.h>
#include <aws/iot/model/JobStatus.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The job summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/JobSummary">AWS API
   * Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_IOT_API JobSummary() = default;
    AWS_IOT_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job ARN.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    JobSummary& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier you assigned to this job when it was created.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    JobSummary& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the thing group.</p>
     */
    inline const Aws::String& GetThingGroupId() const { return m_thingGroupId; }
    inline bool ThingGroupIdHasBeenSet() const { return m_thingGroupIdHasBeenSet; }
    template<typename ThingGroupIdT = Aws::String>
    void SetThingGroupId(ThingGroupIdT&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::forward<ThingGroupIdT>(value); }
    template<typename ThingGroupIdT = Aws::String>
    JobSummary& WithThingGroupId(ThingGroupIdT&& value) { SetThingGroupId(std::forward<ThingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the job will continue to run (CONTINUOUS), or will be
     * complete after all those things specified as targets have completed the job
     * (SNAPSHOT). If continuous, the job may also be run on a thing when a change is
     * detected in a target. For example, a job will run on a thing when the thing is
     * added to a target group, even after the job was completed by all things
     * originally in the group.</p>  <p>We recommend that you use continuous jobs
     * instead of snapshot jobs for dynamic thing group targets. By using continuous
     * jobs, devices that join the group receive the job execution even after the job
     * has been created.</p> 
     */
    inline TargetSelection GetTargetSelection() const { return m_targetSelection; }
    inline bool TargetSelectionHasBeenSet() const { return m_targetSelectionHasBeenSet; }
    inline void SetTargetSelection(TargetSelection value) { m_targetSelectionHasBeenSet = true; m_targetSelection = value; }
    inline JobSummary& WithTargetSelection(TargetSelection value) { SetTargetSelection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job summary status.</p>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobSummary& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    JobSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    JobSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds since the epoch, when the job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    JobSummary& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a job is concurrent. Will be true when a job is rolling out
     * new job executions or canceling previously created executions, otherwise
     * false.</p>
     */
    inline bool GetIsConcurrent() const { return m_isConcurrent; }
    inline bool IsConcurrentHasBeenSet() const { return m_isConcurrentHasBeenSet; }
    inline void SetIsConcurrent(bool value) { m_isConcurrentHasBeenSet = true; m_isConcurrent = value; }
    inline JobSummary& WithIsConcurrent(bool value) { SetIsConcurrent(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_thingGroupId;
    bool m_thingGroupIdHasBeenSet = false;

    TargetSelection m_targetSelection{TargetSelection::NOT_SET};
    bool m_targetSelectionHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    bool m_isConcurrent{false};
    bool m_isConcurrentHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
