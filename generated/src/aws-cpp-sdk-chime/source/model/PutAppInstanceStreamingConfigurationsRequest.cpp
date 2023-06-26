/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/PutAppInstanceStreamingConfigurationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutAppInstanceStreamingConfigurationsRequest::PutAppInstanceStreamingConfigurationsRequest() : 
    m_appInstanceArnHasBeenSet(false),
    m_appInstanceStreamingConfigurationsHasBeenSet(false)
{
}

Aws::String PutAppInstanceStreamingConfigurationsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_appInstanceStreamingConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appInstanceStreamingConfigurationsJsonList(m_appInstanceStreamingConfigurations.size());
   for(unsigned appInstanceStreamingConfigurationsIndex = 0; appInstanceStreamingConfigurationsIndex < appInstanceStreamingConfigurationsJsonList.GetLength(); ++appInstanceStreamingConfigurationsIndex)
   {
     appInstanceStreamingConfigurationsJsonList[appInstanceStreamingConfigurationsIndex].AsObject(m_appInstanceStreamingConfigurations[appInstanceStreamingConfigurationsIndex].Jsonize());
   }
   payload.WithArray("AppInstanceStreamingConfigurations", std::move(appInstanceStreamingConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




