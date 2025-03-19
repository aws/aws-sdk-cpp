/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ResolvedTarget.h>
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
namespace FIS
{
namespace Model
{
  class ListExperimentResolvedTargetsResult
  {
  public:
    AWS_FIS_API ListExperimentResolvedTargetsResult() = default;
    AWS_FIS_API ListExperimentResolvedTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListExperimentResolvedTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resolved targets.</p>
     */
    inline const Aws::Vector<ResolvedTarget>& GetResolvedTargets() const { return m_resolvedTargets; }
    template<typename ResolvedTargetsT = Aws::Vector<ResolvedTarget>>
    void SetResolvedTargets(ResolvedTargetsT&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets = std::forward<ResolvedTargetsT>(value); }
    template<typename ResolvedTargetsT = Aws::Vector<ResolvedTarget>>
    ListExperimentResolvedTargetsResult& WithResolvedTargets(ResolvedTargetsT&& value) { SetResolvedTargets(std::forward<ResolvedTargetsT>(value)); return *this;}
    template<typename ResolvedTargetsT = ResolvedTarget>
    ListExperimentResolvedTargetsResult& AddResolvedTargets(ResolvedTargetsT&& value) { m_resolvedTargetsHasBeenSet = true; m_resolvedTargets.emplace_back(std::forward<ResolvedTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExperimentResolvedTargetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExperimentResolvedTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResolvedTarget> m_resolvedTargets;
    bool m_resolvedTargetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
