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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AssignPrivateIpAddresses.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AssignPrivateIpAddressesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AssignPrivateIpAddressesRequest : public EC2Request
  {
  public:
    AssignPrivateIpAddressesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignPrivateIpAddresses"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Indicates whether to allow an IP address that is already assigned to another
     * network interface or instance to be reassigned to the specified network
     * interface.</p>
     */
    inline bool GetAllowReassignment() const{ return m_allowReassignment; }

    /**
     * <p>Indicates whether to allow an IP address that is already assigned to another
     * network interface or instance to be reassigned to the specified network
     * interface.</p>
     */
    inline void SetAllowReassignment(bool value) { m_allowReassignmentHasBeenSet = true; m_allowReassignment = value; }

    /**
     * <p>Indicates whether to allow an IP address that is already assigned to another
     * network interface or instance to be reassigned to the specified network
     * interface.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithAllowReassignment(bool value) { SetAllowReassignment(value); return *this;}


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
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline AssignPrivateIpAddressesRequest& AddPrivateIpAddresses(const Aws::String& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline AssignPrivateIpAddressesRequest& AddPrivateIpAddresses(Aws::String&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more IP addresses to be assigned as a secondary private IP address to
     * the network interface. You can't specify this parameter when also specifying a
     * number of secondary IP addresses.</p> <p>If you don't specify an IP address,
     * Amazon EC2 automatically selects an IP address within the subnet range.</p>
     */
    inline AssignPrivateIpAddressesRequest& AddPrivateIpAddresses(const char* value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }


    /**
     * <p>The number of secondary IP addresses to assign to the network interface. You
     * can't specify this parameter when also specifying private IP addresses.</p>
     */
    inline int GetSecondaryPrivateIpAddressCount() const{ return m_secondaryPrivateIpAddressCount; }

    /**
     * <p>The number of secondary IP addresses to assign to the network interface. You
     * can't specify this parameter when also specifying private IP addresses.</p>
     */
    inline void SetSecondaryPrivateIpAddressCount(int value) { m_secondaryPrivateIpAddressCountHasBeenSet = true; m_secondaryPrivateIpAddressCount = value; }

    /**
     * <p>The number of secondary IP addresses to assign to the network interface. You
     * can't specify this parameter when also specifying private IP addresses.</p>
     */
    inline AssignPrivateIpAddressesRequest& WithSecondaryPrivateIpAddressCount(int value) { SetSecondaryPrivateIpAddressCount(value); return *this;}

  private:

    bool m_allowReassignment;
    bool m_allowReassignmentHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet;

    int m_secondaryPrivateIpAddressCount;
    bool m_secondaryPrivateIpAddressCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
