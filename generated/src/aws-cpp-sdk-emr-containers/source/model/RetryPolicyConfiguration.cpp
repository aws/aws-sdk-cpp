/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/RetryPolicyConfiguration.h>
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

RetryPolicyConfiguration::RetryPolicyConfiguration() : 
    m_maxAttempts(0),
    m_maxAttemptsHasBeenSet(false)
{
}

RetryPolicyConfiguration::RetryPolicyConfiguration(JsonView jsonValue) : 
    m_maxAttempts(0),
    m_maxAttemptsHasBeenSet(false)
{
  *this = jsonValue;
}

RetryPolicyConfiguration& RetryPolicyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxAttempts"))
  {
    m_maxAttempts = jsonValue.GetInteger("maxAttempts");

    m_maxAttemptsHasBeenSet = true;
  }

  return *this;
}

JsonValue RetryPolicyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_maxAttemptsHasBeenSet)
  {
   payload.WithInteger("maxAttempts", m_maxAttempts);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
