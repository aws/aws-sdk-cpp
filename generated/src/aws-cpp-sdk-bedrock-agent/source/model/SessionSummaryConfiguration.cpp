/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/SessionSummaryConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

SessionSummaryConfiguration::SessionSummaryConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

SessionSummaryConfiguration& SessionSummaryConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxRecentSessions"))
  {
    m_maxRecentSessions = jsonValue.GetInteger("maxRecentSessions");
    m_maxRecentSessionsHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionSummaryConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxRecentSessionsHasBeenSet)
  {
   payload.WithInteger("maxRecentSessions", m_maxRecentSessions);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
