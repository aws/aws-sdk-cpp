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
#include <aws/codedeploy/model/DeploymentInfo.h>
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
   * <p>Represents the output of a GetDeployment operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API GetDeploymentResult
  {
  public:
    GetDeploymentResult();
    GetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deployment.</p>
     */
    inline const DeploymentInfo& GetDeploymentInfo() const{ return m_deploymentInfo; }

    /**
     * <p>Information about the deployment.</p>
     */
    inline void SetDeploymentInfo(const DeploymentInfo& value) { m_deploymentInfo = value; }

    /**
     * <p>Information about the deployment.</p>
     */
    inline void SetDeploymentInfo(DeploymentInfo&& value) { m_deploymentInfo = std::move(value); }

    /**
     * <p>Information about the deployment.</p>
     */
    inline GetDeploymentResult& WithDeploymentInfo(const DeploymentInfo& value) { SetDeploymentInfo(value); return *this;}

    /**
     * <p>Information about the deployment.</p>
     */
    inline GetDeploymentResult& WithDeploymentInfo(DeploymentInfo&& value) { SetDeploymentInfo(std::move(value)); return *this;}

  private:

    DeploymentInfo m_deploymentInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
