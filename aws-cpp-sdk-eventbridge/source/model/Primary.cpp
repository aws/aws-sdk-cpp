/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/Primary.h>
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

Primary::Primary() : 
    m_healthCheckHasBeenSet(false)
{
}

Primary::Primary(JsonView jsonValue) : 
    m_healthCheckHasBeenSet(false)
{
  *this = jsonValue;
}

Primary& Primary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HealthCheck"))
  {
    m_healthCheck = jsonValue.GetString("HealthCheck");

    m_healthCheckHasBeenSet = true;
  }

  return *this;
}

JsonValue Primary::Jsonize() const
{
  JsonValue payload;

  if(m_healthCheckHasBeenSet)
  {
   payload.WithString("HealthCheck", m_healthCheck);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
