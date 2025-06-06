﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetCapacityAssignmentConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCapacityAssignmentConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityReservationNameHasBeenSet)
  {
   payload.WithString("CapacityReservationName", m_capacityReservationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetCapacityAssignmentConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetCapacityAssignmentConfiguration"));
  return headers;

}




