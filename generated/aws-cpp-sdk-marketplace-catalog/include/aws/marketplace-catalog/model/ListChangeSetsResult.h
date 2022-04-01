﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/ChangeSetSummaryListItem.h>
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
namespace MarketplaceCatalog
{
namespace Model
{
  class AWS_MARKETPLACECATALOG_API ListChangeSetsResult
  {
  public:
    ListChangeSetsResult();
    ListChangeSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListChangeSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline const Aws::Vector<ChangeSetSummaryListItem>& GetChangeSetSummaryList() const{ return m_changeSetSummaryList; }

    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline void SetChangeSetSummaryList(const Aws::Vector<ChangeSetSummaryListItem>& value) { m_changeSetSummaryList = value; }

    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline void SetChangeSetSummaryList(Aws::Vector<ChangeSetSummaryListItem>&& value) { m_changeSetSummaryList = std::move(value); }

    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline ListChangeSetsResult& WithChangeSetSummaryList(const Aws::Vector<ChangeSetSummaryListItem>& value) { SetChangeSetSummaryList(value); return *this;}

    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline ListChangeSetsResult& WithChangeSetSummaryList(Aws::Vector<ChangeSetSummaryListItem>&& value) { SetChangeSetSummaryList(std::move(value)); return *this;}

    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline ListChangeSetsResult& AddChangeSetSummaryList(const ChangeSetSummaryListItem& value) { m_changeSetSummaryList.push_back(value); return *this; }

    /**
     * <p> Array of <code>ChangeSetSummaryListItem</code> objects.</p>
     */
    inline ListChangeSetsResult& AddChangeSetSummaryList(ChangeSetSummaryListItem&& value) { m_changeSetSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListChangeSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListChangeSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline ListChangeSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChangeSetSummaryListItem> m_changeSetSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
