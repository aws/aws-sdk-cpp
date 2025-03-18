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
   * <p>Contains the parameters for
   * DescribeNetworkInterfacePermissions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfacePermissionsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfacePermissionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeNetworkInterfacePermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNetworkInterfacePermissions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The network interface permission IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfacePermissionIds() const { return m_networkInterfacePermissionIds; }
    inline bool NetworkInterfacePermissionIdsHasBeenSet() const { return m_networkInterfacePermissionIdsHasBeenSet; }
    template<typename NetworkInterfacePermissionIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInterfacePermissionIds(NetworkInterfacePermissionIdsT&& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds = std::forward<NetworkInterfacePermissionIdsT>(value); }
    template<typename NetworkInterfacePermissionIdsT = Aws::Vector<Aws::String>>
    DescribeNetworkInterfacePermissionsRequest& WithNetworkInterfacePermissionIds(NetworkInterfacePermissionIdsT&& value) { SetNetworkInterfacePermissionIds(std::forward<NetworkInterfacePermissionIdsT>(value)); return *this;}
    template<typename NetworkInterfacePermissionIdsT = Aws::String>
    DescribeNetworkInterfacePermissionsRequest& AddNetworkInterfacePermissionIds(NetworkInterfacePermissionIdsT&& value) { m_networkInterfacePermissionIdsHasBeenSet = true; m_networkInterfacePermissionIds.emplace_back(std::forward<NetworkInterfacePermissionIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more filters.</p> <ul> <li> <p>
     * <code>network-interface-permission.network-interface-permission-id</code> - The
     * ID of the permission.</p> </li> <li> <p>
     * <code>network-interface-permission.network-interface-id</code> - The ID of the
     * network interface.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-account-id</code> - The Amazon Web
     * Services account ID.</p> </li> <li> <p>
     * <code>network-interface-permission.aws-service</code> - The Amazon Web Services
     * service.</p> </li> <li> <p> <code>network-interface-permission.permission</code>
     * - The type of permission (<code>INSTANCE-ATTACH</code> |
     * <code>EIP-ASSOCIATE</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeNetworkInterfacePermissionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeNetworkInterfacePermissionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    DescribeNetworkInterfacePermissionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. If this
     * parameter is not specified, up to 50 results are returned by default. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeNetworkInterfacePermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_networkInterfacePermissionIds;
    bool m_networkInterfacePermissionIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
