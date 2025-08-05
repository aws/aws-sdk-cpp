/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PutAssetModelInterfaceRelationshipRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAssetModelInterfaceRelationshipRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_propertyMappingConfigurationHasBeenSet)
  {
   payload.WithObject("propertyMappingConfiguration", m_propertyMappingConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




