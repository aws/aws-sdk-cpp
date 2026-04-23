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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information for the <a>ConnectDirectory</a> operation when an AD
   * Connector directory is being created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectoryConnectSettings">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryConnectSettings
  {
  public:
    DirectoryConnectSettings();
    DirectoryConnectSettings(Aws::Utils::Json::JsonView jsonValue);
    DirectoryConnectSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline DirectoryConnectSettings& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline DirectoryConnectSettings& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline DirectoryConnectSettings& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline DirectoryConnectSettings& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline DirectoryConnectSettings& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline DirectoryConnectSettings& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline DirectoryConnectSettings& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline DirectoryConnectSettings& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerDnsIps() const{ return m_customerDnsIps; }

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline bool CustomerDnsIpsHasBeenSet() const { return m_customerDnsIpsHasBeenSet; }

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline void SetCustomerDnsIps(const Aws::Vector<Aws::String>& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps = value; }

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline void SetCustomerDnsIps(Aws::Vector<Aws::String>&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps = std::move(value); }

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline DirectoryConnectSettings& WithCustomerDnsIps(const Aws::Vector<Aws::String>& value) { SetCustomerDnsIps(value); return *this;}

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline DirectoryConnectSettings& WithCustomerDnsIps(Aws::Vector<Aws::String>&& value) { SetCustomerDnsIps(std::move(value)); return *this;}

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline DirectoryConnectSettings& AddCustomerDnsIps(const Aws::String& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.push_back(value); return *this; }

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline DirectoryConnectSettings& AddCustomerDnsIps(Aws::String&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * the on-premises directory.</p>
     */
    inline DirectoryConnectSettings& AddCustomerDnsIps(const char* value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.push_back(value); return *this; }


    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline const Aws::String& GetCustomerUserName() const{ return m_customerUserName; }

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline void SetCustomerUserName(const Aws::String& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = value; }

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline void SetCustomerUserName(Aws::String&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::move(value); }

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline void SetCustomerUserName(const char* value) { m_customerUserNameHasBeenSet = true; m_customerUserName.assign(value); }

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline DirectoryConnectSettings& WithCustomerUserName(const Aws::String& value) { SetCustomerUserName(value); return *this;}

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline DirectoryConnectSettings& WithCustomerUserName(Aws::String&& value) { SetCustomerUserName(std::move(value)); return *this;}

    /**
     * <p>The user name of an account in the on-premises directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline DirectoryConnectSettings& WithCustomerUserName(const char* value) { SetCustomerUserName(value); return *this;}

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_customerDnsIps;
    bool m_customerDnsIpsHasBeenSet;

    Aws::String m_customerUserName;
    bool m_customerUserNameHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
