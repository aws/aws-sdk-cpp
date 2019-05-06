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
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/LifecycleEventStatus.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class AWS_CODEDEPLOY_API PutLifecycleEventHookExecutionStatusRequest : public CodeDeployRequest
  {
  public:
    PutLifecycleEventHookExecutionStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLifecycleEventHookExecutionStatus"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. Pass this ID to a Lambda function that
     * validates a deployment lifecycle event. </p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline const Aws::String& GetLifecycleEventHookExecutionId() const{ return m_lifecycleEventHookExecutionId; }

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline bool LifecycleEventHookExecutionIdHasBeenSet() const { return m_lifecycleEventHookExecutionIdHasBeenSet; }

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline void SetLifecycleEventHookExecutionId(const Aws::String& value) { m_lifecycleEventHookExecutionIdHasBeenSet = true; m_lifecycleEventHookExecutionId = value; }

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline void SetLifecycleEventHookExecutionId(Aws::String&& value) { m_lifecycleEventHookExecutionIdHasBeenSet = true; m_lifecycleEventHookExecutionId = std::move(value); }

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline void SetLifecycleEventHookExecutionId(const char* value) { m_lifecycleEventHookExecutionIdHasBeenSet = true; m_lifecycleEventHookExecutionId.assign(value); }

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithLifecycleEventHookExecutionId(const Aws::String& value) { SetLifecycleEventHookExecutionId(value); return *this;}

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithLifecycleEventHookExecutionId(Aws::String&& value) { SetLifecycleEventHookExecutionId(std::move(value)); return *this;}

    /**
     * <p> The execution ID of a deployment's lifecycle hook. A deployment lifecycle
     * hook is specified in the <code>hooks</code> section of the AppSpec file. </p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithLifecycleEventHookExecutionId(const char* value) { SetLifecycleEventHookExecutionId(value); return *this;}


    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event
     * (<code>Succeeded</code> or <code>Failed</code>).</p>
     */
    inline const LifecycleEventStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event
     * (<code>Succeeded</code> or <code>Failed</code>).</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event
     * (<code>Succeeded</code> or <code>Failed</code>).</p>
     */
    inline void SetStatus(const LifecycleEventStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event
     * (<code>Succeeded</code> or <code>Failed</code>).</p>
     */
    inline void SetStatus(LifecycleEventStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event
     * (<code>Succeeded</code> or <code>Failed</code>).</p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithStatus(const LifecycleEventStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The result of a Lambda function that validates a deployment lifecycle event
     * (<code>Succeeded</code> or <code>Failed</code>).</p>
     */
    inline PutLifecycleEventHookExecutionStatusRequest& WithStatus(LifecycleEventStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_lifecycleEventHookExecutionId;
    bool m_lifecycleEventHookExecutionIdHasBeenSet;

    LifecycleEventStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
