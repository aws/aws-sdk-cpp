/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/CodegenGenericDataField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

CodegenGenericDataField::CodegenGenericDataField() : 
    m_dataType(CodegenGenericDataFieldDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_dataTypeValueHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_isArray(false),
    m_isArrayHasBeenSet(false),
    m_relationshipHasBeenSet(false)
{
}

CodegenGenericDataField::CodegenGenericDataField(JsonView jsonValue) : 
    m_dataType(CodegenGenericDataFieldDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_dataTypeValueHasBeenSet(false),
    m_required(false),
    m_requiredHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_isArray(false),
    m_isArrayHasBeenSet(false),
    m_relationshipHasBeenSet(false)
{
  *this = jsonValue;
}

CodegenGenericDataField& CodegenGenericDataField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = CodegenGenericDataFieldDataTypeMapper::GetCodegenGenericDataFieldDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataTypeValue"))
  {
    m_dataTypeValue = jsonValue.GetString("dataTypeValue");

    m_dataTypeValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("required"))
  {
    m_required = jsonValue.GetBool("required");

    m_requiredHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readOnly"))
  {
    m_readOnly = jsonValue.GetBool("readOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isArray"))
  {
    m_isArray = jsonValue.GetBool("isArray");

    m_isArrayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationship"))
  {
    m_relationship = jsonValue.GetObject("relationship");

    m_relationshipHasBeenSet = true;
  }

  return *this;
}

JsonValue CodegenGenericDataField::Jsonize() const
{
  JsonValue payload;

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", CodegenGenericDataFieldDataTypeMapper::GetNameForCodegenGenericDataFieldDataType(m_dataType));
  }

  if(m_dataTypeValueHasBeenSet)
  {
   payload.WithString("dataTypeValue", m_dataTypeValue);

  }

  if(m_requiredHasBeenSet)
  {
   payload.WithBool("required", m_required);

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("readOnly", m_readOnly);

  }

  if(m_isArrayHasBeenSet)
  {
   payload.WithBool("isArray", m_isArray);

  }

  if(m_relationshipHasBeenSet)
  {
   payload.WithObject("relationship", m_relationship.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
