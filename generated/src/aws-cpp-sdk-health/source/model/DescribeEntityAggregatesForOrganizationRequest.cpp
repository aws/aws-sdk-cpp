/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeEntityAggregatesForOrganizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEntityAggregatesForOrganizationRequest::DescribeEntityAggregatesForOrganizationRequest() : 
    m_eventArnsHasBeenSet(false),
    m_awsAccountIdsHasBeenSet(false)
{
}

Aws::String DescribeEntityAggregatesForOrganizationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_eventArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventArnsJsonList(m_eventArns.size());
   for(unsigned eventArnsIndex = 0; eventArnsIndex < eventArnsJsonList.GetLength(); ++eventArnsIndex)
   {
     eventArnsJsonList[eventArnsIndex].AsString(m_eventArns[eventArnsIndex]);
   }
   payload.WithArray("eventArns", std::move(eventArnsJsonList));

  }

  if(m_awsAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> awsAccountIdsJsonList(m_awsAccountIds.size());
   for(unsigned awsAccountIdsIndex = 0; awsAccountIdsIndex < awsAccountIdsJsonList.GetLength(); ++awsAccountIdsIndex)
   {
     awsAccountIdsJsonList[awsAccountIdsIndex].AsString(m_awsAccountIds[awsAccountIdsIndex]);
   }
   payload.WithArray("awsAccountIds", std::move(awsAccountIdsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEntityAggregatesForOrganizationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSHealth_20160804.DescribeEntityAggregatesForOrganization"));
  return headers;

}




