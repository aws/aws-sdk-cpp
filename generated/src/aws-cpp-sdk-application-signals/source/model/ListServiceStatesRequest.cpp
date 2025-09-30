/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ListServiceStatesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListServiceStatesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_includeLinkedAccountsHasBeenSet)
  {
   payload.WithBool("IncludeLinkedAccounts", m_includeLinkedAccounts);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("AwsAccountId", m_awsAccountId);

  }

  if(m_attributeFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributeFiltersJsonList(m_attributeFilters.size());
   for(unsigned attributeFiltersIndex = 0; attributeFiltersIndex < attributeFiltersJsonList.GetLength(); ++attributeFiltersIndex)
   {
     attributeFiltersJsonList[attributeFiltersIndex].AsObject(m_attributeFilters[attributeFiltersIndex].Jsonize());
   }
   payload.WithArray("AttributeFilters", std::move(attributeFiltersJsonList));

  }

  return payload.View().WriteReadable();
}




