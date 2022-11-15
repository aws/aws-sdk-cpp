/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> associationFilterListJsonList(m_associationFilterList.size());
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListAssociationsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonSSM.ListAssociations"));
  return headers;

}




