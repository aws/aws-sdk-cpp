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
#include <aws/swf/model/WorkflowExecutionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SWF
{
namespace Model
{

WorkflowExecutionInfo::WorkflowExecutionInfo() : 
    m_executionHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_closeTimestampHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_closeStatus(CloseStatus::NOT_SET),
    m_closeStatusHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_cancelRequested(false),
    m_cancelRequestedHasBeenSet(false)
{
}

WorkflowExecutionInfo::WorkflowExecutionInfo(const JsonValue& jsonValue) : 
    m_executionHasBeenSet(false),
    m_workflowTypeHasBeenSet(false),
    m_startTimestampHasBeenSet(false),
    m_closeTimestampHasBeenSet(false),
    m_executionStatus(ExecutionStatus::NOT_SET),
    m_executionStatusHasBeenSet(false),
    m_closeStatus(CloseStatus::NOT_SET),
    m_closeStatusHasBeenSet(false),
    m_parentHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_cancelRequested(false),
    m_cancelRequestedHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowExecutionInfo& WorkflowExecutionInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("execution"))
  {
    m_execution = jsonValue.GetObject("execution");

    m_executionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowType"))
  {
    m_workflowType = jsonValue.GetObject("workflowType");

    m_workflowTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTimestamp"))
  {
    m_startTimestamp = jsonValue.GetDouble("startTimestamp");

    m_startTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("closeTimestamp"))
  {
    m_closeTimestamp = jsonValue.GetDouble("closeTimestamp");

    m_closeTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStatus"))
  {
    m_executionStatus = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("executionStatus"));

    m_executionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("closeStatus"))
  {
    m_closeStatus = CloseStatusMapper::GetCloseStatusForName(jsonValue.GetString("closeStatus"));

    m_closeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parent"))
  {
    m_parent = jsonValue.GetObject("parent");

    m_parentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tagList"))
  {
    Array<JsonValue> tagListJsonList = jsonValue.GetArray("tagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsString());
    }
    m_tagListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cancelRequested"))
  {
    m_cancelRequested = jsonValue.GetBool("cancelRequested");

    m_cancelRequestedHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowExecutionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_executionHasBeenSet)
  {
   payload.WithObject("execution", m_execution.Jsonize());

  }

  if(m_workflowTypeHasBeenSet)
  {
   payload.WithObject("workflowType", m_workflowType.Jsonize());

  }

  if(m_startTimestampHasBeenSet)
  {
   payload.WithDouble("startTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if(m_closeTimestampHasBeenSet)
  {
   payload.WithDouble("closeTimestamp", m_closeTimestamp.SecondsWithMSPrecision());
  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithString("executionStatus", ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatus));
  }

  if(m_closeStatusHasBeenSet)
  {
   payload.WithString("closeStatus", CloseStatusMapper::GetNameForCloseStatus(m_closeStatus));
  }

  if(m_parentHasBeenSet)
  {
   payload.WithObject("parent", m_parent.Jsonize());

  }

  if(m_tagListHasBeenSet)
  {
   Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsString(m_tagList[tagListIndex]);
   }
   payload.WithArray("tagList", std::move(tagListJsonList));

  }

  if(m_cancelRequestedHasBeenSet)
  {
   payload.WithBool("cancelRequested", m_cancelRequested);

  }

  return payload;
}

} // namespace Model
} // namespace SWF
} // namespace Aws