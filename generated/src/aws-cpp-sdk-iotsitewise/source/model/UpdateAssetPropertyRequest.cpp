/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateAssetPropertyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAssetPropertyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_propertyAliasHasBeenSet)
  {
   payload.WithString("propertyAlias", m_propertyAlias);

  }

  if(m_propertyNotificationStateHasBeenSet)
  {
   payload.WithString("propertyNotificationState", PropertyNotificationStateMapper::GetNameForPropertyNotificationState(m_propertyNotificationState));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_propertyUnitHasBeenSet)
  {
   payload.WithString("propertyUnit", m_propertyUnit);

  }

  return payload.View().WriteReadable();
}




