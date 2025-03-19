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
  class ListDeploymentTargetsResult
  {
  public:
    AWS_CODEDEPLOY_API ListDeploymentTargetsResult() = default;
    AWS_CODEDEPLOY_API ListDeploymentTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API ListDeploymentTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique IDs of deployment targets. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetIds() const { return m_targetIds; }
    template<typename TargetIdsT = Aws::Vector<Aws::String>>
    void SetTargetIds(TargetIdsT&& value) { m_targetIdsHasBeenSet = true; m_targetIds = std::forward<TargetIdsT>(value); }
    template<typename TargetIdsT = Aws::Vector<Aws::String>>
    ListDeploymentTargetsResult& WithTargetIds(TargetIdsT&& value) { SetTargetIds(std::forward<TargetIdsT>(value)); return *this;}
    template<typename TargetIdsT = Aws::String>
    ListDeploymentTargetsResult& AddTargetIds(TargetIdsT&& value) { m_targetIdsHasBeenSet = true; m_targetIds.emplace_back(std::forward<TargetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If a large amount of information is returned, a token identifier is also
     * returned. It can be used in a subsequent <code>ListDeploymentTargets</code> call
     * to return the next set of deployment targets in the list. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentTargetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeploymentTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_targetIds;
    bool m_targetIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
