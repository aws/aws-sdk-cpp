/**
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
  class AWS_KENDRA_API ListFaqsResult
  {
  public:
    ListFaqsResult();
    ListFaqsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFaqsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline ListFaqsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline ListFaqsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ListFaqs</code> operation returns a page of FAQs at a time. The
     * maximum size of the page is set by the <code>MaxResults</code> parameter. If
     * there are more jobs in the list than the page size, Amazon Kendra returns the
     * <code>NextPage</code> token. Include the token in the next request to the
     * <code>ListFaqs</code> operation to return the next page of FAQs.</p>
     */
    inline ListFaqsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline const Aws::Vector<FaqSummary>& GetFaqSummaryItems() const{ return m_faqSummaryItems; }

    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline void SetFaqSummaryItems(const Aws::Vector<FaqSummary>& value) { m_faqSummaryItems = value; }

    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline void SetFaqSummaryItems(Aws::Vector<FaqSummary>&& value) { m_faqSummaryItems = std::move(value); }

    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline ListFaqsResult& WithFaqSummaryItems(const Aws::Vector<FaqSummary>& value) { SetFaqSummaryItems(value); return *this;}

    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline ListFaqsResult& WithFaqSummaryItems(Aws::Vector<FaqSummary>&& value) { SetFaqSummaryItems(std::move(value)); return *this;}

    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline ListFaqsResult& AddFaqSummaryItems(const FaqSummary& value) { m_faqSummaryItems.push_back(value); return *this; }

    /**
     * <p>information about the FAQs associated with the specified index.</p>
     */
    inline ListFaqsResult& AddFaqSummaryItems(FaqSummary&& value) { m_faqSummaryItems.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<FaqSummary> m_faqSummaryItems;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
