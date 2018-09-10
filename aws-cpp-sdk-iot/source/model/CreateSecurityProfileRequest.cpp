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

#include <aws/iot/model/CreateSecurityProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSecurityProfileRequest::CreateSecurityProfileRequest() : 
    m_securityProfileNameHasBeenSet(false),
    m_securityProfileDescriptionHasBeenSet(false),
    m_behaviorsHasBeenSet(false),
    m_alertTargetsHasBeenSet(false)
{
}

Aws::String CreateSecurityProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityProfileDescriptionHasBeenSet)
  {
   payload.WithString("securityProfileDescription", m_securityProfileDescription);

  }

  if(m_behaviorsHasBeenSet)
  {
   Array<JsonValue> behaviorsJsonList(m_behaviors.size());
   for(unsigned behaviorsIndex = 0; behaviorsIndex < behaviorsJsonList.GetLength(); ++behaviorsIndex)
   {
     behaviorsJsonList[behaviorsIndex].AsObject(m_behaviors[behaviorsIndex].Jsonize());
   }
   payload.WithArray("behaviors", std::move(behaviorsJsonList));

  }

  if(m_alertTargetsHasBeenSet)
  {
   JsonValue alertTargetsJsonMap;
   for(auto& alertTargetsItem : m_alertTargets)
   {
     alertTargetsJsonMap.WithObject(AlertTargetTypeMapper::GetNameForAlertTargetType(alertTargetsItem.first), alertTargetsItem.second.Jsonize());
   }
   payload.WithObject("alertTargets", std::move(alertTargetsJsonMap));

  }

  return payload.View().WriteReadable();
}




