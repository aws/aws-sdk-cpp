/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryExecutionStatus.h>
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

QueryExecutionStatus::QueryExecutionStatus() : 
    m_state(QueryExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_submissionDateTimeHasBeenSet(false),
    m_completionDateTimeHasBeenSet(false)
{
}

QueryExecutionStatus::QueryExecutionStatus(JsonView jsonValue) : 
    m_state(QueryExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_submissionDateTimeHasBeenSet(false),
    m_completionDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

QueryExecutionStatus& QueryExecutionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("State"))
  {
    m_state = QueryExecutionStateMapper::GetQueryExecutionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetString("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

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

  return *this;
}

JsonValue QueryExecutionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", QueryExecutionStateMapper::GetNameForQueryExecutionState(m_state));
  }

  if(m_stateChangeReasonHasBeenSet)
  {
   payload.WithString("StateChangeReason", m_stateChangeReason);

  }

  if(m_submissionDateTimeHasBeenSet)
  {
   payload.WithDouble("SubmissionDateTime", m_submissionDateTime.SecondsWithMSPrecision());
  }

  if(m_completionDateTimeHasBeenSet)
  {
   payload.WithDouble("CompletionDateTime", m_completionDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
