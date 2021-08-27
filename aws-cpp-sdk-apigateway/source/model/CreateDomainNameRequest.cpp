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

CreateDomainNameRequest::CreateDomainNameRequest() : 
    m_domainNameHasBeenSet(false),
    m_certificateNameHasBeenSet(false),
    m_certificateBodyHasBeenSet(false),
    m_certificatePrivateKeyHasBeenSet(false),
    m_certificateChainHasBeenSet(false),
    m_certificateArnHasBeenSet(false),
    m_regionalCertificateNameHasBeenSet(false),
    m_regionalCertificateArnHasBeenSet(false),
    m_endpointConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_securityPolicy(SecurityPolicy::NOT_SET),
    m_securityPolicyHasBeenSet(false),
    m_mutualTlsAuthenticationHasBeenSet(false)
{
}

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

  return payload.View().WriteReadable();
}




