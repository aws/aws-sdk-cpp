/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> inputConfigurationsJsonList(m_inputConfigurations.size());
   for(unsigned inputConfigurationsIndex = 0; inputConfigurationsIndex < inputConfigurationsJsonList.GetLength(); ++inputConfigurationsIndex)
   {
     inputConfigurationsJsonList[inputConfigurationsIndex].AsObject(m_inputConfigurations[inputConfigurationsIndex].Jsonize());
   }
   payload.WithArray("InputConfigurations", std::move(inputConfigurationsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection StartApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "KinesisAnalytics_20150814.StartApplication"));
  return headers;

}



