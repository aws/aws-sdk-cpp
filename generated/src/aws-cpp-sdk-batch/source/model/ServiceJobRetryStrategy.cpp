/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobRetryStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

ServiceJobRetryStrategy::ServiceJobRetryStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceJobRetryStrategy& ServiceJobRetryStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attempts"))
  {
    m_attempts = jsonValue.GetInteger("attempts");
    m_attemptsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluateOnExit"))
  {
    Aws::Utils::Array<JsonView> evaluateOnExitJsonList = jsonValue.GetArray("evaluateOnExit");
    for(unsigned evaluateOnExitIndex = 0; evaluateOnExitIndex < evaluateOnExitJsonList.GetLength(); ++evaluateOnExitIndex)
    {
      m_evaluateOnExit.push_back(evaluateOnExitJsonList[evaluateOnExitIndex].AsObject());
    }
    m_evaluateOnExitHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceJobRetryStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_attemptsHasBeenSet)
  {
   payload.WithInteger("attempts", m_attempts);

  }

  if(m_evaluateOnExitHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> evaluateOnExitJsonList(m_evaluateOnExit.size());
   for(unsigned evaluateOnExitIndex = 0; evaluateOnExitIndex < evaluateOnExitJsonList.GetLength(); ++evaluateOnExitIndex)
   {
     evaluateOnExitJsonList[evaluateOnExitIndex].AsObject(m_evaluateOnExit[evaluateOnExitIndex].Jsonize());
   }
   payload.WithArray("evaluateOnExit", std::move(evaluateOnExitJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
