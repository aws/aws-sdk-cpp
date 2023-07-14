/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DiskMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DiskMap::DiskMap() : 
    m_originalDiskPathHasBeenSet(false),
    m_newDiskNameHasBeenSet(false)
{
}

DiskMap::DiskMap(JsonView jsonValue) : 
    m_originalDiskPathHasBeenSet(false),
    m_newDiskNameHasBeenSet(false)
{
  *this = jsonValue;
}

DiskMap& DiskMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("originalDiskPath"))
  {
    m_originalDiskPath = jsonValue.GetString("originalDiskPath");

    m_originalDiskPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("newDiskName"))
  {
    m_newDiskName = jsonValue.GetString("newDiskName");

    m_newDiskNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DiskMap::Jsonize() const
{
  JsonValue payload;

  if(m_originalDiskPathHasBeenSet)
  {
   payload.WithString("originalDiskPath", m_originalDiskPath);

  }

  if(m_newDiskNameHasBeenSet)
  {
   payload.WithString("newDiskName", m_newDiskName);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
