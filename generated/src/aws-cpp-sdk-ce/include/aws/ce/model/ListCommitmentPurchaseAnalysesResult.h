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
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesResult();
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCommitmentPurchaseAnalysesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of analyses.</p>
     */
    inline const Aws::Vector<AnalysisSummary>& GetAnalysisSummaryList() const{ return m_analysisSummaryList; }
    inline void SetAnalysisSummaryList(const Aws::Vector<AnalysisSummary>& value) { m_analysisSummaryList = value; }
    inline void SetAnalysisSummaryList(Aws::Vector<AnalysisSummary>&& value) { m_analysisSummaryList = std::move(value); }
    inline ListCommitmentPurchaseAnalysesResult& WithAnalysisSummaryList(const Aws::Vector<AnalysisSummary>& value) { SetAnalysisSummaryList(value); return *this;}
    inline ListCommitmentPurchaseAnalysesResult& WithAnalysisSummaryList(Aws::Vector<AnalysisSummary>&& value) { SetAnalysisSummaryList(std::move(value)); return *this;}
    inline ListCommitmentPurchaseAnalysesResult& AddAnalysisSummaryList(const AnalysisSummary& value) { m_analysisSummaryList.push_back(value); return *this; }
    inline ListCommitmentPurchaseAnalysesResult& AddAnalysisSummaryList(AnalysisSummary&& value) { m_analysisSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListCommitmentPurchaseAnalysesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListCommitmentPurchaseAnalysesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListCommitmentPurchaseAnalysesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCommitmentPurchaseAnalysesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCommitmentPurchaseAnalysesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCommitmentPurchaseAnalysesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisSummary> m_analysisSummaryList;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
