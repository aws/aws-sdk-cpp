/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/EventRiskType.h>
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

EventRiskType::EventRiskType() : 
    m_riskDecision(RiskDecisionType::NOT_SET),
    m_riskDecisionHasBeenSet(false),
    m_riskLevel(RiskLevelType::NOT_SET),
    m_riskLevelHasBeenSet(false),
    m_compromisedCredentialsDetected(false),
    m_compromisedCredentialsDetectedHasBeenSet(false)
{
}

EventRiskType::EventRiskType(JsonView jsonValue) : 
    m_riskDecision(RiskDecisionType::NOT_SET),
    m_riskDecisionHasBeenSet(false),
    m_riskLevel(RiskLevelType::NOT_SET),
    m_riskLevelHasBeenSet(false),
    m_compromisedCredentialsDetected(false),
    m_compromisedCredentialsDetectedHasBeenSet(false)
{
  *this = jsonValue;
}

EventRiskType& EventRiskType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RiskDecision"))
  {
    m_riskDecision = RiskDecisionTypeMapper::GetRiskDecisionTypeForName(jsonValue.GetString("RiskDecision"));

    m_riskDecisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskLevel"))
  {
    m_riskLevel = RiskLevelTypeMapper::GetRiskLevelTypeForName(jsonValue.GetString("RiskLevel"));

    m_riskLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompromisedCredentialsDetected"))
  {
    m_compromisedCredentialsDetected = jsonValue.GetBool("CompromisedCredentialsDetected");

    m_compromisedCredentialsDetectedHasBeenSet = true;
  }

  return *this;
}

JsonValue EventRiskType::Jsonize() const
{
  JsonValue payload;

  if(m_riskDecisionHasBeenSet)
  {
   payload.WithString("RiskDecision", RiskDecisionTypeMapper::GetNameForRiskDecisionType(m_riskDecision));
  }

  if(m_riskLevelHasBeenSet)
  {
   payload.WithString("RiskLevel", RiskLevelTypeMapper::GetNameForRiskLevelType(m_riskLevel));
  }

  if(m_compromisedCredentialsDetectedHasBeenSet)
  {
   payload.WithBool("CompromisedCredentialsDetected", m_compromisedCredentialsDetected);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
