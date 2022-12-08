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
    AWS_CODEDEPLOY_API DeploymentTarget();
    AWS_CODEDEPLOY_API DeploymentTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline const DeploymentTargetType& GetDeploymentTargetType() const{ return m_deploymentTargetType; }

    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline bool DeploymentTargetTypeHasBeenSet() const { return m_deploymentTargetTypeHasBeenSet; }

    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline void SetDeploymentTargetType(const DeploymentTargetType& value) { m_deploymentTargetTypeHasBeenSet = true; m_deploymentTargetType = value; }

    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline void SetDeploymentTargetType(DeploymentTargetType&& value) { m_deploymentTargetTypeHasBeenSet = true; m_deploymentTargetType = std::move(value); }

    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline DeploymentTarget& WithDeploymentTargetType(const DeploymentTargetType& value) { SetDeploymentTargetType(value); return *this;}

    /**
     * <p>The deployment type that is specific to the deployment's compute platform or
     * deployments initiated by a CloudFormation stack update.</p>
     */
    inline DeploymentTarget& WithDeploymentTargetType(DeploymentTargetType&& value) { SetDeploymentTargetType(std::move(value)); return *this;}


    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline const InstanceTarget& GetInstanceTarget() const{ return m_instanceTarget; }

    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline bool InstanceTargetHasBeenSet() const { return m_instanceTargetHasBeenSet; }

    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline void SetInstanceTarget(const InstanceTarget& value) { m_instanceTargetHasBeenSet = true; m_instanceTarget = value; }

    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline void SetInstanceTarget(InstanceTarget&& value) { m_instanceTargetHasBeenSet = true; m_instanceTarget = std::move(value); }

    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline DeploymentTarget& WithInstanceTarget(const InstanceTarget& value) { SetInstanceTarget(value); return *this;}

    /**
     * <p> Information about the target for a deployment that uses the EC2/On-premises
     * compute platform. </p>
     */
    inline DeploymentTarget& WithInstanceTarget(InstanceTarget&& value) { SetInstanceTarget(std::move(value)); return *this;}


    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline const LambdaTarget& GetLambdaTarget() const{ return m_lambdaTarget; }

    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline bool LambdaTargetHasBeenSet() const { return m_lambdaTargetHasBeenSet; }

    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline void SetLambdaTarget(const LambdaTarget& value) { m_lambdaTargetHasBeenSet = true; m_lambdaTarget = value; }

    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline void SetLambdaTarget(LambdaTarget&& value) { m_lambdaTargetHasBeenSet = true; m_lambdaTarget = std::move(value); }

    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline DeploymentTarget& WithLambdaTarget(const LambdaTarget& value) { SetLambdaTarget(value); return *this;}

    /**
     * <p> Information about the target for a deployment that uses the Lambda compute
     * platform. </p>
     */
    inline DeploymentTarget& WithLambdaTarget(LambdaTarget&& value) { SetLambdaTarget(std::move(value)); return *this;}


    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline const ECSTarget& GetEcsTarget() const{ return m_ecsTarget; }

    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline bool EcsTargetHasBeenSet() const { return m_ecsTargetHasBeenSet; }

    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline void SetEcsTarget(const ECSTarget& value) { m_ecsTargetHasBeenSet = true; m_ecsTarget = value; }

    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline void SetEcsTarget(ECSTarget&& value) { m_ecsTargetHasBeenSet = true; m_ecsTarget = std::move(value); }

    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline DeploymentTarget& WithEcsTarget(const ECSTarget& value) { SetEcsTarget(value); return *this;}

    /**
     * <p> Information about the target for a deployment that uses the Amazon ECS
     * compute platform. </p>
     */
    inline DeploymentTarget& WithEcsTarget(ECSTarget&& value) { SetEcsTarget(std::move(value)); return *this;}


    
    inline const CloudFormationTarget& GetCloudFormationTarget() const{ return m_cloudFormationTarget; }

    
    inline bool CloudFormationTargetHasBeenSet() const { return m_cloudFormationTargetHasBeenSet; }

    
    inline void SetCloudFormationTarget(const CloudFormationTarget& value) { m_cloudFormationTargetHasBeenSet = true; m_cloudFormationTarget = value; }

    
    inline void SetCloudFormationTarget(CloudFormationTarget&& value) { m_cloudFormationTargetHasBeenSet = true; m_cloudFormationTarget = std::move(value); }

    
    inline DeploymentTarget& WithCloudFormationTarget(const CloudFormationTarget& value) { SetCloudFormationTarget(value); return *this;}

    
    inline DeploymentTarget& WithCloudFormationTarget(CloudFormationTarget&& value) { SetCloudFormationTarget(std::move(value)); return *this;}

  private:

    DeploymentTargetType m_deploymentTargetType;
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
