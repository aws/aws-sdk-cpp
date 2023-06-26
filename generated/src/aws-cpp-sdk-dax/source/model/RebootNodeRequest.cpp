/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/RebootNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RebootNodeRequest::RebootNodeRequest() : 
    m_clusterNameHasBeenSet(false),
    m_nodeIdHasBeenSet(false)
{
}

Aws::String RebootNodeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RebootNodeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDAXV3.RebootNode"));
  return headers;

}




