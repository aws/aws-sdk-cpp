/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/PutCapacityAssignmentConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutCapacityAssignmentConfigurationRequest::PutCapacityAssignmentConfigurationRequest() : 
    m_capacityReservationNameHasBeenSet(false),
    m_capacityAssignmentsHasBeenSet(false)
{
}

Aws::String PutCapacityAssignmentConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityReservationNameHasBeenSet)
  {
   payload.WithString("CapacityReservationName", m_capacityReservationName);

  }

  if(m_capacityAssignmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityAssignmentsJsonList(m_capacityAssignments.size());
   for(unsigned capacityAssignmentsIndex = 0; capacityAssignmentsIndex < capacityAssignmentsJsonList.GetLength(); ++capacityAssignmentsIndex)
   {
     capacityAssignmentsJsonList[capacityAssignmentsIndex].AsObject(m_capacityAssignments[capacityAssignmentsIndex].Jsonize());
   }
   payload.WithArray("CapacityAssignments", std::move(capacityAssignmentsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutCapacityAssignmentConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.PutCapacityAssignmentConfiguration"));
  return headers;

}




