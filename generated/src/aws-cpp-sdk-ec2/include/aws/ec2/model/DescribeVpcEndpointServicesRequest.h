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
  class DescribeVpcEndpointServicesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVpcEndpointServicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpointServices"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeVpcEndpointServicesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceNames() const { return m_serviceNames; }
    inline bool ServiceNamesHasBeenSet() const { return m_serviceNamesHasBeenSet; }
    template<typename ServiceNamesT = Aws::Vector<Aws::String>>
    void SetServiceNames(ServiceNamesT&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames = std::forward<ServiceNamesT>(value); }
    template<typename ServiceNamesT = Aws::Vector<Aws::String>>
    DescribeVpcEndpointServicesRequest& WithServiceNames(ServiceNamesT&& value) { SetServiceNames(std::forward<ServiceNamesT>(value)); return *this;}
    template<typename ServiceNamesT = Aws::String>
    DescribeVpcEndpointServicesRequest& AddServiceNames(ServiceNamesT&& value) { m_serviceNamesHasBeenSet = true; m_serviceNames.emplace_back(std::forward<ServiceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>owner</code> - The ID or alias of the
     * Amazon Web Services account that owns the service.</p> </li> <li> <p>
     * <code>service-name</code> - The name of the service.</p> </li> <li> <p>
     * <code>service-region</code> - The Region of the service.</p> </li> <li> <p>
     * <code>service-type</code> - The type of service (<code>Interface</code> |
     * <code>Gateway</code> | <code>GatewayLoadBalancer</code>).</p> </li> <li> <p>
     * <code>supported-ip-address-types</code> - The IP address type (<code>ipv4</code>
     * | <code>ipv6</code>).</p> </li> <li> <p> <code>tag</code>:&lt;key&gt; - The
     * key/value combination of a tag assigned to the resource. Use the tag key in the
     * filter name and the tag value as the filter value. For example, to find all
     * resources that have a tag with the key <code>Owner</code> and the value
     * <code>TeamA</code>, specify <code>tag:Owner</code> for the filter name and
     * <code>TeamA</code> for the filter value.</p> </li> <li> <p> <code>tag-key</code>
     * - The key of a tag assigned to the resource. Use this filter to find all
     * resources assigned a tag with a specific key, regardless of the tag value.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeVpcEndpointServicesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeVpcEndpointServicesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. The request returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p> <p>Constraint: If the value is greater than 1,000, we return only
     * 1,000 items.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeVpcEndpointServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a prior call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVpcEndpointServicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceRegions() const { return m_serviceRegions; }
    inline bool ServiceRegionsHasBeenSet() const { return m_serviceRegionsHasBeenSet; }
    template<typename ServiceRegionsT = Aws::Vector<Aws::String>>
    void SetServiceRegions(ServiceRegionsT&& value) { m_serviceRegionsHasBeenSet = true; m_serviceRegions = std::forward<ServiceRegionsT>(value); }
    template<typename ServiceRegionsT = Aws::Vector<Aws::String>>
    DescribeVpcEndpointServicesRequest& WithServiceRegions(ServiceRegionsT&& value) { SetServiceRegions(std::forward<ServiceRegionsT>(value)); return *this;}
    template<typename ServiceRegionsT = Aws::String>
    DescribeVpcEndpointServicesRequest& AddServiceRegions(ServiceRegionsT&& value) { m_serviceRegionsHasBeenSet = true; m_serviceRegions.emplace_back(std::forward<ServiceRegionsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceNames;
    bool m_serviceNamesHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceRegions;
    bool m_serviceRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
