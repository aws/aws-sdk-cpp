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

#include <aws/iot-jobs-data/model/JobExecutionState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTJobsDataPlane
{
namespace Model
{

JobExecutionState::JobExecutionState() : 
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

JobExecutionState::JobExecutionState(const JsonValue& jsonValue) : 
    m_status(JobExecutionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
  *this = jsonValue;
}

JobExecutionState& JobExecutionState::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = JobExecutionStatusMapper::GetJobExecutionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusDetails"))
  {
    Aws::Map<Aws::String, JsonValue> statusDetailsJsonMap = jsonValue.GetObject("statusDetails").GetAllObjects();
    for(auto& statusDetailsItem : statusDetailsJsonMap)
    {
      m_statusDetails[statusDetailsItem.first] = statusDetailsItem.second.AsString();
    }
    m_statusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("versionNumber");

    m_versionNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue JobExecutionState::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobExecutionStatusMapper::GetNameForJobExecutionStatus(m_status));
  }

  if(m_statusDetailsHasBeenSet)
  {
   JsonValue statusDetailsJsonMap;
   for(auto& statusDetailsItem : m_statusDetails)
   {
     statusDetailsJsonMap.WithString(statusDetailsItem.first, statusDetailsItem.second);
   }
   payload.WithObject("statusDetails", std::move(statusDetailsJsonMap));

  }

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("versionNumber", m_versionNumber);

  }

  return payload;
}

} // namespace Model
} // namespace IoTJobsDataPlane
} // namespace Aws
