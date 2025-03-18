/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/budgets/model/ActionHistory.h>
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
namespace Budgets
{
namespace Model
{
  class DescribeBudgetActionHistoriesResult
  {
  public:
    AWS_BUDGETS_API DescribeBudgetActionHistoriesResult() = default;
    AWS_BUDGETS_API DescribeBudgetActionHistoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BUDGETS_API DescribeBudgetActionHistoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The historical record of the budget action resource. </p>
     */
    inline const Aws::Vector<ActionHistory>& GetActionHistories() const { return m_actionHistories; }
    template<typename ActionHistoriesT = Aws::Vector<ActionHistory>>
    void SetActionHistories(ActionHistoriesT&& value) { m_actionHistoriesHasBeenSet = true; m_actionHistories = std::forward<ActionHistoriesT>(value); }
    template<typename ActionHistoriesT = Aws::Vector<ActionHistory>>
    DescribeBudgetActionHistoriesResult& WithActionHistories(ActionHistoriesT&& value) { SetActionHistories(std::forward<ActionHistoriesT>(value)); return *this;}
    template<typename ActionHistoriesT = ActionHistory>
    DescribeBudgetActionHistoriesResult& AddActionHistories(ActionHistoriesT&& value) { m_actionHistoriesHasBeenSet = true; m_actionHistories.emplace_back(std::forward<ActionHistoriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeBudgetActionHistoriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBudgetActionHistoriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActionHistory> m_actionHistories;
    bool m_actionHistoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
