/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/DescribeOptedOutNumbersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeOptedOutNumbersRequest::DescribeOptedOutNumbersRequest() : 
    m_optOutListNameHasBeenSet(false),
    m_optedOutNumbersHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String DescribeOptedOutNumbersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_optOutListNameHasBeenSet)
  {
   payload.WithString("OptOutListName", m_optOutListName);

  }

  if(m_optedOutNumbersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> optedOutNumbersJsonList(m_optedOutNumbers.size());
   for(unsigned optedOutNumbersIndex = 0; optedOutNumbersIndex < optedOutNumbersJsonList.GetLength(); ++optedOutNumbersIndex)
   {
     optedOutNumbersJsonList[optedOutNumbersIndex].AsString(m_optedOutNumbers[optedOutNumbersIndex]);
   }
   payload.WithArray("OptedOutNumbers", std::move(optedOutNumbersJsonList));

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("Filters", std::move(filtersJsonList));

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

Aws::Http::HeaderValueCollection DescribeOptedOutNumbersRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.DescribeOptedOutNumbers"));
  return headers;

}




