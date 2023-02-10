/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/RetryPolicyExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

RetryPolicyExecution::RetryPolicyExecution() : 
    m_currentAttemptCount(0),
    m_currentAttemptCountHasBeenSet(false)
{
}

RetryPolicyExecution::RetryPolicyExecution(JsonView jsonValue) : 
    m_currentAttemptCount(0),
    m_currentAttemptCountHasBeenSet(false)
{
  *this = jsonValue;
}

RetryPolicyExecution& RetryPolicyExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("currentAttemptCount"))
  {
    m_currentAttemptCount = jsonValue.GetInteger("currentAttemptCount");

    m_currentAttemptCountHasBeenSet = true;
  }

  return *this;
}

JsonValue RetryPolicyExecution::Jsonize() const
{
  JsonValue payload;

  if(m_currentAttemptCountHasBeenSet)
  {
   payload.WithInteger("currentAttemptCount", m_currentAttemptCount);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
