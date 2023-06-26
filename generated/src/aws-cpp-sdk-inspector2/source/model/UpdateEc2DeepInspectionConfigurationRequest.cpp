/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateEc2DeepInspectionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateEc2DeepInspectionConfigurationRequest::UpdateEc2DeepInspectionConfigurationRequest() : 
    m_activateDeepInspection(false),
    m_activateDeepInspectionHasBeenSet(false),
    m_packagePathsHasBeenSet(false)
{
}

Aws::String UpdateEc2DeepInspectionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_activateDeepInspectionHasBeenSet)
  {
   payload.WithBool("activateDeepInspection", m_activateDeepInspection);

  }

  if(m_packagePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> packagePathsJsonList(m_packagePaths.size());
   for(unsigned packagePathsIndex = 0; packagePathsIndex < packagePathsJsonList.GetLength(); ++packagePathsIndex)
   {
     packagePathsJsonList[packagePathsIndex].AsString(m_packagePaths[packagePathsIndex]);
   }
   payload.WithArray("packagePaths", std::move(packagePathsJsonList));

  }

  return payload.View().WriteReadable();
}




