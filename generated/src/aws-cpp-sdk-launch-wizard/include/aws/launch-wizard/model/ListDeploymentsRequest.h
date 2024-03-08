/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/DeploymentFilter.h>
#include <utility>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

  /**
   */
  class ListDeploymentsRequest : public LaunchWizardRequest
  {
  public:
    AWS_LAUNCHWIZARD_API ListDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeployments"; }

    AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline const Aws::Vector<DeploymentFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<DeploymentFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<DeploymentFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline ListDeploymentsRequest& WithFilters(const Aws::Vector<DeploymentFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline ListDeploymentsRequest& WithFilters(Aws::Vector<DeploymentFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline ListDeploymentsRequest& AddFilters(const DeploymentFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters to scope the results. The following filters are supported:</p> <ul>
     * <li> <p> <code>WORKLOAD_NAME</code> </p> </li> <li> <p>
     * <code>DEPLOYMENT_STATUS</code> </p> </li> </ul>
     */
    inline ListDeploymentsRequest& AddFilters(DeploymentFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output.</p>
     */
    inline ListDeploymentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DeploymentFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
