/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/AnalysisTemplateSummary.h>
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
namespace CleanRooms
{
namespace Model
{
  class ListAnalysisTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListAnalysisTemplatesResult();
    AWS_CLEANROOMS_API ListAnalysisTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListAnalysisTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAnalysisTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAnalysisTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListAnalysisTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline const Aws::Vector<AnalysisTemplateSummary>& GetAnalysisTemplateSummaries() const{ return m_analysisTemplateSummaries; }

    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline void SetAnalysisTemplateSummaries(const Aws::Vector<AnalysisTemplateSummary>& value) { m_analysisTemplateSummaries = value; }

    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline void SetAnalysisTemplateSummaries(Aws::Vector<AnalysisTemplateSummary>&& value) { m_analysisTemplateSummaries = std::move(value); }

    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline ListAnalysisTemplatesResult& WithAnalysisTemplateSummaries(const Aws::Vector<AnalysisTemplateSummary>& value) { SetAnalysisTemplateSummaries(value); return *this;}

    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline ListAnalysisTemplatesResult& WithAnalysisTemplateSummaries(Aws::Vector<AnalysisTemplateSummary>&& value) { SetAnalysisTemplateSummaries(std::move(value)); return *this;}

    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline ListAnalysisTemplatesResult& AddAnalysisTemplateSummaries(const AnalysisTemplateSummary& value) { m_analysisTemplateSummaries.push_back(value); return *this; }

    /**
     * <p>Lists analysis template metadata.</p>
     */
    inline ListAnalysisTemplatesResult& AddAnalysisTemplateSummaries(AnalysisTemplateSummary&& value) { m_analysisTemplateSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAnalysisTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAnalysisTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAnalysisTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<AnalysisTemplateSummary> m_analysisTemplateSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
