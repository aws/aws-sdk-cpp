/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/ce/model/AnalysisStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class ListCommitmentPurchaseAnalysesRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCommitmentPurchaseAnalyses"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The status of the analysis.</p>
     */
    inline AnalysisStatus GetAnalysisStatus() const { return m_analysisStatus; }
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }
    inline void SetAnalysisStatus(AnalysisStatus value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline ListCommitmentPurchaseAnalysesRequest& WithAnalysisStatus(AnalysisStatus value) { SetAnalysisStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListCommitmentPurchaseAnalysesRequest& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of analyses that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListCommitmentPurchaseAnalysesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis IDs associated with the commitment purchase analyses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisIds() const { return m_analysisIds; }
    inline bool AnalysisIdsHasBeenSet() const { return m_analysisIdsHasBeenSet; }
    template<typename AnalysisIdsT = Aws::Vector<Aws::String>>
    void SetAnalysisIds(AnalysisIdsT&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = std::forward<AnalysisIdsT>(value); }
    template<typename AnalysisIdsT = Aws::Vector<Aws::String>>
    ListCommitmentPurchaseAnalysesRequest& WithAnalysisIds(AnalysisIdsT&& value) { SetAnalysisIds(std::forward<AnalysisIdsT>(value)); return *this;}
    template<typename AnalysisIdsT = Aws::String>
    ListCommitmentPurchaseAnalysesRequest& AddAnalysisIds(AnalysisIdsT&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.emplace_back(std::forward<AnalysisIdsT>(value)); return *this; }
    ///@}
  private:

    AnalysisStatus m_analysisStatus{AnalysisStatus::NOT_SET};
    bool m_analysisStatusHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;

    Aws::Vector<Aws::String> m_analysisIds;
    bool m_analysisIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
