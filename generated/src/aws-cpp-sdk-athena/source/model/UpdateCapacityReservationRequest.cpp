/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UpdateCapacityReservationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCapacityReservationRequest::UpdateCapacityReservationRequest() : 
    m_targetDpus(0),
    m_targetDpusHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateCapacityReservationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_targetDpusHasBeenSet)
  {
   payload.WithInteger("TargetDpus", m_targetDpus);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateCapacityReservationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.UpdateCapacityReservation"));
  return headers;

}




