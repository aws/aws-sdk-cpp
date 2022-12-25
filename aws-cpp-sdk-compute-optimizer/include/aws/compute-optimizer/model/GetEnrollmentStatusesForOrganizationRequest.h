/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/compute-optimizer/ComputeOptimizerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/EnrollmentFilter.h>
#include <utility>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

  /**
   */
  class GetEnrollmentStatusesForOrganizationRequest : public ComputeOptimizerRequest
  {
  public:
    AWS_COMPUTEOPTIMIZER_API GetEnrollmentStatusesForOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEnrollmentStatusesForOrganization"; }

    AWS_COMPUTEOPTIMIZER_API Aws::String SerializePayload() const override;

    AWS_COMPUTEOPTIMIZER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline const Aws::Vector<EnrollmentFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline void SetFilters(const Aws::Vector<EnrollmentFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline void SetFilters(Aws::Vector<EnrollmentFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& WithFilters(const Aws::Vector<EnrollmentFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& WithFilters(Aws::Vector<EnrollmentFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& AddFilters(const EnrollmentFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of objects to specify a filter that returns a more specific list of
     * account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& AddFilters(EnrollmentFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of account enrollment statuses.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of account enrollment statuses to return with a single
     * request. You can specify up to 100 statuses to return with each request.</p>
     * <p>To retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of account enrollment statuses to return with a single
     * request. You can specify up to 100 statuses to return with each request.</p>
     * <p>To retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of account enrollment statuses to return with a single
     * request. You can specify up to 100 statuses to return with each request.</p>
     * <p>To retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of account enrollment statuses to return with a single
     * request. You can specify up to 100 statuses to return with each request.</p>
     * <p>To retrieve the remaining results, make another request with the returned
     * <code>nextToken</code> value.</p>
     */
    inline GetEnrollmentStatusesForOrganizationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<EnrollmentFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
