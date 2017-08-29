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

QueryExecutionStatus::QueryExecutionStatus(const JsonValue& jsonValue) : 
    m_state(QueryExecutionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false),
    m_submissionDateTimeHasBeenSet(false),
    m_completionDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

QueryExecutionStatus& QueryExecutionStatus::operator =(const JsonValue& jsonValue)
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
