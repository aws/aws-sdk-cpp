/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/OperationSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListOperationsResult
  {
  public:
    AWS_APPRUNNER_API ListOperationsResult() = default;
    AWS_APPRUNNER_API ListOperationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListOperationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of operation summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline const Aws::Vector<OperationSummary>& GetOperationSummaryList() const { return m_operationSummaryList; }
    template<typename OperationSummaryListT = Aws::Vector<OperationSummary>>
    void SetOperationSummaryList(OperationSummaryListT&& value) { m_operationSummaryListHasBeenSet = true; m_operationSummaryList = std::forward<OperationSummaryListT>(value); }
    template<typename OperationSummaryListT = Aws::Vector<OperationSummary>>
    ListOperationsResult& WithOperationSummaryList(OperationSummaryListT&& value) { SetOperationSummaryList(std::forward<OperationSummaryListT>(value)); return *this;}
    template<typename OperationSummaryListT = OperationSummary>
    ListOperationsResult& AddOperationSummaryList(OperationSummaryListT&& value) { m_operationSummaryListHasBeenSet = true; m_operationSummaryList.emplace_back(std::forward<OperationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOperationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOperationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OperationSummary> m_operationSummaryList;
    bool m_operationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
