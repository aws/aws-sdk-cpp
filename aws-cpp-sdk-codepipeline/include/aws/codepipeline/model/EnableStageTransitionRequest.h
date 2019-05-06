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
  class AWS_CODEPIPELINE_API EnableStageTransitionRequest : public CodePipelineRequest
  {
  public:
    EnableStageTransitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableStageTransition"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline EnableStageTransitionRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline EnableStageTransitionRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline in which you want to enable the flow of artifacts
     * from one stage to another.</p>
     */
    inline EnableStageTransitionRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline EnableStageTransitionRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline EnableStageTransitionRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage where you want to enable the transition of artifacts,
     * either into the stage (inbound) or from that stage to the next stage
     * (outbound).</p>
     */
    inline EnableStageTransitionRequest& WithStageName(const char* value) { SetStageName(value); return *this;}


    /**
     * <p>Specifies whether artifacts will be allowed to enter the stage and be
     * processed by the actions in that stage (inbound) or whether already-processed
     * artifacts will be allowed to transition to the next stage (outbound).</p>
     */
    inline const StageTransitionType& GetTransitionType() const{ return m_transitionType; }

    /**
     * <p>Specifies whether artifacts will be allowed to enter the stage and be
     * processed by the actions in that stage (inbound) or whether already-processed
     * artifacts will be allowed to transition to the next stage (outbound).</p>
     */
    inline bool TransitionTypeHasBeenSet() const { return m_transitionTypeHasBeenSet; }

    /**
     * <p>Specifies whether artifacts will be allowed to enter the stage and be
     * processed by the actions in that stage (inbound) or whether already-processed
     * artifacts will be allowed to transition to the next stage (outbound).</p>
     */
    inline void SetTransitionType(const StageTransitionType& value) { m_transitionTypeHasBeenSet = true; m_transitionType = value; }

    /**
     * <p>Specifies whether artifacts will be allowed to enter the stage and be
     * processed by the actions in that stage (inbound) or whether already-processed
     * artifacts will be allowed to transition to the next stage (outbound).</p>
     */
    inline void SetTransitionType(StageTransitionType&& value) { m_transitionTypeHasBeenSet = true; m_transitionType = std::move(value); }

    /**
     * <p>Specifies whether artifacts will be allowed to enter the stage and be
     * processed by the actions in that stage (inbound) or whether already-processed
     * artifacts will be allowed to transition to the next stage (outbound).</p>
     */
    inline EnableStageTransitionRequest& WithTransitionType(const StageTransitionType& value) { SetTransitionType(value); return *this;}

    /**
     * <p>Specifies whether artifacts will be allowed to enter the stage and be
     * processed by the actions in that stage (inbound) or whether already-processed
     * artifacts will be allowed to transition to the next stage (outbound).</p>
     */
    inline EnableStageTransitionRequest& WithTransitionType(StageTransitionType&& value) { SetTransitionType(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet;

    StageTransitionType m_transitionType;
    bool m_transitionTypeHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
