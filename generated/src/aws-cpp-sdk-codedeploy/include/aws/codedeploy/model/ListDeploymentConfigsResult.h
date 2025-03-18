/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the output of a <code>ListDeploymentConfigs</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ListDeploymentConfigsOutput">AWS
   * API Reference</a></p>
   */
  class ListDeploymentConfigsResult
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentConfigsResult() = default;
    AWS_CODEDEPLOY_API ListDeploymentConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListDeploymentConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of deployment configurations, including built-in configurations such
     * as <code>CodeDeployDefault.OneAtATime</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentConfigsList() const { return m_deploymentConfigsList; }
    template<typename DeploymentConfigsListT = Aws::Vector<Aws::String>>
    void SetDeploymentConfigsList(DeploymentConfigsListT&& value) { m_deploymentConfigsListHasBeenSet = true; m_deploymentConfigsList = std::forward<DeploymentConfigsListT>(value); }
    template<typename DeploymentConfigsListT = Aws::Vector<Aws::String>>
    ListDeploymentConfigsResult& WithDeploymentConfigsList(DeploymentConfigsListT&& value) { SetDeploymentConfigsList(std::forward<DeploymentConfigsListT>(value)); return *this;}
    template<typename DeploymentConfigsListT = Aws::String>
    ListDeploymentConfigsResult& AddDeploymentConfigsList(DeploymentConfigsListT&& value) { m_deploymentConfigsListHasBeenSet = true; m_deploymentConfigsList.emplace_back(std::forward<DeploymentConfigsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a large amount of information is returned, an identifier is also returned.
     * It can be used in a subsequent list deployment configurations call to return the
     * next set of deployment configurations in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeploymentConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_deploymentConfigsList;
    bool m_deploymentConfigsListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
