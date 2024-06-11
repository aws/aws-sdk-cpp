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
    AWS_CODEPIPELINE_API RollbackStageRequest();

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
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline RollbackStageRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline RollbackStageRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline RollbackStageRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage in the pipeline to be rolled back. </p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline RollbackStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline RollbackStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline RollbackStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pipeline execution ID for the stage to be rolled back to. </p>
     */
    inline const Aws::String& GetTargetPipelineExecutionId() const{ return m_targetPipelineExecutionId; }
    inline bool TargetPipelineExecutionIdHasBeenSet() const { return m_targetPipelineExecutionIdHasBeenSet; }
    inline void SetTargetPipelineExecutionId(const Aws::String& value) { m_targetPipelineExecutionIdHasBeenSet = true; m_targetPipelineExecutionId = value; }
    inline void SetTargetPipelineExecutionId(Aws::String&& value) { m_targetPipelineExecutionIdHasBeenSet = true; m_targetPipelineExecutionId = std::move(value); }
    inline void SetTargetPipelineExecutionId(const char* value) { m_targetPipelineExecutionIdHasBeenSet = true; m_targetPipelineExecutionId.assign(value); }
    inline RollbackStageRequest& WithTargetPipelineExecutionId(const Aws::String& value) { SetTargetPipelineExecutionId(value); return *this;}
    inline RollbackStageRequest& WithTargetPipelineExecutionId(Aws::String&& value) { SetTargetPipelineExecutionId(std::move(value)); return *this;}
    inline RollbackStageRequest& WithTargetPipelineExecutionId(const char* value) { SetTargetPipelineExecutionId(value); return *this;}
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
