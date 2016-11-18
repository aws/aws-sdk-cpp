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
#include <aws/opsworks/model/SetLoadBasedAutoScalingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::OpsWorks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetLoadBasedAutoScalingRequest::SetLoadBasedAutoScalingRequest() : 
    m_layerIdHasBeenSet(false),
    m_enable(false),
    m_enableHasBeenSet(false),
    m_upScalingHasBeenSet(false),
    m_downScalingHasBeenSet(false)
{
}

Aws::String SetLoadBasedAutoScalingRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_layerIdHasBeenSet)
  {
   payload.WithString("LayerId", m_layerId);

  }

  if(m_enableHasBeenSet)
  {
   payload.WithBool("Enable", m_enable);

  }

  if(m_upScalingHasBeenSet)
  {
   payload.WithObject("UpScaling", m_upScaling.Jsonize());

  }

  if(m_downScalingHasBeenSet)
  {
   payload.WithObject("DownScaling", m_downScaling.Jsonize());

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection SetLoadBasedAutoScalingRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "OpsWorks_20130218.SetLoadBasedAutoScaling"));
  return headers;

}



