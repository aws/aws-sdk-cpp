/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/Dataset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

Dataset::Dataset(JsonView jsonValue)
{
  *this = jsonValue;
}

Dataset& Dataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("inputConfig");
    m_inputConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Dataset::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DatasetTypeMapper::GetNameForDatasetType(m_type));
  }

  if(m_inputConfigHasBeenSet)
  {
   payload.WithObject("inputConfig", m_inputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
