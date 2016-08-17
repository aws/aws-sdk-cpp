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
#include <aws/codecommit/model/RepositoryTrigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

RepositoryTrigger::RepositoryTrigger() : 
    m_nameHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_customDataHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
}

RepositoryTrigger::RepositoryTrigger(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_destinationArnHasBeenSet(false),
    m_customDataHasBeenSet(false),
    m_branchesHasBeenSet(false),
    m_eventsHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryTrigger& RepositoryTrigger::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationArn"))
  {
    m_destinationArn = jsonValue.GetString("destinationArn");

    m_destinationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customData"))
  {
    m_customData = jsonValue.GetString("customData");

    m_customDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("branches"))
  {
    Array<JsonValue> branchesJsonList = jsonValue.GetArray("branches");
    for(unsigned branchesIndex = 0; branchesIndex < branchesJsonList.GetLength(); ++branchesIndex)
    {
      m_branches.push_back(branchesJsonList[branchesIndex].AsString());
    }
    m_branchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("events"))
  {
    Array<JsonValue> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(RepositoryTriggerEventEnumMapper::GetRepositoryTriggerEventEnumForName(eventsJsonList[eventsIndex].AsString()));
    }
    m_eventsHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryTrigger::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_destinationArnHasBeenSet)
  {
   payload.WithString("destinationArn", m_destinationArn);

  }

  if(m_customDataHasBeenSet)
  {
   payload.WithString("customData", m_customData);

  }

  if(m_branchesHasBeenSet)
  {
   Array<JsonValue> branchesJsonList(m_branches.size());
   for(unsigned branchesIndex = 0; branchesIndex < branchesJsonList.GetLength(); ++branchesIndex)
   {
     branchesJsonList[branchesIndex].AsString(m_branches[branchesIndex]);
   }
   payload.WithArray("branches", std::move(branchesJsonList));

  }

  if(m_eventsHasBeenSet)
  {
   Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsString(RepositoryTriggerEventEnumMapper::GetNameForRepositoryTriggerEventEnum(m_events[eventsIndex]));
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeCommit
} // namespace Aws