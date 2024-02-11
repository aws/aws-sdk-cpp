/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/IncrementalRunConfig.h>
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

IncrementalRunConfig::IncrementalRunConfig() : 
    m_incrementalRunType(IncrementalRunType::NOT_SET),
    m_incrementalRunTypeHasBeenSet(false)
{
}

IncrementalRunConfig::IncrementalRunConfig(JsonView jsonValue) : 
    m_incrementalRunType(IncrementalRunType::NOT_SET),
    m_incrementalRunTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IncrementalRunConfig& IncrementalRunConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("incrementalRunType"))
  {
    m_incrementalRunType = IncrementalRunTypeMapper::GetIncrementalRunTypeForName(jsonValue.GetString("incrementalRunType"));

    m_incrementalRunTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IncrementalRunConfig::Jsonize() const
{
  JsonValue payload;

  if(m_incrementalRunTypeHasBeenSet)
  {
   payload.WithString("incrementalRunType", IncrementalRunTypeMapper::GetNameForIncrementalRunType(m_incrementalRunType));
  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
