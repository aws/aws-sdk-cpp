/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StageExecutionStatus.h>
#include <aws/codepipeline/model/ExecutionType.h>
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
   * <p>Represents information about the run of a stage.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StageExecution">AWS
   * API Reference</a></p>
   */
  class StageExecution
  {
  public:
    AWS_CODEPIPELINE_API StageExecution() = default;
    AWS_CODEPIPELINE_API StageExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the pipeline execution associated with the stage.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    StageExecution& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the stage, or for a completed stage, the last status of the
     * stage.</p>  <p>A status of cancelled means that the pipeline’s definition
     * was updated before the stage execution could be completed.</p> 
     */
    inline StageExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StageExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StageExecution& WithStatus(StageExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of pipeline execution for the stage, such as a rollback pipeline
     * execution.</p>
     */
    inline ExecutionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ExecutionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline StageExecution& WithType(ExecutionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    StageExecutionStatus m_status{StageExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ExecutionType m_type{ExecutionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
