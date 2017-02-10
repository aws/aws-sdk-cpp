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
#include <aws/codedeploy/model/DeploymentType.h>
#include <aws/codedeploy/model/DeploymentOption.h>

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
   * <p>Information about the type of deployment, either standard or blue/green, you
   * want to run and whether to route deployment traffic behind a load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentStyle">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API DeploymentStyle
  {
  public:
    DeploymentStyle();
    DeploymentStyle(const Aws::Utils::Json::JsonValue& jsonValue);
    DeploymentStyle& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Indicates whether to run a standard deployment or a blue/green
     * deployment.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Indicates whether to run a standard deployment or a blue/green
     * deployment.</p>
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Indicates whether to run a standard deployment or a blue/green
     * deployment.</p>
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Indicates whether to run a standard deployment or a blue/green
     * deployment.</p>
     */
    inline DeploymentStyle& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Indicates whether to run a standard deployment or a blue/green
     * deployment.</p>
     */
    inline DeploymentStyle& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentOption& GetDeploymentOption() const{ return m_deploymentOption; }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentOption(const DeploymentOption& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentOption(DeploymentOption&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentStyle& WithDeploymentOption(const DeploymentOption& value) { SetDeploymentOption(value); return *this;}

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentStyle& WithDeploymentOption(DeploymentOption&& value) { SetDeploymentOption(value); return *this;}

  private:
    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;
    DeploymentOption m_deploymentOption;
    bool m_deploymentOptionHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
