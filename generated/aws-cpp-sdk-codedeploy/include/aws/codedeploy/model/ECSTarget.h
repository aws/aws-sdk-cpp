﻿/**
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
#include <aws/codedeploy/model/ECSTaskSet.h>
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
   * <p> Information about the target of an Amazon ECS deployment. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ECSTarget">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ECSTarget
  {
  public:
    ECSTarget();
    ECSTarget(Aws::Utils::Json::JsonView jsonValue);
    ECSTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline ECSTarget& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline ECSTarget& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline ECSTarget& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline ECSTarget& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline ECSTarget& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>ecsTarget</code>. </p>
     */
    inline ECSTarget& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline ECSTarget& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline ECSTarget& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline ECSTarget& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline ECSTarget& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> The date and time when the target Amazon ECS application was updated by a
     * deployment. </p>
     */
    inline ECSTarget& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const{ return m_lifecycleEvents; }

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline void SetLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline void SetLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::move(value); }

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline ECSTarget& WithLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { SetLifecycleEvents(value); return *this;}

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline ECSTarget& WithLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { SetLifecycleEvents(std::move(value)); return *this;}

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline ECSTarget& AddLifecycleEvents(const LifecycleEvent& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }

    /**
     * <p> The lifecycle events of the deployment to this target Amazon ECS
     * application. </p>
     */
    inline ECSTarget& AddLifecycleEvents(LifecycleEvent&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(std::move(value)); return *this; }


    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline const TargetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline void SetStatus(const TargetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline void SetStatus(TargetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline ECSTarget& WithStatus(const TargetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status an Amazon ECS deployment's target ECS application. </p>
     */
    inline ECSTarget& WithStatus(TargetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline const Aws::Vector<ECSTaskSet>& GetTaskSetsInfo() const{ return m_taskSetsInfo; }

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline bool TaskSetsInfoHasBeenSet() const { return m_taskSetsInfoHasBeenSet; }

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline void SetTaskSetsInfo(const Aws::Vector<ECSTaskSet>& value) { m_taskSetsInfoHasBeenSet = true; m_taskSetsInfo = value; }

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline void SetTaskSetsInfo(Aws::Vector<ECSTaskSet>&& value) { m_taskSetsInfoHasBeenSet = true; m_taskSetsInfo = std::move(value); }

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline ECSTarget& WithTaskSetsInfo(const Aws::Vector<ECSTaskSet>& value) { SetTaskSetsInfo(value); return *this;}

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline ECSTarget& WithTaskSetsInfo(Aws::Vector<ECSTaskSet>&& value) { SetTaskSetsInfo(std::move(value)); return *this;}

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline ECSTarget& AddTaskSetsInfo(const ECSTaskSet& value) { m_taskSetsInfoHasBeenSet = true; m_taskSetsInfo.push_back(value); return *this; }

    /**
     * <p> The <code>ECSTaskSet</code> objects associated with the ECS target. </p>
     */
    inline ECSTarget& AddTaskSetsInfo(ECSTaskSet&& value) { m_taskSetsInfoHasBeenSet = true; m_taskSetsInfo.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet;

    TargetStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<ECSTaskSet> m_taskSetsInfo;
    bool m_taskSetsInfoHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
