/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/SlackWorkspace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

SlackWorkspace::SlackWorkspace(JsonView jsonValue)
{
  *this = jsonValue;
}

SlackWorkspace& SlackWorkspace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SlackTeamId"))
  {
    m_slackTeamId = jsonValue.GetString("SlackTeamId");
    m_slackTeamIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SlackTeamName"))
  {
    m_slackTeamName = jsonValue.GetString("SlackTeamName");
    m_slackTeamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue SlackWorkspace::Jsonize() const
{
  JsonValue payload;

  if(m_slackTeamIdHasBeenSet)
  {
   payload.WithString("SlackTeamId", m_slackTeamId);

  }

  if(m_slackTeamNameHasBeenSet)
  {
   payload.WithString("SlackTeamName", m_slackTeamName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
