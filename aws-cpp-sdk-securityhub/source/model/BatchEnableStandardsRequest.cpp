/*
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

#include <aws/securityhub/model/BatchEnableStandardsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchEnableStandardsRequest::BatchEnableStandardsRequest() : 
    m_standardsSubscriptionRequestsHasBeenSet(false)
{
}

Aws::String BatchEnableStandardsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_standardsSubscriptionRequestsHasBeenSet)
  {
   Array<JsonValue> standardsSubscriptionRequestsJsonList(m_standardsSubscriptionRequests.size());
   for(unsigned standardsSubscriptionRequestsIndex = 0; standardsSubscriptionRequestsIndex < standardsSubscriptionRequestsJsonList.GetLength(); ++standardsSubscriptionRequestsIndex)
   {
     standardsSubscriptionRequestsJsonList[standardsSubscriptionRequestsIndex].AsObject(m_standardsSubscriptionRequests[standardsSubscriptionRequestsIndex].Jsonize());
   }
   payload.WithArray("StandardsSubscriptionRequests", std::move(standardsSubscriptionRequestsJsonList));

  }

  return payload.View().WriteReadable();
}




