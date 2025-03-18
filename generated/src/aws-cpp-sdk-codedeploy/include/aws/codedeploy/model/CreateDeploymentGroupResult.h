/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
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
   * <p>Represents the output of a <code>CreateDeploymentGroup</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/CreateDeploymentGroupOutput">AWS
   * API Reference</a></p>
   */
  class CreateDeploymentGroupResult
  {
  public:
    AWS_CODEDEPLOY_API CreateDeploymentGroupResult() = default;
    AWS_CODEDEPLOY_API CreateDeploymentGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API CreateDeploymentGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique deployment group ID.</p>
     */
    inline const Aws::String& GetDeploymentGroupId() const { return m_deploymentGroupId; }
    template<typename DeploymentGroupIdT = Aws::String>
    void SetDeploymentGroupId(DeploymentGroupIdT&& value) { m_deploymentGroupIdHasBeenSet = true; m_deploymentGroupId = std::forward<DeploymentGroupIdT>(value); }
    template<typename DeploymentGroupIdT = Aws::String>
    CreateDeploymentGroupResult& WithDeploymentGroupId(DeploymentGroupIdT&& value) { SetDeploymentGroupId(std::forward<DeploymentGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDeploymentGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentGroupId;
    bool m_deploymentGroupIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
