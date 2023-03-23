/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest() : 
    m_detectorIdHasBeenSet(false),
    m_featuresHasBeenSet(false),
    m_autoEnableOrganizationMembers(AutoEnableMembers::NOT_SET),
    m_autoEnableOrganizationMembersHasBeenSet(false)
{
}

Aws::String UpdateOrganizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
   }
   payload.WithArray("features", std::move(featuresJsonList));

  }

  if(m_autoEnableOrganizationMembersHasBeenSet)
  {
   payload.WithString("autoEnableOrganizationMembers", AutoEnableMembersMapper::GetNameForAutoEnableMembers(m_autoEnableOrganizationMembers));
  }

  return payload.View().WriteReadable();
}




