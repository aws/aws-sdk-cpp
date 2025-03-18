/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/UpdateServiceLevelObjectiveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateServiceLevelObjectiveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sliConfigHasBeenSet)
  {
   payload.WithObject("SliConfig", m_sliConfig.Jsonize());

  }

  if(m_requestBasedSliConfigHasBeenSet)
  {
   payload.WithObject("RequestBasedSliConfig", m_requestBasedSliConfig.Jsonize());

  }

  if(m_goalHasBeenSet)
  {
   payload.WithObject("Goal", m_goal.Jsonize());

  }

  if(m_burnRateConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> burnRateConfigurationsJsonList(m_burnRateConfigurations.size());
   for(unsigned burnRateConfigurationsIndex = 0; burnRateConfigurationsIndex < burnRateConfigurationsJsonList.GetLength(); ++burnRateConfigurationsIndex)
   {
     burnRateConfigurationsJsonList[burnRateConfigurationsIndex].AsObject(m_burnRateConfigurations[burnRateConfigurationsIndex].Jsonize());
   }
   payload.WithArray("BurnRateConfigurations", std::move(burnRateConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




