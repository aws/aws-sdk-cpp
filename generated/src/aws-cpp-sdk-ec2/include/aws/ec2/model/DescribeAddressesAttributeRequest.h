/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AddressAttributeName.h>
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
  class DescribeAddressesAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeAddressesAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAddressesAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>[EC2-VPC] The allocation IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllocationIds() const{ return m_allocationIds; }
    inline bool AllocationIdsHasBeenSet() const { return m_allocationIdsHasBeenSet; }
    inline void SetAllocationIds(const Aws::Vector<Aws::String>& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = value; }
    inline void SetAllocationIds(Aws::Vector<Aws::String>&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds = std::move(value); }
    inline DescribeAddressesAttributeRequest& WithAllocationIds(const Aws::Vector<Aws::String>& value) { SetAllocationIds(value); return *this;}
    inline DescribeAddressesAttributeRequest& WithAllocationIds(Aws::Vector<Aws::String>&& value) { SetAllocationIds(std::move(value)); return *this;}
    inline DescribeAddressesAttributeRequest& AddAllocationIds(const Aws::String& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }
    inline DescribeAddressesAttributeRequest& AddAllocationIds(Aws::String&& value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(std::move(value)); return *this; }
    inline DescribeAddressesAttributeRequest& AddAllocationIds(const char* value) { m_allocationIdsHasBeenSet = true; m_allocationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attribute of the IP address.</p>
     */
    inline const AddressAttributeName& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const AddressAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(AddressAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline DescribeAddressesAttributeRequest& WithAttribute(const AddressAttributeName& value) { SetAttribute(value); return *this;}
    inline DescribeAddressesAttributeRequest& WithAttribute(AddressAttributeName&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeAddressesAttributeRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAddressesAttributeRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAddressesAttributeRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeAddressesAttributeRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline DescribeAddressesAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_allocationIds;
    bool m_allocationIdsHasBeenSet = false;

    AddressAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
