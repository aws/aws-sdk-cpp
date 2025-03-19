/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/CustomActionAttachmentCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

CustomActionAttachmentCriteria::CustomActionAttachmentCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomActionAttachmentCriteria& CustomActionAttachmentCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Operator"))
  {
    m_operator = CustomActionAttachmentCriteriaOperatorMapper::GetCustomActionAttachmentCriteriaOperatorForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VariableName"))
  {
    m_variableName = jsonValue.GetString("VariableName");
    m_variableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomActionAttachmentCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_operatorHasBeenSet)
  {
   payload.WithString("Operator", CustomActionAttachmentCriteriaOperatorMapper::GetNameForCustomActionAttachmentCriteriaOperator(m_operator));
  }

  if(m_variableNameHasBeenSet)
  {
   payload.WithString("VariableName", m_variableName);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
