/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigurationAggregatorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigurationAggregatorsRequest::DescribeConfigurationAggregatorsRequest() : 
    m_configurationAggregatorNamesHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeConfigurationAggregatorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configurationAggregatorNamesJsonList(m_configurationAggregatorNames.size());
   for(unsigned configurationAggregatorNamesIndex = 0; configurationAggregatorNamesIndex < configurationAggregatorNamesJsonList.GetLength(); ++configurationAggregatorNamesIndex)
   {
     configurationAggregatorNamesJsonList[configurationAggregatorNamesIndex].AsString(m_configurationAggregatorNames[configurationAggregatorNamesIndex]);
   }
   payload.WithArray("ConfigurationAggregatorNames", std::move(configurationAggregatorNamesJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("Limit", m_limit);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeConfigurationAggregatorsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeConfigurationAggregators"));
  return headers;

}




