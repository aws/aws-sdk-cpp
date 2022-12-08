/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchOrchestratorFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribePatchGroupsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribePatchGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePatchGroups"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of patch groups to return (per page).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of patch groups to return (per page).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of patch groups to return (per page).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of patch groups to return (per page).</p>
     */
    inline DescribePatchGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline const Aws::Vector<PatchOrchestratorFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline void SetFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline void SetFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline DescribePatchGroupsRequest& WithFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline DescribePatchGroupsRequest& WithFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline DescribePatchGroupsRequest& AddFilters(const PatchOrchestratorFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Each element in the array is a structure containing a key-value pair.</p>
     * <p>Supported keys for <code>DescribePatchGroups</code> include the
     * following:</p> <ul> <li> <p> <b> <code>NAME_PREFIX</code> </b> </p> <p>Sample
     * values: <code>AWS-</code> | <code>My-</code>.</p> </li> <li> <p> <b>
     * <code>OPERATING_SYSTEM</code> </b> </p> <p>Sample values:
     * <code>AMAZON_LINUX</code> | <code>SUSE</code> | <code>WINDOWS</code> </p> </li>
     * </ul>
     */
    inline DescribePatchGroupsRequest& AddFilters(PatchOrchestratorFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribePatchGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribePatchGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribePatchGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<PatchOrchestratorFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
