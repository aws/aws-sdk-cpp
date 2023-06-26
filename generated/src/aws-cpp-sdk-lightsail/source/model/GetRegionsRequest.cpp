/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/GetRegionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRegionsRequest::GetRegionsRequest() : 
    m_includeAvailabilityZones(false),
    m_includeAvailabilityZonesHasBeenSet(false),
    m_includeRelationalDatabaseAvailabilityZones(false),
    m_includeRelationalDatabaseAvailabilityZonesHasBeenSet(false)
{
}

Aws::String GetRegionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_includeAvailabilityZonesHasBeenSet)
  {
   payload.WithBool("includeAvailabilityZones", m_includeAvailabilityZones);

  }

  if(m_includeRelationalDatabaseAvailabilityZonesHasBeenSet)
  {
   payload.WithBool("includeRelationalDatabaseAvailabilityZones", m_includeRelationalDatabaseAvailabilityZones);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRegionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.GetRegions"));
  return headers;

}




