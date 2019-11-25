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

#include <aws/iot/model/UpdateDomainConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDomainConfigurationRequest::UpdateDomainConfigurationRequest() : 
    m_domainConfigurationNameHasBeenSet(false),
    m_authorizerConfigHasBeenSet(false),
    m_domainConfigurationStatus(DomainConfigurationStatus::NOT_SET),
    m_domainConfigurationStatusHasBeenSet(false),
    m_removeAuthorizerConfig(false),
    m_removeAuthorizerConfigHasBeenSet(false)
{
}

Aws::String UpdateDomainConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_authorizerConfigHasBeenSet)
  {
   payload.WithObject("authorizerConfig", m_authorizerConfig.Jsonize());

  }

  if(m_domainConfigurationStatusHasBeenSet)
  {
   payload.WithString("domainConfigurationStatus", DomainConfigurationStatusMapper::GetNameForDomainConfigurationStatus(m_domainConfigurationStatus));
  }

  if(m_removeAuthorizerConfigHasBeenSet)
  {
   payload.WithBool("removeAuthorizerConfig", m_removeAuthorizerConfig);

  }

  return payload.View().WriteReadable();
}




