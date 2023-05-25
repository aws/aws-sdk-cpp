/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformConfigParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

TransformConfigParameter::TransformConfigParameter() : 
    m_nameHasBeenSet(false),
    m_type(ParamType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validationRuleHasBeenSet(false),
    m_validationMessageHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_listType(ParamType::NOT_SET),
    m_listTypeHasBeenSet(false),
    m_isOptional(false),
    m_isOptionalHasBeenSet(false)
{
}

TransformConfigParameter::TransformConfigParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ParamType::NOT_SET),
    m_typeHasBeenSet(false),
    m_validationRuleHasBeenSet(false),
    m_validationMessageHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_listType(ParamType::NOT_SET),
    m_listTypeHasBeenSet(false),
    m_isOptional(false),
    m_isOptionalHasBeenSet(false)
{
  *this = jsonValue;
}

TransformConfigParameter& TransformConfigParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ParamTypeMapper::GetParamTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationRule"))
  {
    m_validationRule = jsonValue.GetString("ValidationRule");

    m_validationRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValidationMessage"))
  {
    m_validationMessage = jsonValue.GetString("ValidationMessage");

    m_validationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Value"))
  {
    Aws::Utils::Array<JsonView> valueJsonList = jsonValue.GetArray("Value");
    for(unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex)
    {
      m_value.push_back(valueJsonList[valueIndex].AsString());
    }
    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ListType"))
  {
    m_listType = ParamTypeMapper::GetParamTypeForName(jsonValue.GetString("ListType"));

    m_listTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsOptional"))
  {
    m_isOptional = jsonValue.GetBool("IsOptional");

    m_isOptionalHasBeenSet = true;
  }

  return *this;
}

JsonValue TransformConfigParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ParamTypeMapper::GetNameForParamType(m_type));
  }

  if(m_validationRuleHasBeenSet)
  {
   payload.WithString("ValidationRule", m_validationRule);

  }

  if(m_validationMessageHasBeenSet)
  {
   payload.WithString("ValidationMessage", m_validationMessage);

  }

  if(m_valueHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valueJsonList(m_value.size());
   for(unsigned valueIndex = 0; valueIndex < valueJsonList.GetLength(); ++valueIndex)
   {
     valueJsonList[valueIndex].AsString(m_value[valueIndex]);
   }
   payload.WithArray("Value", std::move(valueJsonList));

  }

  if(m_listTypeHasBeenSet)
  {
   payload.WithString("ListType", ParamTypeMapper::GetNameForParamType(m_listType));
  }

  if(m_isOptionalHasBeenSet)
  {
   payload.WithBool("IsOptional", m_isOptional);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
