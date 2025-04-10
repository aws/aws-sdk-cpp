﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TransformFilterCriteria.h>
#include <aws/glue/model/TransformSortCriteria.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class GetMLTransformsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API GetMLTransformsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMLTransforms"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetMLTransformsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetMLTransformsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter transformation criteria.</p>
     */
    inline const TransformFilterCriteria& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = TransformFilterCriteria>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = TransformFilterCriteria>
    GetMLTransformsRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting criteria.</p>
     */
    inline const TransformSortCriteria& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = TransformSortCriteria>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = TransformSortCriteria>
    GetMLTransformsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    TransformFilterCriteria m_filter;
    bool m_filterHasBeenSet = false;

    TransformSortCriteria m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
