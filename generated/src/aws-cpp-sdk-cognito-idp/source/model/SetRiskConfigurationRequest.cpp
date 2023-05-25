/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/SetRiskConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SetRiskConfigurationRequest::SetRiskConfigurationRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_compromisedCredentialsRiskConfigurationHasBeenSet(false),
    m_accountTakeoverRiskConfigurationHasBeenSet(false),
    m_riskExceptionConfigurationHasBeenSet(false)
{
}

Aws::String SetRiskConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_compromisedCredentialsRiskConfigurationHasBeenSet)
  {
   payload.WithObject("CompromisedCredentialsRiskConfiguration", m_compromisedCredentialsRiskConfiguration.Jsonize());

  }

  if(m_accountTakeoverRiskConfigurationHasBeenSet)
  {
   payload.WithObject("AccountTakeoverRiskConfiguration", m_accountTakeoverRiskConfiguration.Jsonize());

  }

  if(m_riskExceptionConfigurationHasBeenSet)
  {
   payload.WithObject("RiskExceptionConfiguration", m_riskExceptionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection SetRiskConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.SetRiskConfiguration"));
  return headers;

}




