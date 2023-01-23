/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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




