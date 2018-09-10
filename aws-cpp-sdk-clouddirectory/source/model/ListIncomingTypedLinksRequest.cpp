﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/clouddirectory/model/ListIncomingTypedLinksRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListIncomingTypedLinksRequest::ListIncomingTypedLinksRequest() : 
    m_directoryArnHasBeenSet(false),
    m_objectReferenceHasBeenSet(false),
    m_filterAttributeRangesHasBeenSet(false),
    m_filterTypedLinkHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_consistencyLevel(ConsistencyLevel::NOT_SET),
    m_consistencyLevelHasBeenSet(false)
{
}

Aws::String ListIncomingTypedLinksRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectReferenceHasBeenSet)
  {
   payload.WithObject("ObjectReference", m_objectReference.Jsonize());

  }

  if(m_filterAttributeRangesHasBeenSet)
  {
   Array<JsonValue> filterAttributeRangesJsonList(m_filterAttributeRanges.size());
   for(unsigned filterAttributeRangesIndex = 0; filterAttributeRangesIndex < filterAttributeRangesJsonList.GetLength(); ++filterAttributeRangesIndex)
   {
     filterAttributeRangesJsonList[filterAttributeRangesIndex].AsObject(m_filterAttributeRanges[filterAttributeRangesIndex].Jsonize());
   }
   payload.WithArray("FilterAttributeRanges", std::move(filterAttributeRangesJsonList));

  }

  if(m_filterTypedLinkHasBeenSet)
  {
   payload.WithObject("FilterTypedLink", m_filterTypedLink.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_consistencyLevelHasBeenSet)
  {
   payload.WithString("ConsistencyLevel", ConsistencyLevelMapper::GetNameForConsistencyLevel(m_consistencyLevel));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListIncomingTypedLinksRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_directoryArnHasBeenSet)
  {
    ss << m_directoryArn;
    headers.emplace("x-amz-data-partition",  ss.str());
    ss.str("");
  }

  return headers;

}




