﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Contains the parameters for DescribePlacementGroups.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribePlacementGroupsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribePlacementGroupsRequest : public EC2Request
  {
  public:
    DescribePlacementGroupsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePlacementGroups"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
     */
    inline DescribePlacementGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>group-name</code> - The name of
     * the placement group.</p> </li> <li> <p> <code>state</code> - The state of the
     * placement group (<code>pending</code> | <code>available</code> |
     * <code>deleting</code> | <code>deleted</code>).</p> </li> <li> <p>
     * <code>strategy</code> - The strategy of the placement group
     * (<code>cluster</code> | <code>spread</code>).</p> </li> </ul>
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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribePlacementGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::move(value); }

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(std::move(value)); return *this;}

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more placement group names.</p> <p>Default: Describes all your
     * placement groups, or only those otherwise specified.</p>
     */
    inline DescribePlacementGroupsRequest& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
