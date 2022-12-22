/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/OpsItemRelatedItemsFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ListOpsItemRelatedItemsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ListOpsItemRelatedItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOpsItemRelatedItems"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline bool OpsItemIdHasBeenSet() const { return m_opsItemIdHasBeenSet; }

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemIdHasBeenSet = true; m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemIdHasBeenSet = true; m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline ListOpsItemRelatedItemsRequest& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline ListOpsItemRelatedItemsRequest& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem for which you want to list all related-item
     * resources.</p>
     */
    inline ListOpsItemRelatedItemsRequest& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}


    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline const Aws::Vector<OpsItemRelatedItemsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline void SetFilters(const Aws::Vector<OpsItemRelatedItemsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline void SetFilters(Aws::Vector<OpsItemRelatedItemsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline ListOpsItemRelatedItemsRequest& WithFilters(const Aws::Vector<OpsItemRelatedItemsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline ListOpsItemRelatedItemsRequest& WithFilters(Aws::Vector<OpsItemRelatedItemsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline ListOpsItemRelatedItemsRequest& AddFilters(const OpsItemRelatedItemsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more OpsItem filters. Use a filter to return a more specific list of
     * results. </p>
     */
    inline ListOpsItemRelatedItemsRequest& AddFilters(OpsItemRelatedItemsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListOpsItemRelatedItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListOpsItemRelatedItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline ListOpsItemRelatedItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline ListOpsItemRelatedItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_opsItemId;
    bool m_opsItemIdHasBeenSet = false;

    Aws::Vector<OpsItemRelatedItemsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
