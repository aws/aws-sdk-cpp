/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/OSUpdateSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

OSUpdateSettings::OSUpdateSettings() : 
    m_oSVersion(OSVersion::NOT_SET),
    m_oSVersionHasBeenSet(false)
{
}

OSUpdateSettings::OSUpdateSettings(JsonView jsonValue) : 
    m_oSVersion(OSVersion::NOT_SET),
    m_oSVersionHasBeenSet(false)
{
  *this = jsonValue;
}

OSUpdateSettings& OSUpdateSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OSVersion"))
  {
    m_oSVersion = OSVersionMapper::GetOSVersionForName(jsonValue.GetString("OSVersion"));

    m_oSVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue OSUpdateSettings::Jsonize() const
{
  JsonValue payload;

  if(m_oSVersionHasBeenSet)
  {
   payload.WithString("OSVersion", OSVersionMapper::GetNameForOSVersion(m_oSVersion));
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
