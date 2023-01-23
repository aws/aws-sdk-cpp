/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/PreloadDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

PreloadDataConfig::PreloadDataConfig() : 
    m_preloadDataType(PreloadDataType::NOT_SET),
    m_preloadDataTypeHasBeenSet(false)
{
}

PreloadDataConfig::PreloadDataConfig(JsonView jsonValue) : 
    m_preloadDataType(PreloadDataType::NOT_SET),
    m_preloadDataTypeHasBeenSet(false)
{
  *this = jsonValue;
}

PreloadDataConfig& PreloadDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PreloadDataType"))
  {
    m_preloadDataType = PreloadDataTypeMapper::GetPreloadDataTypeForName(jsonValue.GetString("PreloadDataType"));

    m_preloadDataTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue PreloadDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_preloadDataTypeHasBeenSet)
  {
   payload.WithString("PreloadDataType", PreloadDataTypeMapper::GetNameForPreloadDataType(m_preloadDataType));
  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
