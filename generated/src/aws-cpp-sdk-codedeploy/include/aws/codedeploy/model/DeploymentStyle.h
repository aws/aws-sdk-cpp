/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentType.h>
#include <aws/codedeploy/model/DeploymentOption.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about the type of deployment, either in-place or blue/green, you
   * want to run and whether to route deployment traffic behind a load
   * balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentStyle">AWS
   * API Reference</a></p>
   */
  class DeploymentStyle
  {
  public:
    AWS_CODEDEPLOY_API DeploymentStyle() = default;
    AWS_CODEDEPLOY_API DeploymentStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline DeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(DeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline DeploymentStyle& WithDeploymentType(DeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentOption GetDeploymentOption() const { return m_deploymentOption; }
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }
    inline void SetDeploymentOption(DeploymentOption value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }
    inline DeploymentStyle& WithDeploymentOption(DeploymentOption value) { SetDeploymentOption(value); return *this;}
    ///@}
  private:

    DeploymentType m_deploymentType{DeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    DeploymentOption m_deploymentOption{DeploymentOption::NOT_SET};
    bool m_deploymentOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
