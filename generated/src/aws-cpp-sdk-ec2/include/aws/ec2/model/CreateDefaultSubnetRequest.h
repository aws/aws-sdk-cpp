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
  class CreateDefaultSubnetRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateDefaultSubnetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDefaultSubnet"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline CreateDefaultSubnetRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline CreateDefaultSubnetRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone in which to create the default subnet.</p>
     */
    inline CreateDefaultSubnetRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


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
    inline CreateDefaultSubnetRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Indicates whether to create an IPv6 only subnet. If you already have a
     * default subnet for this Availability Zone, you must delete it before you can
     * create an IPv6 only subnet.</p>
     */
    inline bool GetIpv6Native() const{ return m_ipv6Native; }

    /**
     * <p>Indicates whether to create an IPv6 only subnet. If you already have a
     * default subnet for this Availability Zone, you must delete it before you can
     * create an IPv6 only subnet.</p>
     */
    inline bool Ipv6NativeHasBeenSet() const { return m_ipv6NativeHasBeenSet; }

    /**
     * <p>Indicates whether to create an IPv6 only subnet. If you already have a
     * default subnet for this Availability Zone, you must delete it before you can
     * create an IPv6 only subnet.</p>
     */
    inline void SetIpv6Native(bool value) { m_ipv6NativeHasBeenSet = true; m_ipv6Native = value; }

    /**
     * <p>Indicates whether to create an IPv6 only subnet. If you already have a
     * default subnet for this Availability Zone, you must delete it before you can
     * create an IPv6 only subnet.</p>
     */
    inline CreateDefaultSubnetRequest& WithIpv6Native(bool value) { SetIpv6Native(value); return *this;}

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    bool m_ipv6Native;
    bool m_ipv6NativeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
