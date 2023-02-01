/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeEventSubscriptionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEventSubscriptionsRequest::DescribeEventSubscriptionsRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeEventSubscriptionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionNameHasBeenSet)
  {
   payload.WithString("SubscriptionName", m_subscriptionName);

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

  if(m_maxRecordsHasBeenSet)
  {
   payload.WithInteger("MaxRecords", m_maxRecords);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEventSubscriptionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DescribeEventSubscriptions"));
  return headers;

}




