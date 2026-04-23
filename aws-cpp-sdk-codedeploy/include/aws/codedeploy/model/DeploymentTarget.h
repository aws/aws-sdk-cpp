/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/DeploymentTargetType.h>
#include <aws/codedeploy/model/InstanceTarget.h>
#include <aws/codedeploy/model/LambdaTarget.h>
#include <aws/codedeploy/model/ECSTarget.h>
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
  class AWS_CODEDEPLOY_API DeploymentTarget
  {
  public:
    DeploymentTarget();
    DeploymentTarget(Aws::Utils::Json::JsonView jsonValue);
    DeploymentTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The deployment type that is specific to the deployment's compute platform.
     * </p>
     */
    inline const DeploymentTargetType& GetDeploymentTargetType() const{ return m_deploymentTargetType; }

    /**
     * <p> The deployment type that is specific to the deployment's compute platform.
     * </p>
     */
    inline bool DeploymentTargetTypeHasBeenSet() const { return m_deploymentTargetTypeHasBeenSet; }

    /**
     * <p> The deployment type that is specific to the deployment's compute platform.
     * </p>
     */
    inline void SetDeploymentTargetType(const DeploymentTargetType& value) { m_deploymentTargetTypeHasBeenSet = true; m_deploymentTargetType = value; }

    /**
     * <p> The deployment type that is specific to the deployment's compute platform.
     * </p>
     */
    inline void SetDeploymentTargetType(DeploymentTargetType&& value) { m_deploymentTargetTypeHasBeenSet = true; m_deploymentTargetType = std::move(value); }

    /**
     * <p> The deployment type that is specific to the deployment's compute platform.
     * </p>
     */
    inline DeploymentTarget& WithDeploymentTargetType(const DeploymentTargetType& value) { SetDeploymentTargetType(value); return *this;}

    /**
     * <p> The deployment type that is specific to the deployment's compute platform.
     * </p>
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
     * <p> Information about the target for a deployment that uses the AWS Lambda
     * compute platform. </p>
     */
    inline const LambdaTarget& GetLambdaTarget() const{ return m_lambdaTarget; }

    /**
     * <p> Information about the target for a deployment that uses the AWS Lambda
     * compute platform. </p>
     */
    inline bool LambdaTargetHasBeenSet() const { return m_lambdaTargetHasBeenSet; }

    /**
     * <p> Information about the target for a deployment that uses the AWS Lambda
     * compute platform. </p>
     */
    inline void SetLambdaTarget(const LambdaTarget& value) { m_lambdaTargetHasBeenSet = true; m_lambdaTarget = value; }

    /**
     * <p> Information about the target for a deployment that uses the AWS Lambda
     * compute platform. </p>
     */
    inline void SetLambdaTarget(LambdaTarget&& value) { m_lambdaTargetHasBeenSet = true; m_lambdaTarget = std::move(value); }

    /**
     * <p> Information about the target for a deployment that uses the AWS Lambda
     * compute platform. </p>
     */
    inline DeploymentTarget& WithLambdaTarget(const LambdaTarget& value) { SetLambdaTarget(value); return *this;}

    /**
     * <p> Information about the target for a deployment that uses the AWS Lambda
     * compute platform. </p>
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

  private:

    DeploymentTargetType m_deploymentTargetType;
    bool m_deploymentTargetTypeHasBeenSet;

    InstanceTarget m_instanceTarget;
    bool m_instanceTargetHasBeenSet;

    LambdaTarget m_lambdaTarget;
    bool m_lambdaTargetHasBeenSet;

    ECSTarget m_ecsTarget;
    bool m_ecsTargetHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
