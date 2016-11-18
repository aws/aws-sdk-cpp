/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/support/model/DescribeTrustedAdvisorCheckSummariesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeTrustedAdvisorCheckSummariesRequest::DescribeTrustedAdvisorCheckSummariesRequest() : 
    m_checkIdsHasBeenSet(false)
{
}

Aws::String DescribeTrustedAdvisorCheckSummariesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_checkIdsHasBeenSet)
  {
   Array<JsonValue> checkIdsJsonList(m_checkIds.size());
   for(unsigned checkIdsIndex = 0; checkIdsIndex < checkIdsJsonList.GetLength(); ++checkIdsIndex)
   {
     checkIdsJsonList[checkIdsIndex].AsString(m_checkIds[checkIdsIndex]);
   }
   payload.WithArray("checkIds", std::move(checkIdsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeTrustedAdvisorCheckSummariesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.DescribeTrustedAdvisorCheckSummaries"));
  return headers;

}



