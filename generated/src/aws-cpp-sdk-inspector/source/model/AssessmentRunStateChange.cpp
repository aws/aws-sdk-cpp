/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AssessmentRunStateChange.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AssessmentRunStateChange::AssessmentRunStateChange() : 
    m_stateChangedAtHasBeenSet(false),
    m_state(AssessmentRunState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

AssessmentRunStateChange::AssessmentRunStateChange(JsonView jsonValue) : 
    m_stateChangedAtHasBeenSet(false),
    m_state(AssessmentRunState::NOT_SET),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

AssessmentRunStateChange& AssessmentRunStateChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateChangedAt"))
  {
    m_stateChangedAt = jsonValue.GetDouble("stateChangedAt");

    m_stateChangedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = AssessmentRunStateMapper::GetAssessmentRunStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue AssessmentRunStateChange::Jsonize() const
{
  JsonValue payload;

  if(m_stateChangedAtHasBeenSet)
  {
   payload.WithDouble("stateChangedAt", m_stateChangedAt.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", AssessmentRunStateMapper::GetNameForAssessmentRunState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
