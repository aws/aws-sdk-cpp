/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentReport.h>
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
  class CreateAssessmentReportResult
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentReportResult();
    AWS_AUDITMANAGER_API CreateAssessmentReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API CreateAssessmentReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The new assessment report that the <code>CreateAssessmentReport</code> API
     * returned. </p>
     */
    inline const AssessmentReport& GetAssessmentReport() const{ return m_assessmentReport; }

    /**
     * <p> The new assessment report that the <code>CreateAssessmentReport</code> API
     * returned. </p>
     */
    inline void SetAssessmentReport(const AssessmentReport& value) { m_assessmentReport = value; }

    /**
     * <p> The new assessment report that the <code>CreateAssessmentReport</code> API
     * returned. </p>
     */
    inline void SetAssessmentReport(AssessmentReport&& value) { m_assessmentReport = std::move(value); }

    /**
     * <p> The new assessment report that the <code>CreateAssessmentReport</code> API
     * returned. </p>
     */
    inline CreateAssessmentReportResult& WithAssessmentReport(const AssessmentReport& value) { SetAssessmentReport(value); return *this;}

    /**
     * <p> The new assessment report that the <code>CreateAssessmentReport</code> API
     * returned. </p>
     */
    inline CreateAssessmentReportResult& WithAssessmentReport(AssessmentReport&& value) { SetAssessmentReport(std::move(value)); return *this;}

  private:

    AssessmentReport m_assessmentReport;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
