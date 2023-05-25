/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/SessionStatus.h>
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

SessionStatus::SessionStatus() : 
    m_startDateTimeHasBeenSet(false),
    m_lastModifiedDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_idleSinceDateTimeHasBeenSet(false),
    m_state(SessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false)
{
}

SessionStatus::SessionStatus(JsonView jsonValue) : 
    m_startDateTimeHasBeenSet(false),
    m_lastModifiedDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false),
    m_idleSinceDateTimeHasBeenSet(false),
    m_state(SessionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateChangeReasonHasBeenSet(false)
{
  *this = jsonValue;
}

SessionStatus& SessionStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetDouble("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDateTime"))
  {
    m_lastModifiedDateTime = jsonValue.GetDouble("LastModifiedDateTime");

    m_lastModifiedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdleSinceDateTime"))
  {
    m_idleSinceDateTime = jsonValue.GetDouble("IdleSinceDateTime");

    m_idleSinceDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = SessionStateMapper::GetSessionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateChangeReason"))
  {
    m_stateChangeReason = jsonValue.GetString("StateChangeReason");

    m_stateChangeReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionStatus::Jsonize() const
{
  JsonValue payload;

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("StartDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedDateTime", m_lastModifiedDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  if(m_idleSinceDateTimeHasBeenSet)
  {
   payload.WithDouble("IdleSinceDateTime", m_idleSinceDateTime.SecondsWithMSPrecision());
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", SessionStateMapper::GetNameForSessionState(m_state));
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
