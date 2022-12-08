/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListDomainItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListDomainsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListDomainsResult();
    AWS_CUSTOMERPROFILES_API ListDomainsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListDomainsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline const Aws::Vector<ListDomainItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline void SetItems(const Aws::Vector<ListDomainItem>& value) { m_items = value; }

    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline void SetItems(Aws::Vector<ListDomainItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline ListDomainsResult& WithItems(const Aws::Vector<ListDomainItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline ListDomainsResult& WithItems(Aws::Vector<ListDomainItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline ListDomainsResult& AddItems(const ListDomainItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of ListDomains instances.</p>
     */
    inline ListDomainsResult& AddItems(ListDomainItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline ListDomainsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline ListDomainsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous ListDomains API call.</p>
     */
    inline ListDomainsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListDomainItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
