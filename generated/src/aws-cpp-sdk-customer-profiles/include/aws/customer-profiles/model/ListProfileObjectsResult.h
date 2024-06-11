﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/ListProfileObjectsItem.h>
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
  class ListProfileObjectsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectsResult();
    AWS_CUSTOMERPROFILES_API ListProfileObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListProfileObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of ListProfileObject instances.</p>
     */
    inline const Aws::Vector<ListProfileObjectsItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ListProfileObjectsItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ListProfileObjectsItem>&& value) { m_items = std::move(value); }
    inline ListProfileObjectsResult& WithItems(const Aws::Vector<ListProfileObjectsItem>& value) { SetItems(value); return *this;}
    inline ListProfileObjectsResult& WithItems(Aws::Vector<ListProfileObjectsItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListProfileObjectsResult& AddItems(const ListProfileObjectsItem& value) { m_items.push_back(value); return *this; }
    inline ListProfileObjectsResult& AddItems(ListProfileObjectsItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous call to ListProfileObjects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProfileObjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProfileObjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProfileObjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProfileObjectsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProfileObjectsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProfileObjectsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ListProfileObjectsItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
