/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ColumnDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

ColumnDescription::ColumnDescription() : 
    m_nameHasBeenSet(false),
    m_type(ColumnType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ColumnDescription::ColumnDescription(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_type(ColumnType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnDescription& ColumnDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ColumnTypeMapper::GetColumnTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ColumnTypeMapper::GetNameForColumnType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
