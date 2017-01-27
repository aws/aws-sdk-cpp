/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

BlueGreenDeploymentConfiguration::BlueGreenDeploymentConfiguration(const JsonValue& jsonValue) : 
    m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet(false),
    m_deploymentReadyOptionHasBeenSet(false),
    m_greenFleetProvisioningOptionHasBeenSet(false)
{
  *this = jsonValue;
}

BlueGreenDeploymentConfiguration& BlueGreenDeploymentConfiguration::operator =(const JsonValue& jsonValue)
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