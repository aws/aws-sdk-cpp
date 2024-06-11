﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StageTransitionType.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents the input of an <code>EnableStageTransition</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/EnableStageTransitionInput">AWS
   * API Reference</a></p>
   */
  class EnableStageTransitionRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API EnableStageTransitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableStageTransition"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline EnableStageTransitionRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline EnableStageTransitionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline EnableStageTransitionRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline EnableStageTransitionRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline EnableStageTransitionRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline EnableStageTransitionRequest& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether artifacts are allowed to enter the stage and be processed
     * by the actions in that stage (inbound) or whether already processed artifacts
     * are allowed to transition to the next stage (outbound).</p>
     */
    inline const StageTransitionType& GetTransitionType() const{ return m_transitionType; }
    inline bool TransitionTypeHasBeenSet() const { return m_transitionTypeHasBeenSet; }
    inline void SetTransitionType(const StageTransitionType& value) { m_transitionTypeHasBeenSet = true; m_transitionType = value; }
    inline void SetTransitionType(StageTransitionType&& value) { m_transitionTypeHasBeenSet = true; m_transitionType = std::move(value); }
    inline EnableStageTransitionRequest& WithTransitionType(const StageTransitionType& value) { SetTransitionType(value); return *this;}
    inline EnableStageTransitionRequest& WithTransitionType(StageTransitionType&& value) { SetTransitionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    StageTransitionType m_transitionType;
    bool m_transitionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
