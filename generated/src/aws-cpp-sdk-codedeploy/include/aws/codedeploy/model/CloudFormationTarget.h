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
    AWS_CODEDEPLOY_API CloudFormationTarget() = default;
    AWS_CODEDEPLOY_API CloudFormationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API CloudFormationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of an CloudFormation blue/green deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    CloudFormationTarget& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of a deployment target that has a type
     * of <code>CloudFormationTarget</code>. </p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    CloudFormationTarget& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the target application was updated by an
     * CloudFormation blue/green deployment. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    CloudFormationTarget& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The lifecycle events of the CloudFormation blue/green deployment to this
     * target application. </p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const { return m_lifecycleEvents; }
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    void SetLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::forward<LifecycleEventsT>(value); }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    CloudFormationTarget& WithLifecycleEvents(LifecycleEventsT&& value) { SetLifecycleEvents(std::forward<LifecycleEventsT>(value)); return *this;}
    template<typename LifecycleEventsT = LifecycleEvent>
    CloudFormationTarget& AddLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.emplace_back(std::forward<LifecycleEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The status of an CloudFormation blue/green deployment's target application.
     * </p>
     */
    inline TargetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CloudFormationTarget& WithStatus(TargetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type for the CloudFormation blue/green deployment.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    CloudFormationTarget& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of production traffic that the target version of an
     * CloudFormation blue/green deployment receives.</p>
     */
    inline double GetTargetVersionWeight() const { return m_targetVersionWeight; }
    inline bool TargetVersionWeightHasBeenSet() const { return m_targetVersionWeightHasBeenSet; }
    inline void SetTargetVersionWeight(double value) { m_targetVersionWeightHasBeenSet = true; m_targetVersionWeight = value; }
    inline CloudFormationTarget& WithTargetVersionWeight(double value) { SetTargetVersionWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet = false;

    TargetStatus m_status{TargetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    double m_targetVersionWeight{0.0};
    bool m_targetVersionWeightHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
