/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

CacheAttributes::CacheAttributes() : 
    m_cacheStaleTimeoutInSeconds(0),
    m_cacheStaleTimeoutInSecondsHasBeenSet(false)
{
}

CacheAttributes::CacheAttributes(JsonView jsonValue) : 
    m_cacheStaleTimeoutInSeconds(0),
    m_cacheStaleTimeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

CacheAttributes& CacheAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CacheStaleTimeoutInSeconds"))
  {
    m_cacheStaleTimeoutInSeconds = jsonValue.GetInteger("CacheStaleTimeoutInSeconds");

    m_cacheStaleTimeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue CacheAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_cacheStaleTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("CacheStaleTimeoutInSeconds", m_cacheStaleTimeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
