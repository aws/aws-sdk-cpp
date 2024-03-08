/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostOptimizationHub
{
namespace Model
{

ResourceDetails::ResourceDetails() : 
    m_computeSavingsPlansHasBeenSet(false),
    m_ebsVolumeHasBeenSet(false),
    m_ec2AutoScalingGroupHasBeenSet(false),
    m_ec2InstanceHasBeenSet(false),
    m_ec2InstanceSavingsPlansHasBeenSet(false),
    m_ec2ReservedInstancesHasBeenSet(false),
    m_ecsServiceHasBeenSet(false),
    m_elastiCacheReservedInstancesHasBeenSet(false),
    m_lambdaFunctionHasBeenSet(false),
    m_openSearchReservedInstancesHasBeenSet(false),
    m_rdsReservedInstancesHasBeenSet(false),
    m_redshiftReservedInstancesHasBeenSet(false),
    m_sageMakerSavingsPlansHasBeenSet(false)
{
}

ResourceDetails::ResourceDetails(JsonView jsonValue) : 
    m_computeSavingsPlansHasBeenSet(false),
    m_ebsVolumeHasBeenSet(false),
    m_ec2AutoScalingGroupHasBeenSet(false),
    m_ec2InstanceHasBeenSet(false),
    m_ec2InstanceSavingsPlansHasBeenSet(false),
    m_ec2ReservedInstancesHasBeenSet(false),
    m_ecsServiceHasBeenSet(false),
    m_elastiCacheReservedInstancesHasBeenSet(false),
    m_lambdaFunctionHasBeenSet(false),
    m_openSearchReservedInstancesHasBeenSet(false),
    m_rdsReservedInstancesHasBeenSet(false),
    m_redshiftReservedInstancesHasBeenSet(false),
    m_sageMakerSavingsPlansHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDetails& ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("computeSavingsPlans"))
  {
    m_computeSavingsPlans = jsonValue.GetObject("computeSavingsPlans");

    m_computeSavingsPlansHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebsVolume"))
  {
    m_ebsVolume = jsonValue.GetObject("ebsVolume");

    m_ebsVolumeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2AutoScalingGroup"))
  {
    m_ec2AutoScalingGroup = jsonValue.GetObject("ec2AutoScalingGroup");

    m_ec2AutoScalingGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2Instance"))
  {
    m_ec2Instance = jsonValue.GetObject("ec2Instance");

    m_ec2InstanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceSavingsPlans"))
  {
    m_ec2InstanceSavingsPlans = jsonValue.GetObject("ec2InstanceSavingsPlans");

    m_ec2InstanceSavingsPlansHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2ReservedInstances"))
  {
    m_ec2ReservedInstances = jsonValue.GetObject("ec2ReservedInstances");

    m_ec2ReservedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecsService"))
  {
    m_ecsService = jsonValue.GetObject("ecsService");

    m_ecsServiceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("elastiCacheReservedInstances"))
  {
    m_elastiCacheReservedInstances = jsonValue.GetObject("elastiCacheReservedInstances");

    m_elastiCacheReservedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunction"))
  {
    m_lambdaFunction = jsonValue.GetObject("lambdaFunction");

    m_lambdaFunctionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openSearchReservedInstances"))
  {
    m_openSearchReservedInstances = jsonValue.GetObject("openSearchReservedInstances");

    m_openSearchReservedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rdsReservedInstances"))
  {
    m_rdsReservedInstances = jsonValue.GetObject("rdsReservedInstances");

    m_rdsReservedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redshiftReservedInstances"))
  {
    m_redshiftReservedInstances = jsonValue.GetObject("redshiftReservedInstances");

    m_redshiftReservedInstancesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sageMakerSavingsPlans"))
  {
    m_sageMakerSavingsPlans = jsonValue.GetObject("sageMakerSavingsPlans");

    m_sageMakerSavingsPlansHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_computeSavingsPlansHasBeenSet)
  {
   payload.WithObject("computeSavingsPlans", m_computeSavingsPlans.Jsonize());

  }

  if(m_ebsVolumeHasBeenSet)
  {
   payload.WithObject("ebsVolume", m_ebsVolume.Jsonize());

  }

  if(m_ec2AutoScalingGroupHasBeenSet)
  {
   payload.WithObject("ec2AutoScalingGroup", m_ec2AutoScalingGroup.Jsonize());

  }

  if(m_ec2InstanceHasBeenSet)
  {
   payload.WithObject("ec2Instance", m_ec2Instance.Jsonize());

  }

  if(m_ec2InstanceSavingsPlansHasBeenSet)
  {
   payload.WithObject("ec2InstanceSavingsPlans", m_ec2InstanceSavingsPlans.Jsonize());

  }

  if(m_ec2ReservedInstancesHasBeenSet)
  {
   payload.WithObject("ec2ReservedInstances", m_ec2ReservedInstances.Jsonize());

  }

  if(m_ecsServiceHasBeenSet)
  {
   payload.WithObject("ecsService", m_ecsService.Jsonize());

  }

  if(m_elastiCacheReservedInstancesHasBeenSet)
  {
   payload.WithObject("elastiCacheReservedInstances", m_elastiCacheReservedInstances.Jsonize());

  }

  if(m_lambdaFunctionHasBeenSet)
  {
   payload.WithObject("lambdaFunction", m_lambdaFunction.Jsonize());

  }

  if(m_openSearchReservedInstancesHasBeenSet)
  {
   payload.WithObject("openSearchReservedInstances", m_openSearchReservedInstances.Jsonize());

  }

  if(m_rdsReservedInstancesHasBeenSet)
  {
   payload.WithObject("rdsReservedInstances", m_rdsReservedInstances.Jsonize());

  }

  if(m_redshiftReservedInstancesHasBeenSet)
  {
   payload.WithObject("redshiftReservedInstances", m_redshiftReservedInstances.Jsonize());

  }

  if(m_sageMakerSavingsPlansHasBeenSet)
  {
   payload.WithObject("sageMakerSavingsPlans", m_sageMakerSavingsPlans.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
