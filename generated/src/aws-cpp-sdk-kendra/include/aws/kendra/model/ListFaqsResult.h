﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/FaqSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListFaqsResult
  {
  public:
    AWS_KENDRA_API ListFaqsResult();
    AWS_KENDRA_API ListFaqsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListFaqsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of FAQs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFaqsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFaqsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFaqsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline const Aws::Vector<FaqSummary>& GetFaqSummaryItems() const{ return m_faqSummaryItems; }
    inline void SetFaqSummaryItems(const Aws::Vector<FaqSummary>& value) { m_faqSummaryItems = value; }
    inline void SetFaqSummaryItems(Aws::Vector<FaqSummary>&& value) { m_faqSummaryItems = std::move(value); }
    inline ListFaqsResult& WithFaqSummaryItems(const Aws::Vector<FaqSummary>& value) { SetFaqSummaryItems(value); return *this;}
    inline ListFaqsResult& WithFaqSummaryItems(Aws::Vector<FaqSummary>&& value) { SetFaqSummaryItems(std::move(value)); return *this;}
    inline ListFaqsResult& AddFaqSummaryItems(const FaqSummary& value) { m_faqSummaryItems.push_back(value); return *this; }
    inline ListFaqsResult& AddFaqSummaryItems(FaqSummary&& value) { m_faqSummaryItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFaqsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFaqsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFaqsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<FaqSummary> m_faqSummaryItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
