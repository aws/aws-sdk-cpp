/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/StartSuiteRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartSuiteRunRequest::StartSuiteRunRequest() : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteDefinitionVersionHasBeenSet(false),
    m_suiteRunConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartSuiteRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_suiteDefinitionVersionHasBeenSet)
  {
   payload.WithString("suiteDefinitionVersion", m_suiteDefinitionVersion);

  }

  if(m_suiteRunConfigurationHasBeenSet)
  {
   payload.WithObject("suiteRunConfiguration", m_suiteRunConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




