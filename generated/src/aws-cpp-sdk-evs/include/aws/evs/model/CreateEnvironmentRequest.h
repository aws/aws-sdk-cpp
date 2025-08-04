/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/EVSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/evs/model/ServiceAccessSecurityGroups.h>
#include <aws/evs/model/VcfVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/InitialVlans.h>
#include <aws/evs/model/ConnectivityInfo.h>
#include <aws/evs/model/VcfHostnames.h>
#include <aws/evs/model/LicenseInfo.h>
#include <aws/evs/model/HostInfoForCreate.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EVS
{
namespace Model
{

  /**
   */
  class CreateEnvironmentRequest : public EVSRequest
  {
  public:
    AWS_EVS_API CreateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_EVS_API Aws::String SerializePayload() const override;

    AWS_EVS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> <p>This parameter is not used in Amazon EVS currently. If you supply
     * input for this parameter, it will have no effect.</p>  <p>A unique,
     * case-sensitive identifier that you provide to ensure the idempotency of the
     * environment creation request. If you do not specify a client token, a randomly
     * generated token is used for the request to ensure idempotency.</p></p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateEnvironmentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name to give to your environment. The name can contain only alphanumeric
     * characters (case-sensitive), hyphens, and underscores. It must start with an
     * alphanumeric character, and can't be longer than 100 characters. The name must
     * be unique within the Amazon Web Services Region and Amazon Web Services account
     * that you're creating the environment in.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID for the customer-managed KMS key that is used to encrypt the VCF
     * credential pairs for SDDC Manager, NSX Manager, and vCenter appliances. These
     * credentials are stored in Amazon Web Services Secrets Manager.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateEnvironmentRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that assists with categorization and organization. Each tag consists
     * of a key and an optional value. You define both. Tags don't propagate to any
     * other cluster or Amazon Web Services resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEnvironmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEnvironmentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The security group that controls communication between the Amazon EVS control
     * plane and VPC. The default security group is used if a custom security group
     * isn't specified.</p> <p>The security group should allow access to the
     * following.</p> <ul> <li> <p>TCP/UDP access to the DNS servers</p> </li> <li>
     * <p>HTTPS/SSH access to the host management VLAN subnet</p> </li> <li>
     * <p>HTTPS/SSH access to the Management VM VLAN subnet</p> </li> </ul> <p>You
     * should avoid modifying the security group rules after deployment, as this can
     * break the persistent connection between the Amazon EVS control plane and VPC.
     * This can cause future environment actions like adding or removing hosts to
     * fail.</p>
     */
    inline const ServiceAccessSecurityGroups& GetServiceAccessSecurityGroups() const { return m_serviceAccessSecurityGroups; }
    inline bool ServiceAccessSecurityGroupsHasBeenSet() const { return m_serviceAccessSecurityGroupsHasBeenSet; }
    template<typename ServiceAccessSecurityGroupsT = ServiceAccessSecurityGroups>
    void SetServiceAccessSecurityGroups(ServiceAccessSecurityGroupsT&& value) { m_serviceAccessSecurityGroupsHasBeenSet = true; m_serviceAccessSecurityGroups = std::forward<ServiceAccessSecurityGroupsT>(value); }
    template<typename ServiceAccessSecurityGroupsT = ServiceAccessSecurityGroups>
    CreateEnvironmentRequest& WithServiceAccessSecurityGroups(ServiceAccessSecurityGroupsT&& value) { SetServiceAccessSecurityGroups(std::forward<ServiceAccessSecurityGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID for the VPC that the environment is deployed inside.</p>
     * <p>Amazon EVS requires that all VPC subnets exist in a single Availability Zone
     * in a Region where the service is available.</p> <p>The VPC that you specify must
     * have a valid DHCP option set with domain name, at least two DNS servers, and an
     * NTP server. These settings are used to configure your VCF appliances and hosts.
     * The VPC cannot be used with any other deployed Amazon EVS environment. Amazon
     * EVS does not provide multi-VPC support for environments at this time.</p>
     * <p>Amazon EVS does not support the following Amazon Web Services networking
     * options for NSX overlay connectivity: cross-Region VPC peering, Amazon S3
     * gateway endpoints, or Amazon Web Services Direct Connect virtual private gateway
     * associations.</p>  <p>Ensure that you specify a VPC that is adequately
     * sized to accommodate the {evws} subnets.</p> 
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    CreateEnvironmentRequest& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet that is used to establish connectivity between the Amazon EVS
     * control plane and VPC. Amazon EVS uses this subnet to validate mandatory DNS
     * records for your VCF appliances and hosts and create the environment.</p>
     */
    inline const Aws::String& GetServiceAccessSubnetId() const { return m_serviceAccessSubnetId; }
    inline bool ServiceAccessSubnetIdHasBeenSet() const { return m_serviceAccessSubnetIdHasBeenSet; }
    template<typename ServiceAccessSubnetIdT = Aws::String>
    void SetServiceAccessSubnetId(ServiceAccessSubnetIdT&& value) { m_serviceAccessSubnetIdHasBeenSet = true; m_serviceAccessSubnetId = std::forward<ServiceAccessSubnetIdT>(value); }
    template<typename ServiceAccessSubnetIdT = Aws::String>
    CreateEnvironmentRequest& WithServiceAccessSubnetId(ServiceAccessSubnetIdT&& value) { SetServiceAccessSubnetId(std::forward<ServiceAccessSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The VCF version to use for the environment. Amazon EVS only supports VCF
     * version 5.2.1 at this time.</p>
     */
    inline VcfVersion GetVcfVersion() const { return m_vcfVersion; }
    inline bool VcfVersionHasBeenSet() const { return m_vcfVersionHasBeenSet; }
    inline void SetVcfVersion(VcfVersion value) { m_vcfVersionHasBeenSet = true; m_vcfVersion = value; }
    inline CreateEnvironmentRequest& WithVcfVersion(VcfVersion value) { SetVcfVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer confirmation that the customer has purchased and will continue to
     * maintain the required number of VCF software licenses to cover all physical
     * processor cores in the Amazon EVS environment. Information about your VCF
     * software in Amazon EVS will be shared with Broadcom to verify license
     * compliance. Amazon EVS does not validate license keys. To validate license keys,
     * visit the Broadcom support portal.</p>
     */
    inline bool GetTermsAccepted() const { return m_termsAccepted; }
    inline bool TermsAcceptedHasBeenSet() const { return m_termsAcceptedHasBeenSet; }
    inline void SetTermsAccepted(bool value) { m_termsAcceptedHasBeenSet = true; m_termsAccepted = value; }
    inline CreateEnvironmentRequest& WithTermsAccepted(bool value) { SetTermsAccepted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license information that Amazon EVS requires to create an environment.
     * Amazon EVS requires two license keys: a VCF solution key and a vSAN license key.
     * The VCF solution key must cover a minimum of 256 cores. The vSAN license key
     * must provide at least 110 TiB of vSAN capacity.</p> <p>VCF licenses can be used
     * for only one Amazon EVS environment. Amazon EVS does not support reuse of VCF
     * licenses for multiple environments.</p> <p>VCF license information can be
     * retrieved from the Broadcom portal.</p>
     */
    inline const Aws::Vector<LicenseInfo>& GetLicenseInfo() const { return m_licenseInfo; }
    inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }
    template<typename LicenseInfoT = Aws::Vector<LicenseInfo>>
    void SetLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::forward<LicenseInfoT>(value); }
    template<typename LicenseInfoT = Aws::Vector<LicenseInfo>>
    CreateEnvironmentRequest& WithLicenseInfo(LicenseInfoT&& value) { SetLicenseInfo(std::forward<LicenseInfoT>(value)); return *this;}
    template<typename LicenseInfoT = LicenseInfo>
    CreateEnvironmentRequest& AddLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo.emplace_back(std::forward<LicenseInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The initial VLAN subnets for the Amazon EVS environment.</p>  <p>For
     * each Amazon EVS VLAN subnet, you must specify a non-overlapping CIDR block.
     * Amazon EVS VLAN subnets have a minimum CIDR block size of /28 and a maximum size
     * of /24.</p> 
     */
    inline const InitialVlans& GetInitialVlans() const { return m_initialVlans; }
    inline bool InitialVlansHasBeenSet() const { return m_initialVlansHasBeenSet; }
    template<typename InitialVlansT = InitialVlans>
    void SetInitialVlans(InitialVlansT&& value) { m_initialVlansHasBeenSet = true; m_initialVlans = std::forward<InitialVlansT>(value); }
    template<typename InitialVlansT = InitialVlans>
    CreateEnvironmentRequest& WithInitialVlans(InitialVlansT&& value) { SetInitialVlans(std::forward<InitialVlansT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ESXi hosts to add to the environment. Amazon EVS requires that you
     * provide details for a minimum of 4 hosts during environment creation.</p> <p>For
     * each host, you must provide the desired hostname, EC2 SSH keypair name, and EC2
     * instance type. Optionally, you can also provide a partition or cluster placement
     * group to use, or use Amazon EC2 Dedicated Hosts.</p>
     */
    inline const Aws::Vector<HostInfoForCreate>& GetHosts() const { return m_hosts; }
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }
    template<typename HostsT = Aws::Vector<HostInfoForCreate>>
    void SetHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts = std::forward<HostsT>(value); }
    template<typename HostsT = Aws::Vector<HostInfoForCreate>>
    CreateEnvironmentRequest& WithHosts(HostsT&& value) { SetHosts(std::forward<HostsT>(value)); return *this;}
    template<typename HostsT = HostInfoForCreate>
    CreateEnvironmentRequest& AddHosts(HostsT&& value) { m_hostsHasBeenSet = true; m_hosts.emplace_back(std::forward<HostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The connectivity configuration for the environment. Amazon EVS requires that
     * you specify two route server peer IDs. During environment creation, the route
     * server endpoints peer with the NSX edges over the NSX uplink subnet, providing
     * BGP-based dynamic routing for overlay networks.</p>
     */
    inline const ConnectivityInfo& GetConnectivityInfo() const { return m_connectivityInfo; }
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    void SetConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::forward<ConnectivityInfoT>(value); }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    CreateEnvironmentRequest& WithConnectivityInfo(ConnectivityInfoT&& value) { SetConnectivityInfo(std::forward<ConnectivityInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS hostnames for the virtual machines that host the VCF management
     * appliances. Amazon EVS requires that you provide DNS hostnames for the following
     * appliances: vCenter, NSX Manager, SDDC Manager, and Cloud Builder.</p>
     */
    inline const VcfHostnames& GetVcfHostnames() const { return m_vcfHostnames; }
    inline bool VcfHostnamesHasBeenSet() const { return m_vcfHostnamesHasBeenSet; }
    template<typename VcfHostnamesT = VcfHostnames>
    void SetVcfHostnames(VcfHostnamesT&& value) { m_vcfHostnamesHasBeenSet = true; m_vcfHostnames = std::forward<VcfHostnamesT>(value); }
    template<typename VcfHostnamesT = VcfHostnames>
    CreateEnvironmentRequest& WithVcfHostnames(VcfHostnamesT&& value) { SetVcfHostnames(std::forward<VcfHostnamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Broadcom Site ID that is allocated to you as part of your electronic
     * software delivery. This ID allows customer access to the Broadcom portal, and is
     * provided to you by Broadcom at the close of your software contract or contract
     * renewal. Amazon EVS uses the Broadcom Site ID that you provide to meet Broadcom
     * VCF license usage reporting requirements for Amazon EVS.</p>
     */
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    CreateEnvironmentRequest& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    ServiceAccessSecurityGroups m_serviceAccessSecurityGroups;
    bool m_serviceAccessSecurityGroupsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_serviceAccessSubnetId;
    bool m_serviceAccessSubnetIdHasBeenSet = false;

    VcfVersion m_vcfVersion{VcfVersion::NOT_SET};
    bool m_vcfVersionHasBeenSet = false;

    bool m_termsAccepted{false};
    bool m_termsAcceptedHasBeenSet = false;

    Aws::Vector<LicenseInfo> m_licenseInfo;
    bool m_licenseInfoHasBeenSet = false;

    InitialVlans m_initialVlans;
    bool m_initialVlansHasBeenSet = false;

    Aws::Vector<HostInfoForCreate> m_hosts;
    bool m_hostsHasBeenSet = false;

    ConnectivityInfo m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    VcfHostnames m_vcfHostnames;
    bool m_vcfHostnamesHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
