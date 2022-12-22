/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Optional deployment parameters for the service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceDeploymentConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceDeploymentConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentConfigurationDetails();
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceDeploymentConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether a service deployment fails if a service cannot reach a
     * steady state.</p>
     */
    inline const AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& GetDeploymentCircuitBreaker() const{ return m_deploymentCircuitBreaker; }

    /**
     * <p>Determines whether a service deployment fails if a service cannot reach a
     * steady state.</p>
     */
    inline bool DeploymentCircuitBreakerHasBeenSet() const { return m_deploymentCircuitBreakerHasBeenSet; }

    /**
     * <p>Determines whether a service deployment fails if a service cannot reach a
     * steady state.</p>
     */
    inline void SetDeploymentCircuitBreaker(const AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = value; }

    /**
     * <p>Determines whether a service deployment fails if a service cannot reach a
     * steady state.</p>
     */
    inline void SetDeploymentCircuitBreaker(AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails&& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = std::move(value); }

    /**
     * <p>Determines whether a service deployment fails if a service cannot reach a
     * steady state.</p>
     */
    inline AwsEcsServiceDeploymentConfigurationDetails& WithDeploymentCircuitBreaker(const AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails& value) { SetDeploymentCircuitBreaker(value); return *this;}

    /**
     * <p>Determines whether a service deployment fails if a service cannot reach a
     * steady state.</p>
     */
    inline AwsEcsServiceDeploymentConfigurationDetails& WithDeploymentCircuitBreaker(AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails&& value) { SetDeploymentCircuitBreaker(std::move(value)); return *this;}


    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the maximum number of tasks in a service that are allowed in the
     * <code>RUNNING</code> or <code>PENDING</code> state during a deployment, and for
     * tasks that use the EC2 launch type, when any container instances are in the
     * <code>DRAINING</code> state. Provided as a percentage of the desired number of
     * tasks. The default value is 200%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types, and tasks
     * that use the EC2 launch type, the maximum number of tasks in the service that
     * remain in the <code>RUNNING</code> state while the container instances are in
     * the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the maximum
     * percent value is not used.</p>
     */
    inline int GetMaximumPercent() const{ return m_maximumPercent; }

    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the maximum number of tasks in a service that are allowed in the
     * <code>RUNNING</code> or <code>PENDING</code> state during a deployment, and for
     * tasks that use the EC2 launch type, when any container instances are in the
     * <code>DRAINING</code> state. Provided as a percentage of the desired number of
     * tasks. The default value is 200%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types, and tasks
     * that use the EC2 launch type, the maximum number of tasks in the service that
     * remain in the <code>RUNNING</code> state while the container instances are in
     * the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the maximum
     * percent value is not used.</p>
     */
    inline bool MaximumPercentHasBeenSet() const { return m_maximumPercentHasBeenSet; }

    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the maximum number of tasks in a service that are allowed in the
     * <code>RUNNING</code> or <code>PENDING</code> state during a deployment, and for
     * tasks that use the EC2 launch type, when any container instances are in the
     * <code>DRAINING</code> state. Provided as a percentage of the desired number of
     * tasks. The default value is 200%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types, and tasks
     * that use the EC2 launch type, the maximum number of tasks in the service that
     * remain in the <code>RUNNING</code> state while the container instances are in
     * the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the maximum
     * percent value is not used.</p>
     */
    inline void SetMaximumPercent(int value) { m_maximumPercentHasBeenSet = true; m_maximumPercent = value; }

    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the maximum number of tasks in a service that are allowed in the
     * <code>RUNNING</code> or <code>PENDING</code> state during a deployment, and for
     * tasks that use the EC2 launch type, when any container instances are in the
     * <code>DRAINING</code> state. Provided as a percentage of the desired number of
     * tasks. The default value is 200%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types, and tasks
     * that use the EC2 launch type, the maximum number of tasks in the service that
     * remain in the <code>RUNNING</code> state while the container instances are in
     * the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the maximum
     * percent value is not used.</p>
     */
    inline AwsEcsServiceDeploymentConfigurationDetails& WithMaximumPercent(int value) { SetMaximumPercent(value); return *this;}


    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the minimum number of tasks in a service that must remain in the
     * <code>RUNNING</code> state during a deployment, and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. Expressed as a percentage of the desired number of
     * tasks. The default value is 100%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the minimum number of the tasks in the service
     * that remain in the <code>RUNNING</code> state while the container instances are
     * in the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the
     * minimum healthy percent value is not used.</p>
     */
    inline int GetMinimumHealthyPercent() const{ return m_minimumHealthyPercent; }

    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the minimum number of tasks in a service that must remain in the
     * <code>RUNNING</code> state during a deployment, and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. Expressed as a percentage of the desired number of
     * tasks. The default value is 100%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the minimum number of the tasks in the service
     * that remain in the <code>RUNNING</code> state while the container instances are
     * in the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the
     * minimum healthy percent value is not used.</p>
     */
    inline bool MinimumHealthyPercentHasBeenSet() const { return m_minimumHealthyPercentHasBeenSet; }

    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the minimum number of tasks in a service that must remain in the
     * <code>RUNNING</code> state during a deployment, and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. Expressed as a percentage of the desired number of
     * tasks. The default value is 100%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the minimum number of the tasks in the service
     * that remain in the <code>RUNNING</code> state while the container instances are
     * in the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the
     * minimum healthy percent value is not used.</p>
     */
    inline void SetMinimumHealthyPercent(int value) { m_minimumHealthyPercentHasBeenSet = true; m_minimumHealthyPercent = value; }

    /**
     * <p>For a service that uses the rolling update (<code>ECS</code>) deployment
     * type, the minimum number of tasks in a service that must remain in the
     * <code>RUNNING</code> state during a deployment, and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. Expressed as a percentage of the desired number of
     * tasks. The default value is 100%.</p> <p>For a service that uses the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the minimum number of the tasks in the service
     * that remain in the <code>RUNNING</code> state while the container instances are
     * in the <code>DRAINING</code> state.</p> <p>For the Fargate launch type, the
     * minimum healthy percent value is not used.</p>
     */
    inline AwsEcsServiceDeploymentConfigurationDetails& WithMinimumHealthyPercent(int value) { SetMinimumHealthyPercent(value); return *this;}

  private:

    AwsEcsServiceDeploymentConfigurationDeploymentCircuitBreakerDetails m_deploymentCircuitBreaker;
    bool m_deploymentCircuitBreakerHasBeenSet = false;

    int m_maximumPercent;
    bool m_maximumPercentHasBeenSet = false;

    int m_minimumHealthyPercent;
    bool m_minimumHealthyPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
