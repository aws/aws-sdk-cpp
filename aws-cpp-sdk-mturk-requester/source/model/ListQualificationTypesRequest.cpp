/*
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
#include <aws/mturk-requester/model/ListQualificationTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListQualificationTypesRequest::ListQualificationTypesRequest() : 
    m_queryHasBeenSet(false),
    m_mustBeRequestable(false),
    m_mustBeRequestableHasBeenSet(false),
    m_mustBeOwnedByCaller(false),
    m_mustBeOwnedByCallerHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListQualificationTypesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_queryHasBeenSet)
  {
   payload.WithString("Query", m_query);

  }

  if(m_mustBeRequestableHasBeenSet)
  {
   payload.WithBool("MustBeRequestable", m_mustBeRequestable);

  }

  if(m_mustBeOwnedByCallerHasBeenSet)
  {
   payload.WithBool("MustBeOwnedByCaller", m_mustBeOwnedByCaller);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection ListQualificationTypesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ListQualificationTypes"));
  return headers;

}




