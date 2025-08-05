/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningLogicStatement.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a logical scenario where claims can be evaluated as true or false,
   * containing specific logical assignments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningCheckScenario">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningCheckScenario
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningCheckScenario() = default;
    AWS_BEDROCK_API AutomatedReasoningCheckScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningCheckScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of logical assignments and statements that define this scenario.</p>
     */
    inline const Aws::Vector<AutomatedReasoningLogicStatement>& GetStatements() const { return m_statements; }
    inline bool StatementsHasBeenSet() const { return m_statementsHasBeenSet; }
    template<typename StatementsT = Aws::Vector<AutomatedReasoningLogicStatement>>
    void SetStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements = std::forward<StatementsT>(value); }
    template<typename StatementsT = Aws::Vector<AutomatedReasoningLogicStatement>>
    AutomatedReasoningCheckScenario& WithStatements(StatementsT&& value) { SetStatements(std::forward<StatementsT>(value)); return *this;}
    template<typename StatementsT = AutomatedReasoningLogicStatement>
    AutomatedReasoningCheckScenario& AddStatements(StatementsT&& value) { m_statementsHasBeenSet = true; m_statements.emplace_back(std::forward<StatementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AutomatedReasoningLogicStatement> m_statements;
    bool m_statementsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
