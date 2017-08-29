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
#include <aws/codedeploy/model/DeploymentConfigInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

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
   * <p>Represents the output of a GetDeploymentConfig operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfigOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GetDeploymentConfigResult
  {
  public:
    GetDeploymentConfigResult();
    GetDeploymentConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline const DeploymentConfigInfo& GetDeploymentConfigInfo() const{ return m_deploymentConfigInfo; }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline void SetDeploymentConfigInfo(const DeploymentConfigInfo& value) { m_deploymentConfigInfo = value; }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline void SetDeploymentConfigInfo(DeploymentConfigInfo&& value) { m_deploymentConfigInfo = std::move(value); }

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline GetDeploymentConfigResult& WithDeploymentConfigInfo(const DeploymentConfigInfo& value) { SetDeploymentConfigInfo(value); return *this;}

    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline GetDeploymentConfigResult& WithDeploymentConfigInfo(DeploymentConfigInfo&& value) { SetDeploymentConfigInfo(std::move(value)); return *this;}

  private:

    DeploymentConfigInfo m_deploymentConfigInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
