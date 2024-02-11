/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxCacheStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxCacheStorageConfiguration::KxCacheStorageConfiguration() : 
    m_typeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
}

KxCacheStorageConfiguration::KxCacheStorageConfiguration(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

KxCacheStorageConfiguration& KxCacheStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetInteger("size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue KxCacheStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInteger("size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
