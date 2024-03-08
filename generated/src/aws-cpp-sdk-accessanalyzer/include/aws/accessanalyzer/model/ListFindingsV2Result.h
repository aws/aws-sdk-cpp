/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/FindingSummaryV2.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class ListFindingsV2Result
  {
  public:
    AWS_ACCESSANALYZER_API ListFindingsV2Result();
    AWS_ACCESSANALYZER_API ListFindingsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API ListFindingsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline const Aws::Vector<FindingSummaryV2>& GetFindings() const{ return m_findings; }

    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline void SetFindings(const Aws::Vector<FindingSummaryV2>& value) { m_findings = value; }

    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline void SetFindings(Aws::Vector<FindingSummaryV2>&& value) { m_findings = std::move(value); }

    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline ListFindingsV2Result& WithFindings(const Aws::Vector<FindingSummaryV2>& value) { SetFindings(value); return *this;}

    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline ListFindingsV2Result& WithFindings(Aws::Vector<FindingSummaryV2>&& value) { SetFindings(std::move(value)); return *this;}

    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline ListFindingsV2Result& AddFindings(const FindingSummaryV2& value) { m_findings.push_back(value); return *this; }

    /**
     * <p>A list of findings retrieved from the analyzer that match the filter criteria
     * specified, if any.</p>
     */
    inline ListFindingsV2Result& AddFindings(FindingSummaryV2&& value) { m_findings.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListFindingsV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListFindingsV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline ListFindingsV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFindingsV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFindingsV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFindingsV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FindingSummaryV2> m_findings;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
