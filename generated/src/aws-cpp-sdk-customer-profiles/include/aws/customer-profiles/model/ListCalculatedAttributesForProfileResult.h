/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListCalculatedAttributeForProfileItem.h>
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
  class ListCalculatedAttributesForProfileResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributesForProfileResult();
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributesForProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributesForProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of calculated attributes.</p>
     */
    inline const Aws::Vector<ListCalculatedAttributeForProfileItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of calculated attributes.</p>
     */
    inline void SetItems(const Aws::Vector<ListCalculatedAttributeForProfileItem>& value) { m_items = value; }

    /**
     * <p>The list of calculated attributes.</p>
     */
    inline void SetItems(Aws::Vector<ListCalculatedAttributeForProfileItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of calculated attributes.</p>
     */
    inline ListCalculatedAttributesForProfileResult& WithItems(const Aws::Vector<ListCalculatedAttributeForProfileItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of calculated attributes.</p>
     */
    inline ListCalculatedAttributesForProfileResult& WithItems(Aws::Vector<ListCalculatedAttributeForProfileItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of calculated attributes.</p>
     */
    inline ListCalculatedAttributesForProfileResult& AddItems(const ListCalculatedAttributeForProfileItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of calculated attributes.</p>
     */
    inline ListCalculatedAttributesForProfileResult& AddItems(ListCalculatedAttributeForProfileItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline ListCalculatedAttributesForProfileResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline ListCalculatedAttributesForProfileResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributesForProfile.</p>
     */
    inline ListCalculatedAttributesForProfileResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCalculatedAttributesForProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCalculatedAttributesForProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCalculatedAttributesForProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListCalculatedAttributeForProfileItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
