﻿/*
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
#include <aws/codedeploy/model/DeploymentGroupInfo.h>

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
   * <p>Represents the output of a get deployment group operation.</p>
   */
  class AWS_CODEDEPLOY_API GetDeploymentGroupResult
  {
  public:
    GetDeploymentGroupResult();
    GetDeploymentGroupResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDeploymentGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Information about the deployment group.</p>
     */
    inline const DeploymentGroupInfo& GetDeploymentGroupInfo() const{ return m_deploymentGroupInfo; }

    /**
     * <p>Information about the deployment group.</p>
     */
    inline void SetDeploymentGroupInfo(const DeploymentGroupInfo& value) { m_deploymentGroupInfo = value; }

    /**
     * <p>Information about the deployment group.</p>
     */
    inline void SetDeploymentGroupInfo(DeploymentGroupInfo&& value) { m_deploymentGroupInfo = value; }

    /**
     * <p>Information about the deployment group.</p>
     */
    inline GetDeploymentGroupResult& WithDeploymentGroupInfo(const DeploymentGroupInfo& value) { SetDeploymentGroupInfo(value); return *this;}

    /**
     * <p>Information about the deployment group.</p>
     */
    inline GetDeploymentGroupResult& WithDeploymentGroupInfo(DeploymentGroupInfo&& value) { SetDeploymentGroupInfo(value); return *this;}

  private:
    DeploymentGroupInfo m_deploymentGroupInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
