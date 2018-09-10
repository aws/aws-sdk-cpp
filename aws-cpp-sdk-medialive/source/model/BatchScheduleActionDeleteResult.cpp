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

#include <aws/medialive/model/BatchScheduleActionDeleteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

BatchScheduleActionDeleteResult::BatchScheduleActionDeleteResult() : 
    m_scheduleActionsHasBeenSet(false)
{
}

BatchScheduleActionDeleteResult::BatchScheduleActionDeleteResult(JsonView jsonValue) : 
    m_scheduleActionsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchScheduleActionDeleteResult& BatchScheduleActionDeleteResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scheduleActions"))
  {
    Array<JsonView> scheduleActionsJsonList = jsonValue.GetArray("scheduleActions");
    for(unsigned scheduleActionsIndex = 0; scheduleActionsIndex < scheduleActionsJsonList.GetLength(); ++scheduleActionsIndex)
    {
      m_scheduleActions.push_back(scheduleActionsJsonList[scheduleActionsIndex].AsObject());
    }
    m_scheduleActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchScheduleActionDeleteResult::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleActionsHasBeenSet)
  {
   Array<JsonValue> scheduleActionsJsonList(m_scheduleActions.size());
   for(unsigned scheduleActionsIndex = 0; scheduleActionsIndex < scheduleActionsJsonList.GetLength(); ++scheduleActionsIndex)
   {
     scheduleActionsJsonList[scheduleActionsIndex].AsObject(m_scheduleActions[scheduleActionsIndex].Jsonize());
   }
   payload.WithArray("scheduleActions", std::move(scheduleActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
