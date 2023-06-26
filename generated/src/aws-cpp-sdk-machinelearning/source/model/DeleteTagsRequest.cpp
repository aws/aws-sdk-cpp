/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DeleteTagsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MachineLearning::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteTagsRequest::DeleteTagsRequest() : 
    m_tagKeysHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(TaggableResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

Aws::String DeleteTagsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_tagKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
   for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
   {
     tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
   }
   payload.WithArray("TagKeys", std::move(tagKeysJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", TaggableResourceTypeMapper::GetNameForTaggableResourceType(m_resourceType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteTagsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonML_20141212.DeleteTags"));
  return headers;

}




