/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/ExecutionBlockConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/arc-region-switch/model/ParallelExecutionBlockConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

ExecutionBlockConfiguration::ExecutionBlockConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ExecutionBlockConfiguration& ExecutionBlockConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customActionLambdaConfig"))
  {
    m_customActionLambdaConfig = jsonValue.GetObject("customActionLambdaConfig");
    m_customActionLambdaConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ec2AsgCapacityIncreaseConfig"))
  {
    m_ec2AsgCapacityIncreaseConfig = jsonValue.GetObject("ec2AsgCapacityIncreaseConfig");
    m_ec2AsgCapacityIncreaseConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionApprovalConfig"))
  {
    m_executionApprovalConfig = jsonValue.GetObject("executionApprovalConfig");
    m_executionApprovalConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arcRoutingControlConfig"))
  {
    m_arcRoutingControlConfig = jsonValue.GetObject("arcRoutingControlConfig");
    m_arcRoutingControlConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("globalAuroraConfig"))
  {
    m_globalAuroraConfig = jsonValue.GetObject("globalAuroraConfig");
    m_globalAuroraConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parallelConfig"))
  {
    m_parallelConfig = Aws::MakeShared<ParallelExecutionBlockConfiguration>("ExecutionBlockConfiguration", jsonValue.GetObject("parallelConfig"));
    m_parallelConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionSwitchPlanConfig"))
  {
    m_regionSwitchPlanConfig = jsonValue.GetObject("regionSwitchPlanConfig");
    m_regionSwitchPlanConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecsCapacityIncreaseConfig"))
  {
    m_ecsCapacityIncreaseConfig = jsonValue.GetObject("ecsCapacityIncreaseConfig");
    m_ecsCapacityIncreaseConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eksResourceScalingConfig"))
  {
    m_eksResourceScalingConfig = jsonValue.GetObject("eksResourceScalingConfig");
    m_eksResourceScalingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("route53HealthCheckConfig"))
  {
    m_route53HealthCheckConfig = jsonValue.GetObject("route53HealthCheckConfig");
    m_route53HealthCheckConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionBlockConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customActionLambdaConfigHasBeenSet)
  {
   payload.WithObject("customActionLambdaConfig", m_customActionLambdaConfig.Jsonize());

  }

  if(m_ec2AsgCapacityIncreaseConfigHasBeenSet)
  {
   payload.WithObject("ec2AsgCapacityIncreaseConfig", m_ec2AsgCapacityIncreaseConfig.Jsonize());

  }

  if(m_executionApprovalConfigHasBeenSet)
  {
   payload.WithObject("executionApprovalConfig", m_executionApprovalConfig.Jsonize());

  }

  if(m_arcRoutingControlConfigHasBeenSet)
  {
   payload.WithObject("arcRoutingControlConfig", m_arcRoutingControlConfig.Jsonize());

  }

  if(m_globalAuroraConfigHasBeenSet)
  {
   payload.WithObject("globalAuroraConfig", m_globalAuroraConfig.Jsonize());

  }

  if(m_parallelConfigHasBeenSet)
  {
   payload.WithObject("parallelConfig", m_parallelConfig->Jsonize());

  }

  if(m_regionSwitchPlanConfigHasBeenSet)
  {
   payload.WithObject("regionSwitchPlanConfig", m_regionSwitchPlanConfig.Jsonize());

  }

  if(m_ecsCapacityIncreaseConfigHasBeenSet)
  {
   payload.WithObject("ecsCapacityIncreaseConfig", m_ecsCapacityIncreaseConfig.Jsonize());

  }

  if(m_eksResourceScalingConfigHasBeenSet)
  {
   payload.WithObject("eksResourceScalingConfig", m_eksResourceScalingConfig.Jsonize());

  }

  if(m_route53HealthCheckConfigHasBeenSet)
  {
   payload.WithObject("route53HealthCheckConfig", m_route53HealthCheckConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
