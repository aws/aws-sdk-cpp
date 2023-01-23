/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/SearchProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

SearchProfilesRequest::SearchProfilesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_valuesHasBeenSet(false),
    m_additionalSearchKeysHasBeenSet(false),
    m_logicalOperator(LogicalOperator::NOT_SET),
    m_logicalOperatorHasBeenSet(false)
{
}

Aws::String SearchProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyNameHasBeenSet)
  {
   payload.WithString("KeyName", m_keyName);

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsString(m_values[valuesIndex]);
   }
   payload.WithArray("Values", std::move(valuesJsonList));

  }

  if(m_additionalSearchKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalSearchKeysJsonList(m_additionalSearchKeys.size());
   for(unsigned additionalSearchKeysIndex = 0; additionalSearchKeysIndex < additionalSearchKeysJsonList.GetLength(); ++additionalSearchKeysIndex)
   {
     additionalSearchKeysJsonList[additionalSearchKeysIndex].AsObject(m_additionalSearchKeys[additionalSearchKeysIndex].Jsonize());
   }
   payload.WithArray("AdditionalSearchKeys", std::move(additionalSearchKeysJsonList));

  }

  if(m_logicalOperatorHasBeenSet)
  {
   payload.WithString("LogicalOperator", LogicalOperatorMapper::GetNameForLogicalOperator(m_logicalOperator));
  }

  return payload.View().WriteReadable();
}

void SearchProfilesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max-results", ss.str());
      ss.str("");
    }

}



