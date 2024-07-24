/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AssetFilterSummary.h>
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
namespace DataZone
{
namespace Model
{
  class ListAssetFiltersResult
  {
  public:
    AWS_DATAZONE_API ListAssetFiltersResult();
    AWS_DATAZONE_API ListAssetFiltersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListAssetFiltersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of the <code>ListAssetFilters</code> action.</p>
     */
    inline const Aws::Vector<AssetFilterSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<AssetFilterSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<AssetFilterSummary>&& value) { m_items = std::move(value); }
    inline ListAssetFiltersResult& WithItems(const Aws::Vector<AssetFilterSummary>& value) { SetItems(value); return *this;}
    inline ListAssetFiltersResult& WithItems(Aws::Vector<AssetFilterSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListAssetFiltersResult& AddItems(const AssetFilterSummary& value) { m_items.push_back(value); return *this; }
    inline ListAssetFiltersResult& AddItems(AssetFilterSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of asset filters is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of asset filters, the
     * response includes a pagination token named <code>NextToken</code>. You can
     * specify this <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetFilters</code> to list the next set of asset filters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssetFiltersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetFiltersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetFiltersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssetFiltersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssetFiltersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssetFiltersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetFilterSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
