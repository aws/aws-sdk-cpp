/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/UntagResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UntagResourceRequest::UntagResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String UntagResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
   for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
   {
     tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
   }
   payload.WithArray("tagKeys", std::move(tagKeysJsonList));

  }

  return payload.View().WriteReadable();
}

void UntagResourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceArnHasBeenSet)
    {
      ss << m_resourceArn;
      uri.AddQueryStringParameter("resourceArn", ss.str());
      ss.str("");
    }

}



