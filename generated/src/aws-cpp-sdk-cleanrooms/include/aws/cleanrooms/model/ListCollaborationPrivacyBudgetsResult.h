/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/CollaborationPrivacyBudgetSummary.h>
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
  class ListCollaborationPrivacyBudgetsResult
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetsResult();
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListCollaborationPrivacyBudgetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline const Aws::Vector<CollaborationPrivacyBudgetSummary>& GetCollaborationPrivacyBudgetSummaries() const{ return m_collaborationPrivacyBudgetSummaries; }

    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline void SetCollaborationPrivacyBudgetSummaries(const Aws::Vector<CollaborationPrivacyBudgetSummary>& value) { m_collaborationPrivacyBudgetSummaries = value; }

    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline void SetCollaborationPrivacyBudgetSummaries(Aws::Vector<CollaborationPrivacyBudgetSummary>&& value) { m_collaborationPrivacyBudgetSummaries = std::move(value); }

    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline ListCollaborationPrivacyBudgetsResult& WithCollaborationPrivacyBudgetSummaries(const Aws::Vector<CollaborationPrivacyBudgetSummary>& value) { SetCollaborationPrivacyBudgetSummaries(value); return *this;}

    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline ListCollaborationPrivacyBudgetsResult& WithCollaborationPrivacyBudgetSummaries(Aws::Vector<CollaborationPrivacyBudgetSummary>&& value) { SetCollaborationPrivacyBudgetSummaries(std::move(value)); return *this;}

    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline ListCollaborationPrivacyBudgetsResult& AddCollaborationPrivacyBudgetSummaries(const CollaborationPrivacyBudgetSummary& value) { m_collaborationPrivacyBudgetSummaries.push_back(value); return *this; }

    /**
     * <p>Summaries of the collaboration privacy budgets.</p>
     */
    inline ListCollaborationPrivacyBudgetsResult& AddCollaborationPrivacyBudgetSummaries(CollaborationPrivacyBudgetSummary&& value) { m_collaborationPrivacyBudgetSummaries.push_back(std::move(value)); return *this; }


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
    inline ListCollaborationPrivacyBudgetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationPrivacyBudgetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationPrivacyBudgetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCollaborationPrivacyBudgetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCollaborationPrivacyBudgetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCollaborationPrivacyBudgetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<CollaborationPrivacyBudgetSummary> m_collaborationPrivacyBudgetSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
