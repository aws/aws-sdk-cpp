/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/KnownFraudsterRisk.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace VoiceID
{
namespace Model
{

KnownFraudsterRisk::KnownFraudsterRisk() : 
    m_generatedFraudsterIdHasBeenSet(false),
    m_riskScore(0),
    m_riskScoreHasBeenSet(false)
{
}

KnownFraudsterRisk::KnownFraudsterRisk(JsonView jsonValue) : 
    m_generatedFraudsterIdHasBeenSet(false),
    m_riskScore(0),
    m_riskScoreHasBeenSet(false)
{
  *this = jsonValue;
}

KnownFraudsterRisk& KnownFraudsterRisk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GeneratedFraudsterId"))
  {
    m_generatedFraudsterId = jsonValue.GetString("GeneratedFraudsterId");

    m_generatedFraudsterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RiskScore"))
  {
    m_riskScore = jsonValue.GetInteger("RiskScore");

    m_riskScoreHasBeenSet = true;
  }

  return *this;
}

JsonValue KnownFraudsterRisk::Jsonize() const
{
  JsonValue payload;

  if(m_generatedFraudsterIdHasBeenSet)
  {
   payload.WithString("GeneratedFraudsterId", m_generatedFraudsterId);

  }

  if(m_riskScoreHasBeenSet)
  {
   payload.WithInteger("RiskScore", m_riskScore);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
