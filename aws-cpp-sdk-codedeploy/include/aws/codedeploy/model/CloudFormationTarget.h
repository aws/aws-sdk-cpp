/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/TargetStatus.h>
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
   * <p> Information about the target to be updated by an CloudFormation blue/green
   * deployment. This target type is used for all deployments initiated by a
   * CloudFormation stack update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CloudFormationTarget">AWS
   * API Reference</a></p>
   */
  class CloudFormationTarget
  {
  public:
    AWS_CODEDEPLOY_API CloudFormationTarget();
    AWS_CODEDEPLOY_API CloudFormationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API CloudFormationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline CloudFormationTarget& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline CloudFormationTarget& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline CloudFormationTarget& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline CloudFormationTarget& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline CloudFormationTarget& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline CloudFormationTarget& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline CloudFormationTarget& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline CloudFormationTarget& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const{ return m_lifecycleEvents; }

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline void SetLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline void SetLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::move(value); }

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline CloudFormationTarget& WithLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { SetLifecycleEvents(value); return *this;}

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline CloudFormationTarget& WithLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { SetLifecycleEvents(std::move(value)); return *this;}

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline CloudFormationTarget& AddLifecycleEvents(const LifecycleEvent& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }

    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline CloudFormationTarget& AddLifecycleEvents(LifecycleEvent&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(std::move(value)); return *this; }


    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline const TargetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline void SetStatus(const TargetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline void SetStatus(TargetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline CloudFormationTarget& WithStatus(const TargetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline CloudFormationTarget& WithStatus(TargetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline CloudFormationTarget& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline CloudFormationTarget& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline CloudFormationTarget& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The percentage of production traffic that the target version of an
     * CloudFormation blue/green deployment receives.</p>
     */
    inline double GetTargetVersionWeight() const{ return m_targetVersionWeight; }

    /**
     * <p>The percentage of production traffic that the target version of an
     * CloudFormation blue/green deployment receives.</p>
     */
    inline bool TargetVersionWeightHasBeenSet() const { return m_targetVersionWeightHasBeenSet; }

    /**
     * <p>The percentage of production traffic that the target version of an
     * CloudFormation blue/green deployment receives.</p>
     */
    inline void SetTargetVersionWeight(double value) { m_targetVersionWeightHasBeenSet = true; m_targetVersionWeight = value; }

    /**
     * <p>The percentage of production traffic that the target version of an
     * CloudFormation blue/green deployment receives.</p>
     */
    inline CloudFormationTarget& WithTargetVersionWeight(double value) { SetTargetVersionWeight(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet = false;

    TargetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    double m_targetVersionWeight;
    bool m_targetVersionWeightHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
