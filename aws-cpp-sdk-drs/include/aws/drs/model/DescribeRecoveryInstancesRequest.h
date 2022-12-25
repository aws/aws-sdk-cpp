/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/drs/model/DescribeRecoveryInstancesRequestFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class DescribeRecoveryInstancesRequest : public DrsRequest
  {
  public:
    AWS_DRS_API DescribeRecoveryInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecoveryInstances"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>A set of filters by which to return Recovery Instances.</p>
     */
    inline const DescribeRecoveryInstancesRequestFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A set of filters by which to return Recovery Instances.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A set of filters by which to return Recovery Instances.</p>
     */
    inline void SetFilters(const DescribeRecoveryInstancesRequestFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A set of filters by which to return Recovery Instances.</p>
     */
    inline void SetFilters(DescribeRecoveryInstancesRequestFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A set of filters by which to return Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequest& WithFilters(const DescribeRecoveryInstancesRequestFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A set of filters by which to return Recovery Instances.</p>
     */
    inline DescribeRecoveryInstancesRequest& WithFilters(DescribeRecoveryInstancesRequestFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Maximum number of Recovery Instances to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of Recovery Instances to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of Recovery Instances to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of Recovery Instances to retrieve.</p>
     */
    inline DescribeRecoveryInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline DescribeRecoveryInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline DescribeRecoveryInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next Recovery Instance to retrieve.</p>
     */
    inline DescribeRecoveryInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    DescribeRecoveryInstancesRequestFilters m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
