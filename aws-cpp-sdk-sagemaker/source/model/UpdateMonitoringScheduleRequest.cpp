/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/UpdateMonitoringScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMonitoringScheduleRequest::UpdateMonitoringScheduleRequest() : 
    m_monitoringScheduleNameHasBeenSet(false),
    m_monitoringScheduleConfigHasBeenSet(false)
{
}

Aws::String UpdateMonitoringScheduleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_monitoringScheduleNameHasBeenSet)
  {
   payload.WithString("MonitoringScheduleName", m_monitoringScheduleName);

  }

  if(m_monitoringScheduleConfigHasBeenSet)
  {
   payload.WithObject("MonitoringScheduleConfig", m_monitoringScheduleConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateMonitoringScheduleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.UpdateMonitoringSchedule"));
  return headers;

}




