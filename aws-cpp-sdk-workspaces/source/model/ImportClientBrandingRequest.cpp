/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImportClientBrandingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportClientBrandingRequest::ImportClientBrandingRequest() : 
    m_resourceIdHasBeenSet(false),
    m_deviceTypeWindowsHasBeenSet(false),
    m_deviceTypeOsxHasBeenSet(false),
    m_deviceTypeAndroidHasBeenSet(false),
    m_deviceTypeIosHasBeenSet(false),
    m_deviceTypeLinuxHasBeenSet(false),
    m_deviceTypeWebHasBeenSet(false)
{
}

Aws::String ImportClientBrandingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_deviceTypeWindowsHasBeenSet)
  {
   payload.WithObject("DeviceTypeWindows", m_deviceTypeWindows.Jsonize());

  }

  if(m_deviceTypeOsxHasBeenSet)
  {
   payload.WithObject("DeviceTypeOsx", m_deviceTypeOsx.Jsonize());

  }

  if(m_deviceTypeAndroidHasBeenSet)
  {
   payload.WithObject("DeviceTypeAndroid", m_deviceTypeAndroid.Jsonize());

  }

  if(m_deviceTypeIosHasBeenSet)
  {
   payload.WithObject("DeviceTypeIos", m_deviceTypeIos.Jsonize());

  }

  if(m_deviceTypeLinuxHasBeenSet)
  {
   payload.WithObject("DeviceTypeLinux", m_deviceTypeLinux.Jsonize());

  }

  if(m_deviceTypeWebHasBeenSet)
  {
   payload.WithObject("DeviceTypeWeb", m_deviceTypeWeb.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ImportClientBrandingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ImportClientBranding"));
  return headers;

}




