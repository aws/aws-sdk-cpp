﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/ListSourceRepositoryBranchesItem.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class ListSourceRepositoryBranchesResult
  {
  public:
    AWS_CODECATALYST_API ListSourceRepositoryBranchesResult();
    AWS_CODECATALYST_API ListSourceRepositoryBranchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API ListSourceRepositoryBranchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListSourceRepositoryBranchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListSourceRepositoryBranchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListSourceRepositoryBranchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the source branches.</p>
     */
    inline const Aws::Vector<ListSourceRepositoryBranchesItem>& GetItems() const{ return m_items; }

    /**
     * <p>Information about the source branches.</p>
     */
    inline void SetItems(const Aws::Vector<ListSourceRepositoryBranchesItem>& value) { m_items = value; }

    /**
     * <p>Information about the source branches.</p>
     */
    inline void SetItems(Aws::Vector<ListSourceRepositoryBranchesItem>&& value) { m_items = std::move(value); }

    /**
     * <p>Information about the source branches.</p>
     */
    inline ListSourceRepositoryBranchesResult& WithItems(const Aws::Vector<ListSourceRepositoryBranchesItem>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about the source branches.</p>
     */
    inline ListSourceRepositoryBranchesResult& WithItems(Aws::Vector<ListSourceRepositoryBranchesItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about the source branches.</p>
     */
    inline ListSourceRepositoryBranchesResult& AddItems(const ListSourceRepositoryBranchesItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Information about the source branches.</p>
     */
    inline ListSourceRepositoryBranchesResult& AddItems(ListSourceRepositoryBranchesItem&& value) { m_items.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSourceRepositoryBranchesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSourceRepositoryBranchesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSourceRepositoryBranchesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ListSourceRepositoryBranchesItem> m_items;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
