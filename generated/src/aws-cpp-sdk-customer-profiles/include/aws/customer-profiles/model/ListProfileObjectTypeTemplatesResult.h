/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListProfileObjectTypeTemplateItem.h>
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
  class ListProfileObjectTypeTemplatesResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplatesResult();
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline const Aws::Vector<ListProfileObjectTypeTemplateItem>& GetItems() const{ return m_items; }

    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline void SetItems(const Aws::Vector<ListProfileObjectTypeTemplateItem>& value) { m_items = value; }

    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline void SetItems(Aws::Vector<ListProfileObjectTypeTemplateItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline ListProfileObjectTypeTemplatesResult& WithItems(const Aws::Vector<ListProfileObjectTypeTemplateItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline ListProfileObjectTypeTemplatesResult& WithItems(Aws::Vector<ListProfileObjectTypeTemplateItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline ListProfileObjectTypeTemplatesResult& AddItems(const ListProfileObjectTypeTemplateItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The list of ListProfileObjectType template instances.</p>
     */
    inline ListProfileObjectTypeTemplatesResult& AddItems(ListProfileObjectTypeTemplateItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline ListProfileObjectTypeTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline ListProfileObjectTypeTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous ListObjectTypeTemplates API call. </p>
     */
    inline ListProfileObjectTypeTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListProfileObjectTypeTemplateItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
