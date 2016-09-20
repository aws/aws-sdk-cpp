/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/InstanceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/LifecycleEvent.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an instance in a deployment.</p>
   */
  class AWS_CODEDEPLOY_API InstanceSummary
  {
  public:
    InstanceSummary();
    InstanceSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The deployment ID.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment ID.</p>
     */
    inline InstanceSummary& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline InstanceSummary& WithDeploymentId(Aws::String&& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID.</p>
     */
    inline InstanceSummary& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceSummary& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceSummary& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance ID.</p>
     */
    inline InstanceSummary& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>The deployment status for this instance:</p> <ul> <li> <p>Pending: The
     * deployment is pending for this instance.</p> </li> <li> <p>In Progress: The
     * deployment is in progress for this instance.</p> </li> <li> <p>Succeeded: The
     * deployment has succeeded for this instance.</p> </li> <li> <p>Failed: The
     * deployment has failed for this instance.</p> </li> <li> <p>Skipped: The
     * deployment has been skipped for this instance.</p> </li> <li> <p>Unknown: The
     * deployment status is unknown for this instance.</p> </li> </ul>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment status for this instance:</p> <ul> <li> <p>Pending: The
     * deployment is pending for this instance.</p> </li> <li> <p>In Progress: The
     * deployment is in progress for this instance.</p> </li> <li> <p>Succeeded: The
     * deployment has succeeded for this instance.</p> </li> <li> <p>Failed: The
     * deployment has failed for this instance.</p> </li> <li> <p>Skipped: The
     * deployment has been skipped for this instance.</p> </li> <li> <p>Unknown: The
     * deployment status is unknown for this instance.</p> </li> </ul>
     */
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status for this instance:</p> <ul> <li> <p>Pending: The
     * deployment is pending for this instance.</p> </li> <li> <p>In Progress: The
     * deployment is in progress for this instance.</p> </li> <li> <p>Succeeded: The
     * deployment has succeeded for this instance.</p> </li> <li> <p>Failed: The
     * deployment has failed for this instance.</p> </li> <li> <p>Skipped: The
     * deployment has been skipped for this instance.</p> </li> <li> <p>Unknown: The
     * deployment status is unknown for this instance.</p> </li> </ul>
     */
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment status for this instance:</p> <ul> <li> <p>Pending: The
     * deployment is pending for this instance.</p> </li> <li> <p>In Progress: The
     * deployment is in progress for this instance.</p> </li> <li> <p>Succeeded: The
     * deployment has succeeded for this instance.</p> </li> <li> <p>Failed: The
     * deployment has failed for this instance.</p> </li> <li> <p>Skipped: The
     * deployment has been skipped for this instance.</p> </li> <li> <p>Unknown: The
     * deployment status is unknown for this instance.</p> </li> </ul>
     */
    inline InstanceSummary& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment status for this instance:</p> <ul> <li> <p>Pending: The
     * deployment is pending for this instance.</p> </li> <li> <p>In Progress: The
     * deployment is in progress for this instance.</p> </li> <li> <p>Succeeded: The
     * deployment has succeeded for this instance.</p> </li> <li> <p>Failed: The
     * deployment has failed for this instance.</p> </li> <li> <p>Skipped: The
     * deployment has been skipped for this instance.</p> </li> <li> <p>Unknown: The
     * deployment status is unknown for this instance.</p> </li> </ul>
     */
    inline InstanceSummary& WithStatus(InstanceStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>A timestamp indicating when the instance information was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>A timestamp indicating when the instance information was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>A timestamp indicating when the instance information was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>A timestamp indicating when the instance information was last updated.</p>
     */
    inline InstanceSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>A timestamp indicating when the instance information was last updated.</p>
     */
    inline InstanceSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const{ return m_lifecycleEvents; }

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline void SetLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline void SetLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline InstanceSummary& WithLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { SetLifecycleEvents(value); return *this;}

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline InstanceSummary& WithLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { SetLifecycleEvents(value); return *this;}

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline InstanceSummary& AddLifecycleEvents(const LifecycleEvent& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }

    /**
     * <p>A list of lifecycle events for this instance.</p>
     */
    inline InstanceSummary& AddLifecycleEvents(LifecycleEvent&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }

  private:
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    InstanceStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;
    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
