/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportGroup.h>
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
  class BatchGetReportGroupsResult
  {
  public:
    AWS_CODEBUILD_API BatchGetReportGroupsResult() = default;
    AWS_CODEBUILD_API BatchGetReportGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API BatchGetReportGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The array of report groups returned by <code>BatchGetReportGroups</code>.
     * </p>
     */
    inline const Aws::Vector<ReportGroup>& GetReportGroups() const { return m_reportGroups; }
    template<typename ReportGroupsT = Aws::Vector<ReportGroup>>
    void SetReportGroups(ReportGroupsT&& value) { m_reportGroupsHasBeenSet = true; m_reportGroups = std::forward<ReportGroupsT>(value); }
    template<typename ReportGroupsT = Aws::Vector<ReportGroup>>
    BatchGetReportGroupsResult& WithReportGroups(ReportGroupsT&& value) { SetReportGroups(std::forward<ReportGroupsT>(value)); return *this;}
    template<typename ReportGroupsT = ReportGroup>
    BatchGetReportGroupsResult& AddReportGroups(ReportGroupsT&& value) { m_reportGroupsHasBeenSet = true; m_reportGroups.emplace_back(std::forward<ReportGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An array of ARNs passed to <code>BatchGetReportGroups</code> that are not
     * associated with a <code>ReportGroup</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReportGroupsNotFound() const { return m_reportGroupsNotFound; }
    template<typename ReportGroupsNotFoundT = Aws::Vector<Aws::String>>
    void SetReportGroupsNotFound(ReportGroupsNotFoundT&& value) { m_reportGroupsNotFoundHasBeenSet = true; m_reportGroupsNotFound = std::forward<ReportGroupsNotFoundT>(value); }
    template<typename ReportGroupsNotFoundT = Aws::Vector<Aws::String>>
    BatchGetReportGroupsResult& WithReportGroupsNotFound(ReportGroupsNotFoundT&& value) { SetReportGroupsNotFound(std::forward<ReportGroupsNotFoundT>(value)); return *this;}
    template<typename ReportGroupsNotFoundT = Aws::String>
    BatchGetReportGroupsResult& AddReportGroupsNotFound(ReportGroupsNotFoundT&& value) { m_reportGroupsNotFoundHasBeenSet = true; m_reportGroupsNotFound.emplace_back(std::forward<ReportGroupsNotFoundT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchGetReportGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReportGroup> m_reportGroups;
    bool m_reportGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_reportGroupsNotFound;
    bool m_reportGroupsNotFoundHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
