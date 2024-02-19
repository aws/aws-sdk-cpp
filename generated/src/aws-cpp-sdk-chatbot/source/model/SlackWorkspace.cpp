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

SlackWorkspace::SlackWorkspace() : 
    m_slackTeamIdHasBeenSet(false),
    m_slackTeamNameHasBeenSet(false)
{
}

SlackWorkspace::SlackWorkspace(JsonView jsonValue) : 
    m_slackTeamIdHasBeenSet(false),
    m_slackTeamNameHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
