/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/RegistrationConfig.h>
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

RegistrationConfig::RegistrationConfig() : 
    m_duplicateRegistrationAction(DuplicateRegistrationAction::NOT_SET),
    m_duplicateRegistrationActionHasBeenSet(false),
    m_fraudsterSimilarityThreshold(0),
    m_fraudsterSimilarityThresholdHasBeenSet(false)
{
}

RegistrationConfig::RegistrationConfig(JsonView jsonValue) : 
    m_duplicateRegistrationAction(DuplicateRegistrationAction::NOT_SET),
    m_duplicateRegistrationActionHasBeenSet(false),
    m_fraudsterSimilarityThreshold(0),
    m_fraudsterSimilarityThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationConfig& RegistrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DuplicateRegistrationAction"))
  {
    m_duplicateRegistrationAction = DuplicateRegistrationActionMapper::GetDuplicateRegistrationActionForName(jsonValue.GetString("DuplicateRegistrationAction"));

    m_duplicateRegistrationActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FraudsterSimilarityThreshold"))
  {
    m_fraudsterSimilarityThreshold = jsonValue.GetInteger("FraudsterSimilarityThreshold");

    m_fraudsterSimilarityThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_duplicateRegistrationActionHasBeenSet)
  {
   payload.WithString("DuplicateRegistrationAction", DuplicateRegistrationActionMapper::GetNameForDuplicateRegistrationAction(m_duplicateRegistrationAction));
  }

  if(m_fraudsterSimilarityThresholdHasBeenSet)
  {
   payload.WithInteger("FraudsterSimilarityThreshold", m_fraudsterSimilarityThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
