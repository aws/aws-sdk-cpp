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

#include <aws/glue/model/Action.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Action::Action() : 
    m_jobNameHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

Action::Action(const JsonValue& jsonValue) : 
    m_jobNameHasBeenSet(false),
    m_argumentsHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
  *this = jsonValue;
}

Action& Action::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");

    m_jobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arguments"))
  {
    Aws::Map<Aws::String, JsonValue> argumentsJsonMap = jsonValue.GetObject("Arguments").GetAllObjects();
    for(auto& argumentsItem : argumentsJsonMap)
    {
      m_arguments[argumentsItem.first] = argumentsItem.second.AsString();
    }
    m_argumentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue Action::Jsonize() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_argumentsHasBeenSet)
  {
   JsonValue argumentsJsonMap;
   for(auto& argumentsItem : m_arguments)
   {
     argumentsJsonMap.WithString(argumentsItem.first, argumentsItem.second);
   }
   payload.WithObject("Arguments", std::move(argumentsJsonMap));

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
