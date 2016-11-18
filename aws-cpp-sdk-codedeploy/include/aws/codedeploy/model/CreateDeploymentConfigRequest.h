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
#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/MinimumHealthyHosts.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a create deployment configuration operation.</p>
   */
  class AWS_CODEDEPLOY_API CreateDeploymentConfigRequest : public CodeDeployRequest
  {
  public:
    CreateDeploymentConfigRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of the deployment configuration to create.</p>
     */
    inline CreateDeploymentConfigRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, AWS CodeDeploy converts the percentage to the
     * equivalent number of instance and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, AWS CodeDeploy converts the percentage to the
     * equivalent number of instance and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, AWS CodeDeploy converts the percentage to the
     * equivalent number of instance and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline void SetMinimumHealthyHosts(MinimumHealthyHosts&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, AWS CodeDeploy converts the percentage to the
     * equivalent number of instance and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline CreateDeploymentConfigRequest& WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}

    /**
     * <p>The minimum number of healthy instances that should be available at any time
     * during the deployment. There are two parameters expected in the input: type and
     * value.</p> <p>The type parameter takes either of the following values:</p> <ul>
     * <li> <p>HOST_COUNT: The value parameter represents the minimum number of healthy
     * instances as an absolute value.</p> </li> <li> <p>FLEET_PERCENT: The value
     * parameter represents the minimum number of healthy instances as a percentage of
     * the total number of instances in the deployment. If you specify FLEET_PERCENT,
     * at the start of the deployment, AWS CodeDeploy converts the percentage to the
     * equivalent number of instance and rounds up fractional instances.</p> </li>
     * </ul> <p>The value parameter takes an integer.</p> <p>For example, to set a
     * minimum of 95% healthy instance, specify a type of FLEET_PERCENT and a value of
     * 95.</p>
     */
    inline CreateDeploymentConfigRequest& WithMinimumHealthyHosts(MinimumHealthyHosts&& value) { SetMinimumHealthyHosts(value); return *this;}

  private:
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
