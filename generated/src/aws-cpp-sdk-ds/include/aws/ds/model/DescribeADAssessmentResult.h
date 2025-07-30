/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/Assessment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/AssessmentReport.h>
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
namespace DirectoryService
{
namespace Model
{
  class DescribeADAssessmentResult
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeADAssessmentResult() = default;
    AWS_DIRECTORYSERVICE_API DescribeADAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICE_API DescribeADAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detailed information about the self-managed instance settings (IDs and DNS
     * IPs).</p>
     */
    inline const Assessment& GetAssessment() const { return m_assessment; }
    template<typename AssessmentT = Assessment>
    void SetAssessment(AssessmentT&& value) { m_assessmentHasBeenSet = true; m_assessment = std::forward<AssessmentT>(value); }
    template<typename AssessmentT = Assessment>
    DescribeADAssessmentResult& WithAssessment(AssessmentT&& value) { SetAssessment(std::forward<AssessmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of assessment reports containing validation results for each domain
     * controller and test category. Each report includes specific validation details
     * and outcomes.</p>
     */
    inline const Aws::Vector<AssessmentReport>& GetAssessmentReports() const { return m_assessmentReports; }
    template<typename AssessmentReportsT = Aws::Vector<AssessmentReport>>
    void SetAssessmentReports(AssessmentReportsT&& value) { m_assessmentReportsHasBeenSet = true; m_assessmentReports = std::forward<AssessmentReportsT>(value); }
    template<typename AssessmentReportsT = Aws::Vector<AssessmentReport>>
    DescribeADAssessmentResult& WithAssessmentReports(AssessmentReportsT&& value) { SetAssessmentReports(std::forward<AssessmentReportsT>(value)); return *this;}
    template<typename AssessmentReportsT = AssessmentReport>
    DescribeADAssessmentResult& AddAssessmentReports(AssessmentReportsT&& value) { m_assessmentReportsHasBeenSet = true; m_assessmentReports.emplace_back(std::forward<AssessmentReportsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeADAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Assessment m_assessment;
    bool m_assessmentHasBeenSet = false;

    Aws::Vector<AssessmentReport> m_assessmentReports;
    bool m_assessmentReportsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
