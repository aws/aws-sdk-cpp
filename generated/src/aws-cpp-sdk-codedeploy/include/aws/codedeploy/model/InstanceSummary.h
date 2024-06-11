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
    AWS_CODEDEPLOY_API InstanceSummary();
    AWS_CODEDEPLOY_API InstanceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API InstanceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline InstanceSummary& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline InstanceSummary& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline InstanceSummary& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline InstanceSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline InstanceSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline InstanceSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
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
    inline const InstanceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline InstanceSummary& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}
    inline InstanceSummary& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the instance information was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline InstanceSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline InstanceSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const{ return m_lifecycleEvents; }
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }
    inline void SetLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }
    inline void SetLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::move(value); }
    inline InstanceSummary& WithLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { SetLifecycleEvents(value); return *this;}
    inline InstanceSummary& WithLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { SetLifecycleEvents(std::move(value)); return *this;}
    inline InstanceSummary& AddLifecycleEvents(const LifecycleEvent& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }
    inline InstanceSummary& AddLifecycleEvents(LifecycleEvent&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about which environment an instance belongs to in a blue/green
     * deployment.</p> <ul> <li> <p>BLUE: The instance is part of the original
     * environment.</p> </li> <li> <p>GREEN: The instance is part of the replacement
     * environment.</p> </li> </ul>
     */
    inline const InstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const InstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(InstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline InstanceSummary& WithInstanceType(const InstanceType& value) { SetInstanceType(value); return *this;}
    inline InstanceSummary& WithInstanceType(InstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet = false;

    InstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
