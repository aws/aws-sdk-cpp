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

#include <aws/devicefarm/model/CreateVPCEConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateVPCEConfigurationRequest::CreateVPCEConfigurationRequest() : 
    m_vpceConfigurationNameHasBeenSet(false),
    m_vpceServiceNameHasBeenSet(false),
    m_serviceDnsNameHasBeenSet(false),
    m_vpceConfigurationDescriptionHasBeenSet(false)
{
}

Aws::String CreateVPCEConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_vpceConfigurationNameHasBeenSet)
  {
   payload.WithString("vpceConfigurationName", m_vpceConfigurationName);

  }

  if(m_vpceServiceNameHasBeenSet)
  {
   payload.WithString("vpceServiceName", m_vpceServiceName);

  }

  if(m_serviceDnsNameHasBeenSet)
  {
   payload.WithString("serviceDnsName", m_serviceDnsName);

  }

  if(m_vpceConfigurationDescriptionHasBeenSet)
  {
   payload.WithString("vpceConfigurationDescription", m_vpceConfigurationDescription);

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection CreateVPCEConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.CreateVPCEConfiguration"));
  return headers;

}




