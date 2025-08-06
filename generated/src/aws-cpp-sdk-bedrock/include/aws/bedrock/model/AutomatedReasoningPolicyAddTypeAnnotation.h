/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionTypeValue.h>
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
   * <p>An annotation for adding a new custom type to an Automated Reasoning policy,
   * defining a set of possible values for variables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyAddTypeAnnotation">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyAddTypeAnnotation
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyAddTypeAnnotation() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyAddTypeAnnotation(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyAddTypeAnnotation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the new custom type. This name will be used to reference the type
     * in variable definitions and rules.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AutomatedReasoningPolicyAddTypeAnnotation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of what the custom type represents and how it should be used in
     * the policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AutomatedReasoningPolicyAddTypeAnnotation& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of possible values that variables of this type can take, each with
     * its own description and identifier.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue>>
    AutomatedReasoningPolicyAddTypeAnnotation& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = AutomatedReasoningPolicyDefinitionTypeValue>
    AutomatedReasoningPolicyAddTypeAnnotation& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
