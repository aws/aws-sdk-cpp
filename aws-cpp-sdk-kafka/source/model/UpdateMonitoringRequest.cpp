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

#include <aws/kafka/model/UpdateMonitoringRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateMonitoringRequest::UpdateMonitoringRequest() : 
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_enhancedMonitoring(EnhancedMonitoring::NOT_SET),
    m_enhancedMonitoringHasBeenSet(false),
    m_openMonitoringHasBeenSet(false),
    m_loggingInfoHasBeenSet(false)
{
}

Aws::String UpdateMonitoringRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_enhancedMonitoringHasBeenSet)
  {
   payload.WithString("enhancedMonitoring", EnhancedMonitoringMapper::GetNameForEnhancedMonitoring(m_enhancedMonitoring));
  }

  if(m_openMonitoringHasBeenSet)
  {
   payload.WithObject("openMonitoring", m_openMonitoring.Jsonize());

  }

  if(m_loggingInfoHasBeenSet)
  {
   payload.WithObject("loggingInfo", m_loggingInfo.Jsonize());

  }

  return payload.View().WriteReadable();
}




