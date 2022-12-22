/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/ListRecommendationsFilterKey.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to list the existing recommendations for your
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListRecommendationsRequest">AWS
   * API Reference</a></p>
   */
  class ListRecommendationsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API ListRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendations"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline const Aws::Map<ListRecommendationsFilterKey, Aws::String>& GetFilter() const{ return m_filter; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline void SetFilter(const Aws::Map<ListRecommendationsFilterKey, Aws::String>& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline void SetFilter(Aws::Map<ListRecommendationsFilterKey, Aws::String>&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& WithFilter(const Aws::Map<ListRecommendationsFilterKey, Aws::String>& value) { SetFilter(value); return *this;}

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& WithFilter(Aws::Map<ListRecommendationsFilterKey, Aws::String>&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& AddFilter(const ListRecommendationsFilterKey& key, const Aws::String& value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& AddFilter(ListRecommendationsFilterKey&& key, const Aws::String& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& AddFilter(const ListRecommendationsFilterKey& key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& AddFilter(ListRecommendationsFilterKey&& key, Aws::String&& value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& AddFilter(ListRecommendationsFilterKey&& key, const char* value) { m_filterHasBeenSet = true; m_filter.emplace(std::move(key), value); return *this; }

    /**
     * <p>Filters applied when retrieving recommendations. Can eiter be an individual
     * filter, or combinations of <code>STATUS</code> and <code>IMPACT</code> or
     * <code>STATUS</code> and <code>TYPE</code> </p>
     */
    inline ListRecommendationsRequest& AddFilter(const ListRecommendationsFilterKey& key, const char* value) { m_filterHasBeenSet = true; m_filter.emplace(key, value); return *this; }


    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline ListRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline ListRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListRecommendations</code> to
     * indicate the position in the list of recommendations.</p>
     */
    inline ListRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>ListRecommendations</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 100.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListRecommendations</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 100.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListRecommendations</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 100.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListRecommendations</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p> <p>The value you specify has to be at least 1, and can be no more
     * than 100.</p>
     */
    inline ListRecommendationsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::Map<ListRecommendationsFilterKey, Aws::String> m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
