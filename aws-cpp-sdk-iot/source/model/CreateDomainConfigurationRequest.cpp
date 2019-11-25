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
    m_serviceTypeHasBeenSet(false)
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
   Array<JsonValue> serverCertificateArnsJsonList(m_serverCertificateArns.size());
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

  return payload.View().WriteReadable();
}




