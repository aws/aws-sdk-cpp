/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/ListObjectParentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListObjectParentsRequest::ListObjectParentsRequest() : 
    m_directoryArnHasBeenSet(false),
    m_objectReferenceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_consistencyLevel(ConsistencyLevel::NOT_SET),
    m_consistencyLevelHasBeenSet(false),
    m_includeAllLinksToEachParent(false),
    m_includeAllLinksToEachParentHasBeenSet(false)
{
}

Aws::String ListObjectParentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_includeAllLinksToEachParentHasBeenSet)
  {
   payload.WithBool("IncludeAllLinksToEachParent", m_includeAllLinksToEachParent);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListObjectParentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  if(m_consistencyLevelHasBeenSet)
  {
    headers.emplace("x-amz-consistency-level", ConsistencyLevelMapper::GetNameForConsistencyLevel(m_consistencyLevel));
  }

  return headers;

}




