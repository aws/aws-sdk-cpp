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
#include <aws/inspector/model/RunsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

RunsFilter::RunsFilter() : 
    m_runNamePatternsHasBeenSet(false),
    m_runStatesHasBeenSet(false),
    m_rulesPackagesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false)
{
}

RunsFilter::RunsFilter(const JsonValue& jsonValue) : 
    m_runNamePatternsHasBeenSet(false),
    m_runStatesHasBeenSet(false),
    m_rulesPackagesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

RunsFilter& RunsFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("runNamePatterns"))
  {
    Array<JsonValue> runNamePatternsJsonList = jsonValue.GetArray("runNamePatterns");
    for(unsigned runNamePatternsIndex = 0; runNamePatternsIndex < runNamePatternsJsonList.GetLength(); ++runNamePatternsIndex)
    {
      m_runNamePatterns.push_back(runNamePatternsJsonList[runNamePatternsIndex].AsString());
    }
    m_runNamePatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runStates"))
  {
    Array<JsonValue> runStatesJsonList = jsonValue.GetArray("runStates");
    for(unsigned runStatesIndex = 0; runStatesIndex < runStatesJsonList.GetLength(); ++runStatesIndex)
    {
      m_runStates.push_back(runStatesJsonList[runStatesIndex].AsString());
    }
    m_runStatesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackages"))
  {
    Array<JsonValue> rulesPackagesJsonList = jsonValue.GetArray("rulesPackages");
    for(unsigned rulesPackagesIndex = 0; rulesPackagesIndex < rulesPackagesJsonList.GetLength(); ++rulesPackagesIndex)
    {
      m_rulesPackages.push_back(rulesPackagesJsonList[rulesPackagesIndex].AsString());
    }
    m_rulesPackagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetObject("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetObject("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue RunsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_runNamePatternsHasBeenSet)
  {
   Array<JsonValue> runNamePatternsJsonList(m_runNamePatterns.size());
   for(unsigned runNamePatternsIndex = 0; runNamePatternsIndex < runNamePatternsJsonList.GetLength(); ++runNamePatternsIndex)
   {
     runNamePatternsJsonList[runNamePatternsIndex].AsString(m_runNamePatterns[runNamePatternsIndex]);
   }
   payload.WithArray("runNamePatterns", std::move(runNamePatternsJsonList));

  }

  if(m_runStatesHasBeenSet)
  {
   Array<JsonValue> runStatesJsonList(m_runStates.size());
   for(unsigned runStatesIndex = 0; runStatesIndex < runStatesJsonList.GetLength(); ++runStatesIndex)
   {
     runStatesJsonList[runStatesIndex].AsString(m_runStates[runStatesIndex]);
   }
   payload.WithArray("runStates", std::move(runStatesJsonList));

  }

  if(m_rulesPackagesHasBeenSet)
  {
   Array<JsonValue> rulesPackagesJsonList(m_rulesPackages.size());
   for(unsigned rulesPackagesIndex = 0; rulesPackagesIndex < rulesPackagesJsonList.GetLength(); ++rulesPackagesIndex)
   {
     rulesPackagesJsonList[rulesPackagesIndex].AsString(m_rulesPackages[rulesPackagesIndex]);
   }
   payload.WithArray("rulesPackages", std::move(rulesPackagesJsonList));

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithObject("creationTime", m_creationTime.Jsonize());

  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithObject("completionTime", m_completionTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws