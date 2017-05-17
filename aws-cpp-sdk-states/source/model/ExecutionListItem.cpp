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

#include <aws/states/model/ExecutionListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ExecutionListItem::ExecutionListItem() : 
    m_executionArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false)
{
}

ExecutionListItem::ExecutionListItem(const JsonValue& jsonValue) : 
    m_executionArnHasBeenSet(false),
    m_stateMachineArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_status(ExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_stopDateHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionListItem& ExecutionListItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("executionArn"))
  {
    m_executionArn = jsonValue.GetString("executionArn");

    m_executionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateMachineArn"))
  {
    m_stateMachineArn = jsonValue.GetString("stateMachineArn");

    m_stateMachineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExecutionStatusMapper::GetExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startDate"))
  {
    m_startDate = jsonValue.GetDouble("startDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopDate"))
  {
    m_stopDate = jsonValue.GetDouble("stopDate");

    m_stopDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionListItem::Jsonize() const
{
  JsonValue payload;

  if(m_executionArnHasBeenSet)
  {
   payload.WithString("executionArn", m_executionArn);

  }

  if(m_stateMachineArnHasBeenSet)
  {
   payload.WithString("stateMachineArn", m_stateMachineArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ExecutionStatusMapper::GetNameForExecutionStatus(m_status));
  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("startDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_stopDateHasBeenSet)
  {
   payload.WithDouble("stopDate", m_stopDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws