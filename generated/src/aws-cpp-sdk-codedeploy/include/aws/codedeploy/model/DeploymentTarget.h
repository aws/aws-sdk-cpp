/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentTargetType.h>
#include <aws/codedeploy/model/InstanceTarget.h>
#include <aws/codedeploy/model/LambdaTarget.h>
#include <aws/codedeploy/model/ECSTarget.h>
#include <aws/codedeploy/model/CloudFormationTarget.h>
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
   * <p> Information about the deployment target. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentTarget">AWS
   * API Reference</a></p>
   */
  class DeploymentTarget
  {
  public:
    AWS_CODEDEPLOY_API DeploymentTarget() = default;
    AWS_CODEDEPLOY_API DeploymentTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline DeploymentTargetType GetDeploymentTargetType() const { return m_deploymentTargetType; }
    inline bool DeploymentTargetTypeHasBeenSet() const { return m_deploymentTargetTypeHasBeenSet; }
    inline void SetDeploymentTargetType(DeploymentTargetType value) { m_deploymentTargetTypeHasBeenSet = true; m_deploymentTargetType = value; }
    inline DeploymentTarget& WithDeploymentTargetType(DeploymentTargetType value) { SetDeploymentTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline const InstanceTarget& GetInstanceTarget() const { return m_instanceTarget; }
    inline bool InstanceTargetHasBeenSet() const { return m_instanceTargetHasBeenSet; }
    template<typename InstanceTargetT = InstanceTarget>
    void SetInstanceTarget(InstanceTargetT&& value) { m_instanceTargetHasBeenSet = true; m_instanceTarget = std::forward<InstanceTargetT>(value); }
    template<typename InstanceTargetT = InstanceTarget>
    DeploymentTarget& WithInstanceTarget(InstanceTargetT&& value) { SetInstanceTarget(std::forward<InstanceTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline const LambdaTarget& GetLambdaTarget() const { return m_lambdaTarget; }
    inline bool LambdaTargetHasBeenSet() const { return m_lambdaTargetHasBeenSet; }
    template<typename LambdaTargetT = LambdaTarget>
    void SetLambdaTarget(LambdaTargetT&& value) { m_lambdaTargetHasBeenSet = true; m_lambdaTarget = std::forward<LambdaTargetT>(value); }
    template<typename LambdaTargetT = LambdaTarget>
    DeploymentTarget& WithLambdaTarget(LambdaTargetT&& value) { SetLambdaTarget(std::forward<LambdaTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline const ECSTarget& GetEcsTarget() const { return m_ecsTarget; }
    inline bool EcsTargetHasBeenSet() const { return m_ecsTargetHasBeenSet; }
    template<typename EcsTargetT = ECSTarget>
    void SetEcsTarget(EcsTargetT&& value) { m_ecsTargetHasBeenSet = true; m_ecsTarget = std::forward<EcsTargetT>(value); }
    template<typename EcsTargetT = ECSTarget>
    DeploymentTarget& WithEcsTarget(EcsTargetT&& value) { SetEcsTarget(std::forward<EcsTargetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudFormationTarget& GetCloudFormationTarget() const { return m_cloudFormationTarget; }
    inline bool CloudFormationTargetHasBeenSet() const { return m_cloudFormationTargetHasBeenSet; }
    template<typename CloudFormationTargetT = CloudFormationTarget>
    void SetCloudFormationTarget(CloudFormationTargetT&& value) { m_cloudFormationTargetHasBeenSet = true; m_cloudFormationTarget = std::forward<CloudFormationTargetT>(value); }
    template<typename CloudFormationTargetT = CloudFormationTarget>
    DeploymentTarget& WithCloudFormationTarget(CloudFormationTargetT&& value) { SetCloudFormationTarget(std::forward<CloudFormationTargetT>(value)); return *this;}
    ///@}
  private:

    DeploymentTargetType m_deploymentTargetType{DeploymentTargetType::NOT_SET};
    bool m_deploymentTargetTypeHasBeenSet = false;

    InstanceTarget m_instanceTarget;
    bool m_instanceTargetHasBeenSet = false;

    LambdaTarget m_lambdaTarget;
    bool m_lambdaTargetHasBeenSet = false;

    ECSTarget m_ecsTarget;
    bool m_ecsTargetHasBeenSet = false;

    CloudFormationTarget m_cloudFormationTarget;
    bool m_cloudFormationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
