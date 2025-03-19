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
  class DescribePlacementGroupsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribePlacementGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlacementGroups"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the placement groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const { return m_groupIds; }
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }
    template<typename GroupIdsT = Aws::Vector<Aws::String>>
    void SetGroupIds(GroupIdsT&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::forward<GroupIdsT>(value); }
    template<typename GroupIdsT = Aws::Vector<Aws::String>>
    DescribePlacementGroupsRequest& WithGroupIds(GroupIdsT&& value) { SetGroupIds(std::forward<GroupIdsT>(value)); return *this;}
    template<typename GroupIdsT = Aws::String>
    DescribePlacementGroupsRequest& AddGroupIds(GroupIdsT&& value) { m_groupIdsHasBeenSet = true; m_groupIds.emplace_back(std::forward<GroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribePlacementGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the placement groups.</p> <p>Constraints:</p> <ul> <li> <p>You
     * can specify a name only if the placement group is owned by your account.</p>
     * </li> <li> <p>If a placement group is <i>shared</i> with your account,
     * specifying the name results in an error. You must use the <code>GroupId</code>
     * parameter instead.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const { return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    void SetGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::forward<GroupNamesT>(value); }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    DescribePlacementGroupsRequest& WithGroupNames(GroupNamesT&& value) { SetGroupNames(std::forward<GroupNamesT>(value)); return *this;}
    template<typename GroupNamesT = Aws::String>
    DescribePlacementGroupsRequest& AddGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames.emplace_back(std::forward<GroupNamesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribePlacementGroupsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribePlacementGroupsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
