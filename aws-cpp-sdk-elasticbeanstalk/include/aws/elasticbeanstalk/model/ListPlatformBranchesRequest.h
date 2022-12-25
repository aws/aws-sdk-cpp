/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/SearchFilter.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   */
  class ListPlatformBranchesRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API ListPlatformBranchesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPlatformBranches"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline const Aws::Vector<SearchFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline void SetFilters(const Aws::Vector<SearchFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline void SetFilters(Aws::Vector<SearchFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline ListPlatformBranchesRequest& WithFilters(const Aws::Vector<SearchFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline ListPlatformBranchesRequest& WithFilters(Aws::Vector<SearchFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline ListPlatformBranchesRequest& AddFilters(const SearchFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Criteria for restricting the resulting list of platform branches. The filter
     * is evaluated as a logical conjunction (AND) of the separate
     * <code>SearchFilter</code> terms.</p> <p>The following list shows valid attribute
     * values for each of the <code>SearchFilter</code> terms. Most operators take a
     * single value. The <code>in</code> and <code>not_in</code> operators can take
     * multiple values.</p> <ul> <li> <p> <code>Attribute = BranchName</code>:</p> <ul>
     * <li> <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = LifecycleState</code>:</p> <ul> <li> <p>
     * <code>Operator</code>: <code>=</code> | <code>!=</code> | <code>in</code> |
     * <code>not_in</code> </p> </li> <li> <p> <code>Values</code>: <code>beta</code> |
     * <code>supported</code> | <code>deprecated</code> | <code>retired</code> </p>
     * </li> </ul> </li> <li> <p> <code>Attribute = PlatformName</code>:</p> <ul> <li>
     * <p> <code>Operator</code>: <code>=</code> | <code>!=</code> |
     * <code>begins_with</code> | <code>ends_with</code> | <code>contains</code> |
     * <code>in</code> | <code>not_in</code> </p> </li> </ul> </li> <li> <p>
     * <code>Attribute = TierType</code>:</p> <ul> <li> <p> <code>Operator</code>:
     * <code>=</code> | <code>!=</code> </p> </li> <li> <p> <code>Values</code>:
     * <code>WebServer/Standard</code> | <code>Worker/SQS/HTTP</code> </p> </li> </ul>
     * </li> </ul> <p>Array size: limited to 10 <code>SearchFilter</code> objects.</p>
     * <p>Within each <code>SearchFilter</code> item, the <code>Values</code> array is
     * limited to 10 items.</p>
     */
    inline ListPlatformBranchesRequest& AddFilters(SearchFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of platform branch values returned in one call.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of platform branch values returned in one call.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of platform branch values returned in one call.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of platform branch values returned in one call.</p>
     */
    inline ListPlatformBranchesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


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
    inline ListPlatformBranchesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline ListPlatformBranchesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>For a paginated request. Specify a token from a previous response page to
     * retrieve the next response page. All other parameter values must be identical to
     * the ones specified in the initial request.</p> <p>If no <code>NextToken</code>
     * is specified, the first page is retrieved.</p>
     */
    inline ListPlatformBranchesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SearchFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
