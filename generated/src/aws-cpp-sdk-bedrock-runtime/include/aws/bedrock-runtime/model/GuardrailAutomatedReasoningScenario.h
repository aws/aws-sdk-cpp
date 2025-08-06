/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningStatement.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Represents a logical scenario where claims can be evaluated as true or false,
   * containing specific logical assignments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningScenario">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningScenario
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningScenario() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of logical assignments and statements that define this scenario.</p>
     */
    inline const Aws::Vector<GuardrailAutomatedReasoningStatement>& GetStatements() const { return m_statements; }
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }
    template<typename StatementsT = Aws::Vector<GuardrailAutomatedReasoningStatement>>
    void SetStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements = std::forward<StatementsT>(value); }
    template<typename StatementsT = Aws::Vector<GuardrailAutomatedReasoningStatement>>
    GuardrailAutomatedReasoningScenario& WithStatements(StatementsT&& value) { SetStatements(std::forward<StatementsT>(value)); return *this;}
    template<typename StatementsT = GuardrailAutomatedReasoningStatement>
    GuardrailAutomatedReasoningScenario& AddStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements.emplace_back(std::forward<StatementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<GuardrailAutomatedReasoningStatement> m_statements;
    bool m_statementsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
