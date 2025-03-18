/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/InstanceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/InstanceType.h>
#include <aws/codedeploy/model/LifecycleEvent.h>
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
   * <p>Information about an instance in a deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/InstanceSummary">AWS
   * API Reference</a></p>
   */
  class InstanceSummary
  {
  public:
    AWS_CODEDEPLOY_API InstanceSummary() = default;
    AWS_CODEDEPLOY_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    InstanceSummary& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceSummary& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status for this instance:</p> <ul> <li> <p>
     * <code>Pending</code>: The deployment is pending for this instance.</p> </li>
     * <li> <p> <code>In Progress</code>: The deployment is in progress for this
     * instance.</p> </li> <li> <p> <code>Succeeded</code>: The deployment has
     * succeeded for this instance.</p> </li> <li> <p> <code>Failed</code>: The
     * deployment has failed for this instance.</p> </li> <li> <p>
     * <code>Skipped</code>: The deployment has been skipped for this instance.</p>
     * </li> <li> <p> <code>Unknown</code>: The deployment status is unknown for this
     * instance.</p> </li> </ul>
     */
    inline InstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InstanceSummary& WithStatus(InstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the instance information was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    InstanceSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const { return m_lifecycleEvents; }
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    void SetLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::forward<LifecycleEventsT>(value); }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    InstanceSummary& WithLifecycleEvents(LifecycleEventsT&& value) { SetLifecycleEvents(std::forward<LifecycleEventsT>(value)); return *this;}
    template<typename LifecycleEventsT = LifecycleEvent>
    InstanceSummary& AddLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.emplace_back(std::forward<LifecycleEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about which environment an instance belongs to in a blue/green
     * deployment.</p> <ul> <li> <p>BLUE: The instance is part of the original
     * environment.</p> </li> <li> <p>GREEN: The instance is part of the replacement
     * environment.</p> </li> </ul>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InstanceSummary& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceStatus m_status{InstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet = false;

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
