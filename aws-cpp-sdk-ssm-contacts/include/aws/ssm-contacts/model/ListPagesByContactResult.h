/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Page.h>
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
namespace SSMContacts
{
namespace Model
{
  class ListPagesByContactResult
  {
  public:
    AWS_SSMCONTACTS_API ListPagesByContactResult();
    AWS_SSMCONTACTS_API ListPagesByContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMCONTACTS_API ListPagesByContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPagesByContactResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPagesByContactResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListPagesByContactResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline const Aws::Vector<Page>& GetPages() const{ return m_pages; }

    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline void SetPages(const Aws::Vector<Page>& value) { m_pages = value; }

    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline void SetPages(Aws::Vector<Page>&& value) { m_pages = std::move(value); }

    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline ListPagesByContactResult& WithPages(const Aws::Vector<Page>& value) { SetPages(value); return *this;}

    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline ListPagesByContactResult& WithPages(Aws::Vector<Page>&& value) { SetPages(std::move(value)); return *this;}

    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline ListPagesByContactResult& AddPages(const Page& value) { m_pages.push_back(value); return *this; }

    /**
     * <p>The list of engagements to a contact's contact channel.</p>
     */
    inline ListPagesByContactResult& AddPages(Page&& value) { m_pages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Page> m_pages;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
