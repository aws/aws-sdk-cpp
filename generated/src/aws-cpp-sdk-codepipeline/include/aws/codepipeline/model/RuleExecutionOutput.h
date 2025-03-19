/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/RuleExecutionResult.h>
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
   * <p>Output details listed for a rule execution, such as the rule execution
   * result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleExecutionOutput">AWS
   * API Reference</a></p>
   */
  class RuleExecutionOutput
  {
  public:
    AWS_CODEPIPELINE_API RuleExecutionOutput() = default;
    AWS_CODEPIPELINE_API RuleExecutionOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleExecutionOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Execution result information listed in the output details for a rule
     * execution.</p>
     */
    inline const RuleExecutionResult& GetExecutionResult() const { return m_executionResult; }
    inline bool ExecutionResultHasBeenSet() const { return m_executionResultHasBeenSet; }
    template<typename ExecutionResultT = RuleExecutionResult>
    void SetExecutionResult(ExecutionResultT&& value) { m_executionResultHasBeenSet = true; m_executionResult = std::forward<ExecutionResultT>(value); }
    template<typename ExecutionResultT = RuleExecutionResult>
    RuleExecutionOutput& WithExecutionResult(ExecutionResultT&& value) { SetExecutionResult(std::forward<ExecutionResultT>(value)); return *this;}
    ///@}
  private:

    RuleExecutionResult m_executionResult;
    bool m_executionResultHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
