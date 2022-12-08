/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/glue/model/DataQualityRulesetEvaluationRunFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class ListDataQualityRulesetEvaluationRunsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListDataQualityRulesetEvaluationRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataQualityRulesetEvaluationRuns"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The filter criteria.</p>
     */
    inline const DataQualityRulesetEvaluationRunFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>The filter criteria.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>The filter criteria.</p>
     */
    inline void SetFilter(const DataQualityRulesetEvaluationRunFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>The filter criteria.</p>
     */
    inline void SetFilter(DataQualityRulesetEvaluationRunFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>The filter criteria.</p>
     */
    inline ListDataQualityRulesetEvaluationRunsRequest& WithFilter(const DataQualityRulesetEvaluationRunFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>The filter criteria.</p>
     */
    inline ListDataQualityRulesetEvaluationRunsRequest& WithFilter(DataQualityRulesetEvaluationRunFilter&& value) { SetFilter(std::move(value)); return *this;}


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
    inline ListDataQualityRulesetEvaluationRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline ListDataQualityRulesetEvaluationRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A paginated token to offset the results.</p>
     */
    inline ListDataQualityRulesetEvaluationRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListDataQualityRulesetEvaluationRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    DataQualityRulesetEvaluationRunFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
