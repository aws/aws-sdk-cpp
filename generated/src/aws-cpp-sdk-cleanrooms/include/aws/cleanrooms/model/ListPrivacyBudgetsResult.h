/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/PrivacyBudgetSummary.h>
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
  class ListPrivacyBudgetsResult
  {
  public:
    AWS_CLEANROOMS_API ListPrivacyBudgetsResult();
    AWS_CLEANROOMS_API ListPrivacyBudgetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListPrivacyBudgetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline const Aws::Vector<PrivacyBudgetSummary>& GetPrivacyBudgetSummaries() const{ return m_privacyBudgetSummaries; }

    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline void SetPrivacyBudgetSummaries(const Aws::Vector<PrivacyBudgetSummary>& value) { m_privacyBudgetSummaries = value; }

    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline void SetPrivacyBudgetSummaries(Aws::Vector<PrivacyBudgetSummary>&& value) { m_privacyBudgetSummaries = std::move(value); }

    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline ListPrivacyBudgetsResult& WithPrivacyBudgetSummaries(const Aws::Vector<PrivacyBudgetSummary>& value) { SetPrivacyBudgetSummaries(value); return *this;}

    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline ListPrivacyBudgetsResult& WithPrivacyBudgetSummaries(Aws::Vector<PrivacyBudgetSummary>&& value) { SetPrivacyBudgetSummaries(std::move(value)); return *this;}

    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline ListPrivacyBudgetsResult& AddPrivacyBudgetSummaries(const PrivacyBudgetSummary& value) { m_privacyBudgetSummaries.push_back(value); return *this; }

    /**
     * <p>An array that summarizes the privacy budgets. The summary includes
     * collaboration information, membership information, privacy budget template
     * information, and privacy budget details.</p>
     */
    inline ListPrivacyBudgetsResult& AddPrivacyBudgetSummaries(PrivacyBudgetSummary&& value) { m_privacyBudgetSummaries.push_back(std::move(value)); return *this; }


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
    inline ListPrivacyBudgetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListPrivacyBudgetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListPrivacyBudgetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPrivacyBudgetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPrivacyBudgetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPrivacyBudgetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PrivacyBudgetSummary> m_privacyBudgetSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
