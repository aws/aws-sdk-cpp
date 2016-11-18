﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for UnassignPrivateIpAddresses.</p>
   */
  class AWS_EC2_API UnassignPrivateIpAddressesRequest : public EC2Request
  {
  public:
    UnassignPrivateIpAddressesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& WithPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddPrivateIpAddresses(const Aws::String& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddPrivateIpAddresses(Aws::String&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>The secondary private IP addresses to unassign from the network interface.
     * You can specify this option multiple times to unassign more than one IP
     * address.</p>
     */
    inline UnassignPrivateIpAddressesRequest& AddPrivateIpAddresses(const char* value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

  private:
    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;
    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
