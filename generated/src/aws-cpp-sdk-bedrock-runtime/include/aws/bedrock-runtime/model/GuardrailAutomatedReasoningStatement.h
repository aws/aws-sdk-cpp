/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A logical statement that includes both formal logic representation and
   * natural language explanation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailAutomatedReasoningStatement">AWS
   * API Reference</a></p>
   */
  class GuardrailAutomatedReasoningStatement
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningStatement() = default;
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailAutomatedReasoningStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The formal logical representation of the statement.</p>
     */
    inline const Aws::String& GetLogic() const { return m_logic; }
    inline bool LogicHasBeenSet() const { return m_logicHasBeenSet; }
    template<typename LogicT = Aws::String>
    void SetLogic(LogicT&& value) { m_logicHasBeenSet = true; m_logic = std::forward<LogicT>(value); }
    template<typename LogicT = Aws::String>
    GuardrailAutomatedReasoningStatement& WithLogic(LogicT&& value) { SetLogic(std::forward<LogicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The natural language explanation of the logical statement.</p>
     */
    inline const Aws::String& GetNaturalLanguage() const { return m_naturalLanguage; }
    inline bool NaturalLanguageHasBeenSet() const { return m_naturalLanguageHasBeenSet; }
    template<typename NaturalLanguageT = Aws::String>
    void SetNaturalLanguage(NaturalLanguageT&& value) { m_naturalLanguageHasBeenSet = true; m_naturalLanguage = std::forward<NaturalLanguageT>(value); }
    template<typename NaturalLanguageT = Aws::String>
    GuardrailAutomatedReasoningStatement& WithNaturalLanguage(NaturalLanguageT&& value) { SetNaturalLanguage(std::forward<NaturalLanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logic;
    bool m_logicHasBeenSet = false;

    Aws::String m_naturalLanguage;
    bool m_naturalLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
