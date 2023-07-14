﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListIntegrationItem.h>
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
  class AWS_CUSTOMERPROFILES_API ListIntegrationsResult
  {
  public:
    ListIntegrationsResult();
    ListIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline const Aws::Vector<ListIntegrationItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline void SetItems(const Aws::Vector<ListIntegrationItem>& value) { m_items = value; }

    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline void SetItems(Aws::Vector<ListIntegrationItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline ListIntegrationsResult& WithItems(const Aws::Vector<ListIntegrationItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline ListIntegrationsResult& WithItems(Aws::Vector<ListIntegrationItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline ListIntegrationsResult& AddItems(const ListIntegrationItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of ListIntegrations instances.</p>
     */
    inline ListIntegrationsResult& AddItems(ListIntegrationItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline ListIntegrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline ListIntegrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous ListIntegrations API call.</p>
     */
    inline ListIntegrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListIntegrationItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
