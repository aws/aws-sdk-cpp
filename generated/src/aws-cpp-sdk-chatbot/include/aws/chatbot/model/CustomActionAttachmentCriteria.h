/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/model/CustomActionAttachmentCriteriaOperator.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * <p>A criteria for when a button should be shown based on values in the
   * notification</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CustomActionAttachmentCriteria">AWS
   * API Reference</a></p>
   */
  class CustomActionAttachmentCriteria
  {
  public:
    AWS_CHATBOT_API CustomActionAttachmentCriteria() = default;
    AWS_CHATBOT_API CustomActionAttachmentCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomActionAttachmentCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operation to perform on the named variable.</p>
     */
    inline CustomActionAttachmentCriteriaOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(CustomActionAttachmentCriteriaOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline CustomActionAttachmentCriteria& WithOperator(CustomActionAttachmentCriteriaOperator value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variable to operate on.</p>
     */
    inline const Aws::String& GetVariableName() const { return m_variableName; }
    inline bool VariableNameHasBeenSet() const { return m_variableNameHasBeenSet; }
    template<typename VariableNameT = Aws::String>
    void SetVariableName(VariableNameT&& value) { m_variableNameHasBeenSet = true; m_variableName = std::forward<VariableNameT>(value); }
    template<typename VariableNameT = Aws::String>
    CustomActionAttachmentCriteria& WithVariableName(VariableNameT&& value) { SetVariableName(std::forward<VariableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that is compared with the actual value of the variable based on the
     * behavior of the operator.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    CustomActionAttachmentCriteria& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    CustomActionAttachmentCriteriaOperator m_operator{CustomActionAttachmentCriteriaOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;

    Aws::String m_variableName;
    bool m_variableNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
