/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InvalidContactFlowModuleException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

InvalidContactFlowModuleException::InvalidContactFlowModuleException() : 
    m_problemsHasBeenSet(false)
{
}

InvalidContactFlowModuleException::InvalidContactFlowModuleException(JsonView jsonValue) : 
    m_problemsHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidContactFlowModuleException& InvalidContactFlowModuleException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Problems"))
  {
    Aws::Utils::Array<JsonView> problemsJsonList = jsonValue.GetArray("Problems");
    for(unsigned problemsIndex = 0; problemsIndex < problemsJsonList.GetLength(); ++problemsIndex)
    {
      m_problems.push_back(problemsJsonList[problemsIndex].AsObject());
    }
    m_problemsHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidContactFlowModuleException::Jsonize() const
{
  JsonValue payload;

  if(m_problemsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> problemsJsonList(m_problems.size());
   for(unsigned problemsIndex = 0; problemsIndex < problemsJsonList.GetLength(); ++problemsIndex)
   {
     problemsJsonList[problemsIndex].AsObject(m_problems[problemsIndex].Jsonize());
   }
   payload.WithArray("Problems", std::move(problemsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
