/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> Represents the output of a <code>BatchGetDeployments</code> operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentsOutput">AWS
   * API Reference</a></p>
   */
  class BatchGetDeploymentsResult
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentsResult() = default;
    AWS_CODEDEPLOY_API BatchGetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API BatchGetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Information about the deployments. </p>
     */
    inline const Aws::Vector<DeploymentInfo>& GetDeploymentsInfo() const { return m_deploymentsInfo; }
    template<typename DeploymentsInfoT = Aws::Vector<DeploymentInfo>>
    void SetDeploymentsInfo(DeploymentsInfoT&& value) { m_deploymentsInfoHasBeenSet = true; m_deploymentsInfo = std::forward<DeploymentsInfoT>(value); }
    template<typename DeploymentsInfoT = Aws::Vector<DeploymentInfo>>
    BatchGetDeploymentsResult& WithDeploymentsInfo(DeploymentsInfoT&& value) { SetDeploymentsInfo(std::forward<DeploymentsInfoT>(value)); return *this;}
    template<typename DeploymentsInfoT = DeploymentInfo>
    BatchGetDeploymentsResult& AddDeploymentsInfo(DeploymentsInfoT&& value) { m_deploymentsInfoHasBeenSet = true; m_deploymentsInfo.emplace_back(std::forward<DeploymentsInfoT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentInfo> m_deploymentsInfo;
    bool m_deploymentsInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
