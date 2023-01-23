/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateIndexingConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIndexingConfigurationRequest::UpdateIndexingConfigurationRequest() : 
    m_thingIndexingConfigurationHasBeenSet(false),
    m_thingGroupIndexingConfigurationHasBeenSet(false)
{
}

Aws::String UpdateIndexingConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_thingIndexingConfigurationHasBeenSet)
  {
   payload.WithObject("thingIndexingConfiguration", m_thingIndexingConfiguration.Jsonize());

  }

  if(m_thingGroupIndexingConfigurationHasBeenSet)
  {
   payload.WithObject("thingGroupIndexingConfiguration", m_thingGroupIndexingConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




