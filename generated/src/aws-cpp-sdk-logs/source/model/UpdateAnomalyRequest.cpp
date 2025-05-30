﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/UpdateAnomalyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAnomalyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_anomalyIdHasBeenSet)
  {
   payload.WithString("anomalyId", m_anomalyId);

  }

  if(m_patternIdHasBeenSet)
  {
   payload.WithString("patternId", m_patternId);

  }

  if(m_anomalyDetectorArnHasBeenSet)
  {
   payload.WithString("anomalyDetectorArn", m_anomalyDetectorArn);

  }

  if(m_suppressionTypeHasBeenSet)
  {
   payload.WithString("suppressionType", SuppressionTypeMapper::GetNameForSuppressionType(m_suppressionType));
  }

  if(m_suppressionPeriodHasBeenSet)
  {
   payload.WithObject("suppressionPeriod", m_suppressionPeriod.Jsonize());

  }

  if(m_baselineHasBeenSet)
  {
   payload.WithBool("baseline", m_baseline);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAnomalyRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.UpdateAnomaly"));
  return headers;

}




