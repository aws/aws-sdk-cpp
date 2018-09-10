﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/config/model/DescribeConfigurationAggregatorSourcesStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConfigurationAggregatorSourcesStatusRequest::DescribeConfigurationAggregatorSourcesStatusRequest() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_updateStatusHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String DescribeConfigurationAggregatorSourcesStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_updateStatusHasBeenSet)
  {
   Array<JsonValue> updateStatusJsonList(m_updateStatus.size());
   for(unsigned updateStatusIndex = 0; updateStatusIndex < updateStatusJsonList.GetLength(); ++updateStatusIndex)
   {
     updateStatusJsonList[updateStatusIndex].AsString(AggregatedSourceStatusTypeMapper::GetNameForAggregatedSourceStatusType(m_updateStatus[updateStatusIndex]));
   }
   payload.WithArray("UpdateStatus", std::move(updateStatusJsonList));

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

Aws::Http::HeaderValueCollection DescribeConfigurationAggregatorSourcesStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.DescribeConfigurationAggregatorSourcesStatus"));
  return headers;

}




