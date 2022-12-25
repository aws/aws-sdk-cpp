/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Filter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DescribePlacementGroupsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribePlacementGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlacementGroups"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>group-name</code> - The name of the
     * placement group.</p> </li> <li> <p> <code>group-arn</code> - The Amazon Resource
     * Name (ARN) of the placement group.</p> </li> <li> <p> <code>spread-level</code>
     * - The spread level for the placement group (<code>host</code> |
     * <code>rack</code>). </p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code> | <code>partition</code>).</p> </li>
     * <li> <p> <code>tag:&lt;key&gt;</code> - The key/value combination of a tag
     * assigned to the resource. Use the tag key in the filter name and the tag value
     * as the filter value. For example, to find all resources that have a tag with the
     * key <code>Owner</code> and the value <code>TeamA</code>, specify
     * <code>tag:Owner</code> for the filter name and <code>TeamA</code> for the filter
     * value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag assigned to
     * the resource. Use this filter to find all resources that have a tag with a
     * specific key, regardless of the tag value.</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribePlacementGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::move(value); }

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(std::move(value)); return *this;}

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the placement groups.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }


    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::move(value); }

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline DescribePlacementGroupsRequest& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline DescribePlacementGroupsRequest& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
