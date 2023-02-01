/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DeleteLocationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteLocationRequest::DeleteLocationRequest() : 
    m_locationNameHasBeenSet(false)
{
}

Aws::String DeleteLocationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationNameHasBeenSet)
  {
   payload.WithString("LocationName", m_locationName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteLocationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.DeleteLocation"));
  return headers;

}




