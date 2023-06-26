/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/RetryPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

RetryPolicy::RetryPolicy() : 
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_maximumEventAgeInSeconds(0),
    m_maximumEventAgeInSecondsHasBeenSet(false)
{
}

RetryPolicy::RetryPolicy(JsonView jsonValue) : 
    m_maximumRetryAttempts(0),
    m_maximumRetryAttemptsHasBeenSet(false),
    m_maximumEventAgeInSeconds(0),
    m_maximumEventAgeInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

RetryPolicy& RetryPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaximumRetryAttempts"))
  {
    m_maximumRetryAttempts = jsonValue.GetInteger("MaximumRetryAttempts");

    m_maximumRetryAttemptsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumEventAgeInSeconds"))
  {
    m_maximumEventAgeInSeconds = jsonValue.GetInteger("MaximumEventAgeInSeconds");

    m_maximumEventAgeInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue RetryPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_maximumRetryAttemptsHasBeenSet)
  {
   payload.WithInteger("MaximumRetryAttempts", m_maximumRetryAttempts);

  }

  if(m_maximumEventAgeInSecondsHasBeenSet)
  {
   payload.WithInteger("MaximumEventAgeInSeconds", m_maximumEventAgeInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
