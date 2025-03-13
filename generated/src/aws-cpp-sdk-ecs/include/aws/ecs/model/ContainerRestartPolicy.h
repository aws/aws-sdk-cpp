/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>You can enable a restart policy for each container defined in your task
   * definition, to overcome transient failures faster and maintain task
   * availability. When you enable a restart policy for a container, Amazon ECS can
   * restart the container if it exits, without needing to replace the task. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/container-restart-policy.html">Restart
   * individual containers in Amazon ECS tasks with container restart policies</a> in
   * the <i>Amazon Elastic Container Service Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ContainerRestartPolicy">AWS
   * API Reference</a></p>
   */
  class ContainerRestartPolicy
  {
  public:
    AWS_ECS_API ContainerRestartPolicy() = default;
    AWS_ECS_API ContainerRestartPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ContainerRestartPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether a restart policy is enabled for the container.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ContainerRestartPolicy& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of exit codes that Amazon ECS will ignore and not attempt a restart
     * on. You can specify a maximum of 50 container exit codes. By default, Amazon ECS
     * does not ignore any exit codes.</p>
     */
    inline const Aws::Vector<int>& GetIgnoredExitCodes() const { return m_ignoredExitCodes; }
    inline bool IgnoredExitCodesHasBeenSet() const { return m_ignoredExitCodesHasBeenSet; }
    template<typename IgnoredExitCodesT = Aws::Vector<int>>
    void SetIgnoredExitCodes(IgnoredExitCodesT&& value) { m_ignoredExitCodesHasBeenSet = true; m_ignoredExitCodes = std::forward<IgnoredExitCodesT>(value); }
    template<typename IgnoredExitCodesT = Aws::Vector<int>>
    ContainerRestartPolicy& WithIgnoredExitCodes(IgnoredExitCodesT&& value) { SetIgnoredExitCodes(std::forward<IgnoredExitCodesT>(value)); return *this;}
    inline ContainerRestartPolicy& AddIgnoredExitCodes(int value) { m_ignoredExitCodesHasBeenSet = true; m_ignoredExitCodes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A period of time (in seconds) that the container must run for before a
     * restart can be attempted. A container can be restarted only once every
     * <code>restartAttemptPeriod</code> seconds. If a container isn't able to run for
     * this time period and exits early, it will not be restarted. You can set a
     * minimum <code>restartAttemptPeriod</code> of 60 seconds and a maximum
     * <code>restartAttemptPeriod</code> of 1800 seconds. By default, a container must
     * run for 300 seconds before it can be restarted.</p>
     */
    inline int GetRestartAttemptPeriod() const { return m_restartAttemptPeriod; }
    inline bool RestartAttemptPeriodHasBeenSet() const { return m_restartAttemptPeriodHasBeenSet; }
    inline void SetRestartAttemptPeriod(int value) { m_restartAttemptPeriodHasBeenSet = true; m_restartAttemptPeriod = value; }
    inline ContainerRestartPolicy& WithRestartAttemptPeriod(int value) { SetRestartAttemptPeriod(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<int> m_ignoredExitCodes;
    bool m_ignoredExitCodesHasBeenSet = false;

    int m_restartAttemptPeriod{0};
    bool m_restartAttemptPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
