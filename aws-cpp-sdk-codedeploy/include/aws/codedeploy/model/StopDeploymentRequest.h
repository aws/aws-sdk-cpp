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
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a stop deployment operation.</p>
   */
  class AWS_CODEDEPLOY_API StopDeploymentRequest : public CodeDeployRequest
  {
  public:
    StopDeploymentRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline StopDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline StopDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The unique ID of a deployment.</p>
     */
    inline StopDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}

    /**
     * <p>Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision.</p>
     */
    inline bool GetAutoRollbackEnabled() const{ return m_autoRollbackEnabled; }

    /**
     * <p>Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision.</p>
     */
    inline void SetAutoRollbackEnabled(bool value) { m_autoRollbackEnabledHasBeenSet = true; m_autoRollbackEnabled = value; }

    /**
     * <p>Indicates, when a deployment is stopped, whether instances that have been
     * updated should be rolled back to the previous version of the application
     * revision.</p>
     */
    inline StopDeploymentRequest& WithAutoRollbackEnabled(bool value) { SetAutoRollbackEnabled(value); return *this;}

  private:
    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;
    bool m_autoRollbackEnabled;
    bool m_autoRollbackEnabledHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
