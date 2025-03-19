/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceDeploymentRollbackMonitorsStatus.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Information about the circuit breaker used to determine when a service
   * deployment has failed.</p> <p>The deployment circuit breaker is the rolling
   * update mechanism that determines if the tasks reach a steady state. The
   * deployment circuit breaker has an option that will automatically roll back a
   * failed deployment to the last cpompleted service revision. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-circuit-breaker.html">How
   * the Amazon ECS deployment circuit breaker detects failures</a> in the<i> Amazon
   * ECS Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceDeploymentCircuitBreaker">AWS
   * API Reference</a></p>
   */
  class ServiceDeploymentCircuitBreaker
  {
  public:
    AWS_ECS_API ServiceDeploymentCircuitBreaker() = default;
    AWS_ECS_API ServiceDeploymentCircuitBreaker(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceDeploymentCircuitBreaker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The circuit breaker status. Amazon ECS is not using the circuit breaker for
     * service deployment failures when the status is <code>DISABLED</code>.</p>
     */
    inline ServiceDeploymentRollbackMonitorsStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceDeploymentRollbackMonitorsStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceDeploymentCircuitBreaker& WithStatus(ServiceDeploymentRollbackMonitorsStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times the circuit breaker detected a service deploymeny
     * failure.</p>
     */
    inline int GetFailureCount() const { return m_failureCount; }
    inline bool FailureCountHasBeenSet() const { return m_failureCountHasBeenSet; }
    inline void SetFailureCount(int value) { m_failureCountHasBeenSet = true; m_failureCount = value; }
    inline ServiceDeploymentCircuitBreaker& WithFailureCount(int value) { SetFailureCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshhold which determines that the service deployment failed.</p>
     * <p>The deployment circuit breaker calculates the threshold value, and then uses
     * the value to determine when to move the deployment to a FAILED state. The
     * deployment circuit breaker has a minimum threshold of 3 and a maximum threshold
     * of 200. and uses the values in the following formula to determine the deployment
     * failure.</p> <p> <code>0.5 * desired task count</code> </p>
     */
    inline int GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(int value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline ServiceDeploymentCircuitBreaker& WithThreshold(int value) { SetThreshold(value); return *this;}
    ///@}
  private:

    ServiceDeploymentRollbackMonitorsStatus m_status{ServiceDeploymentRollbackMonitorsStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    int m_failureCount{0};
    bool m_failureCountHasBeenSet = false;

    int m_threshold{0};
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
