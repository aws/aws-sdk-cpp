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
    AWS_CODEDEPLOY_API BlueGreenDeploymentConfiguration() = default;
    AWS_CODEDEPLOY_API BlueGreenDeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API BlueGreenDeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about whether to terminate instances in the original fleet during
     * a blue/green deployment.</p>
     */
    inline const BlueInstanceTerminationOption& GetTerminateBlueInstancesOnDeploymentSuccess() const { return m_terminateBlueInstancesOnDeploymentSuccess; }
    inline bool TerminateBlueInstancesOnDeploymentSuccessHasBeenSet() const { return m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet; }
    template<typename TerminateBlueInstancesOnDeploymentSuccessT = BlueInstanceTerminationOption>
    void SetTerminateBlueInstancesOnDeploymentSuccess(TerminateBlueInstancesOnDeploymentSuccessT&& value) { m_terminateBlueInstancesOnDeploymentSuccessHasBeenSet = true; m_terminateBlueInstancesOnDeploymentSuccess = std::forward<TerminateBlueInstancesOnDeploymentSuccessT>(value); }
    template<typename TerminateBlueInstancesOnDeploymentSuccessT = BlueInstanceTerminationOption>
    BlueGreenDeploymentConfiguration& WithTerminateBlueInstancesOnDeploymentSuccess(TerminateBlueInstancesOnDeploymentSuccessT&& value) { SetTerminateBlueInstancesOnDeploymentSuccess(std::forward<TerminateBlueInstancesOnDeploymentSuccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the action to take when newly provisioned instances are
     * ready to receive traffic in a blue/green deployment.</p>
     */
    inline const DeploymentReadyOption& GetDeploymentReadyOption() const { return m_deploymentReadyOption; }
    inline bool DeploymentReadyOptionHasBeenSet() const { return m_deploymentReadyOptionHasBeenSet; }
    template<typename DeploymentReadyOptionT = DeploymentReadyOption>
    void SetDeploymentReadyOption(DeploymentReadyOptionT&& value) { m_deploymentReadyOptionHasBeenSet = true; m_deploymentReadyOption = std::forward<DeploymentReadyOptionT>(value); }
    template<typename DeploymentReadyOptionT = DeploymentReadyOption>
    BlueGreenDeploymentConfiguration& WithDeploymentReadyOption(DeploymentReadyOptionT&& value) { SetDeploymentReadyOption(std::forward<DeploymentReadyOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about how instances are provisioned for a replacement environment
     * in a blue/green deployment.</p>
     */
    inline const GreenFleetProvisioningOption& GetGreenFleetProvisioningOption() const { return m_greenFleetProvisioningOption; }
    inline bool GreenFleetProvisioningOptionHasBeenSet() const { return m_greenFleetProvisioningOptionHasBeenSet; }
    template<typename GreenFleetProvisioningOptionT = GreenFleetProvisioningOption>
    void SetGreenFleetProvisioningOption(GreenFleetProvisioningOptionT&& value) { m_greenFleetProvisioningOptionHasBeenSet = true; m_greenFleetProvisioningOption = std::forward<GreenFleetProvisioningOptionT>(value); }
    template<typename GreenFleetProvisioningOptionT = GreenFleetProvisioningOption>
    BlueGreenDeploymentConfiguration& WithGreenFleetProvisioningOption(GreenFleetProvisioningOptionT&& value) { SetGreenFleetProvisioningOption(std::forward<GreenFleetProvisioningOptionT>(value)); return *this;}
    ///@}
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
