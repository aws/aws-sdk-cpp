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
  class DescribeLaunchTemplatesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeLaunchTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLaunchTemplates"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeLaunchTemplatesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more launch template IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchTemplateIds() const{ return m_launchTemplateIds; }

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline bool LaunchTemplateIdsHasBeenSet() const { return m_launchTemplateIdsHasBeenSet; }

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline void SetLaunchTemplateIds(const Aws::Vector<Aws::String>& value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds = value; }

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline void SetLaunchTemplateIds(Aws::Vector<Aws::String>&& value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds = std::move(value); }

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithLaunchTemplateIds(const Aws::Vector<Aws::String>& value) { SetLaunchTemplateIds(value); return *this;}

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithLaunchTemplateIds(Aws::Vector<Aws::String>&& value) { SetLaunchTemplateIds(std::move(value)); return *this;}

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline DescribeLaunchTemplatesRequest& AddLaunchTemplateIds(const Aws::String& value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds.push_back(value); return *this; }

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline DescribeLaunchTemplatesRequest& AddLaunchTemplateIds(Aws::String&& value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more launch template IDs.</p>
     */
    inline DescribeLaunchTemplatesRequest& AddLaunchTemplateIds(const char* value) { m_launchTemplateIdsHasBeenSet = true; m_launchTemplateIds.push_back(value); return *this; }


    /**
     * <p>One or more launch template names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchTemplateNames() const{ return m_launchTemplateNames; }

    /**
     * <p>One or more launch template names.</p>
     */
    inline bool LaunchTemplateNamesHasBeenSet() const { return m_launchTemplateNamesHasBeenSet; }

    /**
     * <p>One or more launch template names.</p>
     */
    inline void SetLaunchTemplateNames(const Aws::Vector<Aws::String>& value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames = value; }

    /**
     * <p>One or more launch template names.</p>
     */
    inline void SetLaunchTemplateNames(Aws::Vector<Aws::String>&& value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames = std::move(value); }

    /**
     * <p>One or more launch template names.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithLaunchTemplateNames(const Aws::Vector<Aws::String>& value) { SetLaunchTemplateNames(value); return *this;}

    /**
     * <p>One or more launch template names.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithLaunchTemplateNames(Aws::Vector<Aws::String>&& value) { SetLaunchTemplateNames(std::move(value)); return *this;}

    /**
     * <p>One or more launch template names.</p>
     */
    inline DescribeLaunchTemplatesRequest& AddLaunchTemplateNames(const Aws::String& value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames.push_back(value); return *this; }

    /**
     * <p>One or more launch template names.</p>
     */
    inline DescribeLaunchTemplatesRequest& AddLaunchTemplateNames(Aws::String&& value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more launch template names.</p>
     */
    inline DescribeLaunchTemplatesRequest& AddLaunchTemplateNames(const char* value) { m_launchTemplateNamesHasBeenSet = true; m_launchTemplateNames.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeLaunchTemplatesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeLaunchTemplatesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeLaunchTemplatesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>create-time</code> - The time
     * the launch template was created.</p> </li> <li> <p>
     * <code>launch-template-name</code> - The name of the launch template.</p> </li>
     * <li> <p> <code>tag</code>:&lt;key&gt; - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources assigned a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribeLaunchTemplatesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value. This value can be between 1 and 200.</p>
     */
    inline DescribeLaunchTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchTemplateIds;
    bool m_launchTemplateIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchTemplateNames;
    bool m_launchTemplateNamesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
