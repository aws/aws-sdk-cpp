/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/networkmanager/model/UpdateDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeviceRequest::UpdateDeviceRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_deviceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_serialNumberHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_siteIdHasBeenSet(false)
{
}

Aws::String UpdateDeviceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("Vendor", m_vendor);

  }

  if(m_modelHasBeenSet)
  {
   payload.WithString("Model", m_model);

  }

  if(m_serialNumberHasBeenSet)
  {
   payload.WithString("SerialNumber", m_serialNumber);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("Location", m_location.Jsonize());

  }

  if(m_siteIdHasBeenSet)
  {
   payload.WithString("SiteId", m_siteId);

  }

  return payload.View().WriteReadable();
}




