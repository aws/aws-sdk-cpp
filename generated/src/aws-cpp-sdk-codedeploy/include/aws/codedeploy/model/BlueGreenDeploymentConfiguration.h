/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/BlueInstanceTerminationOption.h>
#include <aws/codedeploy/model/DeploymentReadyOption.h>
#include <aws/codedeploy/model/GreenFleetProvisioningOption.h>
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
   * <p>Information about blue/green deployment options for a deployment
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BlueGreenDeploymentConfiguration">AWS
   * API Reference</a></p>
   */
  class BlueGreenDeploymentConfiguration
  {
  public:
    AWS_CODEDEPLOY_API BlueGreenDeploymentConfiguration();
    AWS_CODEDEPLOY_API BlueGreenDeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API BlueGreenDeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline const BlueInstanceTerminationOption& GetTerminateBlueInstancesOnDeploymentSuccess() const{ return m_terminateBlueInstancesOnDeploymentSuccess; }

    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline bool TerminateBlueInstancesOnDeploymentSuccessHasBeenSet() const { return m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet; }

    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline void SetTerminateBlueInstancesOnDeploymentSuccess(const BlueInstanceTerminationOption& value) { m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet = true; m_terminateBlueInstancesOnDeploymentSuccess = value; }

    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline void SetTerminateBlueInstancesOnDeploymentSuccess(BlueInstanceTerminationOption&& value) { m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet = true; m_terminateBlueInstancesOnDeploymentSuccess = std::move(value); }

    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline BlueGreenDeploymentConfiguration& WithTerminateBlueInstancesOnDeploymentSuccess(const BlueInstanceTerminationOption& value) { SetTerminateBlueInstancesOnDeploymentSuccess(value); return *this;}

    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline BlueGreenDeploymentConfiguration& WithTerminateBlueInstancesOnDeploymentSuccess(BlueInstanceTerminationOption&& value) { SetTerminateBlueInstancesOnDeploymentSuccess(std::move(value)); return *this;}


    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline const DeploymentReadyOption& GetDeploymentReadyOption() const{ return m_deploymentReadyOption; }

    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline bool DeploymentReadyOptionHasBeenSet() const { return m_deploymentReadyOptionHasBeenSet; }

    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline void SetDeploymentReadyOption(const DeploymentReadyOption& value) { m_deploymentReadyOptionHasBeenSet = true; m_deploymentReadyOption = value; }

    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline void SetDeploymentReadyOption(DeploymentReadyOption&& value) { m_deploymentReadyOptionHasBeenSet = true; m_deploymentReadyOption = std::move(value); }

    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline BlueGreenDeploymentConfiguration& WithDeploymentReadyOption(const DeploymentReadyOption& value) { SetDeploymentReadyOption(value); return *this;}

    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline BlueGreenDeploymentConfiguration& WithDeploymentReadyOption(DeploymentReadyOption&& value) { SetDeploymentReadyOption(std::move(value)); return *this;}


    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline const GreenFleetProvisioningOption& GetGreenFleetProvisioningOption() const{ return m_greenFleetProvisioningOption; }

    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline bool GreenFleetProvisioningOptionHasBeenSet() const { return m_greenFleetProvisioningOptionHasBeenSet; }

    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline void SetGreenFleetProvisioningOption(const GreenFleetProvisioningOption& value) { m_greenFleetProvisioningOptionHasBeenSet = true; m_greenFleetProvisioningOption = value; }

    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline void SetGreenFleetProvisioningOption(GreenFleetProvisioningOption&& value) { m_greenFleetProvisioningOptionHasBeenSet = true; m_greenFleetProvisioningOption = std::move(value); }

    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline BlueGreenDeploymentConfiguration& WithGreenFleetProvisioningOption(const GreenFleetProvisioningOption& value) { SetGreenFleetProvisioningOption(value); return *this;}

    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline BlueGreenDeploymentConfiguration& WithGreenFleetProvisioningOption(GreenFleetProvisioningOption&& value) { SetGreenFleetProvisioningOption(std::move(value)); return *this;}

  private:

    BlueInstanceTerminationOption m_terminateBlueInstancesOnDeploymentSuccess;
    bool m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet = false;

    DeploymentReadyOption m_deploymentReadyOption;
    bool m_deploymentReadyOptionHasBeenSet = false;

    GreenFleetProvisioningOption m_greenFleetProvisioningOption;
    bool m_greenFleetProvisioningOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
