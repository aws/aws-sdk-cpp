/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ScheduleRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ScheduleRunRequest::ScheduleRunRequest() : 
    m_projectArnHasBeenSet(false),
    m_appArnHasBeenSet(false),
    m_devicePoolArnHasBeenSet(false),
    m_deviceSelectionConfigurationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_testHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_executionConfigurationHasBeenSet(false)
{
}

Aws::String ScheduleRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  if(m_appArnHasBeenSet)
  {
   payload.WithString("appArn", m_appArn);

  }

  if(m_devicePoolArnHasBeenSet)
  {
   payload.WithString("devicePoolArn", m_devicePoolArn);

  }

  if(m_deviceSelectionConfigurationHasBeenSet)
  {
   payload.WithObject("deviceSelectionConfiguration", m_deviceSelectionConfiguration.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_testHasBeenSet)
  {
   payload.WithObject("test", m_test.Jsonize());

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_executionConfigurationHasBeenSet)
  {
   payload.WithObject("executionConfiguration", m_executionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ScheduleRunRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.ScheduleRun"));
  return headers;

}




