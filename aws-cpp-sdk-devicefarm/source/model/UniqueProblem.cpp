/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

UniqueProblem::UniqueProblem(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_problemsHasBeenSet(false)
{
  *this = jsonValue;
}

UniqueProblem& UniqueProblem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("problems"))
  {
    Aws::Utils::Array<JsonView> problemsJsonList = jsonValue.GetArray("problems");
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
   Aws::Utils::Array<JsonValue> problemsJsonList(m_problems.size());
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
