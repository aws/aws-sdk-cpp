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

#include <aws/forecast/model/EvaluationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

EvaluationResult::EvaluationResult() : 
    m_algorithmArnHasBeenSet(false),
    m_testWindowsHasBeenSet(false)
{
}

EvaluationResult::EvaluationResult(JsonView jsonValue) : 
    m_algorithmArnHasBeenSet(false),
    m_testWindowsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluationResult& EvaluationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlgorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("AlgorithmArn");

    m_algorithmArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TestWindows"))
  {
    Array<JsonView> testWindowsJsonList = jsonValue.GetArray("TestWindows");
    for(unsigned testWindowsIndex = 0; testWindowsIndex < testWindowsJsonList.GetLength(); ++testWindowsIndex)
    {
      m_testWindows.push_back(testWindowsJsonList[testWindowsIndex].AsObject());
    }
    m_testWindowsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluationResult::Jsonize() const
{
  JsonValue payload;

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("AlgorithmArn", m_algorithmArn);

  }

  if(m_testWindowsHasBeenSet)
  {
   Array<JsonValue> testWindowsJsonList(m_testWindows.size());
   for(unsigned testWindowsIndex = 0; testWindowsIndex < testWindowsJsonList.GetLength(); ++testWindowsIndex)
   {
     testWindowsJsonList[testWindowsIndex].AsObject(m_testWindows[testWindowsIndex].Jsonize());
   }
   payload.WithArray("TestWindows", std::move(testWindowsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
