/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/GetEventSelectorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEventSelectorsRequest::GetEventSelectorsRequest() : 
    m_trailNameHasBeenSet(false)
{
}

Aws::String GetEventSelectorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_trailNameHasBeenSet)
  {
   payload.WithString("TrailName", m_trailName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetEventSelectorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.cloudtrail.v20131101.CloudTrail_20131101.GetEventSelectors"));
  return headers;

}




