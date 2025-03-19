/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/Report.h>
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
namespace CodeBuild
{
namespace Model
{
  class BatchGetReportsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetReportsResult() = default;
    AWS_CODEBUILD_API BatchGetReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The array of <code>Report</code> objects returned by
     * <code>BatchGetReports</code>. </p>
     */
    inline const Aws::Vector<Report>& GetReports() const { return m_reports; }
    template<typename ReportsT = Aws::Vector<Report>>
    void SetReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports = std::forward<ReportsT>(value); }
    template<typename ReportsT = Aws::Vector<Report>>
    BatchGetReportsResult& WithReports(ReportsT&& value) { SetReports(std::forward<ReportsT>(value)); return *this;}
    template<typename ReportsT = Report>
    BatchGetReportsResult& AddReports(ReportsT&& value) { m_reportsHasBeenSet = true; m_reports.emplace_back(std::forward<ReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>Report</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportsNotFound() const { return m_reportsNotFound; }
    template<typename ReportsNotFoundT = Aws::Vector<Aws::String>>
    void SetReportsNotFound(ReportsNotFoundT&& value) { m_reportsNotFoundHasBeenSet = true; m_reportsNotFound = std::forward<ReportsNotFoundT>(value); }
    template<typename ReportsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetReportsResult& WithReportsNotFound(ReportsNotFoundT&& value) { SetReportsNotFound(std::forward<ReportsNotFoundT>(value)); return *this;}
    template<typename ReportsNotFoundT = Aws::String>
    BatchGetReportsResult& AddReportsNotFound(ReportsNotFoundT&& value) { m_reportsNotFoundHasBeenSet = true; m_reportsNotFound.emplace_back(std::forward<ReportsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Report> m_reports;
    bool m_reportsHasBeenSet = false;

    Aws::Vector<Aws::String> m_reportsNotFound;
    bool m_reportsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
