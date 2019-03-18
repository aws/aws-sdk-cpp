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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/PipelineExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CODEPIPELINE_API PipelineExecutionSummary
  {
  public:
    PipelineExecutionSummary();
    PipelineExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    PipelineExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline PipelineExecutionSummary& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}


    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Succeeded: The
     * pipeline execution was completed successfully. </p> </li> <li> <p>Superseded:
     * While this pipeline execution was waiting for the next stage to be completed, a
     * newer pipeline execution advanced and continued through the pipeline instead.
     * </p> </li> <li> <p>Failed: The pipeline execution was not completed
     * successfully.</p> </li> </ul>
     */
    inline const PipelineExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Succeeded: The
     * pipeline execution was completed successfully. </p> </li> <li> <p>Superseded:
     * While this pipeline execution was waiting for the next stage to be completed, a
     * newer pipeline execution advanced and continued through the pipeline instead.
     * </p> </li> <li> <p>Failed: The pipeline execution was not completed
     * successfully.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Succeeded: The
     * pipeline execution was completed successfully. </p> </li> <li> <p>Superseded:
     * While this pipeline execution was waiting for the next stage to be completed, a
     * newer pipeline execution advanced and continued through the pipeline instead.
     * </p> </li> <li> <p>Failed: The pipeline execution was not completed
     * successfully.</p> </li> </ul>
     */
    inline void SetStatus(const PipelineExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Succeeded: The
     * pipeline execution was completed successfully. </p> </li> <li> <p>Superseded:
     * While this pipeline execution was waiting for the next stage to be completed, a
     * newer pipeline execution advanced and continued through the pipeline instead.
     * </p> </li> <li> <p>Failed: The pipeline execution was not completed
     * successfully.</p> </li> </ul>
     */
    inline void SetStatus(PipelineExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Succeeded: The
     * pipeline execution was completed successfully. </p> </li> <li> <p>Superseded:
     * While this pipeline execution was waiting for the next stage to be completed, a
     * newer pipeline execution advanced and continued through the pipeline instead.
     * </p> </li> <li> <p>Failed: The pipeline execution was not completed
     * successfully.</p> </li> </ul>
     */
    inline PipelineExecutionSummary& WithStatus(const PipelineExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the pipeline execution.</p> <ul> <li> <p>InProgress: The
     * pipeline execution is currently running.</p> </li> <li> <p>Succeeded: The
     * pipeline execution was completed successfully. </p> </li> <li> <p>Superseded:
     * While this pipeline execution was waiting for the next stage to be completed, a
     * newer pipeline execution advanced and continued through the pipeline instead.
     * </p> </li> <li> <p>Failed: The pipeline execution was not completed
     * successfully.</p> </li> </ul>
     */
    inline PipelineExecutionSummary& WithStatus(PipelineExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline PipelineExecutionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The date and time when the pipeline execution began, in timestamp format.</p>
     */
    inline PipelineExecutionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline PipelineExecutionSummary& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    /**
     * <p>The date and time of the last change to the pipeline execution, in timestamp
     * format.</p>
     */
    inline PipelineExecutionSummary& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}


    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline const Aws::Vector<SourceRevision>& GetSourceRevisions() const{ return m_sourceRevisions; }

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline bool SourceRevisionsHasBeenSet() const { return m_sourceRevisionsHasBeenSet; }

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline void SetSourceRevisions(const Aws::Vector<SourceRevision>& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions = value; }

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline void SetSourceRevisions(Aws::Vector<SourceRevision>&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions = std::move(value); }

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline PipelineExecutionSummary& WithSourceRevisions(const Aws::Vector<SourceRevision>& value) { SetSourceRevisions(value); return *this;}

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline PipelineExecutionSummary& WithSourceRevisions(Aws::Vector<SourceRevision>&& value) { SetSourceRevisions(std::move(value)); return *this;}

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline PipelineExecutionSummary& AddSourceRevisions(const SourceRevision& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions.push_back(value); return *this; }

    /**
     * <p>A list of the source artifact revisions that initiated a pipeline
     * execution.</p>
     */
    inline PipelineExecutionSummary& AddSourceRevisions(SourceRevision&& value) { m_sourceRevisionsHasBeenSet = true; m_sourceRevisions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet;

    PipelineExecutionStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;

    Aws::Vector<SourceRevision> m_sourceRevisions;
    bool m_sourceRevisionsHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
