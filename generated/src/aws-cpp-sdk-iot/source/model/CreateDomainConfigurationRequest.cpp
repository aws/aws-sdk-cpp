/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateDomainConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDomainConfigurationRequest::CreateDomainConfigurationRequest() : 
    m_domainConfigurationNameHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_serverCertificateArnsHasBeenSet(false),
    m_validationCertificateArnHasBeenSet(false),
    m_authorizerConfigHasBeenSet(false),
    m_serviceType(ServiceType::NOT_SET),
    m_serviceTypeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDomainConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_serverCertificateArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serverCertificateArnsJsonList(m_serverCertificateArns.size());
   for(unsigned serverCertificateArnsIndex = 0; serverCertificateArnsIndex < serverCertificateArnsJsonList.GetLength(); ++serverCertificateArnsIndex)
   {
     serverCertificateArnsJsonList[serverCertificateArnsIndex].AsString(m_serverCertificateArns[serverCertificateArnsIndex]);
   }
   payload.WithArray("serverCertificateArns", std::move(serverCertificateArnsJsonList));

  }

  if(m_validationCertificateArnHasBeenSet)
  {
   payload.WithString("validationCertificateArn", m_validationCertificateArn);

  }

  if(m_authorizerConfigHasBeenSet)
  {
   payload.WithObject("authorizerConfig", m_authorizerConfig.Jsonize());

  }

  if(m_serviceTypeHasBeenSet)
  {
   payload.WithString("serviceType", ServiceTypeMapper::GetNameForServiceType(m_serviceType));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




