/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/CreateDomainNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDomainNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_certificateNameHasBeenSet)
  {
   payload.WithString("certificateName", m_certificateName);

  }

  if(m_certificateBodyHasBeenSet)
  {
   payload.WithString("certificateBody", m_certificateBody);

  }

  if(m_certificatePrivateKeyHasBeenSet)
  {
   payload.WithString("certificatePrivateKey", m_certificatePrivateKey);

  }

  if(m_certificateChainHasBeenSet)
  {
   payload.WithString("certificateChain", m_certificateChain);

  }

  if(m_certificateArnHasBeenSet)
  {
   payload.WithString("certificateArn", m_certificateArn);

  }

  if(m_regionalCertificateNameHasBeenSet)
  {
   payload.WithString("regionalCertificateName", m_regionalCertificateName);

  }

  if(m_regionalCertificateArnHasBeenSet)
  {
   payload.WithString("regionalCertificateArn", m_regionalCertificateArn);

  }

  if(m_endpointConfigurationHasBeenSet)
  {
   payload.WithObject("endpointConfiguration", m_endpointConfiguration.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_securityPolicyHasBeenSet)
  {
   payload.WithString("securityPolicy", SecurityPolicyMapper::GetNameForSecurityPolicy(m_securityPolicy));
  }

  if(m_mutualTlsAuthenticationHasBeenSet)
  {
   payload.WithObject("mutualTlsAuthentication", m_mutualTlsAuthentication.Jsonize());

  }

  if(m_ownershipVerificationCertificateArnHasBeenSet)
  {
   payload.WithString("ownershipVerificationCertificateArn", m_ownershipVerificationCertificateArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  if(m_routingModeHasBeenSet)
  {
   payload.WithString("routingMode", RoutingModeMapper::GetNameForRoutingMode(m_routingMode));
  }

  return payload.View().WriteReadable();
}




