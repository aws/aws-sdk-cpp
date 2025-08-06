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
   * <p>An annotation for adding a new rule to the policy by converting a natural
   * language description into a formal logical expression.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The natural language description of the rule that should be converted into a
     * formal logical expression.</p>
     */
    inline const Aws::String& GetNaturalLanguage() const { return m_naturalLanguage; }
    inline bool NaturalLanguageHasBeenSet() const { return m_naturalLanguageHasBeenSet; }
    template<typename NaturalLanguageT = Aws::String>
    void SetNaturalLanguage(NaturalLanguageT&& value) { m_naturalLanguageHasBeenSet = true; m_naturalLanguage = std::forward<NaturalLanguageT>(value); }
    template<typename NaturalLanguageT = Aws::String>
    AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation& WithNaturalLanguage(NaturalLanguageT&& value) { SetNaturalLanguage(std::forward<NaturalLanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_naturalLanguage;
    bool m_naturalLanguageHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
