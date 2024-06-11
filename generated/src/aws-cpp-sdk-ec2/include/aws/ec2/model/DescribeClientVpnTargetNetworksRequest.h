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
  class DescribeClientVpnTargetNetworksRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeClientVpnTargetNetworksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClientVpnTargetNetworks"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline DescribeClientVpnTargetNetworksRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the target network associations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociationIds() const{ return m_associationIds; }
    inline bool AssociationIdsHasBeenSet() const { return m_associationIdsHasBeenSet; }
    inline void SetAssociationIds(const Aws::Vector<Aws::String>& value) { m_associationIdsHasBeenSet = true; m_associationIds = value; }
    inline void SetAssociationIds(Aws::Vector<Aws::String>&& value) { m_associationIdsHasBeenSet = true; m_associationIds = std::move(value); }
    inline DescribeClientVpnTargetNetworksRequest& WithAssociationIds(const Aws::Vector<Aws::String>& value) { SetAssociationIds(value); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& WithAssociationIds(Aws::Vector<Aws::String>&& value) { SetAssociationIds(std::move(value)); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& AddAssociationIds(const Aws::String& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }
    inline DescribeClientVpnTargetNetworksRequest& AddAssociationIds(Aws::String&& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(std::move(value)); return *this; }
    inline DescribeClientVpnTargetNetworksRequest& AddAssociationIds(const char* value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for the request in a single page. The
     * remaining results can be seen by sending another request with the nextToken
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeClientVpnTargetNetworksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeClientVpnTargetNetworksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters. Filter names and values are case-sensitive.</p> <ul>
     * <li> <p> <code>association-id</code> - The ID of the association.</p> </li> <li>
     * <p> <code>target-network-id</code> - The ID of the subnet specified as the
     * target network.</p> </li> <li> <p> <code>vpc-id</code> - The ID of the VPC in
     * which the target network is located.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeClientVpnTargetNetworksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeClientVpnTargetNetworksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeClientVpnTargetNetworksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeClientVpnTargetNetworksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_associationIds;
    bool m_associationIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
