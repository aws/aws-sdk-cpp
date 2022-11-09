/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchCasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchCasesRequest::SearchCasesRequest() : 
    m_domainIdHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_searchTermHasBeenSet(false),
    m_sortsHasBeenSet(false)
{
}

Aws::String SearchCasesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldsJsonList(m_fields.size());
   for(unsigned fieldsIndex = 0; fieldsIndex < fieldsJsonList.GetLength(); ++fieldsIndex)
   {
     fieldsJsonList[fieldsIndex].AsObject(m_fields[fieldsIndex].Jsonize());
   }
   payload.WithArray("fields", std::move(fieldsJsonList));

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_searchTermHasBeenSet)
  {
   payload.WithString("searchTerm", m_searchTerm);

  }

  if(m_sortsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortsJsonList(m_sorts.size());
   for(unsigned sortsIndex = 0; sortsIndex < sortsJsonList.GetLength(); ++sortsIndex)
   {
     sortsJsonList[sortsIndex].AsObject(m_sorts[sortsIndex].Jsonize());
   }
   payload.WithArray("sorts", std::move(sortsJsonList));

  }

  return payload.View().WriteReadable();
}




