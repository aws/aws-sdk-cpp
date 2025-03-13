/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdatePortalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePortalRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_portalNameHasBeenSet)
  {
   payload.WithString("portalName", m_portalName);

  }

  if(m_portalDescriptionHasBeenSet)
  {
   payload.WithString("portalDescription", m_portalDescription);

  }

  if(m_portalContactEmailHasBeenSet)
  {
   payload.WithString("portalContactEmail", m_portalContactEmail);

  }

  if(m_portalLogoImageHasBeenSet)
  {
   payload.WithObject("portalLogoImage", m_portalLogoImage.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_notificationSenderEmailHasBeenSet)
  {
   payload.WithString("notificationSenderEmail", m_notificationSenderEmail);

  }

  if(m_alarmsHasBeenSet)
  {
   payload.WithObject("alarms", m_alarms.Jsonize());

  }

  if(m_portalTypeHasBeenSet)
  {
   payload.WithString("portalType", PortalTypeMapper::GetNameForPortalType(m_portalType));
  }

  if(m_portalTypeConfigurationHasBeenSet)
  {
   JsonValue portalTypeConfigurationJsonMap;
   for(auto& portalTypeConfigurationItem : m_portalTypeConfiguration)
   {
     portalTypeConfigurationJsonMap.WithObject(portalTypeConfigurationItem.first, portalTypeConfigurationItem.second.Jsonize());
   }
   payload.WithObject("portalTypeConfiguration", std::move(portalTypeConfigurationJsonMap));

  }

  return payload.View().WriteReadable();
}




