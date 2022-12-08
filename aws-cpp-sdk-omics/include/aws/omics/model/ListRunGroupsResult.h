/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/RunGroupListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListRunGroupsResult
  {
  public:
    AWS_OMICS_API ListRunGroupsResult();
    AWS_OMICS_API ListRunGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListRunGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of groups.</p>
     */
    inline const Aws::Vector<RunGroupListItem>& GetItems() const{ return m_items; }

    /**
     * <p>A list of groups.</p>
     */
    inline void SetItems(const Aws::Vector<RunGroupListItem>& value) { m_items = value; }

    /**
     * <p>A list of groups.</p>
     */
    inline void SetItems(Aws::Vector<RunGroupListItem>&& value) { m_items = std::move(value); }

    /**
     * <p>A list of groups.</p>
     */
    inline ListRunGroupsResult& WithItems(const Aws::Vector<RunGroupListItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A list of groups.</p>
     */
    inline ListRunGroupsResult& WithItems(Aws::Vector<RunGroupListItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list of groups.</p>
     */
    inline ListRunGroupsResult& AddItems(const RunGroupListItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>A list of groups.</p>
     */
    inline ListRunGroupsResult& AddItems(RunGroupListItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline ListRunGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<RunGroupListItem> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
