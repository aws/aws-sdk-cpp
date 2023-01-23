/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/GetWorkGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Athena::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetWorkGroupRequest::GetWorkGroupRequest() : 
    m_workGroupHasBeenSet(false)
{
}

Aws::String GetWorkGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workGroupHasBeenSet)
  {
   payload.WithString("WorkGroup", m_workGroup);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetWorkGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonAthena.GetWorkGroup"));
  return headers;

}




