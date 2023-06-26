/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/StartDetectorModelAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartDetectorModelAnalysisRequest::StartDetectorModelAnalysisRequest() : 
    m_detectorModelDefinitionHasBeenSet(false)
{
}

Aws::String StartDetectorModelAnalysisRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorModelDefinitionHasBeenSet)
  {
   payload.WithObject("detectorModelDefinition", m_detectorModelDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}




