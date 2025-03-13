/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ExecutionTrigger.h>
#include <aws/codepipeline/model/StopExecutionTrigger.h>
#include <aws/codepipeline/model/ExecutionMode.h>
#include <aws/codepipeline/model/ExecutionType.h>
#include <aws/codepipeline/model/PipelineRollbackMetadata.h>
#include <aws/codepipeline/model/SourceRevision.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Summary information about a pipeline execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineExecutionSummary">AWS
   * API Reference</a></p>
   */
  class PipelineExecutionSummary
  {
  public:
    AWS_CODEPIPELINE_API PipelineExecutionSummary() = default;
    AWS_CODEPIPELINE_API PipelineExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    PipelineExecutionSummary& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Stopped: The pipeline
     * execution was manually stopped. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts.html#concepts-executions-stopped">Stopped
     * Executions</a>.</p> </li> <li> <p>Stopping: The pipeline execution received a
     * request to be manually stopped. Depending on the selected stop mode, the
     * execution is either completing or abandoning in-progress actions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts.html#concepts-executions-stopped">Stopped
     * Executions</a>.</p> </li> <li> <p>Succeeded: The pipeline execution was
     * completed successfully. </p> </li> <li> <p>Superseded: While this pipeline
     * execution was waiting for the next stage to be completed, a newer pipeline
     * execution advanced and continued through the pipeline instead. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/concepts.html#concepts-superseded">Superseded
     * Executions</a>.</p> </li> <li> <p>Failed: The pipeline execution was not
     * completed successfully.</p> </li> </ul>
     */
    inline PipelineExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(PipelineExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PipelineExecutionSummary& WithStatus(PipelineExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status summary for the pipeline.</p>
     */
    inline const Aws::String& GetStatusSummary() const { return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    template<typename StatusSummaryT = Aws::String>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = Aws::String>
    PipelineExecutionSummary& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    PipelineExecutionSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    PipelineExecutionSummary& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SourceRevision>& GetSourceRevisions() const { return m_sourceRevisions; }
    inline bool SourceRevisionsHasBeenSet() const { return m_sourceRevisionsHasBeenSet; }
    template<typename SourceRevisionsT = Aws::Vector<SourceRevision>>
    void SetSourceRevisions(SourceRevisionsT&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions = std::forward<SourceRevisionsT>(value); }
    template<typename SourceRevisionsT = Aws::Vector<SourceRevision>>
    PipelineExecutionSummary& WithSourceRevisions(SourceRevisionsT&& value) { SetSourceRevisions(std::forward<SourceRevisionsT>(value)); return *this;}
    template<typename SourceRevisionsT = SourceRevision>
    PipelineExecutionSummary& AddSourceRevisions(SourceRevisionsT&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions.emplace_back(std::forward<SourceRevisionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The interaction or event that started a pipeline execution, such as automated
     * change detection or a <code>StartPipelineExecution</code> API call.</p>
     */
    inline const ExecutionTrigger& GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    template<typename TriggerT = ExecutionTrigger>
    void SetTrigger(TriggerT&& value) { m_triggerHasBeenSet = true; m_trigger = std::forward<TriggerT>(value); }
    template<typename TriggerT = ExecutionTrigger>
    PipelineExecutionSummary& WithTrigger(TriggerT&& value) { SetTrigger(std::forward<TriggerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interaction that stopped a pipeline execution.</p>
     */
    inline const StopExecutionTrigger& GetStopTrigger() const { return m_stopTrigger; }
    inline bool StopTriggerHasBeenSet() const { return m_stopTriggerHasBeenSet; }
    template<typename StopTriggerT = StopExecutionTrigger>
    void SetStopTrigger(StopTriggerT&& value) { m_stopTriggerHasBeenSet = true; m_stopTrigger = std::forward<StopTriggerT>(value); }
    template<typename StopTriggerT = StopExecutionTrigger>
    PipelineExecutionSummary& WithStopTrigger(StopTriggerT&& value) { SetStopTrigger(std::forward<StopTriggerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline ExecutionMode GetExecutionMode() const { return m_executionMode; }
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }
    inline void SetExecutionMode(ExecutionMode value) { m_executionModeHasBeenSet = true; m_executionMode = value; }
    inline PipelineExecutionSummary& WithExecutionMode(ExecutionMode value) { SetExecutionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the pipeline execution.</p>
     */
    inline ExecutionType GetExecutionType() const { return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    inline void SetExecutionType(ExecutionType value) { m_executionTypeHasBeenSet = true; m_executionType = value; }
    inline PipelineExecutionSummary& WithExecutionType(ExecutionType value) { SetExecutionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the stage execution to be rolled back.</p>
     */
    inline const PipelineRollbackMetadata& GetRollbackMetadata() const { return m_rollbackMetadata; }
    inline bool RollbackMetadataHasBeenSet() const { return m_rollbackMetadataHasBeenSet; }
    template<typename RollbackMetadataT = PipelineRollbackMetadata>
    void SetRollbackMetadata(RollbackMetadataT&& value) { m_rollbackMetadataHasBeenSet = true; m_rollbackMetadata = std::forward<RollbackMetadataT>(value); }
    template<typename RollbackMetadataT = PipelineRollbackMetadata>
    PipelineExecutionSummary& WithRollbackMetadata(RollbackMetadataT&& value) { SetRollbackMetadata(std::forward<RollbackMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    PipelineExecutionStatus m_status{PipelineExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::Vector<SourceRevision> m_sourceRevisions;
    bool m_sourceRevisionsHasBeenSet = false;

    ExecutionTrigger m_trigger;
    bool m_triggerHasBeenSet = false;

    StopExecutionTrigger m_stopTrigger;
    bool m_stopTriggerHasBeenSet = false;

    ExecutionMode m_executionMode{ExecutionMode::NOT_SET};
    bool m_executionModeHasBeenSet = false;

    ExecutionType m_executionType{ExecutionType::NOT_SET};
    bool m_executionTypeHasBeenSet = false;

    PipelineRollbackMetadata m_rollbackMetadata;
    bool m_rollbackMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
