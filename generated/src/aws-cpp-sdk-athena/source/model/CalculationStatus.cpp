/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CalculationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CalculationStatus::CalculationStatus() : 
    m_submissionDateTimeHasBeenSet(false),
    m_completionDateTimeHasBeenSet(false),
    m_state(CalculationExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false)
{
}

CalculationStatus::CalculationStatus(JsonView jsonValue) : 
    m_submissionDateTimeHasBeenSet(false),
    m_completionDateTimeHasBeenSet(false),
    m_state(CalculationExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false)
{
  *this = jsonValue;
}

CalculationStatus& CalculationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubmissionDateTime"))
  {
    m_submissionDateTime = jsonValue.GetDouble("SubmissionDateTime");

    m_submissionDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletionDateTime"))
  {
    m_completionDateTime = jsonValue.GetDouble("CompletionDateTime");

    m_completionDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CalculationExecutionStateMapper::GetCalculationExecutionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetString("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_submissionDateTimeHasBeenSet)
  {
   payload.WithDouble("SubmissionDateTime", m_submissionDateTime.SecondsWithMSPrecision());
  }

  if(m_completionDateTimeHasBeenSet)
  {
   payload.WithDouble("CompletionDateTime", m_completionDateTime.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CalculationExecutionStateMapper::GetNameForCalculationExecutionState(m_state));
  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithString("StateChangeReason", m_stateChangeReason);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
