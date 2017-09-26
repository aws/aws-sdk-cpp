/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Contains the parameters for AssociateAddress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssociateAddressRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AssociateAddressRequest : public EC2Request
  {
  public:
    AssociateAddressRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAddress"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline AssociateAddressRequest& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline AssociateAddressRequest& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
     */
    inline AssociateAddressRequest& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline AssociateAddressRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline AssociateAddressRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you
     * can specify either the instance ID or the network interface ID, but not both.
     * The operation fails if you specify an instance ID unless exactly one network
     * interface is attached.</p>
     */
    inline AssociateAddressRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline AssociateAddressRequest& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline AssociateAddressRequest& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address. This is required for EC2-Classic.</p>
     */
    inline AssociateAddressRequest& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>[EC2-VPC] For a VPC in an EC2-Classic account, specify true to allow an
     * Elastic IP address that is already associated with an instance or network
     * interface to be reassociated with the specified instance or network interface.
     * Otherwise, the operation fails. In a VPC in an EC2-VPC-only account,
     * reassociation is automatic, therefore you can specify false to ensure the
     * operation fails if the Elastic IP address is already associated with another
     * resource.</p>
     */
    inline bool GetAllowReassociation() const{ return m_allowReassociation; }

    /**
     * <p>[EC2-VPC] For a VPC in an EC2-Classic account, specify true to allow an
     * Elastic IP address that is already associated with an instance or network
     * interface to be reassociated with the specified instance or network interface.
     * Otherwise, the operation fails. In a VPC in an EC2-VPC-only account,
     * reassociation is automatic, therefore you can specify false to ensure the
     * operation fails if the Elastic IP address is already associated with another
     * resource.</p>
     */
    inline void SetAllowReassociation(bool value) { m_allowReassociationHasBeenSet = true; m_allowReassociation = value; }

    /**
     * <p>[EC2-VPC] For a VPC in an EC2-Classic account, specify true to allow an
     * Elastic IP address that is already associated with an instance or network
     * interface to be reassociated with the specified instance or network interface.
     * Otherwise, the operation fails. In a VPC in an EC2-VPC-only account,
     * reassociation is automatic, therefore you can specify false to ensure the
     * operation fails if the Elastic IP address is already associated with another
     * resource.</p>
     */
    inline AssociateAddressRequest& WithAllowReassociation(bool value) { SetAllowReassociation(value); return *this;}


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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline AssociateAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline AssociateAddressRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline AssociateAddressRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID of the network interface. If the instance has more than one
     * network interface, you must specify a network interface ID.</p>
     */
    inline AssociateAddressRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline AssociateAddressRequest& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline AssociateAddressRequest& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The primary or secondary private IP address to associate with the
     * Elastic IP address. If no private IP address is specified, the Elastic IP
     * address is associated with the primary private IP address.</p>
     */
    inline AssociateAddressRequest& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    bool m_allowReassociation;
    bool m_allowReassociationHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
