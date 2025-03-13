/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/RuleState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

RuleState::RuleState(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleState& RuleState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentRevision"))
  {
    m_currentRevision = jsonValue.GetObject("currentRevision");
    m_currentRevisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestExecution"))
  {
    m_latestExecution = jsonValue.GetObject("latestExecution");
    m_latestExecutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("entityUrl"))
  {
    m_entityUrl = jsonValue.GetString("entityUrl");
    m_entityUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revisionUrl"))
  {
    m_revisionUrl = jsonValue.GetString("revisionUrl");
    m_revisionUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleState::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_currentRevisionHasBeenSet)
  {
   payload.WithObject("currentRevision", m_currentRevision.Jsonize());

  }

  if(m_latestExecutionHasBeenSet)
  {
   payload.WithObject("latestExecution", m_latestExecution.Jsonize());

  }

  if(m_entityUrlHasBeenSet)
  {
   payload.WithString("entityUrl", m_entityUrl);

  }

  if(m_revisionUrlHasBeenSet)
  {
   payload.WithString("revisionUrl", m_revisionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
