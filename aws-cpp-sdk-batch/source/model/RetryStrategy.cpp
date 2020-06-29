/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/RetryStrategy.h>
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

RetryStrategy::RetryStrategy() : 
    m_attempts(0),
    m_attemptsHasBeenSet(false)
{
}

RetryStrategy::RetryStrategy(JsonView jsonValue) : 
    m_attempts(0),
    m_attemptsHasBeenSet(false)
{
  *this = jsonValue;
}

RetryStrategy& RetryStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attempts"))
  {
    m_attempts = jsonValue.GetInteger("attempts");

    m_attemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue RetryStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_attemptsHasBeenSet)
  {
   payload.WithInteger("attempts", m_attempts);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
