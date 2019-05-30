/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotevents/model/UpdateDetectorModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDetectorModelRequest::UpdateDetectorModelRequest() : 
    m_detectorModelNameHasBeenSet(false),
    m_detectorModelDefinitionHasBeenSet(false),
    m_detectorModelDescriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String UpdateDetectorModelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detectorModelDefinitionHasBeenSet)
  {
   payload.WithObject("detectorModelDefinition", m_detectorModelDefinition.Jsonize());

  }

  if(m_detectorModelDescriptionHasBeenSet)
  {
   payload.WithString("detectorModelDescription", m_detectorModelDescription);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




