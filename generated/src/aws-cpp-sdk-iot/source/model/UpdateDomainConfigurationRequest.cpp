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

  if(m_tlsConfigHasBeenSet)
  {
   payload.WithObject("tlsConfig", m_tlsConfig.Jsonize());

  }

  if(m_serverCertificateConfigHasBeenSet)
  {
   payload.WithObject("serverCertificateConfig", m_serverCertificateConfig.Jsonize());

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  if(m_applicationProtocolHasBeenSet)
  {
   payload.WithString("applicationProtocol", ApplicationProtocolMapper::GetNameForApplicationProtocol(m_applicationProtocol));
  }

  if(m_clientCertificateConfigHasBeenSet)
  {
   payload.WithObject("clientCertificateConfig", m_clientCertificateConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




