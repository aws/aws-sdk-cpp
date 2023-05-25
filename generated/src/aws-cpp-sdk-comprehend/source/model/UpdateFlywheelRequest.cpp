/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/UpdateFlywheelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFlywheelRequest::UpdateFlywheelRequest() : 
    m_flywheelArnHasBeenSet(false),
    m_activeModelArnHasBeenSet(false),
    m_dataAccessRoleArnHasBeenSet(false),
    m_dataSecurityConfigHasBeenSet(false)
{
}

Aws::String UpdateFlywheelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  if(m_activeModelArnHasBeenSet)
  {
   payload.WithString("ActiveModelArn", m_activeModelArn);

  }

  if(m_dataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DataAccessRoleArn", m_dataAccessRoleArn);

  }

  if(m_dataSecurityConfigHasBeenSet)
  {
   payload.WithObject("DataSecurityConfig", m_dataSecurityConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFlywheelRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.UpdateFlywheel"));
  return headers;

}




