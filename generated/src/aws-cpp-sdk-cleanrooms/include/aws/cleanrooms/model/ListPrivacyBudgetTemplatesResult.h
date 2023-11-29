/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/PrivacyBudgetTemplateSummary.h>
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
  class ListPrivacyBudgetTemplatesResult
  {
  public:
    AWS_CLEANROOMS_API ListPrivacyBudgetTemplatesResult();
    AWS_CLEANROOMS_API ListPrivacyBudgetTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API ListPrivacyBudgetTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListPrivacyBudgetTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListPrivacyBudgetTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListPrivacyBudgetTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline const Aws::Vector<PrivacyBudgetTemplateSummary>& GetPrivacyBudgetTemplateSummaries() const{ return m_privacyBudgetTemplateSummaries; }

    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline void SetPrivacyBudgetTemplateSummaries(const Aws::Vector<PrivacyBudgetTemplateSummary>& value) { m_privacyBudgetTemplateSummaries = value; }

    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline void SetPrivacyBudgetTemplateSummaries(Aws::Vector<PrivacyBudgetTemplateSummary>&& value) { m_privacyBudgetTemplateSummaries = std::move(value); }

    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline ListPrivacyBudgetTemplatesResult& WithPrivacyBudgetTemplateSummaries(const Aws::Vector<PrivacyBudgetTemplateSummary>& value) { SetPrivacyBudgetTemplateSummaries(value); return *this;}

    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline ListPrivacyBudgetTemplatesResult& WithPrivacyBudgetTemplateSummaries(Aws::Vector<PrivacyBudgetTemplateSummary>&& value) { SetPrivacyBudgetTemplateSummaries(std::move(value)); return *this;}

    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline ListPrivacyBudgetTemplatesResult& AddPrivacyBudgetTemplateSummaries(const PrivacyBudgetTemplateSummary& value) { m_privacyBudgetTemplateSummaries.push_back(value); return *this; }

    /**
     * <p>An array that summarizes the privacy budget templates. The summary includes
     * collaboration information, creation information, and privacy budget type.</p>
     */
    inline ListPrivacyBudgetTemplatesResult& AddPrivacyBudgetTemplateSummaries(PrivacyBudgetTemplateSummary&& value) { m_privacyBudgetTemplateSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPrivacyBudgetTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPrivacyBudgetTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPrivacyBudgetTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<PrivacyBudgetTemplateSummary> m_privacyBudgetTemplateSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
