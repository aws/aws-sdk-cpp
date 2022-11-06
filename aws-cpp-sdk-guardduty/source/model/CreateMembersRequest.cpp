/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   Aws::Utils::Array<JsonValue> accountDetailsJsonList(m_accountDetails.size());
   for(unsigned accountDetailsIndex = 0; accountDetailsIndex < accountDetailsJsonList.GetLength(); ++accountDetailsIndex)
   {
     accountDetailsJsonList[accountDetailsIndex].AsObject(m_accountDetails[accountDetailsIndex].Jsonize());
   }
   payload.WithArray("accountDetails", std::move(accountDetailsJsonList));

  }

  return payload.View().WriteReadable();
}




