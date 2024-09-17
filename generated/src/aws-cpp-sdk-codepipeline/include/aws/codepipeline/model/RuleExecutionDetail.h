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
    AWS_CODEPIPELINE_API RuleExecutionDetail();
    AWS_CODEPIPELINE_API RuleExecutionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the pipeline execution in the stage where the rule was run. Use the
     * <a>GetPipelineState</a> action to retrieve the current pipelineExecutionId of
     * the stage.</p>
     */
    inline const Aws::String& GetPipelineExecutionId() const{ return m_pipelineExecutionId; }
    inline bool PipelineExecutionIdHasBeenSet() const { return m_pipelineExecutionIdHasBeenSet; }
    inline void SetPipelineExecutionId(const Aws::String& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = value; }
    inline void SetPipelineExecutionId(Aws::String&& value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId = std::move(value); }
    inline void SetPipelineExecutionId(const char* value) { m_pipelineExecutionIdHasBeenSet = true; m_pipelineExecutionId.assign(value); }
    inline RuleExecutionDetail& WithPipelineExecutionId(const Aws::String& value) { SetPipelineExecutionId(value); return *this;}
    inline RuleExecutionDetail& WithPipelineExecutionId(Aws::String&& value) { SetPipelineExecutionId(std::move(value)); return *this;}
    inline RuleExecutionDetail& WithPipelineExecutionId(const char* value) { SetPipelineExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the run for the rule.</p>
     */
    inline const Aws::String& GetRuleExecutionId() const{ return m_ruleExecutionId; }
    inline bool RuleExecutionIdHasBeenSet() const { return m_ruleExecutionIdHasBeenSet; }
    inline void SetRuleExecutionId(const Aws::String& value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId = value; }
    inline void SetRuleExecutionId(Aws::String&& value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId = std::move(value); }
    inline void SetRuleExecutionId(const char* value) { m_ruleExecutionIdHasBeenSet = true; m_ruleExecutionId.assign(value); }
    inline RuleExecutionDetail& WithRuleExecutionId(const Aws::String& value) { SetRuleExecutionId(value); return *this;}
    inline RuleExecutionDetail& WithRuleExecutionId(Aws::String&& value) { SetRuleExecutionId(std::move(value)); return *this;}
    inline RuleExecutionDetail& WithRuleExecutionId(const char* value) { SetRuleExecutionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the pipeline with the stage where the rule was run.</p>
     */
    inline int GetPipelineVersion() const{ return m_pipelineVersion; }
    inline bool PipelineVersionHasBeenSet() const { return m_pipelineVersionHasBeenSet; }
    inline void SetPipelineVersion(int value) { m_pipelineVersionHasBeenSet = true; m_pipelineVersion = value; }
    inline RuleExecutionDetail& WithPipelineVersion(int value) { SetPipelineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage where the rule was run.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline RuleExecutionDetail& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline RuleExecutionDetail& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline RuleExecutionDetail& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule that was run in the stage.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline RuleExecutionDetail& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline RuleExecutionDetail& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline RuleExecutionDetail& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the rule execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline RuleExecutionDetail& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline RuleExecutionDetail& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last change to the rule execution, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }
    inline RuleExecutionDetail& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}
    inline RuleExecutionDetail& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the user who changed the rule execution details.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline RuleExecutionDetail& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline RuleExecutionDetail& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline RuleExecutionDetail& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the rule execution. Status categories are
     * <code>InProgress</code>, <code>Succeeded</code>, and <code>Failed</code>. </p>
     */
    inline const RuleExecutionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RuleExecutionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RuleExecutionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RuleExecutionDetail& WithStatus(const RuleExecutionStatus& value) { SetStatus(value); return *this;}
    inline RuleExecutionDetail& WithStatus(RuleExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input details for the rule execution, such as role ARN, Region, and input
     * artifacts.</p>
     */
    inline const RuleExecutionInput& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const RuleExecutionInput& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(RuleExecutionInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline RuleExecutionDetail& WithInput(const RuleExecutionInput& value) { SetInput(value); return *this;}
    inline RuleExecutionDetail& WithInput(RuleExecutionInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output details for the rule execution, such as the rule execution result.</p>
     */
    inline const RuleExecutionOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const RuleExecutionOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(RuleExecutionOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline RuleExecutionDetail& WithOutput(const RuleExecutionOutput& value) { SetOutput(value); return *this;}
    inline RuleExecutionDetail& WithOutput(RuleExecutionOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionId;
    bool m_pipelineExecutionIdHasBeenSet = false;

    Aws::String m_ruleExecutionId;
    bool m_ruleExecutionIdHasBeenSet = false;

    int m_pipelineVersion;
    bool m_pipelineVersionHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    RuleExecutionStatus m_status;
    bool m_statusHasBeenSet = false;

    RuleExecutionInput m_input;
    bool m_inputHasBeenSet = false;

    RuleExecutionOutput m_output;
    bool m_outputHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
