/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeviceInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

DeviceInfo::DeviceInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

DeviceInfo& DeviceInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PlatformName"))
  {
    m_platformName = jsonValue.GetString("PlatformName");
    m_platformNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");
    m_platformVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OperatingSystem"))
  {
    m_operatingSystem = jsonValue.GetString("OperatingSystem");
    m_operatingSystemHasBeenSet = true;
  }
  return *this;
}

JsonValue DeviceInfo::Jsonize() const
{
  JsonValue payload;

  if(m_platformNameHasBeenSet)
  {
   payload.WithString("PlatformName", m_platformName);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", m_operatingSystem);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
