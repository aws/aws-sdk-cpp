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
    m_autoEnable(false),
    m_autoEnableHasBeenSet(false),
    m_featuresHasBeenSet(false)
{
}

Aws::String UpdateOrganizationConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_autoEnableHasBeenSet)
  {
   payload.WithBool("autoEnable", m_autoEnable);

  }

  if(m_featuresHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> featuresJsonList(m_features.size());
   for(unsigned featuresIndex = 0; featuresIndex < featuresJsonList.GetLength(); ++featuresIndex)
   {
     featuresJsonList[featuresIndex].AsObject(m_features[featuresIndex].Jsonize());
   }
   payload.WithArray("features", std::move(featuresJsonList));

  }

  return payload.View().WriteReadable();
}




