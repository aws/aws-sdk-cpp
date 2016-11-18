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
#include <aws/inspector/model/Run.h>
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

Run::Run() : 
    m_runArnHasBeenSet(false),
    m_runNameHasBeenSet(false),
    m_assessmentArnHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_rulesPackagesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false)
{
}

Run::Run(const JsonValue& jsonValue) : 
    m_runArnHasBeenSet(false),
    m_runNameHasBeenSet(false),
    m_assessmentArnHasBeenSet(false),
    m_runStateHasBeenSet(false),
    m_rulesPackagesHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_completionTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Run& Run::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("runArn"))
  {
    m_runArn = jsonValue.GetString("runArn");

    m_runArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runName"))
  {
    m_runName = jsonValue.GetString("runName");

    m_runNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentArn"))
  {
    m_assessmentArn = jsonValue.GetString("assessmentArn");

    m_assessmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runState"))
  {
    m_runState = jsonValue.GetString("runState");

    m_runStateHasBeenSet = true;
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
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("completionTime"))
  {
    m_completionTime = jsonValue.GetDouble("completionTime");

    m_completionTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Run::Jsonize() const
{
  JsonValue payload;

  if(m_runArnHasBeenSet)
  {
   payload.WithString("runArn", m_runArn);

  }

  if(m_runNameHasBeenSet)
  {
   payload.WithString("runName", m_runName);

  }

  if(m_assessmentArnHasBeenSet)
  {
   payload.WithString("assessmentArn", m_assessmentArn);

  }

  if(m_runStateHasBeenSet)
  {
   payload.WithString("runState", m_runState);

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
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_completionTimeHasBeenSet)
  {
   payload.WithDouble("completionTime", m_completionTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws