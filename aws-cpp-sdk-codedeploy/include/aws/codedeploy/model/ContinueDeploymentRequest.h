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
#include <aws/codedeploy/model/DeploymentWaitType.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class AWS_CODEDEPLOY_API ContinueDeploymentRequest : public CodeDeployRequest
  {
  public:
    ContinueDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ContinueDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline ContinueDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline ContinueDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a blue/green deployment for which you want to start
     * rerouting traffic to the replacement environment. </p>
     */
    inline ContinueDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> The status of the deployment's waiting period. READY_WAIT indicates the
     * deployment is ready to start shifting traffic. TERMINATION_WAIT indicates the
     * traffic is shifted, but the original target is not terminated. </p>
     */
    inline const DeploymentWaitType& GetDeploymentWaitType() const{ return m_deploymentWaitType; }

    /**
     * <p> The status of the deployment's waiting period. READY_WAIT indicates the
     * deployment is ready to start shifting traffic. TERMINATION_WAIT indicates the
     * traffic is shifted, but the original target is not terminated. </p>
     */
    inline bool DeploymentWaitTypeHasBeenSet() const { return m_deploymentWaitTypeHasBeenSet; }

    /**
     * <p> The status of the deployment's waiting period. READY_WAIT indicates the
     * deployment is ready to start shifting traffic. TERMINATION_WAIT indicates the
     * traffic is shifted, but the original target is not terminated. </p>
     */
    inline void SetDeploymentWaitType(const DeploymentWaitType& value) { m_deploymentWaitTypeHasBeenSet = true; m_deploymentWaitType = value; }

    /**
     * <p> The status of the deployment's waiting period. READY_WAIT indicates the
     * deployment is ready to start shifting traffic. TERMINATION_WAIT indicates the
     * traffic is shifted, but the original target is not terminated. </p>
     */
    inline void SetDeploymentWaitType(DeploymentWaitType&& value) { m_deploymentWaitTypeHasBeenSet = true; m_deploymentWaitType = std::move(value); }

    /**
     * <p> The status of the deployment's waiting period. READY_WAIT indicates the
     * deployment is ready to start shifting traffic. TERMINATION_WAIT indicates the
     * traffic is shifted, but the original target is not terminated. </p>
     */
    inline ContinueDeploymentRequest& WithDeploymentWaitType(const DeploymentWaitType& value) { SetDeploymentWaitType(value); return *this;}

    /**
     * <p> The status of the deployment's waiting period. READY_WAIT indicates the
     * deployment is ready to start shifting traffic. TERMINATION_WAIT indicates the
     * traffic is shifted, but the original target is not terminated. </p>
     */
    inline ContinueDeploymentRequest& WithDeploymentWaitType(DeploymentWaitType&& value) { SetDeploymentWaitType(std::move(value)); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    DeploymentWaitType m_deploymentWaitType;
    bool m_deploymentWaitTypeHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
