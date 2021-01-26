/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/WorkspaceAccessProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

WorkspaceAccessProperties::WorkspaceAccessProperties() : 
    m_deviceTypeWindows(AccessPropertyValue::NOT_SET),
    m_deviceTypeWindowsHasBeenSet(false),
    m_deviceTypeOsx(AccessPropertyValue::NOT_SET),
    m_deviceTypeOsxHasBeenSet(false),
    m_deviceTypeWeb(AccessPropertyValue::NOT_SET),
    m_deviceTypeWebHasBeenSet(false),
    m_deviceTypeIos(AccessPropertyValue::NOT_SET),
    m_deviceTypeIosHasBeenSet(false),
    m_deviceTypeAndroid(AccessPropertyValue::NOT_SET),
    m_deviceTypeAndroidHasBeenSet(false),
    m_deviceTypeChromeOs(AccessPropertyValue::NOT_SET),
    m_deviceTypeChromeOsHasBeenSet(false),
    m_deviceTypeZeroClient(AccessPropertyValue::NOT_SET),
    m_deviceTypeZeroClientHasBeenSet(false)
{
}

WorkspaceAccessProperties::WorkspaceAccessProperties(JsonView jsonValue) : 
    m_deviceTypeWindows(AccessPropertyValue::NOT_SET),
    m_deviceTypeWindowsHasBeenSet(false),
    m_deviceTypeOsx(AccessPropertyValue::NOT_SET),
    m_deviceTypeOsxHasBeenSet(false),
    m_deviceTypeWeb(AccessPropertyValue::NOT_SET),
    m_deviceTypeWebHasBeenSet(false),
    m_deviceTypeIos(AccessPropertyValue::NOT_SET),
    m_deviceTypeIosHasBeenSet(false),
    m_deviceTypeAndroid(AccessPropertyValue::NOT_SET),
    m_deviceTypeAndroidHasBeenSet(false),
    m_deviceTypeChromeOs(AccessPropertyValue::NOT_SET),
    m_deviceTypeChromeOsHasBeenSet(false),
    m_deviceTypeZeroClient(AccessPropertyValue::NOT_SET),
    m_deviceTypeZeroClientHasBeenSet(false)
{
  *this = jsonValue;
}

WorkspaceAccessProperties& WorkspaceAccessProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeviceTypeWindows"))
  {
    m_deviceTypeWindows = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeWindows"));

    m_deviceTypeWindowsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeOsx"))
  {
    m_deviceTypeOsx = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeOsx"));

    m_deviceTypeOsxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeWeb"))
  {
    m_deviceTypeWeb = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeWeb"));

    m_deviceTypeWebHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeIos"))
  {
    m_deviceTypeIos = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeIos"));

    m_deviceTypeIosHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeAndroid"))
  {
    m_deviceTypeAndroid = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeAndroid"));

    m_deviceTypeAndroidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeChromeOs"))
  {
    m_deviceTypeChromeOs = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeChromeOs"));

    m_deviceTypeChromeOsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeviceTypeZeroClient"))
  {
    m_deviceTypeZeroClient = AccessPropertyValueMapper::GetAccessPropertyValueForName(jsonValue.GetString("DeviceTypeZeroClient"));

    m_deviceTypeZeroClientHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkspaceAccessProperties::Jsonize() const
{
  JsonValue payload;

  if(m_deviceTypeWindowsHasBeenSet)
  {
   payload.WithString("DeviceTypeWindows", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWindows));
  }

  if(m_deviceTypeOsxHasBeenSet)
  {
   payload.WithString("DeviceTypeOsx", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeOsx));
  }

  if(m_deviceTypeWebHasBeenSet)
  {
   payload.WithString("DeviceTypeWeb", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeWeb));
  }

  if(m_deviceTypeIosHasBeenSet)
  {
   payload.WithString("DeviceTypeIos", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeIos));
  }

  if(m_deviceTypeAndroidHasBeenSet)
  {
   payload.WithString("DeviceTypeAndroid", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeAndroid));
  }

  if(m_deviceTypeChromeOsHasBeenSet)
  {
   payload.WithString("DeviceTypeChromeOs", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeChromeOs));
  }

  if(m_deviceTypeZeroClientHasBeenSet)
  {
   payload.WithString("DeviceTypeZeroClient", AccessPropertyValueMapper::GetNameForAccessPropertyValue(m_deviceTypeZeroClient));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
