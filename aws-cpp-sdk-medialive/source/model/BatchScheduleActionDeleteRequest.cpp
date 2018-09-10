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

#include <aws/medialive/model/BatchScheduleActionDeleteRequest.h>
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

BatchScheduleActionDeleteRequest::BatchScheduleActionDeleteRequest() : 
    m_actionNamesHasBeenSet(false)
{
}

BatchScheduleActionDeleteRequest::BatchScheduleActionDeleteRequest(JsonView jsonValue) : 
    m_actionNamesHasBeenSet(false)
{
  *this = jsonValue;
}

BatchScheduleActionDeleteRequest& BatchScheduleActionDeleteRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionNames"))
  {
    Array<JsonView> actionNamesJsonList = jsonValue.GetArray("actionNames");
    for(unsigned actionNamesIndex = 0; actionNamesIndex < actionNamesJsonList.GetLength(); ++actionNamesIndex)
    {
      m_actionNames.push_back(actionNamesJsonList[actionNamesIndex].AsString());
    }
    m_actionNamesHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchScheduleActionDeleteRequest::Jsonize() const
{
  JsonValue payload;

  if(m_actionNamesHasBeenSet)
  {
   Array<JsonValue> actionNamesJsonList(m_actionNames.size());
   for(unsigned actionNamesIndex = 0; actionNamesIndex < actionNamesJsonList.GetLength(); ++actionNamesIndex)
   {
     actionNamesJsonList[actionNamesIndex].AsString(m_actionNames[actionNamesIndex]);
   }
   payload.WithArray("actionNames", std::move(actionNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
