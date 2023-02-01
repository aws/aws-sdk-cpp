/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/StartApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KinesisAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartApplicationRequest::StartApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_inputConfigurationsHasBeenSet(false)
{
}

Aws::String StartApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("ApplicationName", m_applicationName);

  }

  if(m_inputConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputConfigurationsJsonList(m_inputConfigurations.size());
   for(unsigned inputConfigurationsIndex = 0; inputConfigurationsIndex < inputConfigurationsJsonList.GetLength(); ++inputConfigurationsIndex)
   {
     inputConfigurationsJsonList[inputConfigurationsIndex].AsObject(m_inputConfigurations[inputConfigurationsIndex].Jsonize());
   }
   payload.WithArray("InputConfigurations", std::move(inputConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20150814.StartApplication"));
  return headers;

}




