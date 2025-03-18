/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IdMappingConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

IdMappingConfig::IdMappingConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingConfig& IdMappingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("allowUseAsDimensionColumn"))
  {
    m_allowUseAsDimensionColumn = jsonValue.GetBool("allowUseAsDimensionColumn");
    m_allowUseAsDimensionColumnHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_allowUseAsDimensionColumnHasBeenSet)
  {
   payload.WithBool("allowUseAsDimensionColumn", m_allowUseAsDimensionColumn);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
