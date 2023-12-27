/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/CollaborationPrivacyBudgetTemplateSummary.h>
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
  class ListCollaborationPrivacyBudgetTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetTemplatesResult();
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline const Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>& GetCollaborationPrivacyBudgetTemplateSummaries() const{ return m_collaborationPrivacyBudgetTemplateSummaries; }

    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline void SetCollaborationPrivacyBudgetTemplateSummaries(const Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>& value) { m_collaborationPrivacyBudgetTemplateSummaries = value; }

    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline void SetCollaborationPrivacyBudgetTemplateSummaries(Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>&& value) { m_collaborationPrivacyBudgetTemplateSummaries = std::move(value); }

    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithCollaborationPrivacyBudgetTemplateSummaries(const Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>& value) { SetCollaborationPrivacyBudgetTemplateSummaries(value); return *this;}

    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithCollaborationPrivacyBudgetTemplateSummaries(Aws::Vector<CollaborationPrivacyBudgetTemplateSummary>&& value) { SetCollaborationPrivacyBudgetTemplateSummaries(std::move(value)); return *this;}

    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline ListCollaborationPrivacyBudgetTemplatesResult& AddCollaborationPrivacyBudgetTemplateSummaries(const CollaborationPrivacyBudgetTemplateSummary& value) { m_collaborationPrivacyBudgetTemplateSummaries.push_back(value); return *this; }

    /**
     * <p>An array that summarizes the collaboration privacy budget templates. The
     * summary includes collaboration information, creation information, the privacy
     * budget type.</p>
     */
    inline ListCollaborationPrivacyBudgetTemplatesResult& AddCollaborationPrivacyBudgetTemplateSummaries(CollaborationPrivacyBudgetTemplateSummary&& value) { m_collaborationPrivacyBudgetTemplateSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCollaborationPrivacyBudgetTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<CollaborationPrivacyBudgetTemplateSummary> m_collaborationPrivacyBudgetTemplateSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
