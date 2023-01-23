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
  class ReleaseAddressRequest : public EC2Request
  {
  public:
    AWS_EC2_API ReleaseAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleaseAddress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline ReleaseAddressRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline ReleaseAddressRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
     */
    inline ReleaseAddressRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline bool PublicIpHasBeenSet() const { return m_publicIpHasBeenSet; }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline ReleaseAddressRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline ReleaseAddressRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
     */
    inline ReleaseAddressRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline ReleaseAddressRequest& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline ReleaseAddressRequest& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>The set of Availability Zones, Local Zones, or Wavelength Zones from which
     * Amazon Web Services advertises IP addresses.</p> <p>If you provide an incorrect
     * network border group, you receive an <code>InvalidAddress.NotFound</code>
     * error.</p> <p>You cannot use a network border group with EC2 Classic. If you
     * attempt this operation on EC2 classic, you receive an
     * <code>InvalidParameterCombination</code> error.</p>
     */
    inline ReleaseAddressRequest& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}


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
    inline ReleaseAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
