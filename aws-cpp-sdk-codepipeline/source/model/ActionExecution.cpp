/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/model/ActionExecution.h>
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

ActionExecution::ActionExecution() : 
    m_status(ActionExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false),
    m_externalExecutionUrlHasBeenSet(false),
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

ActionExecution::ActionExecution(const JsonValue& jsonValue) : 
    m_status(ActionExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_lastStatusChangeHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_lastUpdatedByHasBeenSet(false),
    m_externalExecutionIdHasBeenSet(false),
    m_externalExecutionUrlHasBeenSet(false),
    m_percentComplete(0),
    m_percentCompleteHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ActionExecution& ActionExecution::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = ActionExecutionStatusMapper::GetActionExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatusChange"))
  {
    m_lastStatusChange = jsonValue.GetDouble("lastStatusChange");

    m_lastStatusChangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");

    m_lastUpdatedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalExecutionId"))
  {
    m_externalExecutionId = jsonValue.GetString("externalExecutionId");

    m_externalExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalExecutionUrl"))
  {
    m_externalExecutionUrl = jsonValue.GetString("externalExecutionUrl");

    m_externalExecutionUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("percentComplete"))
  {
    m_percentComplete = jsonValue.GetInteger("percentComplete");

    m_percentCompleteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("errorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ActionExecution::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ActionExecutionStatusMapper::GetNameForActionExecutionStatus(m_status));
  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_lastStatusChangeHasBeenSet)
  {
   payload.WithDouble("lastStatusChange", m_lastStatusChange.SecondsWithMSPrecision());
  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  if(m_lastUpdatedByHasBeenSet)
  {
   payload.WithString("lastUpdatedBy", m_lastUpdatedBy);

  }

  if(m_externalExecutionIdHasBeenSet)
  {
   payload.WithString("externalExecutionId", m_externalExecutionId);

  }

  if(m_externalExecutionUrlHasBeenSet)
  {
   payload.WithString("externalExecutionUrl", m_externalExecutionUrl);

  }

  if(m_percentCompleteHasBeenSet)
  {
   payload.WithInteger("percentComplete", m_percentComplete);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("errorDetails", m_errorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws