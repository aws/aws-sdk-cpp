/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Represents a logical statement that can be expressed both in formal logic
   * notation and natural language, providing dual representations for better
   * understanding and validation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningLogicStatement">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningLogicStatement
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningLogicStatement() = default;
    AWS_BEDROCK_API AutomatedReasoningLogicStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningLogicStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The formal logic representation of the statement using mathematical notation
     * and logical operators.</p>
     */
    inline const Aws::String& GetLogic() const { return m_logic; }
    inline bool LogicHasBeenSet() const { return m_logicHasBeenSet; }
    template<typename LogicT = Aws::String>
    void SetLogic(LogicT&& value) { m_logicHasBeenSet = true; m_logic = std::forward<LogicT>(value); }
    template<typename LogicT = Aws::String>
    AutomatedReasoningLogicStatement& WithLogic(LogicT&& value) { SetLogic(std::forward<LogicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The natural language representation of the logical statement, providing a
     * human-readable interpretation of the formal logic.</p>
     */
    inline const Aws::String& GetNaturalLanguage() const { return m_naturalLanguage; }
    inline bool NaturalLanguageHasBeenSet() const { return m_naturalLanguageHasBeenSet; }
    template<typename NaturalLanguageT = Aws::String>
    void SetNaturalLanguage(NaturalLanguageT&& value) { m_naturalLanguageHasBeenSet = true; m_naturalLanguage = std::forward<NaturalLanguageT>(value); }
    template<typename NaturalLanguageT = Aws::String>
    AutomatedReasoningLogicStatement& WithNaturalLanguage(NaturalLanguageT&& value) { SetNaturalLanguage(std::forward<NaturalLanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logic;
    bool m_logicHasBeenSet = false;

    Aws::String m_naturalLanguage;
    bool m_naturalLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
