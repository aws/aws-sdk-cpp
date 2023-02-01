/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListDataQualityRulesetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListDataQualityRulesetsRequest::ListDataQualityRulesetsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ListDataQualityRulesetsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("Filter", m_filter.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListDataQualityRulesetsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.ListDataQualityRulesets"));
  return headers;

}




