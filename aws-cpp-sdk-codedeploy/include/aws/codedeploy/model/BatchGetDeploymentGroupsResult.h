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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/DeploymentGroupInfo.h>
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
   * <p>Represents the output of a BatchGetDeploymentGroups operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroupsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult
  {
  public:
    BatchGetDeploymentGroupsResult();
    BatchGetDeploymentGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchGetDeploymentGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the deployment groups.</p>
     */
    inline const Aws::Vector<DeploymentGroupInfo>& GetDeploymentGroupsInfo() const{ return m_deploymentGroupsInfo; }

    /**
     * <p>Information about the deployment groups.</p>
     */
    inline void SetDeploymentGroupsInfo(const Aws::Vector<DeploymentGroupInfo>& value) { m_deploymentGroupsInfo = value; }

    /**
     * <p>Information about the deployment groups.</p>
     */
    inline void SetDeploymentGroupsInfo(Aws::Vector<DeploymentGroupInfo>&& value) { m_deploymentGroupsInfo = std::move(value); }

    /**
     * <p>Information about the deployment groups.</p>
     */
    inline BatchGetDeploymentGroupsResult& WithDeploymentGroupsInfo(const Aws::Vector<DeploymentGroupInfo>& value) { SetDeploymentGroupsInfo(value); return *this;}

    /**
     * <p>Information about the deployment groups.</p>
     */
    inline BatchGetDeploymentGroupsResult& WithDeploymentGroupsInfo(Aws::Vector<DeploymentGroupInfo>&& value) { SetDeploymentGroupsInfo(std::move(value)); return *this;}

    /**
     * <p>Information about the deployment groups.</p>
     */
    inline BatchGetDeploymentGroupsResult& AddDeploymentGroupsInfo(const DeploymentGroupInfo& value) { m_deploymentGroupsInfo.push_back(value); return *this; }

    /**
     * <p>Information about the deployment groups.</p>
     */
    inline BatchGetDeploymentGroupsResult& AddDeploymentGroupsInfo(DeploymentGroupInfo&& value) { m_deploymentGroupsInfo.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline BatchGetDeploymentGroupsResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline BatchGetDeploymentGroupsResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline BatchGetDeploymentGroupsResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    Aws::Vector<DeploymentGroupInfo> m_deploymentGroupsInfo;

    Aws::String m_errorMessage;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
