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

#include <aws/snowball/model/EventTriggerDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

EventTriggerDefinition::EventTriggerDefinition() : 
    m_eventResourceARNHasBeenSet(false)
{
}

EventTriggerDefinition::EventTriggerDefinition(const JsonValue& jsonValue) : 
    m_eventResourceARNHasBeenSet(false)
{
  *this = jsonValue;
}

EventTriggerDefinition& EventTriggerDefinition::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EventResourceARN"))
  {
    m_eventResourceARN = jsonValue.GetString("EventResourceARN");

    m_eventResourceARNHasBeenSet = true;
  }

  return *this;
}

JsonValue EventTriggerDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_eventResourceARNHasBeenSet)
  {
   payload.WithString("EventResourceARN", m_eventResourceARN);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws