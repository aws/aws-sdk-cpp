/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
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
  class EnableAddressTransferRequest : public EC2Request
  {
  public:
    AWS_EC2_API EnableAddressTransferRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableAddressTransfer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The allocation ID of an Elastic IP address.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }
    inline EnableAddressTransferRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}
    inline EnableAddressTransferRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}
    inline EnableAddressTransferRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that you want to transfer the Elastic IP address
     * to.</p>
     */
    inline const Aws::String& GetTransferAccountId() const{ return m_transferAccountId; }
    inline bool TransferAccountIdHasBeenSet() const { return m_transferAccountIdHasBeenSet; }
    inline void SetTransferAccountId(const Aws::String& value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId = value; }
    inline void SetTransferAccountId(Aws::String&& value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId = std::move(value); }
    inline void SetTransferAccountId(const char* value) { m_transferAccountIdHasBeenSet = true; m_transferAccountId.assign(value); }
    inline EnableAddressTransferRequest& WithTransferAccountId(const Aws::String& value) { SetTransferAccountId(value); return *this;}
    inline EnableAddressTransferRequest& WithTransferAccountId(Aws::String&& value) { SetTransferAccountId(std::move(value)); return *this;}
    inline EnableAddressTransferRequest& WithTransferAccountId(const char* value) { SetTransferAccountId(value); return *this;}
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
    inline EnableAddressTransferRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_transferAccountId;
    bool m_transferAccountIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
