/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/StageContext.h>
#include <aws/codepipeline/model/ActionContext.h>
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
   * <p>Represents information about a pipeline to a job worker.</p> 
   * <p>PipelineContext contains <code>pipelineArn</code> and
   * <code>pipelineExecutionId</code> for custom action jobs. The
   * <code>pipelineArn</code> and <code>pipelineExecutionId</code> fields are not
   * populated for ThirdParty action jobs.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/PipelineContext">AWS
   * API Reference</a></p>
   */
  class PipelineContext
  {
  public:
    AWS_CODEPIPELINE_API PipelineContext() = default;
    AWS_CODEPIPELINE_API PipelineContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API PipelineContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipeline. This is a user-specified value. Pipeline names must
     * be unique across all pipeline names under an Amazon Web Services account.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    PipelineContext& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stage of the pipeline.</p>
     */
    inline const StageContext& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = StageContext>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = StageContext>
    PipelineContext& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context of an action to a job worker in the stage of a pipeline.</p>
     */
    inline const ActionContext& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = ActionContext>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = ActionContext>
    PipelineContext& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    PipelineContext& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution ID of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    PipelineContext& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    StageContext m_stage;
    bool m_stageHasBeenSet = false;

    ActionContext m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
