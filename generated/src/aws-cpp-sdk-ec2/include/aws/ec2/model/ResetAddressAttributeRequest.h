/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AddressAttributeName.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ResetAddressAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ResetAddressAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetAddressAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline ResetAddressAttributeRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline ResetAddressAttributeRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID.</p>
     */
    inline ResetAddressAttributeRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The attribute of the IP address.</p>
     */
    inline const AddressAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute of the IP address.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute of the IP address.</p>
     */
    inline void SetAttribute(const AddressAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute of the IP address.</p>
     */
    inline void SetAttribute(AddressAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute of the IP address.</p>
     */
    inline ResetAddressAttributeRequest& WithAttribute(const AddressAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute of the IP address.</p>
     */
    inline ResetAddressAttributeRequest& WithAttribute(AddressAttributeName&& value) { SetAttribute(std::move(value)); return *this;}


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
    inline ResetAddressAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    AddressAttributeName m_attribute;
    bool m_attributeHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
