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

#include <aws/guardduty/model/CreateMembersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateMembersRequest::CreateMembersRequest() : 
    m_detectorIdHasBeenSet(false),
    m_accountDetailsHasBeenSet(false)
{
}

Aws::String CreateMembersRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_accountDetailsHasBeenSet)
  {
   Array<JsonValue> accountDetailsJsonList(m_accountDetails.size());
   for(unsigned accountDetailsIndex = 0; accountDetailsIndex < accountDetailsJsonList.GetLength(); ++accountDetailsIndex)
   {
     accountDetailsJsonList[accountDetailsIndex].AsObject(m_accountDetails[accountDetailsIndex].Jsonize());
   }
   payload.WithArray("accountDetails", std::move(accountDetailsJsonList));

  }

  return payload.View().WriteReadable();
}




