/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IdMappingIncrementalRunConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

IdMappingIncrementalRunConfig::IdMappingIncrementalRunConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

IdMappingIncrementalRunConfig& IdMappingIncrementalRunConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("incrementalRunType"))
  {
    m_incrementalRunType = IdMappingIncrementalRunTypeMapper::GetIdMappingIncrementalRunTypeForName(jsonValue.GetString("incrementalRunType"));
    m_incrementalRunTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue IdMappingIncrementalRunConfig::Jsonize() const
{
  JsonValue payload;

  if(m_incrementalRunTypeHasBeenSet)
  {
   payload.WithString("incrementalRunType", IdMappingIncrementalRunTypeMapper::GetNameForIdMappingIncrementalRunType(m_incrementalRunType));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
