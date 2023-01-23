/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/UpdateServiceSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceSettingsRequest::UpdateServiceSettingsRequest() : 
    m_allowUpdate(false),
    m_allowUpdateHasBeenSet(false),
    m_linuxSubscriptionsDiscovery(LinuxSubscriptionsDiscovery::NOT_SET),
    m_linuxSubscriptionsDiscoveryHasBeenSet(false),
    m_linuxSubscriptionsDiscoverySettingsHasBeenSet(false)
{
}

Aws::String UpdateServiceSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_allowUpdateHasBeenSet)
  {
   payload.WithBool("AllowUpdate", m_allowUpdate);

  }

  if(m_linuxSubscriptionsDiscoveryHasBeenSet)
  {
   payload.WithString("LinuxSubscriptionsDiscovery", LinuxSubscriptionsDiscoveryMapper::GetNameForLinuxSubscriptionsDiscovery(m_linuxSubscriptionsDiscovery));
  }

  if(m_linuxSubscriptionsDiscoverySettingsHasBeenSet)
  {
   payload.WithObject("LinuxSubscriptionsDiscoverySettings", m_linuxSubscriptionsDiscoverySettings.Jsonize());

  }

  return payload.View().WriteReadable();
}




