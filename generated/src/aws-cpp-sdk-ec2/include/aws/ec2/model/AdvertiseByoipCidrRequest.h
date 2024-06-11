﻿/**
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
  class AdvertiseByoipCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API AdvertiseByoipCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdvertiseByoipCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline AdvertiseByoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline AdvertiseByoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline AdvertiseByoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }
    inline AdvertiseByoipCidrRequest& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}
    inline AdvertiseByoipCidrRequest& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}
    inline AdvertiseByoipCidrRequest& WithAsn(const char* value) { SetAsn(value); return *this;}
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
    inline AdvertiseByoipCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }
    inline AdvertiseByoipCidrRequest& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}
    inline AdvertiseByoipCidrRequest& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}
    inline AdvertiseByoipCidrRequest& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
