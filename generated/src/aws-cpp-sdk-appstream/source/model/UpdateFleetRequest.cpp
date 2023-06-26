/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFleetRequest::UpdateFleetRequest() : 
    m_imageNameHasBeenSet(false),
    m_imageArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_computeCapacityHasBeenSet(false),
    m_vpcConfigHasBeenSet(false),
    m_maxUserDurationInSeconds(0),
    m_maxUserDurationInSecondsHasBeenSet(false),
    m_disconnectTimeoutInSeconds(0),
    m_disconnectTimeoutInSecondsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_enableDefaultInternetAccess(false),
    m_enableDefaultInternetAccessHasBeenSet(false),
    m_domainJoinInfoHasBeenSet(false),
    m_idleDisconnectTimeoutInSeconds(0),
    m_idleDisconnectTimeoutInSecondsHasBeenSet(false),
    m_attributesToDeleteHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_streamView(StreamView::NOT_SET),
    m_streamViewHasBeenSet(false),
    m_platform(PlatformType::NOT_SET),
    m_platformHasBeenSet(false),
    m_maxConcurrentSessions(0),
    m_maxConcurrentSessionsHasBeenSet(false),
    m_usbDeviceFilterStringsHasBeenSet(false),
    m_sessionScriptS3LocationHasBeenSet(false)
{
}

Aws::String UpdateFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageArnHasBeenSet)
  {
   payload.WithString("ImageArn", m_imageArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_computeCapacityHasBeenSet)
  {
   payload.WithObject("ComputeCapacity", m_computeCapacity.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());

  }

  if(m_maxUserDurationInSecondsHasBeenSet)
  {
   payload.WithInteger("MaxUserDurationInSeconds", m_maxUserDurationInSeconds);

  }

  if(m_disconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("DisconnectTimeoutInSeconds", m_disconnectTimeoutInSeconds);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_enableDefaultInternetAccessHasBeenSet)
  {
   payload.WithBool("EnableDefaultInternetAccess", m_enableDefaultInternetAccess);

  }

  if(m_domainJoinInfoHasBeenSet)
  {
   payload.WithObject("DomainJoinInfo", m_domainJoinInfo.Jsonize());

  }

  if(m_idleDisconnectTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("IdleDisconnectTimeoutInSeconds", m_idleDisconnectTimeoutInSeconds);

  }

  if(m_attributesToDeleteHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesToDeleteJsonList(m_attributesToDelete.size());
   for(unsigned attributesToDeleteIndex = 0; attributesToDeleteIndex < attributesToDeleteJsonList.GetLength(); ++attributesToDeleteIndex)
   {
     attributesToDeleteJsonList[attributesToDeleteIndex].AsString(FleetAttributeMapper::GetNameForFleetAttribute(m_attributesToDelete[attributesToDeleteIndex]));
   }
   payload.WithArray("AttributesToDelete", std::move(attributesToDeleteJsonList));

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_streamViewHasBeenSet)
  {
   payload.WithString("StreamView", StreamViewMapper::GetNameForStreamView(m_streamView));
  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", PlatformTypeMapper::GetNameForPlatformType(m_platform));
  }

  if(m_maxConcurrentSessionsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentSessions", m_maxConcurrentSessions);

  }

  if(m_usbDeviceFilterStringsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> usbDeviceFilterStringsJsonList(m_usbDeviceFilterStrings.size());
   for(unsigned usbDeviceFilterStringsIndex = 0; usbDeviceFilterStringsIndex < usbDeviceFilterStringsJsonList.GetLength(); ++usbDeviceFilterStringsIndex)
   {
     usbDeviceFilterStringsJsonList[usbDeviceFilterStringsIndex].AsString(m_usbDeviceFilterStrings[usbDeviceFilterStringsIndex]);
   }
   payload.WithArray("UsbDeviceFilterStrings", std::move(usbDeviceFilterStringsJsonList));

  }

  if(m_sessionScriptS3LocationHasBeenSet)
  {
   payload.WithObject("SessionScriptS3Location", m_sessionScriptS3Location.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.UpdateFleet"));
  return headers;

}




