/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/DescribePackagesFilter.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for request parameters to <code> <a>DescribePackage</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribePackagesRequest">AWS
   * API Reference</a></p>
   */
  class DescribePackagesRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API DescribePackagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePackages"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline const Aws::Vector<DescribePackagesFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline void SetFilters(const Aws::Vector<DescribePackagesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline void SetFilters(Aws::Vector<DescribePackagesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& WithFilters(const Aws::Vector<DescribePackagesFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& WithFilters(Aws::Vector<DescribePackagesFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& AddFilters(const DescribePackagesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Only returns packages that match the <code>DescribePackagesFilterList</code>
     * values.</p>
     */
    inline DescribePackagesRequest& AddFilters(DescribePackagesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Limits results to a maximum number of packages.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Limits results to a maximum number of packages.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Limits results to a maximum number of packages.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Limits results to a maximum number of packages.</p>
     */
    inline DescribePackagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline DescribePackagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline DescribePackagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Used for pagination. Only necessary if a previous API call includes a
     * non-null NextToken value. If provided, returns results for the next page.</p>
     */
    inline DescribePackagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DescribePackagesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
