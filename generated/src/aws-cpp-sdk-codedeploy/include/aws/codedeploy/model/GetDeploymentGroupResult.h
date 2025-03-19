/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentGroupInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Represents the output of a <code>GetDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class GetDeploymentGroupResult
  {
  public:
    AWS_CODEDEPLOY_API GetDeploymentGroupResult() = default;
    AWS_CODEDEPLOY_API GetDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deployment group.</p>
     */
    inline const DeploymentGroupInfo& GetDeploymentGroupInfo() const { return m_deploymentGroupInfo; }
    template<typename DeploymentGroupInfoT = DeploymentGroupInfo>
    void SetDeploymentGroupInfo(DeploymentGroupInfoT&& value) { m_deploymentGroupInfoHasBeenSet = true; m_deploymentGroupInfo = std::forward<DeploymentGroupInfoT>(value); }
    template<typename DeploymentGroupInfoT = DeploymentGroupInfo>
    GetDeploymentGroupResult& WithDeploymentGroupInfo(DeploymentGroupInfoT&& value) { SetDeploymentGroupInfo(std::forward<DeploymentGroupInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeploymentGroupInfo m_deploymentGroupInfo;
    bool m_deploymentGroupInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
