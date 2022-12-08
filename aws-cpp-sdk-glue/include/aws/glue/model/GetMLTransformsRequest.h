/**
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
    AWS_GLUE_API GetMLTransformsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMLTransforms"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline GetMLTransformsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline GetMLTransformsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline GetMLTransformsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline GetMLTransformsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The filter transformation criteria.</p>
     */
    inline const TransformFilterCriteria& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter transformation criteria.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filter transformation criteria.</p>
     */
    inline void SetFilter(const TransformFilterCriteria& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filter transformation criteria.</p>
     */
    inline void SetFilter(TransformFilterCriteria&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filter transformation criteria.</p>
     */
    inline GetMLTransformsRequest& WithFilter(const TransformFilterCriteria& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter transformation criteria.</p>
     */
    inline GetMLTransformsRequest& WithFilter(TransformFilterCriteria&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The sorting criteria.</p>
     */
    inline const TransformSortCriteria& GetSort() const{ return m_sort; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline void SetSort(const TransformSortCriteria& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>The sorting criteria.</p>
     */
    inline void SetSort(TransformSortCriteria&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>The sorting criteria.</p>
     */
    inline GetMLTransformsRequest& WithSort(const TransformSortCriteria& value) { SetSort(value); return *this;}

    /**
     * <p>The sorting criteria.</p>
     */
    inline GetMLTransformsRequest& WithSort(TransformSortCriteria&& value) { SetSort(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    TransformFilterCriteria m_filter;
    bool m_filterHasBeenSet = false;

    TransformSortCriteria m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
