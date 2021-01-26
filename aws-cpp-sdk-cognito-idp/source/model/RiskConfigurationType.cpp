/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/RiskConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

RiskConfigurationType::RiskConfigurationType() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_compromisedCredentialsRiskConfigurationHasBeenSet(false),
    m_accountTakeoverRiskConfigurationHasBeenSet(false),
    m_riskExceptionConfigurationHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

RiskConfigurationType::RiskConfigurationType(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_compromisedCredentialsRiskConfigurationHasBeenSet(false),
    m_accountTakeoverRiskConfigurationHasBeenSet(false),
    m_riskExceptionConfigurationHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

RiskConfigurationType& RiskConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompromisedCredentialsRiskConfiguration"))
  {
    m_compromisedCredentialsRiskConfiguration = jsonValue.GetObject("CompromisedCredentialsRiskConfiguration");

    m_compromisedCredentialsRiskConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountTakeoverRiskConfiguration"))
  {
    m_accountTakeoverRiskConfiguration = jsonValue.GetObject("AccountTakeoverRiskConfiguration");

    m_accountTakeoverRiskConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskExceptionConfiguration"))
  {
    m_riskExceptionConfiguration = jsonValue.GetObject("RiskExceptionConfiguration");

    m_riskExceptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue RiskConfigurationType::Jsonize() const
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

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
