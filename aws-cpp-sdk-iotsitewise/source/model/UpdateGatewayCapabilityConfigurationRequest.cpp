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

#include <aws/iotsitewise/model/UpdateGatewayCapabilityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGatewayCapabilityConfigurationRequest::UpdateGatewayCapabilityConfigurationRequest() : 
    m_gatewayIdHasBeenSet(false),
    m_capabilityNamespaceHasBeenSet(false),
    m_capabilityConfigurationHasBeenSet(false)
{
}

Aws::String UpdateGatewayCapabilityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilityNamespaceHasBeenSet)
  {
   payload.WithString("capabilityNamespace", m_capabilityNamespace);

  }

  if(m_capabilityConfigurationHasBeenSet)
  {
   payload.WithString("capabilityConfiguration", m_capabilityConfiguration);

  }

  return payload.View().WriteReadable();
}




