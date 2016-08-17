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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/MinimumHealthyHosts.h>
#include <aws/core/utils/DateTime.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment configuration.</p>
   */
  class AWS_CODEDEPLOY_API DeploymentConfigInfo
  {
  public:
    DeploymentConfigInfo();
    DeploymentConfigInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentConfigInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline const Aws::String& GetDeploymentConfigId() const{ return m_deploymentConfigId; }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(const Aws::String& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = value; }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(Aws::String&& value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId = value; }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline void SetDeploymentConfigId(const char* value) { m_deploymentConfigIdHasBeenSet = true; m_deploymentConfigId.assign(value); }

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigId(const Aws::String& value) { SetDeploymentConfigId(value); return *this;}

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigId(Aws::String&& value) { SetDeploymentConfigId(value); return *this;}

    /**
     * <p>The deployment configuration ID.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigId(const char* value) { SetDeploymentConfigId(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The deployment configuration name.</p>
     */
    inline DeploymentConfigInfo& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline const MinimumHealthyHosts& GetMinimumHealthyHosts() const{ return m_minimumHealthyHosts; }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline void SetMinimumHealthyHosts(const MinimumHealthyHosts& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline void SetMinimumHealthyHosts(MinimumHealthyHosts&& value) { m_minimumHealthyHostsHasBeenSet = true; m_minimumHealthyHosts = value; }

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline DeploymentConfigInfo& WithMinimumHealthyHosts(const MinimumHealthyHosts& value) { SetMinimumHealthyHosts(value); return *this;}

    /**
     * <p>Information about the number or percentage of minimum healthy instance.</p>
     */
    inline DeploymentConfigInfo& WithMinimumHealthyHosts(MinimumHealthyHosts&& value) { SetMinimumHealthyHosts(value); return *this;}

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline DeploymentConfigInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the deployment configuration was created.</p>
     */
    inline DeploymentConfigInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(value); return *this;}

  private:
    Aws::String m_deploymentConfigId;
    bool m_deploymentConfigIdHasBeenSet;
    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
    MinimumHealthyHosts m_minimumHealthyHosts;
    bool m_minimumHealthyHostsHasBeenSet;
    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
