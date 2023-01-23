/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ActionExecutionResult.h>
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

ActionExecutionResult::ActionExecutionResult() : 
    m_externalExecutionIdHasBeenSet(false),
    m_externalExecutionSummaryHasBeenSet(false),
    m_externalExecutionUrlHasBeenSet(false)
{
}

ActionExecutionResult::ActionExecutionResult(JsonView jsonValue) : 
    m_externalExecutionIdHasBeenSet(false),
    m_externalExecutionSummaryHasBeenSet(false),
    m_externalExecutionUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecutionResult& ActionExecutionResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("externalExecutionId"))
  {
    m_externalExecutionId = jsonValue.GetString("externalExecutionId");

    m_externalExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalExecutionSummary"))
  {
    m_externalExecutionSummary = jsonValue.GetString("externalExecutionSummary");

    m_externalExecutionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalExecutionUrl"))
  {
    m_externalExecutionUrl = jsonValue.GetString("externalExecutionUrl");

    m_externalExecutionUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecutionResult::Jsonize() const
{
  JsonValue payload;

  if(m_externalExecutionIdHasBeenSet)
  {
   payload.WithString("externalExecutionId", m_externalExecutionId);

  }

  if(m_externalExecutionSummaryHasBeenSet)
  {
   payload.WithString("externalExecutionSummary", m_externalExecutionSummary);

  }

  if(m_externalExecutionUrlHasBeenSet)
  {
   payload.WithString("externalExecutionUrl", m_externalExecutionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
