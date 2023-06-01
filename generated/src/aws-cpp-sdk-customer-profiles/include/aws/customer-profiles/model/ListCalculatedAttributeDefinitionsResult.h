/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListCalculatedAttributeDefinitionItem.h>
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
  class ListCalculatedAttributeDefinitionsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeDefinitionsResult();
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListCalculatedAttributeDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline const Aws::Vector<ListCalculatedAttributeDefinitionItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline void SetItems(const Aws::Vector<ListCalculatedAttributeDefinitionItem>& value) { m_items = value; }

    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline void SetItems(Aws::Vector<ListCalculatedAttributeDefinitionItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& WithItems(const Aws::Vector<ListCalculatedAttributeDefinitionItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& WithItems(Aws::Vector<ListCalculatedAttributeDefinitionItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& AddItems(const ListCalculatedAttributeDefinitionItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of calculated attribute definitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& AddItems(ListCalculatedAttributeDefinitionItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous call to
     * ListCalculatedAttributeDefinitions.</p>
     */
    inline ListCalculatedAttributeDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListCalculatedAttributeDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListCalculatedAttributeDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListCalculatedAttributeDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListCalculatedAttributeDefinitionItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
