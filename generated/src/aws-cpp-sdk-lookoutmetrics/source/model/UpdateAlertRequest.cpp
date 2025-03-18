/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/UpdateAlertRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAlertRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_alertArnHasBeenSet)
  {
   payload.WithString("AlertArn", m_alertArn);

  }

  if(m_alertDescriptionHasBeenSet)
  {
   payload.WithString("AlertDescription", m_alertDescription);

  }

  if(m_alertSensitivityThresholdHasBeenSet)
  {
   payload.WithInteger("AlertSensitivityThreshold", m_alertSensitivityThreshold);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_alertFiltersHasBeenSet)
  {
   payload.WithObject("AlertFilters", m_alertFilters.Jsonize());

  }

  return payload.View().WriteReadable();
}




