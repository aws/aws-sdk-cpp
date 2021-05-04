/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RetryStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

RetryStrategy::RetryStrategy() : 
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false)
{
}

RetryStrategy::RetryStrategy(JsonView jsonValue) : 
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false)
{
  *this = jsonValue;
}

RetryStrategy& RetryStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumRetryAttempts"))
  {
    m_maximumRetryAttempts = jsonValue.GetInteger("MaximumRetryAttempts");

    m_maximumRetryAttemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue RetryStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_maximumRetryAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumRetryAttempts", m_maximumRetryAttempts);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
