/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/FraudRiskDetails.h>
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

FraudRiskDetails::FraudRiskDetails() : 
    m_knownFraudsterRiskHasBeenSet(false),
    m_voiceSpoofingRiskHasBeenSet(false)
{
}

FraudRiskDetails::FraudRiskDetails(JsonView jsonValue) : 
    m_knownFraudsterRiskHasBeenSet(false),
    m_voiceSpoofingRiskHasBeenSet(false)
{
  *this = jsonValue;
}

FraudRiskDetails& FraudRiskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KnownFraudsterRisk"))
  {
    m_knownFraudsterRisk = jsonValue.GetObject("KnownFraudsterRisk");

    m_knownFraudsterRiskHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VoiceSpoofingRisk"))
  {
    m_voiceSpoofingRisk = jsonValue.GetObject("VoiceSpoofingRisk");

    m_voiceSpoofingRiskHasBeenSet = true;
  }

  return *this;
}

JsonValue FraudRiskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_knownFraudsterRiskHasBeenSet)
  {
   payload.WithObject("KnownFraudsterRisk", m_knownFraudsterRisk.Jsonize());

  }

  if(m_voiceSpoofingRiskHasBeenSet)
  {
   payload.WithObject("VoiceSpoofingRisk", m_voiceSpoofingRisk.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
