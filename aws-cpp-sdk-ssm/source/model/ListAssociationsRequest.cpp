﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ssm/model/ListAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListAssociationsRequest::ListAssociationsRequest() : 
    m_associationFilterListHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListAssociationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_associationFilterListHasBeenSet)
  {
   Array<JsonValue> associationFilterListJsonList(m_associationFilterList.size());
   for(unsigned associationFilterListIndex = 0; associationFilterListIndex < associationFilterListJsonList.GetLength(); ++associationFilterListIndex)
   {
     associationFilterListJsonList[associationFilterListIndex].AsObject(m_associationFilterList[associationFilterListIndex].Jsonize());
   }
   payload.WithArray("AssociationFilterList", std::move(associationFilterListJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.ListAssociations"));
  return headers;

}



