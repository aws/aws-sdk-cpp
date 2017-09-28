/*
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
   * <p>Contains the parameters for DescribeDhcpOptions.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeDhcpOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeDhcpOptionsRequest : public EC2Request
  {
  public:
    DescribeDhcpOptionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDhcpOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDhcpOptionsIds() const{ return m_dhcpOptionsIds; }

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline void SetDhcpOptionsIds(const Aws::Vector<Aws::String>& value) { m_dhcpOptionsIdsHasBeenSet = true; m_dhcpOptionsIds = value; }

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline void SetDhcpOptionsIds(Aws::Vector<Aws::String>&& value) { m_dhcpOptionsIdsHasBeenSet = true; m_dhcpOptionsIds = std::move(value); }

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsRequest& WithDhcpOptionsIds(const Aws::Vector<Aws::String>& value) { SetDhcpOptionsIds(value); return *this;}

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsRequest& WithDhcpOptionsIds(Aws::Vector<Aws::String>&& value) { SetDhcpOptionsIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsRequest& AddDhcpOptionsIds(const Aws::String& value) { m_dhcpOptionsIdsHasBeenSet = true; m_dhcpOptionsIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsRequest& AddDhcpOptionsIds(Aws::String&& value) { m_dhcpOptionsIdsHasBeenSet = true; m_dhcpOptionsIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more DHCP options sets.</p> <p>Default: Describes all your
     * DHCP options sets.</p>
     */
    inline DescribeDhcpOptionsRequest& AddDhcpOptionsIds(const char* value) { m_dhcpOptionsIdsHasBeenSet = true; m_dhcpOptionsIds.push_back(value); return *this; }


    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeDhcpOptionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeDhcpOptionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeDhcpOptionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p> <code>dhcp-options-id</code> - The ID
     * of a set of DHCP options.</p> </li> <li> <p> <code>key</code> - The key for one
     * of the options (for example, <code>domain-name</code>).</p> </li> <li> <p>
     * <code>value</code> - The value for one of the options.</p> </li> <li> <p>
     * <code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag
     * assigned to the resource. Specify the key of the tag in the filter name and the
     * value of the tag in the filter value. For example, for the tag Purpose=X,
     * specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the
     * filter value.</p> </li> <li> <p> <code>tag-key</code> - The key of a tag
     * assigned to the resource. This filter is independent of the
     * <code>tag-value</code> filter. For example, if you use both the filter
     * "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned
     * both the tag key Purpose (regardless of what the tag's value is), and the tag
     * value X (regardless of what the tag's key is). If you want to list only
     * resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i>
     * filter.</p> </li> <li> <p> <code>tag-value</code> - The value of a tag assigned
     * to the resource. This filter is independent of the <code>tag-key</code>
     * filter.</p> </li> </ul>
     */
    inline DescribeDhcpOptionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeDhcpOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_dhcpOptionsIds;
    bool m_dhcpOptionsIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
