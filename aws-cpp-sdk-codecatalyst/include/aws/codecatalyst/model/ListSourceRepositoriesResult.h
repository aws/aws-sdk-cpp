/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecatalyst/model/ListSourceRepositoriesItem.h>
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
  class ListSourceRepositoriesResult
  {
  public:
    AWS_CODECATALYST_API ListSourceRepositoriesResult();
    AWS_CODECATALYST_API ListSourceRepositoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API ListSourceRepositoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the source repositories.</p>
     */
    inline const Aws::Vector<ListSourceRepositoriesItem>& GetItems() const{ return m_items; }

    /**
     * <p>Information about the source repositories.</p>
     */
    inline void SetItems(const Aws::Vector<ListSourceRepositoriesItem>& value) { m_items = value; }

    /**
     * <p>Information about the source repositories.</p>
     */
    inline void SetItems(Aws::Vector<ListSourceRepositoriesItem>&& value) { m_items = std::move(value); }

    /**
     * <p>Information about the source repositories.</p>
     */
    inline ListSourceRepositoriesResult& WithItems(const Aws::Vector<ListSourceRepositoriesItem>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about the source repositories.</p>
     */
    inline ListSourceRepositoriesResult& WithItems(Aws::Vector<ListSourceRepositoriesItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about the source repositories.</p>
     */
    inline ListSourceRepositoriesResult& AddItems(const ListSourceRepositoriesItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Information about the source repositories.</p>
     */
    inline ListSourceRepositoriesResult& AddItems(ListSourceRepositoriesItem&& value) { m_items.push_back(std::move(value)); return *this; }


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
    inline ListSourceRepositoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListSourceRepositoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListSourceRepositoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListSourceRepositoriesItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
