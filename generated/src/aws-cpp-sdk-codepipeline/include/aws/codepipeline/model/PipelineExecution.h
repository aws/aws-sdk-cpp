/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ExecutionTrigger.h>
#include <aws/codepipeline/model/ExecutionMode.h>
#include <aws/codepipeline/model/ExecutionType.h>
#include <aws/codepipeline/model/PipelineRollbackMetadata.h>
#include <aws/codepipeline/model/ArtifactRevision.h>
#include <aws/codepipeline/model/ResolvedPipelineVariable.h>
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
   * <p>Represents information about an execution of a pipeline.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineExecution">AWS
   * API Reference</a></p>
   */
  class PipelineExecution
  {
  public:
    AWS_CODEPIPELINE_API PipelineExecution() = default;
    AWS_CODEPIPELINE_API PipelineExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    PipelineExecution& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline with the specified pipeline execution.</p>
     */
    inline int GetPipelineVersion() const { return m_pipelineVersion; }
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }
    inline PipelineExecution& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    PipelineExecution& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>Cancelled: The
     * pipeline’s definition was updated before the pipeline execution could be
     * completed.</p> </li> <li> <p>InProgress: The pipeline execution is currently
     * running.</p> </li> <li> <p>Stopped: The pipeline execution was manually stopped.
     * For more information, see <a
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
    inline PipelineExecution& WithStatus(PipelineExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline const Aws::String& GetStatusSummary() const { return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    template<typename StatusSummaryT = Aws::String>
    void SetStatusSummary(StatusSummaryT&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::forward<StatusSummaryT>(value); }
    template<typename StatusSummaryT = Aws::String>
    PipelineExecution& WithStatusSummary(StatusSummaryT&& value) { SetStatusSummary(std::forward<StatusSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactRevision>& GetArtifactRevisions() const { return m_artifactRevisions; }
    inline bool ArtifactRevisionsHasBeenSet() const { return m_artifactRevisionsHasBeenSet; }
    template<typename ArtifactRevisionsT = Aws::Vector<ArtifactRevision>>
    void SetArtifactRevisions(ArtifactRevisionsT&& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions = std::forward<ArtifactRevisionsT>(value); }
    template<typename ArtifactRevisionsT = Aws::Vector<ArtifactRevision>>
    PipelineExecution& WithArtifactRevisions(ArtifactRevisionsT&& value) { SetArtifactRevisions(std::forward<ArtifactRevisionsT>(value)); return *this;}
    template<typename ArtifactRevisionsT = ArtifactRevision>
    PipelineExecution& AddArtifactRevisions(ArtifactRevisionsT&& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions.emplace_back(std::forward<ArtifactRevisionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of pipeline variables used for the pipeline execution.</p>
     */
    inline const Aws::Vector<ResolvedPipelineVariable>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Vector<ResolvedPipelineVariable>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Vector<ResolvedPipelineVariable>>
    PipelineExecution& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesT = ResolvedPipelineVariable>
    PipelineExecution& AddVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables.emplace_back(std::forward<VariablesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ExecutionTrigger& GetTrigger() const { return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    template<typename TriggerT = ExecutionTrigger>
    void SetTrigger(TriggerT&& value) { m_triggerHasBeenSet = true; m_trigger = std::forward<TriggerT>(value); }
    template<typename TriggerT = ExecutionTrigger>
    PipelineExecution& WithTrigger(TriggerT&& value) { SetTrigger(std::forward<TriggerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline ExecutionMode GetExecutionMode() const { return m_executionMode; }
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }
    inline void SetExecutionMode(ExecutionMode value) { m_executionModeHasBeenSet = true; m_executionMode = value; }
    inline PipelineExecution& WithExecutionMode(ExecutionMode value) { SetExecutionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the pipeline execution.</p>
     */
    inline ExecutionType GetExecutionType() const { return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    inline void SetExecutionType(ExecutionType value) { m_executionTypeHasBeenSet = true; m_executionType = value; }
    inline PipelineExecution& WithExecutionType(ExecutionType value) { SetExecutionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata about the execution pertaining to stage rollback.</p>
     */
    inline const PipelineRollbackMetadata& GetRollbackMetadata() const { return m_rollbackMetadata; }
    inline bool RollbackMetadataHasBeenSet() const { return m_rollbackMetadataHasBeenSet; }
    template<typename RollbackMetadataT = PipelineRollbackMetadata>
    void SetRollbackMetadata(RollbackMetadataT&& value) { m_rollbackMetadataHasBeenSet = true; m_rollbackMetadata = std::forward<RollbackMetadataT>(value); }
    template<typename RollbackMetadataT = PipelineRollbackMetadata>
    PipelineExecution& WithRollbackMetadata(RollbackMetadataT&& value) { SetRollbackMetadata(std::forward<RollbackMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    int m_pipelineVersion{0};
    bool m_pipelineVersionHasBeenSet = false;

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    PipelineExecutionStatus m_status{PipelineExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::Vector<ArtifactRevision> m_artifactRevisions;
    bool m_artifactRevisionsHasBeenSet = false;

    Aws::Vector<ResolvedPipelineVariable> m_variables;
    bool m_variablesHasBeenSet = false;

    ExecutionTrigger m_trigger;
    bool m_triggerHasBeenSet = false;

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
