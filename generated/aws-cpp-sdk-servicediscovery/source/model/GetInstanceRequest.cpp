/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/GetInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetInstanceRequest::GetInstanceRequest() : 
    m_serviceIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String GetInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Route53AutoNaming_v20170314.GetInstance"));
  return headers;

}




