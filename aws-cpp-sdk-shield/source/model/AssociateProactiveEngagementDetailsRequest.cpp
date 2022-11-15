/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AssociateProactiveEngagementDetailsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateProactiveEngagementDetailsRequest::AssociateProactiveEngagementDetailsRequest() : 
    m_emergencyContactListHasBeenSet(false)
{
}

Aws::String AssociateProactiveEngagementDetailsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emergencyContactListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> emergencyContactListJsonList(m_emergencyContactList.size());
   for(unsigned emergencyContactListIndex = 0; emergencyContactListIndex < emergencyContactListJsonList.GetLength(); ++emergencyContactListIndex)
   {
     emergencyContactListJsonList[emergencyContactListIndex].AsObject(m_emergencyContactList[emergencyContactListIndex].Jsonize());
   }
   payload.WithArray("EmergencyContactList", std::move(emergencyContactListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AssociateProactiveEngagementDetailsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.AssociateProactiveEngagementDetails"));
  return headers;

}




