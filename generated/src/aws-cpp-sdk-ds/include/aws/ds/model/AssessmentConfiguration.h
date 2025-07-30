/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryVpcSettings.h>
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
   * <p>Contains configuration parameters required to perform a directory
   * assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AssessmentConfiguration">AWS
   * API Reference</a></p>
   */
  class AssessmentConfiguration
  {
  public:
    AWS_DIRECTORYSERVICE_API AssessmentConfiguration() = default;
    AWS_DIRECTORYSERVICE_API AssessmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API AssessmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of IP addresses for the DNS servers or domain controllers in your
     * self-managed AD that are tested during the assessment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerDnsIps() const { return m_customerDnsIps; }
    inline bool CustomerDnsIpsHasBeenSet() const { return m_customerDnsIpsHasBeenSet; }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    void SetCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps = std::forward<CustomerDnsIpsT>(value); }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    AssessmentConfiguration& WithCustomerDnsIps(CustomerDnsIpsT&& value) { SetCustomerDnsIps(std::forward<CustomerDnsIpsT>(value)); return *this;}
    template<typename CustomerDnsIpsT = Aws::String>
    AssessmentConfiguration& AddCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.emplace_back(std::forward<CustomerDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the self-managed AD domain to
     * assess.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    AssessmentConfiguration& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DirectoryVpcSettings& GetVpcSettings() const { return m_vpcSettings; }
    inline bool VpcSettingsHasBeenSet() const { return m_vpcSettingsHasBeenSet; }
    template<typename VpcSettingsT = DirectoryVpcSettings>
    void SetVpcSettings(VpcSettingsT&& value) { m_vpcSettingsHasBeenSet = true; m_vpcSettings = std::forward<VpcSettingsT>(value); }
    template<typename VpcSettingsT = DirectoryVpcSettings>
    AssessmentConfiguration& WithVpcSettings(VpcSettingsT&& value) { SetVpcSettings(std::forward<VpcSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the self-managed instances with SSM that are used to
     * perform connectivity and validation tests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    AssessmentConfiguration& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    AssessmentConfiguration& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>By default, the service attaches a security group to allow network access to
     * the self-managed nodes in your Amazon VPC. You can optionally supply your own
     * security group that allows network traffic to and from your self-managed domain
     * controllers outside of your Amazon VPC. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    AssessmentConfiguration& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    AssessmentConfiguration& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_customerDnsIps;
    bool m_customerDnsIpsHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    DirectoryVpcSettings m_vpcSettings;
    bool m_vpcSettingsHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
