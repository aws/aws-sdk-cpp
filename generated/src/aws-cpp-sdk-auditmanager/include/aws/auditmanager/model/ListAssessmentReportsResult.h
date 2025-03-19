/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/AssessmentReportMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class ListAssessmentReportsResult
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentReportsResult() = default;
    AWS_AUDITMANAGER_API ListAssessmentReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline const Aws::Vector<AssessmentReportMetadata>& GetAssessmentReports() const { return m_assessmentReports; }
    template<typename AssessmentReportsT = Aws::Vector<AssessmentReportMetadata>>
    void SetAssessmentReports(AssessmentReportsT&& value) { m_assessmentReportsHasBeenSet = true; m_assessmentReports = std::forward<AssessmentReportsT>(value); }
    template<typename AssessmentReportsT = Aws::Vector<AssessmentReportMetadata>>
    ListAssessmentReportsResult& WithAssessmentReports(AssessmentReportsT&& value) { SetAssessmentReports(std::forward<AssessmentReportsT>(value)); return *this;}
    template<typename AssessmentReportsT = AssessmentReportMetadata>
    ListAssessmentReportsResult& AddAssessmentReports(AssessmentReportsT&& value) { m_assessmentReportsHasBeenSet = true; m_assessmentReports.emplace_back(std::forward<AssessmentReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssessmentReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssessmentReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssessmentReportMetadata> m_assessmentReports;
    bool m_assessmentReportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
