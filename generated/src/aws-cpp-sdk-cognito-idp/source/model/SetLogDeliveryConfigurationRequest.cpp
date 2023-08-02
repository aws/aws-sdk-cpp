/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetLogDeliveryConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetLogDeliveryConfigurationRequest::SetLogDeliveryConfigurationRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_logConfigurationsHasBeenSet(false)
{
}

Aws::String SetLogDeliveryConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_logConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logConfigurationsJsonList(m_logConfigurations.size());
   for(unsigned logConfigurationsIndex = 0; logConfigurationsIndex < logConfigurationsJsonList.GetLength(); ++logConfigurationsIndex)
   {
     logConfigurationsJsonList[logConfigurationsIndex].AsObject(m_logConfigurations[logConfigurationsIndex].Jsonize());
   }
   payload.WithArray("LogConfigurations", std::move(logConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetLogDeliveryConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetLogDeliveryConfiguration"));
  return headers;

}




