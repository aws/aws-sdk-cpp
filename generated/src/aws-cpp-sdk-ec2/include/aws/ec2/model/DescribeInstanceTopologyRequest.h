/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeInstanceTopologyRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeInstanceTopologyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceTopology"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeInstanceTopologyRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
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
    DescribeInstanceTopologyRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     * <p>You can't specify this parameter and the instance IDs parameter in the same
     * request.</p> <p>Default: <code>20</code> </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstanceTopologyRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    DescribeInstanceTopologyRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    DescribeInstanceTopologyRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the placement group that each instance is in.</p> <p>Constraints:
     * Maximum 100 explicitly specified placement group names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const { return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    void SetGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::forward<GroupNamesT>(value); }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    DescribeInstanceTopologyRequest& WithGroupNames(GroupNamesT&& value) { SetGroupNames(std::forward<GroupNamesT>(value)); return *this;}
    template<typename GroupNamesT = Aws::String>
    DescribeInstanceTopologyRequest& AddGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames.emplace_back(std::forward<GroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The name of
     * the Availability Zone (for example, <code>us-west-2a</code>) or Local Zone (for
     * example, <code>us-west-2-lax-1b</code>) that the instance is in.</p> </li> <li>
     * <p> <code>instance-type</code> - The instance type (for example,
     * <code>p4d.24xlarge</code>) or instance family (for example, <code>p4d*</code>).
     * You can use the <code>*</code> wildcard to match zero or more characters, or the
     * <code>?</code> wildcard to match zero or one character.</p> </li> <li> <p>
     * <code>zone-id</code> - The ID of the Availability Zone (for example,
     * <code>usw2-az2</code>) or Local Zone (for example, <code>usw2-lax1-az1</code>)
     * that the instance is in.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeInstanceTopologyRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeInstanceTopologyRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
