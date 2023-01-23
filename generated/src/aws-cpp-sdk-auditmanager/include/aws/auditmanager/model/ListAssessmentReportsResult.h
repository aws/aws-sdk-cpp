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
    AWS_AUDITMANAGER_API ListAssessmentReportsResult();
    AWS_AUDITMANAGER_API ListAssessmentReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListAssessmentReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline const Aws::Vector<AssessmentReportMetadata>& GetAssessmentReports() const{ return m_assessmentReports; }

    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline void SetAssessmentReports(const Aws::Vector<AssessmentReportMetadata>& value) { m_assessmentReports = value; }

    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline void SetAssessmentReports(Aws::Vector<AssessmentReportMetadata>&& value) { m_assessmentReports = std::move(value); }

    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline ListAssessmentReportsResult& WithAssessmentReports(const Aws::Vector<AssessmentReportMetadata>& value) { SetAssessmentReports(value); return *this;}

    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline ListAssessmentReportsResult& WithAssessmentReports(Aws::Vector<AssessmentReportMetadata>&& value) { SetAssessmentReports(std::move(value)); return *this;}

    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline ListAssessmentReportsResult& AddAssessmentReports(const AssessmentReportMetadata& value) { m_assessmentReports.push_back(value); return *this; }

    /**
     * <p> The list of assessment reports that the <code>ListAssessmentReports</code>
     * API returned. </p>
     */
    inline ListAssessmentReportsResult& AddAssessmentReports(AssessmentReportMetadata&& value) { m_assessmentReports.push_back(std::move(value)); return *this; }


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssessmentReportMetadata> m_assessmentReports;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
