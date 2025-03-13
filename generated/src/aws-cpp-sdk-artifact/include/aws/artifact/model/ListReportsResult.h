/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/artifact/model/ReportSummary.h>
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
namespace Artifact
{
namespace Model
{
  class ListReportsResult
  {
  public:
    AWS_ARTIFACT_API ListReportsResult() = default;
    AWS_ARTIFACT_API ListReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API ListReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of report resources.</p>
     */
    inline const Aws::Vector<ReportSummary>& GetReports() const { return m_reports; }
    template<typename ReportsT = Aws::Vector<ReportSummary>>
    void SetReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports = std::forward<ReportsT>(value); }
    template<typename ReportsT = Aws::Vector<ReportSummary>>
    ListReportsResult& WithReports(ReportsT&& value) { SetReports(std::forward<ReportsT>(value)); return *this;}
    template<typename ReportsT = ReportSummary>
    ListReportsResult& AddReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports.emplace_back(std::forward<ReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token to request the next page of resources.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReportSummary> m_reports;
    bool m_reportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
