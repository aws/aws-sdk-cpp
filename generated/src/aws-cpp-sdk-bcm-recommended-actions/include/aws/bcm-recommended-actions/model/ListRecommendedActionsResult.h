/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-recommended-actions/model/RecommendedAction.h>
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
namespace BCMRecommendedActions
{
namespace Model
{
  class ListRecommendedActionsResult
  {
  public:
    AWS_BCMRECOMMENDEDACTIONS_API ListRecommendedActionsResult() = default;
    AWS_BCMRECOMMENDEDACTIONS_API ListRecommendedActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMRECOMMENDEDACTIONS_API ListRecommendedActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of recommended actions that satisfy the filter criteria.</p>
     */
    inline const Aws::Vector<RecommendedAction>& GetRecommendedActions() const { return m_recommendedActions; }
    template<typename RecommendedActionsT = Aws::Vector<RecommendedAction>>
    void SetRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions = std::forward<RecommendedActionsT>(value); }
    template<typename RecommendedActionsT = Aws::Vector<RecommendedAction>>
    ListRecommendedActionsResult& WithRecommendedActions(RecommendedActionsT&& value) { SetRecommendedActions(std::forward<RecommendedActionsT>(value)); return *this;}
    template<typename RecommendedActionsT = RecommendedAction>
    ListRecommendedActionsResult& AddRecommendedActions(RecommendedActionsT&& value) { m_recommendedActionsHasBeenSet = true; m_recommendedActions.emplace_back(std::forward<RecommendedActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results that you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecommendedActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecommendedActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RecommendedAction> m_recommendedActions;
    bool m_recommendedActionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
