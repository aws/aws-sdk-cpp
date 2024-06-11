﻿/**
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
    AWS_CODEPIPELINE_API PipelineExecution();
    AWS_CODEPIPELINE_API PipelineExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline PipelineExecution& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline PipelineExecution& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline PipelineExecution& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline with the specified pipeline execution.</p>
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }
    inline PipelineExecution& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }
    inline PipelineExecution& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}
    inline PipelineExecution& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}
    inline PipelineExecution& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}
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
    inline const PipelineExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const PipelineExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(PipelineExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline PipelineExecution& WithStatus(const PipelineExecutionStatus& value) { SetStatus(value); return *this;}
    inline PipelineExecution& WithStatus(PipelineExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline const Aws::String& GetStatusSummary() const{ return m_statusSummary; }
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }
    inline void SetStatusSummary(const Aws::String& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }
    inline void SetStatusSummary(Aws::String&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }
    inline void SetStatusSummary(const char* value) { m_statusSummaryHasBeenSet = true; m_statusSummary.assign(value); }
    inline PipelineExecution& WithStatusSummary(const Aws::String& value) { SetStatusSummary(value); return *this;}
    inline PipelineExecution& WithStatusSummary(Aws::String&& value) { SetStatusSummary(std::move(value)); return *this;}
    inline PipelineExecution& WithStatusSummary(const char* value) { SetStatusSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactRevision>& GetArtifactRevisions() const{ return m_artifactRevisions; }
    inline bool ArtifactRevisionsHasBeenSet() const { return m_artifactRevisionsHasBeenSet; }
    inline void SetArtifactRevisions(const Aws::Vector<ArtifactRevision>& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions = value; }
    inline void SetArtifactRevisions(Aws::Vector<ArtifactRevision>&& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions = std::move(value); }
    inline PipelineExecution& WithArtifactRevisions(const Aws::Vector<ArtifactRevision>& value) { SetArtifactRevisions(value); return *this;}
    inline PipelineExecution& WithArtifactRevisions(Aws::Vector<ArtifactRevision>&& value) { SetArtifactRevisions(std::move(value)); return *this;}
    inline PipelineExecution& AddArtifactRevisions(const ArtifactRevision& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions.push_back(value); return *this; }
    inline PipelineExecution& AddArtifactRevisions(ArtifactRevision&& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of pipeline variables used for the pipeline execution.</p>
     */
    inline const Aws::Vector<ResolvedPipelineVariable>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Vector<ResolvedPipelineVariable>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Vector<ResolvedPipelineVariable>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline PipelineExecution& WithVariables(const Aws::Vector<ResolvedPipelineVariable>& value) { SetVariables(value); return *this;}
    inline PipelineExecution& WithVariables(Aws::Vector<ResolvedPipelineVariable>&& value) { SetVariables(std::move(value)); return *this;}
    inline PipelineExecution& AddVariables(const ResolvedPipelineVariable& value) { m_variablesHasBeenSet = true; m_variables.push_back(value); return *this; }
    inline PipelineExecution& AddVariables(ResolvedPipelineVariable&& value) { m_variablesHasBeenSet = true; m_variables.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ExecutionTrigger& GetTrigger() const{ return m_trigger; }
    inline bool TriggerHasBeenSet() const { return m_triggerHasBeenSet; }
    inline void SetTrigger(const ExecutionTrigger& value) { m_triggerHasBeenSet = true; m_trigger = value; }
    inline void SetTrigger(ExecutionTrigger&& value) { m_triggerHasBeenSet = true; m_trigger = std::move(value); }
    inline PipelineExecution& WithTrigger(const ExecutionTrigger& value) { SetTrigger(value); return *this;}
    inline PipelineExecution& WithTrigger(ExecutionTrigger&& value) { SetTrigger(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that the pipeline will use to handle multiple executions. The
     * default mode is SUPERSEDED.</p>
     */
    inline const ExecutionMode& GetExecutionMode() const{ return m_executionMode; }
    inline bool ExecutionModeHasBeenSet() const { return m_executionModeHasBeenSet; }
    inline void SetExecutionMode(const ExecutionMode& value) { m_executionModeHasBeenSet = true; m_executionMode = value; }
    inline void SetExecutionMode(ExecutionMode&& value) { m_executionModeHasBeenSet = true; m_executionMode = std::move(value); }
    inline PipelineExecution& WithExecutionMode(const ExecutionMode& value) { SetExecutionMode(value); return *this;}
    inline PipelineExecution& WithExecutionMode(ExecutionMode&& value) { SetExecutionMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the pipeline execution.</p>
     */
    inline const ExecutionType& GetExecutionType() const{ return m_executionType; }
    inline bool ExecutionTypeHasBeenSet() const { return m_executionTypeHasBeenSet; }
    inline void SetExecutionType(const ExecutionType& value) { m_executionTypeHasBeenSet = true; m_executionType = value; }
    inline void SetExecutionType(ExecutionType&& value) { m_executionTypeHasBeenSet = true; m_executionType = std::move(value); }
    inline PipelineExecution& WithExecutionType(const ExecutionType& value) { SetExecutionType(value); return *this;}
    inline PipelineExecution& WithExecutionType(ExecutionType&& value) { SetExecutionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata about the execution pertaining to stage rollback.</p>
     */
    inline const PipelineRollbackMetadata& GetRollbackMetadata() const{ return m_rollbackMetadata; }
    inline bool RollbackMetadataHasBeenSet() const { return m_rollbackMetadataHasBeenSet; }
    inline void SetRollbackMetadata(const PipelineRollbackMetadata& value) { m_rollbackMetadataHasBeenSet = true; m_rollbackMetadata = value; }
    inline void SetRollbackMetadata(PipelineRollbackMetadata&& value) { m_rollbackMetadataHasBeenSet = true; m_rollbackMetadata = std::move(value); }
    inline PipelineExecution& WithRollbackMetadata(const PipelineRollbackMetadata& value) { SetRollbackMetadata(value); return *this;}
    inline PipelineExecution& WithRollbackMetadata(PipelineRollbackMetadata&& value) { SetRollbackMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    int m_pipelineVersion;
    bool m_pipelineVersionHasBeenSet = false;

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    PipelineExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusSummary;
    bool m_statusSummaryHasBeenSet = false;

    Aws::Vector<ArtifactRevision> m_artifactRevisions;
    bool m_artifactRevisionsHasBeenSet = false;

    Aws::Vector<ResolvedPipelineVariable> m_variables;
    bool m_variablesHasBeenSet = false;

    ExecutionTrigger m_trigger;
    bool m_triggerHasBeenSet = false;

    ExecutionMode m_executionMode;
    bool m_executionModeHasBeenSet = false;

    ExecutionType m_executionType;
    bool m_executionTypeHasBeenSet = false;

    PipelineRollbackMetadata m_rollbackMetadata;
    bool m_rollbackMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
