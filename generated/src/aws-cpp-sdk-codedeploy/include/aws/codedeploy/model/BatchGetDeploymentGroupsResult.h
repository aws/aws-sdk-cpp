/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Represents the output of a <code>BatchGetDeploymentGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroupsOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetDeploymentGroupsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult() = default;
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deployment groups.</p>
     */
    inline const Aws::Vector<DeploymentGroupInfo>& GetDeploymentGroupsInfo() const { return m_deploymentGroupsInfo; }
    template<typename DeploymentGroupsInfoT = Aws::Vector<DeploymentGroupInfo>>
    void SetDeploymentGroupsInfo(DeploymentGroupsInfoT&& value) { m_deploymentGroupsInfoHasBeenSet = true; m_deploymentGroupsInfo = std::forward<DeploymentGroupsInfoT>(value); }
    template<typename DeploymentGroupsInfoT = Aws::Vector<DeploymentGroupInfo>>
    BatchGetDeploymentGroupsResult& WithDeploymentGroupsInfo(DeploymentGroupsInfoT&& value) { SetDeploymentGroupsInfo(std::forward<DeploymentGroupsInfoT>(value)); return *this;}
    template<typename DeploymentGroupsInfoT = DeploymentGroupInfo>
    BatchGetDeploymentGroupsResult& AddDeploymentGroupsInfo(DeploymentGroupsInfoT&& value) { m_deploymentGroupsInfoHasBeenSet = true; m_deploymentGroupsInfo.emplace_back(std::forward<DeploymentGroupsInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about errors that might have occurred during the API call.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchGetDeploymentGroupsResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDeploymentGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentGroupInfo> m_deploymentGroupsInfo;
    bool m_deploymentGroupsInfoHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
