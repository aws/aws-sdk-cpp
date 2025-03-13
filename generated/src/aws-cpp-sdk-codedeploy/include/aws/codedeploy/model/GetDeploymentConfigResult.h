/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentConfigInfo.h>
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
   * <p>Represents the output of a <code>GetDeploymentConfig</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetDeploymentConfigOutput">AWS
   * API Reference</a></p>
   */
  class GetDeploymentConfigResult
  {
  public:
    AWS_CODEDEPLOY_API GetDeploymentConfigResult() = default;
    AWS_CODEDEPLOY_API GetDeploymentConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetDeploymentConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the deployment configuration.</p>
     */
    inline const DeploymentConfigInfo& GetDeploymentConfigInfo() const { return m_deploymentConfigInfo; }
    template<typename DeploymentConfigInfoT = DeploymentConfigInfo>
    void SetDeploymentConfigInfo(DeploymentConfigInfoT&& value) { m_deploymentConfigInfoHasBeenSet = true; m_deploymentConfigInfo = std::forward<DeploymentConfigInfoT>(value); }
    template<typename DeploymentConfigInfoT = DeploymentConfigInfo>
    GetDeploymentConfigResult& WithDeploymentConfigInfo(DeploymentConfigInfoT&& value) { SetDeploymentConfigInfo(std::forward<DeploymentConfigInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeploymentConfigInfo m_deploymentConfigInfo;
    bool m_deploymentConfigInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
