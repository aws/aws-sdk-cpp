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
