/**
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
   * <p>Represents the input of a <code>DisableStageTransition</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DisableStageTransitionInput">AWS
   * API Reference</a></p>
   */
  class DisableStageTransitionRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API DisableStageTransitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableStageTransition"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline in which you want to disable the flow of artifacts
     * from one stage to another.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    DisableStageTransitionRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage where you want to disable the inbound or outbound
     * transition of artifacts.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    DisableStageTransitionRequest& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether artifacts are prevented from transitioning into the stage
     * and being processed by the actions in that stage (inbound), or prevented from
     * transitioning from the stage after they have been processed by the actions in
     * that stage (outbound).</p>
     */
    inline StageTransitionType GetTransitionType() const { return m_transitionType; }
    inline bool TransitionTypeHasBeenSet() const { return m_transitionTypeHasBeenSet; }
    inline void SetTransitionType(StageTransitionType value) { m_transitionTypeHasBeenSet = true; m_transitionType = value; }
    inline DisableStageTransitionRequest& WithTransitionType(StageTransitionType value) { SetTransitionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason given to the user that a stage is disabled, such as waiting for
     * manual approval or manual tests. This message is displayed in the pipeline
     * console UI.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    DisableStageTransitionRequest& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    StageTransitionType m_transitionType{StageTransitionType::NOT_SET};
    bool m_transitionTypeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
