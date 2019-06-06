/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/OpsItemDataValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

OpsItemDataValue::OpsItemDataValue() : 
    m_valueHasBeenSet(false),
    m_type(OpsItemDataType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

OpsItemDataValue::OpsItemDataValue(JsonView jsonValue) : 
    m_valueHasBeenSet(false),
    m_type(OpsItemDataType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

OpsItemDataValue& OpsItemDataValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = OpsItemDataTypeMapper::GetOpsItemDataTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsItemDataValue::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OpsItemDataTypeMapper::GetNameForOpsItemDataType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
