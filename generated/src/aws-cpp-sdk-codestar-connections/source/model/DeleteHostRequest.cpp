/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/DeleteHostRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteHostRequest::DeleteHostRequest() : 
    m_hostArnHasBeenSet(false)
{
}

Aws::String DeleteHostRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hostArnHasBeenSet)
  {
   payload.WithString("HostArn", m_hostArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteHostRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.DeleteHost"));
  return headers;

}




