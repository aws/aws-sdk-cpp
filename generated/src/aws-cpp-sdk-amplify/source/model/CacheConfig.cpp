/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/CacheConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

CacheConfig::CacheConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

CacheConfig& CacheConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = CacheConfigTypeMapper::GetCacheConfigTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue CacheConfig::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", CacheConfigTypeMapper::GetNameForCacheConfigType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
