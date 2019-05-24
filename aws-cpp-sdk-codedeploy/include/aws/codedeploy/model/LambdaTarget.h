/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p> Information about the target AWS Lambda function during an AWS Lambda
   * deployment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/LambdaTarget">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API LambdaTarget
  {
  public:
    LambdaTarget();
    LambdaTarget(Aws::Utils::Json::JsonView jsonValue);
    LambdaTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline LambdaTarget& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline LambdaTarget& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline LambdaTarget& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline LambdaTarget& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline LambdaTarget& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment target that has a type of
     * <code>lambdaTarget</code>. </p>
     */
    inline LambdaTarget& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p> The ARN of the target. </p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p> The ARN of the target. </p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p> The ARN of the target. </p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p> The ARN of the target. </p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p> The ARN of the target. </p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p> The ARN of the target. </p>
     */
    inline LambdaTarget& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p> The ARN of the target. </p>
     */
    inline LambdaTarget& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the target. </p>
     */
    inline LambdaTarget& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p> The status an AWS Lambda deployment's target Lambda function. </p>
     */
    inline const TargetStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status an AWS Lambda deployment's target Lambda function. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status an AWS Lambda deployment's target Lambda function. </p>
     */
    inline void SetStatus(const TargetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status an AWS Lambda deployment's target Lambda function. </p>
     */
    inline void SetStatus(TargetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status an AWS Lambda deployment's target Lambda function. </p>
     */
    inline LambdaTarget& WithStatus(const TargetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status an AWS Lambda deployment's target Lambda function. </p>
     */
    inline LambdaTarget& WithStatus(TargetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline LambdaTarget& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p> The date and time when the target Lambda function was updated by a
     * deployment. </p>
     */
    inline LambdaTarget& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline const Aws::Vector<LifecycleEvent>& GetLifecycleEvents() const{ return m_lifecycleEvents; }

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline bool LifecycleEventsHasBeenSet() const { return m_lifecycleEventsHasBeenSet; }

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline void SetLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = value; }

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline void SetLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents = std::move(value); }

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline LambdaTarget& WithLifecycleEvents(const Aws::Vector<LifecycleEvent>& value) { SetLifecycleEvents(value); return *this;}

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline LambdaTarget& WithLifecycleEvents(Aws::Vector<LifecycleEvent>&& value) { SetLifecycleEvents(std::move(value)); return *this;}

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline LambdaTarget& AddLifecycleEvents(const LifecycleEvent& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(value); return *this; }

    /**
     * <p> The lifecycle events of the deployment to this target Lambda function. </p>
     */
    inline LambdaTarget& AddLifecycleEvents(LifecycleEvent&& value) { m_lifecycleEventsHasBeenSet = true; m_lifecycleEvents.push_back(std::move(value)); return *this; }


    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline const LambdaFunctionInfo& GetLambdaFunctionInfo() const{ return m_lambdaFunctionInfo; }

    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline bool LambdaFunctionInfoHasBeenSet() const { return m_lambdaFunctionInfoHasBeenSet; }

    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline void SetLambdaFunctionInfo(const LambdaFunctionInfo& value) { m_lambdaFunctionInfoHasBeenSet = true; m_lambdaFunctionInfo = value; }

    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline void SetLambdaFunctionInfo(LambdaFunctionInfo&& value) { m_lambdaFunctionInfoHasBeenSet = true; m_lambdaFunctionInfo = std::move(value); }

    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline LambdaTarget& WithLambdaFunctionInfo(const LambdaFunctionInfo& value) { SetLambdaFunctionInfo(value); return *this;}

    /**
     * <p> A <code>LambdaFunctionInfo</code> object that describes a target Lambda
     * function. </p>
     */
    inline LambdaTarget& WithLambdaFunctionInfo(LambdaFunctionInfo&& value) { SetLambdaFunctionInfo(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;

    TargetStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::Vector<LifecycleEvent> m_lifecycleEvents;
    bool m_lifecycleEventsHasBeenSet;

    LambdaFunctionInfo m_lambdaFunctionInfo;
    bool m_lambdaFunctionInfoHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
