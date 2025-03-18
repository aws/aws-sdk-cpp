/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/TargetStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codedeploy/model/LambdaFunctionInfo.h>
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
   * <p> Information about the target Lambda function during an Lambda deployment.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/LambdaTarget">AWS
   * API Reference</a></p>
   */
  class LambdaTarget
  {
  public:
    AWS_CODEDEPLOY_API LambdaTarget() = default;
    AWS_CODEDEPLOY_API LambdaTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LambdaTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    LambdaTarget& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    LambdaTarget& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the target. </p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    LambdaTarget& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status an Lambda deployment's target Lambda function. </p>
     */
    inline TargetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LambdaTarget& WithStatus(TargetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    LambdaTarget& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const { return m_lifecycleEvents; }
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    void SetLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::forward<LifecycleEventsT>(value); }
    template<typename LifecycleEventsT = Aws::Vector<LifecycleEvent>>
    LambdaTarget& WithLifecycleEvents(LifecycleEventsT&& value) { SetLifecycleEvents(std::forward<LifecycleEventsT>(value)); return *this;}
    template<typename LifecycleEventsT = LifecycleEvent>
    LambdaTarget& AddLifecycleEvents(LifecycleEventsT&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.emplace_back(std::forward<LifecycleEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline const LambdaFunctionInfo& GetLambdaFunctionInfo() const { return m_lambdaFunctionInfo; }
    inline bool LambdaFunctionInfoHasBeenSet() const { return m_lambdaFunctionInfoHasBeenSet; }
    template<typename LambdaFunctionInfoT = LambdaFunctionInfo>
    void SetLambdaFunctionInfo(LambdaFunctionInfoT&& value) { m_lambdaFunctionInfoHasBeenSet = true; m_lambdaFunctionInfo = std::forward<LambdaFunctionInfoT>(value); }
    template<typename LambdaFunctionInfoT = LambdaFunctionInfo>
    LambdaTarget& WithLambdaFunctionInfo(LambdaFunctionInfoT&& value) { SetLambdaFunctionInfo(std::forward<LambdaFunctionInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    TargetStatus m_status{TargetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet = false;

    LambdaFunctionInfo m_lambdaFunctionInfo;
    bool m_lambdaFunctionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
