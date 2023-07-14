/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/CreateHarvestJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaPackage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateHarvestJobRequest::CreateHarvestJobRequest() : 
    m_endTimeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_originEndpointIdHasBeenSet(false),
    m_s3DestinationHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

Aws::String CreateHarvestJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_originEndpointIdHasBeenSet)
  {
   payload.WithString("originEndpointId", m_originEndpointId);

  }

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("s3Destination", m_s3Destination.Jsonize());

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  return payload.View().WriteReadable();
}




