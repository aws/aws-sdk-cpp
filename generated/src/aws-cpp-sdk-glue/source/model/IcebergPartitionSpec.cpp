/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergPartitionSpec.h>
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

IcebergPartitionSpec::IcebergPartitionSpec(JsonView jsonValue)
{
  *this = jsonValue;
}

IcebergPartitionSpec& IcebergPartitionSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Utils::Array<JsonView> fieldsJsonList = jsonValue.GetArray("Fields");
    for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
    {
      m_fields.push_back(fieldsJsonList[fieldsIndex].AsObject());
    }
    m_fieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SpecId"))
  {
    m_specId = jsonValue.GetInteger("SpecId");
    m_specIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IcebergPartitionSpec::Jsonize() const
{
  JsonValue payload;

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("Fields", std::move(fieldsJsonList));

  }

  if(m_specIdHasBeenSet)
  {
   payload.WithInteger("SpecId", m_specId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
