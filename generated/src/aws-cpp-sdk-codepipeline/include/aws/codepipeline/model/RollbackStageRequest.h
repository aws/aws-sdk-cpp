/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class RollbackStageRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API RollbackStageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RollbackStage"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline for which the stage will be rolled back. </p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    RollbackStageRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage in the pipeline to be rolled back. </p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    RollbackStageRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pipeline execution ID for the stage to be rolled back to. </p>
     */
    inline const Aws::String& GetTargetPipelineExecutionId() const { return m_targetPipelineExecutionId; }
    inline bool TargetPipelineExecutionIdHasBeenSet() const { return m_targetPipelineExecutionIdHasBeenSet; }
    template<typename TargetPipelineExecutionIdT = Aws::String>
    void SetTargetPipelineExecutionId(TargetPipelineExecutionIdT&& value) { m_targetPipelineExecutionIdHasBeenSet = true; m_targetPipelineExecutionId = std::forward<TargetPipelineExecutionIdT>(value); }
    template<typename TargetPipelineExecutionIdT = Aws::String>
    RollbackStageRequest& WithTargetPipelineExecutionId(TargetPipelineExecutionIdT&& value) { SetTargetPipelineExecutionId(std::forward<TargetPipelineExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_targetPipelineExecutionId;
    bool m_targetPipelineExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
