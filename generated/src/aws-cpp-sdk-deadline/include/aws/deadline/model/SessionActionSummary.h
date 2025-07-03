/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/SessionActionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/SessionActionDefinitionSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/TaskRunManifestPropertiesResponse.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a session action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/SessionActionSummary">AWS
   * API Reference</a></p>
   */
  class SessionActionSummary
  {
  public:
    AWS_DEADLINE_API SessionActionSummary() = default;
    AWS_DEADLINE_API SessionActionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API SessionActionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The session action ID.</p>
     */
    inline const Aws::String& GetSessionActionId() const { return m_sessionActionId; }
    inline bool SessionActionIdHasBeenSet() const { return m_sessionActionIdHasBeenSet; }
    template<typename SessionActionIdT = Aws::String>
    void SetSessionActionId(SessionActionIdT&& value) { m_sessionActionIdHasBeenSet = true; m_sessionActionId = std::forward<SessionActionIdT>(value); }
    template<typename SessionActionIdT = Aws::String>
    SessionActionSummary& WithSessionActionId(SessionActionIdT&& value) { SetSessionActionId(std::forward<SessionActionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session action.</p>
     */
    inline SessionActionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SessionActionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SessionActionSummary& WithStatus(SessionActionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource started running.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    SessionActionSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource ended running.</p>
     */
    inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
    inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
    template<typename EndedAtT = Aws::Utils::DateTime>
    void SetEndedAt(EndedAtT&& value) { m_endedAtHasBeenSet = true; m_endedAt = std::forward<EndedAtT>(value); }
    template<typename EndedAtT = Aws::Utils::DateTime>
    SessionActionSummary& WithEndedAt(EndedAtT&& value) { SetEndedAt(std::forward<EndedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Linux timestamp of the last date and time that the session action was
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetWorkerUpdatedAt() const { return m_workerUpdatedAt; }
    inline bool WorkerUpdatedAtHasBeenSet() const { return m_workerUpdatedAtHasBeenSet; }
    template<typename WorkerUpdatedAtT = Aws::Utils::DateTime>
    void SetWorkerUpdatedAt(WorkerUpdatedAtT&& value) { m_workerUpdatedAtHasBeenSet = true; m_workerUpdatedAt = std::forward<WorkerUpdatedAtT>(value); }
    template<typename WorkerUpdatedAtT = Aws::Utils::DateTime>
    SessionActionSummary& WithWorkerUpdatedAt(WorkerUpdatedAtT&& value) { SetWorkerUpdatedAt(std::forward<WorkerUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion percentage for the session action.</p>
     */
    inline double GetProgressPercent() const { return m_progressPercent; }
    inline bool ProgressPercentHasBeenSet() const { return m_progressPercentHasBeenSet; }
    inline void SetProgressPercent(double value) { m_progressPercentHasBeenSet = true; m_progressPercent = value; }
    inline SessionActionSummary& WithProgressPercent(double value) { SetProgressPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session action definition.</p>
     */
    inline const SessionActionDefinitionSummary& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = SessionActionDefinitionSummary>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = SessionActionDefinitionSummary>
    SessionActionSummary& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of manifest properties that describe file attachments for the task
     * run.</p>
     */
    inline const Aws::Vector<TaskRunManifestPropertiesResponse>& GetManifests() const { return m_manifests; }
    inline bool ManifestsHasBeenSet() const { return m_manifestsHasBeenSet; }
    template<typename ManifestsT = Aws::Vector<TaskRunManifestPropertiesResponse>>
    void SetManifests(ManifestsT&& value) { m_manifestsHasBeenSet = true; m_manifests = std::forward<ManifestsT>(value); }
    template<typename ManifestsT = Aws::Vector<TaskRunManifestPropertiesResponse>>
    SessionActionSummary& WithManifests(ManifestsT&& value) { SetManifests(std::forward<ManifestsT>(value)); return *this;}
    template<typename ManifestsT = TaskRunManifestPropertiesResponse>
    SessionActionSummary& AddManifests(ManifestsT&& value) { m_manifestsHasBeenSet = true; m_manifests.emplace_back(std::forward<ManifestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sessionActionId;
    bool m_sessionActionIdHasBeenSet = false;

    SessionActionStatus m_status{SessionActionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_endedAt{};
    bool m_endedAtHasBeenSet = false;

    Aws::Utils::DateTime m_workerUpdatedAt{};
    bool m_workerUpdatedAtHasBeenSet = false;

    double m_progressPercent{0.0};
    bool m_progressPercentHasBeenSet = false;

    SessionActionDefinitionSummary m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Vector<TaskRunManifestPropertiesResponse> m_manifests;
    bool m_manifestsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
