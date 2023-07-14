/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DatasetSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

DatasetSchema::DatasetSchema() : 
    m_inlineDataSchemaHasBeenSet(false)
{
}

DatasetSchema::DatasetSchema(JsonView jsonValue) : 
    m_inlineDataSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSchema& DatasetSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InlineDataSchema"))
  {
    m_inlineDataSchema = jsonValue.GetString("InlineDataSchema");

    m_inlineDataSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSchema::Jsonize() const
{
  JsonValue payload;

  if(m_inlineDataSchemaHasBeenSet)
  {
   payload.WithString("InlineDataSchema", m_inlineDataSchema);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
