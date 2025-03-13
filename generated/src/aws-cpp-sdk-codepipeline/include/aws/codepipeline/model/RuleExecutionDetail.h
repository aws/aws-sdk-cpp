/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codepipeline/model/RuleExecutionStatus.h>
#include <aws/codepipeline/model/RuleExecutionInput.h>
#include <aws/codepipeline/model/RuleExecutionOutput.h>
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
   * <p>The details of the runs for a rule and the results produced on an artifact as
   * it passes through stages in the pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleExecutionDetail">AWS
   * API Reference</a></p>
   */
  class RuleExecutionDetail
  {
  public:
    AWS_CODEPIPELINE_API RuleExecutionDetail() = default;
    AWS_CODEPIPELINE_API RuleExecutionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the pipeline execution in the stage where the rule was run. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the stage.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const { return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    template<typename PipelineExecutionIdT = Aws::String>
    void SetPipelineExecutionId(PipelineExecutionIdT&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::forward<PipelineExecutionIdT>(value); }
    template<typename PipelineExecutionIdT = Aws::String>
    RuleExecutionDetail& WithPipelineExecutionId(PipelineExecutionIdT&& value) { SetPipelineExecutionId(std::forward<PipelineExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the run for the rule.</p>
     */
    inline const Aws::String& GetRuleExecutionId() const { return m_ruleExecutionId; }
    inline bool RuleExecutionIdHasBeenSet() const { return m_ruleExecutionIdHasBeenSet; }
    template<typename RuleExecutionIdT = Aws::String>
    void SetRuleExecutionId(RuleExecutionIdT&& value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId = std::forward<RuleExecutionIdT>(value); }
    template<typename RuleExecutionIdT = Aws::String>
    RuleExecutionDetail& WithRuleExecutionId(RuleExecutionIdT&& value) { SetRuleExecutionId(std::forward<RuleExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline with the stage where the rule was run.</p>
     */
    inline int GetPipelineVersion() const { return m_pipelineVersion; }
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }
    inline RuleExecutionDetail& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage where the rule was run.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    RuleExecutionDetail& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule that was run in the stage.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    RuleExecutionDetail& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the rule execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    RuleExecutionDetail& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last change to the rule execution, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    RuleExecutionDetail& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user who changed the rule execution details.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    RuleExecutionDetail& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the rule execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>. </p>
     */
    inline RuleExecutionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RuleExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline RuleExecutionDetail& WithStatus(RuleExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input details for the rule execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline const RuleExecutionInput& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = RuleExecutionInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = RuleExecutionInput>
    RuleExecutionDetail& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output details for the rule execution, such as the rule execution result.</p>
     */
    inline const RuleExecutionOutput& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = RuleExecutionOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = RuleExecutionOutput>
    RuleExecutionDetail& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    Aws::String m_ruleExecutionId;
    bool m_ruleExecutionIdHasBeenSet = false;

    int m_pipelineVersion{0};
    bool m_pipelineVersionHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    RuleExecutionStatus m_status{RuleExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RuleExecutionInput m_input;
    bool m_inputHasBeenSet = false;

    RuleExecutionOutput m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
