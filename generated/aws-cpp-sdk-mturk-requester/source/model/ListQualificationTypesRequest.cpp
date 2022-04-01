/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListQualificationTypesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.ListQualificationTypes"));
  return headers;

}




