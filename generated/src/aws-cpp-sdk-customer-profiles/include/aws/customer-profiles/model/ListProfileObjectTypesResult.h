/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeItem.h>
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
  class ListProfileObjectTypesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypesResult();
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline const Aws::Vector<ListProfileObjectTypeItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline void SetItems(const Aws::Vector<ListProfileObjectTypeItem>& value) { m_items = value; }

    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline void SetItems(Aws::Vector<ListProfileObjectTypeItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline ListProfileObjectTypesResult& WithItems(const Aws::Vector<ListProfileObjectTypeItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline ListProfileObjectTypesResult& WithItems(Aws::Vector<ListProfileObjectTypeItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline ListProfileObjectTypesResult& AddItems(const ListProfileObjectTypeItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of ListProfileObjectTypes instances.</p>
     */
    inline ListProfileObjectTypesResult& AddItems(ListProfileObjectTypeItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListProfileObjectTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListProfileObjectTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListProfileObjectTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListProfileObjectTypeItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
