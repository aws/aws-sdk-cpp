/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnalysisSummary.h>
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
namespace CostExplorer
{
namespace Model
{
  class ListCommitmentPurchaseAnalysesResult
  {
  public:
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesResult() = default;
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of analyses.</p>
     */
    inline const Aws::Vector<AnalysisSummary>& GetAnalysisSummaryList() const { return m_analysisSummaryList; }
    template<typename AnalysisSummaryListT = Aws::Vector<AnalysisSummary>>
    void SetAnalysisSummaryList(AnalysisSummaryListT&& value) { m_analysisSummaryListHasBeenSet = true; m_analysisSummaryList = std::forward<AnalysisSummaryListT>(value); }
    template<typename AnalysisSummaryListT = Aws::Vector<AnalysisSummary>>
    ListCommitmentPurchaseAnalysesResult& WithAnalysisSummaryList(AnalysisSummaryListT&& value) { SetAnalysisSummaryList(std::forward<AnalysisSummaryListT>(value)); return *this;}
    template<typename AnalysisSummaryListT = AnalysisSummary>
    ListCommitmentPurchaseAnalysesResult& AddAnalysisSummaryList(AnalysisSummaryListT&& value) { m_analysisSummaryListHasBeenSet = true; m_analysisSummaryList.emplace_back(std::forward<AnalysisSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListCommitmentPurchaseAnalysesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCommitmentPurchaseAnalysesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisSummary> m_analysisSummaryList;
    bool m_analysisSummaryListHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
