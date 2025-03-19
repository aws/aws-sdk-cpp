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
  class DescribeSecurityGroupsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeSecurityGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSecurityGroups"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IDs of the security groups. Required for security groups in a nondefault
     * VPC.</p> <p>Default: Describes all of your security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const { return m_groupIds; }
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }
    template<typename GroupIdsT = Aws::Vector<Aws::String>>
    void SetGroupIds(GroupIdsT&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::forward<GroupIdsT>(value); }
    template<typename GroupIdsT = Aws::Vector<Aws::String>>
    DescribeSecurityGroupsRequest& WithGroupIds(GroupIdsT&& value) { SetGroupIds(std::forward<GroupIdsT>(value)); return *this;}
    template<typename GroupIdsT = Aws::String>
    DescribeSecurityGroupsRequest& AddGroupIds(GroupIdsT&& value) { m_groupIdsHasBeenSet = true; m_groupIds.emplace_back(std::forward<GroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>[Default VPC] The names of the security groups. You can specify either the
     * security group name or the security group ID.</p> <p>Default: Describes all of
     * your security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const { return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    void SetGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::forward<GroupNamesT>(value); }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    DescribeSecurityGroupsRequest& WithGroupNames(GroupNamesT&& value) { SetGroupNames(std::forward<GroupNamesT>(value)); return *this;}
    template<typename GroupNamesT = Aws::String>
    DescribeSecurityGroupsRequest& AddGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames.emplace_back(std::forward<GroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSecurityGroupsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. This value
     * can be between 5 and 1000. If this parameter is not specified, then all items
     * are returned. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeSecurityGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeSecurityGroupsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters. If using multiple filters for rules, the results include
     * security groups for which any combination of rules - not necessarily a single
     * rule - match all filters.</p> <ul> <li> <p> <code>description</code> - The
     * description of the security group.</p> </li> <li> <p>
     * <code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.from-port</code> - For an outbound rule, the start of
     * port range for the TCP and UDP protocols, or an ICMP type number.</p> </li> <li>
     * <p> <code>egress.ip-permission.group-id</code> - The ID of a security group that
     * has been referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.group-name</code> - The name of a security group that
     * is referenced in an outbound security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound
     * security group rule.</p> </li> <li> <p>
     * <code>egress.ip-permission.prefix-list-id</code> - The ID of a prefix list to
     * which a security group rule allows outbound access.</p> </li> <li> <p>
     * <code>egress.ip-permission.protocol</code> - The IP protocol for an outbound
     * security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code>, a
     * protocol number, or -1 for all protocols).</p> </li> <li> <p>
     * <code>egress.ip-permission.to-port</code> - For an outbound rule, the end of
     * port range for the TCP and UDP protocols, or an ICMP code.</p> </li> <li> <p>
     * <code>egress.ip-permission.user-id</code> - The ID of an Amazon Web Services
     * account that has been referenced in an outbound security group rule.</p> </li>
     * <li> <p> <code>group-id</code> - The ID of the security group. </p> </li> <li>
     * <p> <code>group-name</code> - The name of the security group.</p> </li> <li> <p>
     * <code>ip-permission.cidr</code> - An IPv4 CIDR block for an inbound security
     * group rule.</p> </li> <li> <p> <code>ip-permission.from-port</code> - For an
     * inbound rule, the start of port range for the TCP and UDP protocols, or an ICMP
     * type number.</p> </li> <li> <p> <code>ip-permission.group-id</code> - The ID of
     * a security group that has been referenced in an inbound security group rule.</p>
     * </li> <li> <p> <code>ip-permission.group-name</code> - The name of a security
     * group that is referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound
     * security group rule.</p> </li> <li> <p>
     * <code>ip-permission.prefix-list-id</code> - The ID of a prefix list from which a
     * security group rule allows inbound access.</p> </li> <li> <p>
     * <code>ip-permission.protocol</code> - The IP protocol for an inbound security
     * group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code>, a protocol
     * number, or -1 for all protocols).</p> </li> <li> <p>
     * <code>ip-permission.to-port</code> - For an inbound rule, the end of port range
     * for the TCP and UDP protocols, or an ICMP code.</p> </li> <li> <p>
     * <code>ip-permission.user-id</code> - The ID of an Amazon Web Services account
     * that has been referenced in an inbound security group rule.</p> </li> <li> <p>
     * <code>owner-id</code> - The Amazon Web Services account ID of the owner of the
     * security group.</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The key/value
     * combination of a tag assigned to the resource. Use the tag key in the filter
     * name and the tag value as the filter value. For example, to find all resources
     * that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> <li> <p> <code>vpc-id</code> - The ID of the VPC specified when the
     * security group was created.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeSecurityGroupsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeSecurityGroupsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
