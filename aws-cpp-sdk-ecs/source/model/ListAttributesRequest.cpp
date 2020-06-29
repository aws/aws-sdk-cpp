/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ListAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAttributesRequest::ListAttributesRequest() : 
    m_clusterHasBeenSet(false),
    m_targetType(TargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_targetTypeHasBeenSet)
  {
   payload.WithString("targetType", TargetTypeMapper::GetNameForTargetType(m_targetType));
  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", m_attributeName);

  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("attributeValue", m_attributeValue);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.ListAttributes"));
  return headers;

}




