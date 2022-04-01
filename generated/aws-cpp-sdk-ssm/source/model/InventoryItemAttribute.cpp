/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InventoryItemAttribute::InventoryItemAttribute(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dataType(InventoryAttributeDataType::NOT_SET),
    m_dataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InventoryItemAttribute& InventoryItemAttribute::operator =(JsonView jsonValue)
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
