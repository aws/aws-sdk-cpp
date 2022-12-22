/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
namespace ECS
{
namespace Model
{

  /**
   *  <p>The deployment circuit breaker can only be used for services using the
   * rolling update (<code>ECS</code>) deployment type that aren't behind a Classic
   * Load Balancer.</p>  <p>The <b>deployment circuit breaker</b> determines
   * whether a service deployment will fail if the service can't reach a steady
   * state. If enabled, a service deployment will transition to a failed state and
   * stop launching new tasks. You can also configure Amazon ECS to roll back your
   * service to the last completed deployment after a failure. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-ecs.html">Rolling
   * update</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentCircuitBreaker">AWS
   * API Reference</a></p>
   */
  class DeploymentCircuitBreaker
  {
  public:
    AWS_ECS_API DeploymentCircuitBreaker();
    AWS_ECS_API DeploymentCircuitBreaker(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DeploymentCircuitBreaker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether to use the deployment circuit breaker logic for the
     * service.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>Determines whether to use the deployment circuit breaker logic for the
     * service.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>Determines whether to use the deployment circuit breaker logic for the
     * service.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>Determines whether to use the deployment circuit breaker logic for the
     * service.</p>
     */
    inline DeploymentCircuitBreaker& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is on, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline bool GetRollback() const{ return m_rollback; }

    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is on, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline bool RollbackHasBeenSet() const { return m_rollbackHasBeenSet; }

    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is on, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline void SetRollback(bool value) { m_rollbackHasBeenSet = true; m_rollback = value; }

    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is on, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline DeploymentCircuitBreaker& WithRollback(bool value) { SetRollback(value); return *this;}

  private:

    bool m_enable;
    bool m_enableHasBeenSet = false;

    bool m_rollback;
    bool m_rollbackHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
