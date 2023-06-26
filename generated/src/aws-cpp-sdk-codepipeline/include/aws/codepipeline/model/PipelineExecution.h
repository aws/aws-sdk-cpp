/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/ArtifactRevision.h>
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


    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline with the specified pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The version number of the pipeline with the specified pipeline execution.</p>
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }

    /**
     * <p>The version number of the pipeline with the specified pipeline execution.</p>
     */
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }

    /**
     * <p>The version number of the pipeline with the specified pipeline execution.</p>
     */
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }

    /**
     * <p>The version number of the pipeline with the specified pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}


    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline PipelineExecution& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const PipelineExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(PipelineExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline PipelineExecution& WithStatus(const PipelineExecutionStatus& value) { SetStatus(value); return *this;}

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
    inline PipelineExecution& WithStatus(PipelineExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline const Aws::String& GetStatusSummary() const{ return m_statusSummary; }

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline bool StatusSummaryHasBeenSet() const { return m_statusSummaryHasBeenSet; }

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline void SetStatusSummary(const Aws::String& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = value; }

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline void SetStatusSummary(Aws::String&& value) { m_statusSummaryHasBeenSet = true; m_statusSummary = std::move(value); }

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline void SetStatusSummary(const char* value) { m_statusSummaryHasBeenSet = true; m_statusSummary.assign(value); }

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline PipelineExecution& WithStatusSummary(const Aws::String& value) { SetStatusSummary(value); return *this;}

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline PipelineExecution& WithStatusSummary(Aws::String&& value) { SetStatusSummary(std::move(value)); return *this;}

    /**
     * <p>A summary that contains a description of the pipeline execution status.</p>
     */
    inline PipelineExecution& WithStatusSummary(const char* value) { SetStatusSummary(value); return *this;}


    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline const Aws::Vector<ArtifactRevision>& GetArtifactRevisions() const{ return m_artifactRevisions; }

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline bool ArtifactRevisionsHasBeenSet() const { return m_artifactRevisionsHasBeenSet; }

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline void SetArtifactRevisions(const Aws::Vector<ArtifactRevision>& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions = value; }

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline void SetArtifactRevisions(Aws::Vector<ArtifactRevision>&& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions = std::move(value); }

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline PipelineExecution& WithArtifactRevisions(const Aws::Vector<ArtifactRevision>& value) { SetArtifactRevisions(value); return *this;}

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline PipelineExecution& WithArtifactRevisions(Aws::Vector<ArtifactRevision>&& value) { SetArtifactRevisions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline PipelineExecution& AddArtifactRevisions(const ArtifactRevision& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions.push_back(value); return *this; }

    /**
     * <p>A list of <code>ArtifactRevision</code> objects included in a pipeline
     * execution.</p>
     */
    inline PipelineExecution& AddArtifactRevisions(ArtifactRevision&& value) { m_artifactRevisionsHasBeenSet = true; m_artifactRevisions.push_back(std::move(value)); return *this; }

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
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
