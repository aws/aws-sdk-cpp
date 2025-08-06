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
   * <p>Represents a modification to a value within an existing custom
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyUpdateTypeValue">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyUpdateTypeValue
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateTypeValue() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateTypeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyUpdateTypeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current identifier or name of the type value to update.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AutomatedReasoningPolicyUpdateTypeValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new identifier or name for the type value, if you want to rename it.</p>
     */
    inline const Aws::String& GetNewValue() const { return m_newValue; }
    inline bool NewValueHasBeenSet() const { return m_newValueHasBeenSet; }
    template<typename NewValueT = Aws::String>
    void SetNewValue(NewValueT&& value) { m_newValueHasBeenSet = true; m_newValue = std::forward<NewValueT>(value); }
    template<typename NewValueT = Aws::String>
    AutomatedReasoningPolicyUpdateTypeValue& WithNewValue(NewValueT&& value) { SetNewValue(std::forward<NewValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description for the type value, replacing the previous
     * description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AutomatedReasoningPolicyUpdateTypeValue& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_newValue;
    bool m_newValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
