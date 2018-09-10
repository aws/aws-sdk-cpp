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

#include <aws/shield/model/UpdateEmergencyContactSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Shield::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEmergencyContactSettingsRequest::UpdateEmergencyContactSettingsRequest() : 
    m_emergencyContactListHasBeenSet(false)
{
}

Aws::String UpdateEmergencyContactSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_emergencyContactListHasBeenSet)
  {
   Array<JsonValue> emergencyContactListJsonList(m_emergencyContactList.size());
   for(unsigned emergencyContactListIndex = 0; emergencyContactListIndex < emergencyContactListJsonList.GetLength(); ++emergencyContactListIndex)
   {
     emergencyContactListJsonList[emergencyContactListIndex].AsObject(m_emergencyContactList[emergencyContactListIndex].Jsonize());
   }
   payload.WithArray("EmergencyContactList", std::move(emergencyContactListJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateEmergencyContactSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSShield_20160616.UpdateEmergencyContactSettings"));
  return headers;

}




