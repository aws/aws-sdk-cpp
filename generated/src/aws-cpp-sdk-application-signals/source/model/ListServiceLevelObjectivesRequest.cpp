/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ListServiceLevelObjectivesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListServiceLevelObjectivesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyAttributesHasBeenSet)
  {
   JsonValue keyAttributesJsonMap;
   for(auto& keyAttributesItem : m_keyAttributes)
   {
     keyAttributesJsonMap.WithString(keyAttributesItem.first, keyAttributesItem.second);
   }
   payload.WithObject("KeyAttributes", std::move(keyAttributesJsonMap));

  }

  if(m_dependencyConfigHasBeenSet)
  {
   payload.WithObject("DependencyConfig", m_dependencyConfig.Jsonize());

  }

  if(m_metricSourceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> metricSourceTypesJsonList(m_metricSourceTypes.size());
   for(unsigned metricSourceTypesIndex = 0; metricSourceTypesIndex < metricSourceTypesJsonList.GetLength(); ++metricSourceTypesIndex)
   {
     metricSourceTypesJsonList[metricSourceTypesIndex].AsString(MetricSourceTypeMapper::GetNameForMetricSourceType(m_metricSourceTypes[metricSourceTypesIndex]));
   }
   payload.WithArray("MetricSourceTypes", std::move(metricSourceTypesJsonList));

  }

  return payload.View().WriteReadable();
}

void ListServiceLevelObjectivesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_operationNameHasBeenSet)
    {
      ss << m_operationName;
      uri.AddQueryStringParameter("OperationName", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_includeLinkedAccountsHasBeenSet)
    {
      ss << m_includeLinkedAccounts;
      uri.AddQueryStringParameter("IncludeLinkedAccounts", ss.str());
      ss.str("");
    }

    if(m_sloOwnerAwsAccountIdHasBeenSet)
    {
      ss << m_sloOwnerAwsAccountId;
      uri.AddQueryStringParameter("SloOwnerAwsAccountId", ss.str());
      ss.str("");
    }

}



