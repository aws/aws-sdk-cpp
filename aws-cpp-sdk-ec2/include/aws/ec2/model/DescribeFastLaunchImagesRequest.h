/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribeFastLaunchImagesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeFastLaunchImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFastLaunchImages"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline void SetImageIds(const Aws::Vector<Aws::String>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline void SetImageIds(Aws::Vector<Aws::String>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithImageIds(const Aws::Vector<Aws::String>& value) { SetImageIds(value); return *this;}

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithImageIds(Aws::Vector<Aws::String>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline DescribeFastLaunchImagesRequest& AddImageIds(const Aws::String& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline DescribeFastLaunchImagesRequest& AddImageIds(Aws::String&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Details for one or more Windows AMI image IDs.</p>
     */
    inline DescribeFastLaunchImagesRequest& AddImageIds(const char* value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }


    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline DescribeFastLaunchImagesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline DescribeFastLaunchImagesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline DescribeFastLaunchImagesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Use the following filters to streamline results.</p> <ul> <li> <p>
     * <code>resource-type</code> - The resource type for pre-provisioning.</p> </li>
     * <li> <p> <code>launch-template</code> - The launch template that is associated
     * with the pre-provisioned Windows AMI.</p> </li> <li> <p> <code>owner-id</code> -
     * The owner ID for the pre-provisioning resource.</p> </li> <li> <p>
     * <code>state</code> - The current state of fast launching for the Windows
     * AMI.</p> </li> </ul>
     */
    inline DescribeFastLaunchImagesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned NextToken value. If
     * this parameter is not specified, then all results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned NextToken value. If
     * this parameter is not specified, then all results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned NextToken value. If
     * this parameter is not specified, then all results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another request with the returned NextToken value. If
     * this parameter is not specified, then all results are returned.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeFastLaunchImagesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
