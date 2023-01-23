/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/PlatformFilter.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   */
  class ListPlatformVersionsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API ListPlatformVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPlatformVersions"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline const Aws::Vector<PlatformFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline void SetFilters(const Aws::Vector<PlatformFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline void SetFilters(Aws::Vector<PlatformFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline ListPlatformVersionsRequest& WithFilters(const Aws::Vector<PlatformFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline ListPlatformVersionsRequest& WithFilters(Aws::Vector<PlatformFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline ListPlatformVersionsRequest& AddFilters(const PlatformFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Criteria for restricting the resulting list of platform versions. The filter
     * is interpreted as a logical conjunction (AND) of the separate
     * <code>PlatformFilter</code> terms.</p>
     */
    inline ListPlatformVersionsRequest& AddFilters(PlatformFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of platform version values returned in one call.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of platform version values returned in one call.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of platform version values returned in one call.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of platform version values returned in one call.</p>
     */
    inline ListPlatformVersionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline ListPlatformVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline ListPlatformVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline ListPlatformVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PlatformFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
