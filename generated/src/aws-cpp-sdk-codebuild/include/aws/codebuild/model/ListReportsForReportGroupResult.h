/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListReportsForReportGroupResult
  {
  public:
    AWS_CODEBUILD_API ListReportsForReportGroupResult();
    AWS_CODEBUILD_API ListReportsForReportGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEBUILD_API ListReportsForReportGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReportsForReportGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReportsForReportGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReportsForReportGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of report ARNs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReports() const{ return m_reports; }
    inline void SetReports(const Aws::Vector<Aws::String>& value) { m_reports = value; }
    inline void SetReports(Aws::Vector<Aws::String>&& value) { m_reports = std::move(value); }
    inline ListReportsForReportGroupResult& WithReports(const Aws::Vector<Aws::String>& value) { SetReports(value); return *this;}
    inline ListReportsForReportGroupResult& WithReports(Aws::Vector<Aws::String>&& value) { SetReports(std::move(value)); return *this;}
    inline ListReportsForReportGroupResult& AddReports(const Aws::String& value) { m_reports.push_back(value); return *this; }
    inline ListReportsForReportGroupResult& AddReports(Aws::String&& value) { m_reports.push_back(std::move(value)); return *this; }
    inline ListReportsForReportGroupResult& AddReports(const char* value) { m_reports.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReportsForReportGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReportsForReportGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReportsForReportGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_reports;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
