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
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesRequest();

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
    inline const AnalysisStatus& GetAnalysisStatus() const{ return m_analysisStatus; }
    inline bool AnalysisStatusHasBeenSet() const { return m_analysisStatusHasBeenSet; }
    inline void SetAnalysisStatus(const AnalysisStatus& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = value; }
    inline void SetAnalysisStatus(AnalysisStatus&& value) { m_analysisStatusHasBeenSet = true; m_analysisStatus = std::move(value); }
    inline ListCommitmentPurchaseAnalysesRequest& WithAnalysisStatus(const AnalysisStatus& value) { SetAnalysisStatus(value); return *this;}
    inline ListCommitmentPurchaseAnalysesRequest& WithAnalysisStatus(AnalysisStatus&& value) { SetAnalysisStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }
    inline ListCommitmentPurchaseAnalysesRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListCommitmentPurchaseAnalysesRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListCommitmentPurchaseAnalysesRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of analyses that you want returned in a single response
     * object.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListCommitmentPurchaseAnalysesRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The analysis IDs associated with the commitment purchase analyses.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAnalysisIds() const{ return m_analysisIds; }
    inline bool AnalysisIdsHasBeenSet() const { return m_analysisIdsHasBeenSet; }
    inline void SetAnalysisIds(const Aws::Vector<Aws::String>& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = value; }
    inline void SetAnalysisIds(Aws::Vector<Aws::String>&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds = std::move(value); }
    inline ListCommitmentPurchaseAnalysesRequest& WithAnalysisIds(const Aws::Vector<Aws::String>& value) { SetAnalysisIds(value); return *this;}
    inline ListCommitmentPurchaseAnalysesRequest& WithAnalysisIds(Aws::Vector<Aws::String>&& value) { SetAnalysisIds(std::move(value)); return *this;}
    inline ListCommitmentPurchaseAnalysesRequest& AddAnalysisIds(const Aws::String& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(value); return *this; }
    inline ListCommitmentPurchaseAnalysesRequest& AddAnalysisIds(Aws::String&& value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(std::move(value)); return *this; }
    inline ListCommitmentPurchaseAnalysesRequest& AddAnalysisIds(const char* value) { m_analysisIdsHasBeenSet = true; m_analysisIds.push_back(value); return *this; }
    ///@}
  private:

    AnalysisStatus m_analysisStatus;
    bool m_analysisStatusHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;

    Aws::Vector<Aws::String> m_analysisIds;
    bool m_analysisIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
