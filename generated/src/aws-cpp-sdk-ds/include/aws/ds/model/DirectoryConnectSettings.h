/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DirectoryConnectSettings
  {
  public:
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettings() = default;
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the VPC in which the AD Connector is created.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DirectoryConnectSettings& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet identifiers in the VPC in which the AD Connector is
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    DirectoryConnectSettings& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    DirectoryConnectSettings& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of one or more IP addresses of DNS servers or domain controllers in
     * your self-managed directory.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerDnsIps() const { return m_customerDnsIps; }
    inline bool CustomerDnsIpsHasBeenSet() const { return m_customerDnsIpsHasBeenSet; }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    void SetCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps = std::forward<CustomerDnsIpsT>(value); }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    DirectoryConnectSettings& WithCustomerDnsIps(CustomerDnsIpsT&& value) { SetCustomerDnsIps(std::forward<CustomerDnsIpsT>(value)); return *this;}
    template<typename CustomerDnsIpsT = Aws::String>
    DirectoryConnectSettings& AddCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.emplace_back(std::forward<CustomerDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user name of an account in your self-managed directory that is used to
     * connect to the directory. This account must have the following permissions:</p>
     * <ul> <li> <p>Read users and groups</p> </li> <li> <p>Create computer objects</p>
     * </li> <li> <p>Join computers to the domain</p> </li> </ul>
     */
    inline const Aws::String& GetCustomerUserName() const { return m_customerUserName; }
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }
    template<typename CustomerUserNameT = Aws::String>
    void SetCustomerUserName(CustomerUserNameT&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::forward<CustomerUserNameT>(value); }
    template<typename CustomerUserNameT = Aws::String>
    DirectoryConnectSettings& WithCustomerUserName(CustomerUserNameT&& value) { SetCustomerUserName(std::forward<CustomerUserNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerDnsIps;
    bool m_customerDnsIpsHasBeenSet = false;

    Aws::String m_customerUserName;
    bool m_customerUserNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
