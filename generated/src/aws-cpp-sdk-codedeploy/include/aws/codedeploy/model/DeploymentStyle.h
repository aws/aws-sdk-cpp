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
    AWS_CODEDEPLOY_API DeploymentStyle();
    AWS_CODEDEPLOY_API DeploymentStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline DeploymentStyle& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Indicates whether to run an in-place deployment or a blue/green
     * deployment.</p>
     */
    inline DeploymentStyle& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline const DeploymentOption& GetDeploymentOption() const{ return m_deploymentOption; }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline bool DeploymentOptionHasBeenSet() const { return m_deploymentOptionHasBeenSet; }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentOption(const DeploymentOption& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = value; }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline void SetDeploymentOption(DeploymentOption&& value) { m_deploymentOptionHasBeenSet = true; m_deploymentOption = std::move(value); }

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentStyle& WithDeploymentOption(const DeploymentOption& value) { SetDeploymentOption(value); return *this;}

    /**
     * <p>Indicates whether to route deployment traffic behind a load balancer.</p>
     */
    inline DeploymentStyle& WithDeploymentOption(DeploymentOption&& value) { SetDeploymentOption(std::move(value)); return *this;}

  private:

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    DeploymentOption m_deploymentOption;
    bool m_deploymentOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
