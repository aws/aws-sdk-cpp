/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/DeleteLicenseServerEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerUserSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteLicenseServerEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_licenseServerEndpointArnHasBeenSet)
  {
   payload.WithString("LicenseServerEndpointArn", m_licenseServerEndpointArn);

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("ServerType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  return payload.View().WriteReadable();
}




