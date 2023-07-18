/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateDeviceFleetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDeviceFleetRequest::UpdateDeviceFleetRequest() : 
    m_deviceFleetNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_outputConfigHasBeenSet(false),
    m_enableIotRoleAlias(false),
    m_enableIotRoleAliasHasBeenSet(false)
{
}

Aws::String UpdateDeviceFleetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceFleetNameHasBeenSet)
  {
   payload.WithString("DeviceFleetName", m_deviceFleetName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_outputConfigHasBeenSet)
  {
   payload.WithObject("OutputConfig", m_outputConfig.Jsonize());

  }

  if(m_enableIotRoleAliasHasBeenSet)
  {
   payload.WithBool("EnableIotRoleAlias", m_enableIotRoleAlias);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDeviceFleetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateDeviceFleet"));
  return headers;

}




