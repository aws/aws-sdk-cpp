/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateMetricConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMetricConfigurationRequest::UpdateMetricConfigurationRequest() : 
    m_summaryMetricHasBeenSet(false)
{
}

Aws::String UpdateMetricConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_summaryMetricHasBeenSet)
  {
   payload.WithObject("SummaryMetric", m_summaryMetric.Jsonize());

  }

  return payload.View().WriteReadable();
}




