/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/voice-id/model/EnrollmentConfig.h>
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

EnrollmentConfig::EnrollmentConfig() : 
    m_existingEnrollmentAction(ExistingEnrollmentAction::NOT_SET),
    m_existingEnrollmentActionHasBeenSet(false),
    m_fraudDetectionConfigHasBeenSet(false)
{
}

EnrollmentConfig::EnrollmentConfig(JsonView jsonValue) : 
    m_existingEnrollmentAction(ExistingEnrollmentAction::NOT_SET),
    m_existingEnrollmentActionHasBeenSet(false),
    m_fraudDetectionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EnrollmentConfig& EnrollmentConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExistingEnrollmentAction"))
  {
    m_existingEnrollmentAction = ExistingEnrollmentActionMapper::GetExistingEnrollmentActionForName(jsonValue.GetString("ExistingEnrollmentAction"));

    m_existingEnrollmentActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FraudDetectionConfig"))
  {
    m_fraudDetectionConfig = jsonValue.GetObject("FraudDetectionConfig");

    m_fraudDetectionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EnrollmentConfig::Jsonize() const
{
  JsonValue payload;

  if(m_existingEnrollmentActionHasBeenSet)
  {
   payload.WithString("ExistingEnrollmentAction", ExistingEnrollmentActionMapper::GetNameForExistingEnrollmentAction(m_existingEnrollmentAction));
  }

  if(m_fraudDetectionConfigHasBeenSet)
  {
   payload.WithObject("FraudDetectionConfig", m_fraudDetectionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace VoiceID
} // namespace Aws
