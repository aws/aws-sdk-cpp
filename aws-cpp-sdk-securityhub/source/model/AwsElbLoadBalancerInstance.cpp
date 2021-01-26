/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElbLoadBalancerInstance.h>
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

AwsElbLoadBalancerInstance::AwsElbLoadBalancerInstance() : 
    m_instanceIdHasBeenSet(false)
{
}

AwsElbLoadBalancerInstance::AwsElbLoadBalancerInstance(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElbLoadBalancerInstance& AwsElbLoadBalancerInstance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElbLoadBalancerInstance::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
