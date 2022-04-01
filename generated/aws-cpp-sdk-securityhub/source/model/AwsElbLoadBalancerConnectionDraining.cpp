/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerConnectionDraining.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsElbLoadBalancerConnectionDraining::AwsElbLoadBalancerConnectionDraining() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
}

AwsElbLoadBalancerConnectionDraining::AwsElbLoadBalancerConnectionDraining(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_timeout(0),
    m_timeoutHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerConnectionDraining& AwsElbLoadBalancerConnectionDraining::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

    m_timeoutHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerConnectionDraining::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_timeoutHasBeenSet)
  {
   payload.WithInteger("Timeout", m_timeout);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
