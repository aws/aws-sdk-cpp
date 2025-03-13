/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/RetryPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

RetryPolicy::RetryPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

RetryPolicy& RetryPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxAttempts"))
  {
    m_maxAttempts = jsonValue.GetInteger("maxAttempts");
    m_maxAttemptsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxFailedAttemptsPerHour"))
  {
    m_maxFailedAttemptsPerHour = jsonValue.GetInteger("maxFailedAttemptsPerHour");
    m_maxFailedAttemptsPerHourHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_maxAttemptsHasBeenSet)
  {
   payload.WithInteger("maxAttempts", m_maxAttempts);

  }

  if(m_maxFailedAttemptsPerHourHasBeenSet)
  {
   payload.WithInteger("maxFailedAttemptsPerHour", m_maxFailedAttemptsPerHour);

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
