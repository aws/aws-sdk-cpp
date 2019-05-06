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
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a GetDeploymentConfig operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfigInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GetDeploymentConfigRequest : public CodeDeployRequest
  {
  public:
    GetDeploymentConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeploymentConfig"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline const Aws::String& GetDeploymentConfigName() const{ return m_deploymentConfigName; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline bool DeploymentConfigNameHasBeenSet() const { return m_deploymentConfigNameHasBeenSet; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetDeploymentConfigName(const Aws::String& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = value; }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetDeploymentConfigName(Aws::String&& value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName = std::move(value); }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline void SetDeploymentConfigName(const char* value) { m_deploymentConfigNameHasBeenSet = true; m_deploymentConfigName.assign(value); }

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline GetDeploymentConfigRequest& WithDeploymentConfigName(const Aws::String& value) { SetDeploymentConfigName(value); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline GetDeploymentConfigRequest& WithDeploymentConfigName(Aws::String&& value) { SetDeploymentConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of a deployment configuration associated with the IAM user or AWS
     * account.</p>
     */
    inline GetDeploymentConfigRequest& WithDeploymentConfigName(const char* value) { SetDeploymentConfigName(value); return *this;}

  private:

    Aws::String m_deploymentConfigName;
    bool m_deploymentConfigNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
