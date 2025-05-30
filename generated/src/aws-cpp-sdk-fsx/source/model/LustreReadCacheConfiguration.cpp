/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreReadCacheConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

LustreReadCacheConfiguration::LustreReadCacheConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

LustreReadCacheConfiguration& LustreReadCacheConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SizingMode"))
  {
    m_sizingMode = LustreReadCacheSizingModeMapper::GetLustreReadCacheSizingModeForName(jsonValue.GetString("SizingMode"));
    m_sizingModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizeGiB"))
  {
    m_sizeGiB = jsonValue.GetInteger("SizeGiB");
    m_sizeGiBHasBeenSet = true;
  }
  return *this;
}

JsonValue LustreReadCacheConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sizingModeHasBeenSet)
  {
   payload.WithString("SizingMode", LustreReadCacheSizingModeMapper::GetNameForLustreReadCacheSizingMode(m_sizingMode));
  }

  if(m_sizeGiBHasBeenSet)
  {
   payload.WithInteger("SizeGiB", m_sizeGiB);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
