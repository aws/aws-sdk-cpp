﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/UpdateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_desiredModelArnHasBeenSet)
  {
   payload.WithString("DesiredModelArn", m_desiredModelArn);

  }

  if(m_desiredInferenceUnitsHasBeenSet)
  {
   payload.WithInteger("DesiredInferenceUnits", m_desiredInferenceUnits);

  }

  if(m_desiredDataAccessRoleArnHasBeenSet)
  {
   payload.WithString("DesiredDataAccessRoleArn", m_desiredDataAccessRoleArn);

  }

  if(m_flywheelArnHasBeenSet)
  {
   payload.WithString("FlywheelArn", m_flywheelArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Comprehend_20171127.UpdateEndpoint"));
  return headers;

}




