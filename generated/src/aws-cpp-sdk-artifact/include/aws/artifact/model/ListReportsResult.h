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
    AWS_ARTIFACT_API ListReportsResult();
    AWS_ARTIFACT_API ListReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ARTIFACT_API ListReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of report resources.</p>
     */
    inline const Aws::Vector<ReportSummary>& GetReports() const{ return m_reports; }
    inline void SetReports(const Aws::Vector<ReportSummary>& value) { m_reports = value; }
    inline void SetReports(Aws::Vector<ReportSummary>&& value) { m_reports = std::move(value); }
    inline ListReportsResult& WithReports(const Aws::Vector<ReportSummary>& value) { SetReports(value); return *this;}
    inline ListReportsResult& WithReports(Aws::Vector<ReportSummary>&& value) { SetReports(std::move(value)); return *this;}
    inline ListReportsResult& AddReports(const ReportSummary& value) { m_reports.push_back(value); return *this; }
    inline ListReportsResult& AddReports(ReportSummary&& value) { m_reports.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token to request the next page of resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ReportSummary> m_reports;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
