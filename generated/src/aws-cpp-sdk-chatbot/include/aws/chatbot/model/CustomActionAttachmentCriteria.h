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
    AWS_CHATBOT_API CustomActionAttachmentCriteria();
    AWS_CHATBOT_API CustomActionAttachmentCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomActionAttachmentCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operation to perform on the named variable.</p>
     */
    inline const CustomActionAttachmentCriteriaOperator& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const CustomActionAttachmentCriteriaOperator& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(CustomActionAttachmentCriteriaOperator&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline CustomActionAttachmentCriteria& WithOperator(const CustomActionAttachmentCriteriaOperator& value) { SetOperator(value); return *this;}
    inline CustomActionAttachmentCriteria& WithOperator(CustomActionAttachmentCriteriaOperator&& value) { SetOperator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variable to operate on.</p>
     */
    inline const Aws::String& GetVariableName() const{ return m_variableName; }
    inline bool VariableNameHasBeenSet() const { return m_variableNameHasBeenSet; }
    inline void SetVariableName(const Aws::String& value) { m_variableNameHasBeenSet = true; m_variableName = value; }
    inline void SetVariableName(Aws::String&& value) { m_variableNameHasBeenSet = true; m_variableName = std::move(value); }
    inline void SetVariableName(const char* value) { m_variableNameHasBeenSet = true; m_variableName.assign(value); }
    inline CustomActionAttachmentCriteria& WithVariableName(const Aws::String& value) { SetVariableName(value); return *this;}
    inline CustomActionAttachmentCriteria& WithVariableName(Aws::String&& value) { SetVariableName(std::move(value)); return *this;}
    inline CustomActionAttachmentCriteria& WithVariableName(const char* value) { SetVariableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that is compared with the actual value of the variable based on the
     * behavior of the operator.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline CustomActionAttachmentCriteria& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline CustomActionAttachmentCriteria& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline CustomActionAttachmentCriteria& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    CustomActionAttachmentCriteriaOperator m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_variableName;
    bool m_variableNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
