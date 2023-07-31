/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationAnalysisTemplateSummary.h>
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
  class ListCollaborationAnalysisTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationAnalysisTemplatesResult();
    AWS_CLEANROOMS_API ListCollaborationAnalysisTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationAnalysisTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListCollaborationAnalysisTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationAnalysisTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationAnalysisTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline const Aws::Vector<CollaborationAnalysisTemplateSummary>& GetCollaborationAnalysisTemplateSummaries() const{ return m_collaborationAnalysisTemplateSummaries; }

    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline void SetCollaborationAnalysisTemplateSummaries(const Aws::Vector<CollaborationAnalysisTemplateSummary>& value) { m_collaborationAnalysisTemplateSummaries = value; }

    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline void SetCollaborationAnalysisTemplateSummaries(Aws::Vector<CollaborationAnalysisTemplateSummary>&& value) { m_collaborationAnalysisTemplateSummaries = std::move(value); }

    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline ListCollaborationAnalysisTemplatesResult& WithCollaborationAnalysisTemplateSummaries(const Aws::Vector<CollaborationAnalysisTemplateSummary>& value) { SetCollaborationAnalysisTemplateSummaries(value); return *this;}

    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline ListCollaborationAnalysisTemplatesResult& WithCollaborationAnalysisTemplateSummaries(Aws::Vector<CollaborationAnalysisTemplateSummary>&& value) { SetCollaborationAnalysisTemplateSummaries(std::move(value)); return *this;}

    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline ListCollaborationAnalysisTemplatesResult& AddCollaborationAnalysisTemplateSummaries(const CollaborationAnalysisTemplateSummary& value) { m_collaborationAnalysisTemplateSummaries.push_back(value); return *this; }

    /**
     * <p>The metadata of the analysis template within a collaboration.</p>
     */
    inline ListCollaborationAnalysisTemplatesResult& AddCollaborationAnalysisTemplateSummaries(CollaborationAnalysisTemplateSummary&& value) { m_collaborationAnalysisTemplateSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCollaborationAnalysisTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCollaborationAnalysisTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCollaborationAnalysisTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationAnalysisTemplateSummary> m_collaborationAnalysisTemplateSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
