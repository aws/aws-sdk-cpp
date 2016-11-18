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
#include <aws/devicefarm/model/UniqueProblem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

UniqueProblem::UniqueProblem() : 
    m_messageHasBeenSet(false),
    m_problemsHasBeenSet(false)
{
}

UniqueProblem::UniqueProblem(const JsonValue& jsonValue) : 
    m_messageHasBeenSet(false),
    m_problemsHasBeenSet(false)
{
  *this = jsonValue;
}

UniqueProblem& UniqueProblem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("problems"))
  {
    Array<JsonValue> problemsJsonList = jsonValue.GetArray("problems");
    for(unsigned problemsIndex = 0; problemsIndex < problemsJsonList.GetLength(); ++problemsIndex)
    {
      m_problems.push_back(problemsJsonList[problemsIndex].AsObject());
    }
    m_problemsHasBeenSet = true;
  }

  return *this;
}

JsonValue UniqueProblem::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_problemsHasBeenSet)
  {
   Array<JsonValue> problemsJsonList(m_problems.size());
   for(unsigned problemsIndex = 0; problemsIndex < problemsJsonList.GetLength(); ++problemsIndex)
   {
     problemsJsonList[problemsIndex].AsObject(m_problems[problemsIndex].Jsonize());
   }
   payload.WithArray("problems", std::move(problemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws