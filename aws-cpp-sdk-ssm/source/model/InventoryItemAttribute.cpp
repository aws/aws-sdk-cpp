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

#include <aws/ssm/model/InventoryItemAttribute.h>
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

InventoryItemAttribute::InventoryItemAttribute() : 
    m_nameHasBeenSet(false),
    m_dataType(InventoryAttributeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false)
{
}

InventoryItemAttribute::InventoryItemAttribute(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_dataType(InventoryAttributeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryItemAttribute& InventoryItemAttribute::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataType"))
  {
    m_dataType = InventoryAttributeDataTypeMapper::GetInventoryAttributeDataTypeForName(jsonValue.GetString("DataType"));

    m_dataTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InventoryItemAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("DataType", InventoryAttributeDataTypeMapper::GetNameForInventoryAttributeDataType(m_dataType));
  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws