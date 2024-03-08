/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/GetRepositoryLinkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRepositoryLinkRequest::GetRepositoryLinkRequest() : 
    m_repositoryLinkIdHasBeenSet(false)
{
}

Aws::String GetRepositoryLinkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryLinkIdHasBeenSet)
  {
   payload.WithString("RepositoryLinkId", m_repositoryLinkId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetRepositoryLinkRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.GetRepositoryLink"));
  return headers;

}




