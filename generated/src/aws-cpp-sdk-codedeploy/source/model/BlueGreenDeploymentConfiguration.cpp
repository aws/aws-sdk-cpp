/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/BlueGreenDeploymentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

BlueGreenDeploymentConfiguration::BlueGreenDeploymentConfiguration() : 
    m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet(false),
    m_deploymentReadyOptionHasBeenSet(false),
    m_greenFleetProvisioningOptionHasBeenSet(false)
{
}

BlueGreenDeploymentConfiguration::BlueGreenDeploymentConfiguration(JsonView jsonValue) : 
    m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet(false),
    m_deploymentReadyOptionHasBeenSet(false),
    m_greenFleetProvisioningOptionHasBeenSet(false)
{
  *this = jsonValue;
}

BlueGreenDeploymentConfiguration& BlueGreenDeploymentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("terminateBlueInstancesOnDeploymentSuccess"))
  {
    m_terminateBlueInstancesOnDeploymentSuccess = jsonValue.GetObject("terminateBlueInstancesOnDeploymentSuccess");

    m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentReadyOption"))
  {
    m_deploymentReadyOption = jsonValue.GetObject("deploymentReadyOption");

    m_deploymentReadyOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greenFleetProvisioningOption"))
  {
    m_greenFleetProvisioningOption = jsonValue.GetObject("greenFleetProvisioningOption");

    m_greenFleetProvisioningOptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BlueGreenDeploymentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet)
  {
   payload.WithObject("terminateBlueInstancesOnDeploymentSuccess", m_terminateBlueInstancesOnDeploymentSuccess.Jsonize());

  }

  if(m_deploymentReadyOptionHasBeenSet)
  {
   payload.WithObject("deploymentReadyOption", m_deploymentReadyOption.Jsonize());

  }

  if(m_greenFleetProvisioningOptionHasBeenSet)
  {
   payload.WithObject("greenFleetProvisioningOption", m_greenFleetProvisioningOption.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
