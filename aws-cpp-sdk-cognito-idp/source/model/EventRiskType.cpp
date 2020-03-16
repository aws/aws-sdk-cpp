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
