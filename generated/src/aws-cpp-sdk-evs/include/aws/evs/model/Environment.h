/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/model/EnvironmentState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/evs/model/VcfVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/evs/model/ConnectivityInfo.h>
#include <aws/evs/model/VcfHostnames.h>
#include <aws/evs/model/ServiceAccessSecurityGroups.h>
#include <aws/evs/model/LicenseInfo.h>
#include <aws/evs/model/Check.h>
#include <aws/evs/model/Secret.h>
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
namespace EVS
{
namespace Model
{

  /**
   * <p>An object that represents an Amazon EVS environment.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_EVS_API Environment() = default;
    AWS_EVS_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    Environment& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of an environment.</p>
     */
    inline EnvironmentState GetEnvironmentState() const { return m_environmentState; }
    inline bool EnvironmentStateHasBeenSet() const { return m_environmentStateHasBeenSet; }
    inline void SetEnvironmentState(EnvironmentState value) { m_environmentStateHasBeenSet = true; m_environmentState = value; }
    inline Environment& WithEnvironmentState(EnvironmentState value) { SetEnvironmentState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed description of the <code>environmentState</code> of an
     * environment.</p>
     */
    inline const Aws::String& GetStateDetails() const { return m_stateDetails; }
    inline bool StateDetailsHasBeenSet() const { return m_stateDetailsHasBeenSet; }
    template<typename StateDetailsT = Aws::String>
    void SetStateDetails(StateDetailsT&& value) { m_stateDetailsHasBeenSet = true; m_stateDetails = std::forward<StateDetailsT>(value); }
    template<typename StateDetailsT = Aws::String>
    Environment& WithStateDetails(StateDetailsT&& value) { SetStateDetails(std::forward<StateDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Environment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time that the environment was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    Environment& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that is associated with the environment.</p>
     */
    inline const Aws::String& GetEnvironmentArn() const { return m_environmentArn; }
    inline bool EnvironmentArnHasBeenSet() const { return m_environmentArnHasBeenSet; }
    template<typename EnvironmentArnT = Aws::String>
    void SetEnvironmentArn(EnvironmentArnT&& value) { m_environmentArnHasBeenSet = true; m_environmentArn = std::forward<EnvironmentArnT>(value); }
    template<typename EnvironmentArnT = Aws::String>
    Environment& WithEnvironmentArn(EnvironmentArnT&& value) { SetEnvironmentArn(std::forward<EnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    Environment& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC associated with the environment.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Environment& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subnet that is used to establish connectivity between the Amazon EVS
     * control plane and VPC. Amazon EVS uses this subnet to perform validations and
     * create the environment.</p>
     */
    inline const Aws::String& GetServiceAccessSubnetId() const { return m_serviceAccessSubnetId; }
    inline bool ServiceAccessSubnetIdHasBeenSet() const { return m_serviceAccessSubnetIdHasBeenSet; }
    template<typename ServiceAccessSubnetIdT = Aws::String>
    void SetServiceAccessSubnetId(ServiceAccessSubnetIdT&& value) { m_serviceAccessSubnetIdHasBeenSet = true; m_serviceAccessSubnetId = std::forward<ServiceAccessSubnetIdT>(value); }
    template<typename ServiceAccessSubnetIdT = Aws::String>
    Environment& WithServiceAccessSubnetId(ServiceAccessSubnetIdT&& value) { SetServiceAccessSubnetId(std::forward<ServiceAccessSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VCF version of the environment.</p>
     */
    inline VcfVersion GetVcfVersion() const { return m_vcfVersion; }
    inline bool VcfVersionHasBeenSet() const { return m_vcfVersionHasBeenSet; }
    inline void SetVcfVersion(VcfVersion value) { m_vcfVersionHasBeenSet = true; m_vcfVersion = value; }
    inline Environment& WithVcfVersion(VcfVersion value) { SetVcfVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customer confirmation that the customer has purchased and will continue to
     * maintain the required number of VCF software licenses to cover all physical
     * processor cores in the Amazon EVS environment. Information about your VCF
     * software in Amazon EVS will be shared with Broadcom to verify license
     * compliance. Amazon EVS does not validate license keys. To validate license keys,
     * visit the Broadcom support portal. </p>
     */
    inline bool GetTermsAccepted() const { return m_termsAccepted; }
    inline bool TermsAcceptedHasBeenSet() const { return m_termsAcceptedHasBeenSet; }
    inline void SetTermsAccepted(bool value) { m_termsAcceptedHasBeenSet = true; m_termsAccepted = value; }
    inline Environment& WithTermsAccepted(bool value) { SetTermsAccepted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The license information that Amazon EVS requires to create an environment.
     * Amazon EVS requires two license keys: a VCF solution key and a vSAN license key.
     * The VCF solution key must cover a minimum of 256 cores. The vSAN license key
     * must provide at least 110 TiB of vSAN capacity.</p>
     */
    inline const Aws::Vector<LicenseInfo>& GetLicenseInfo() const { return m_licenseInfo; }
    inline bool LicenseInfoHasBeenSet() const { return m_licenseInfoHasBeenSet; }
    template<typename LicenseInfoT = Aws::Vector<LicenseInfo>>
    void SetLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo = std::forward<LicenseInfoT>(value); }
    template<typename LicenseInfoT = Aws::Vector<LicenseInfo>>
    Environment& WithLicenseInfo(LicenseInfoT&& value) { SetLicenseInfo(std::forward<LicenseInfoT>(value)); return *this;}
    template<typename LicenseInfoT = LicenseInfo>
    Environment& AddLicenseInfo(LicenseInfoT&& value) { m_licenseInfoHasBeenSet = true; m_licenseInfo.emplace_back(std::forward<LicenseInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Broadcom Site ID that is associated with your Amazon EVS environment.
     * Amazon EVS uses the Broadcom Site ID that you provide to meet Broadcom VCF
     * license usage reporting requirements for Amazon EVS.</p>
     */
    inline const Aws::String& GetSiteId() const { return m_siteId; }
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }
    template<typename SiteIdT = Aws::String>
    void SetSiteId(SiteIdT&& value) { m_siteIdHasBeenSet = true; m_siteId = std::forward<SiteIdT>(value); }
    template<typename SiteIdT = Aws::String>
    Environment& WithSiteId(SiteIdT&& value) { SetSiteId(std::forward<SiteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reports impaired functionality that stems from issues internal to the
     * environment, such as impaired reachability.</p>
     */
    inline CheckResult GetEnvironmentStatus() const { return m_environmentStatus; }
    inline bool EnvironmentStatusHasBeenSet() const { return m_environmentStatusHasBeenSet; }
    inline void SetEnvironmentStatus(CheckResult value) { m_environmentStatusHasBeenSet = true; m_environmentStatus = value; }
    inline Environment& WithEnvironmentStatus(CheckResult value) { SetEnvironmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A check on the environment to identify instance health and VMware VCF
     * licensing issues.</p>
     */
    inline const Aws::Vector<Check>& GetChecks() const { return m_checks; }
    inline bool ChecksHasBeenSet() const { return m_checksHasBeenSet; }
    template<typename ChecksT = Aws::Vector<Check>>
    void SetChecks(ChecksT&& value) { m_checksHasBeenSet = true; m_checks = std::forward<ChecksT>(value); }
    template<typename ChecksT = Aws::Vector<Check>>
    Environment& WithChecks(ChecksT&& value) { SetChecks(std::forward<ChecksT>(value)); return *this;}
    template<typename ChecksT = Check>
    Environment& AddChecks(ChecksT&& value) { m_checksHasBeenSet = true; m_checks.emplace_back(std::forward<ChecksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connectivity configuration for the environment. Amazon EVS requires that
     * you specify two route server peer IDs. During environment creation, the route
     * server endpoints peer with the NSX uplink VLAN for connectivity to the NSX
     * overlay network.</p>
     */
    inline const ConnectivityInfo& GetConnectivityInfo() const { return m_connectivityInfo; }
    inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    void SetConnectivityInfo(ConnectivityInfoT&& value) { m_connectivityInfoHasBeenSet = true; m_connectivityInfo = std::forward<ConnectivityInfoT>(value); }
    template<typename ConnectivityInfoT = ConnectivityInfo>
    Environment& WithConnectivityInfo(ConnectivityInfoT&& value) { SetConnectivityInfo(std::forward<ConnectivityInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS hostnames to be used by the VCF management appliances in your
     * environment.</p> <p>For environment creation to be successful, each hostname
     * entry must resolve to a domain name that you've registered in your DNS service
     * of choice and configured in the DHCP option set of your VPC. DNS hostnames
     * cannot be changed after environment creation has started.</p>
     */
    inline const VcfHostnames& GetVcfHostnames() const { return m_vcfHostnames; }
    inline bool VcfHostnamesHasBeenSet() const { return m_vcfHostnamesHasBeenSet; }
    template<typename VcfHostnamesT = VcfHostnames>
    void SetVcfHostnames(VcfHostnamesT&& value) { m_vcfHostnamesHasBeenSet = true; m_vcfHostnames = std::forward<VcfHostnamesT>(value); }
    template<typename VcfHostnamesT = VcfHostnames>
    Environment& WithVcfHostnames(VcfHostnamesT&& value) { SetVcfHostnames(std::forward<VcfHostnamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key ID that Amazon Web Services Secrets Manager
     * uses to encrypt secrets that are associated with the environment. These secrets
     * contain the VCF credentials that are needed to install vCenter Server, NSX, and
     * SDDC Manager.</p> <p>By default, Amazon EVS use the Amazon Web Services Secrets
     * Manager managed key <code>aws/secretsmanager</code>. You can also specify a
     * customer managed key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Environment& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups that allow traffic between the Amazon EVS control plane
     * and your VPC for service access. If a security group is not specified, Amazon
     * EVS uses the default security group in your account for service access.</p>
     */
    inline const ServiceAccessSecurityGroups& GetServiceAccessSecurityGroups() const { return m_serviceAccessSecurityGroups; }
    inline bool ServiceAccessSecurityGroupsHasBeenSet() const { return m_serviceAccessSecurityGroupsHasBeenSet; }
    template<typename ServiceAccessSecurityGroupsT = ServiceAccessSecurityGroups>
    void SetServiceAccessSecurityGroups(ServiceAccessSecurityGroupsT&& value) { m_serviceAccessSecurityGroupsHasBeenSet = true; m_serviceAccessSecurityGroups = std::forward<ServiceAccessSecurityGroupsT>(value); }
    template<typename ServiceAccessSecurityGroupsT = ServiceAccessSecurityGroups>
    Environment& WithServiceAccessSecurityGroups(ServiceAccessSecurityGroupsT&& value) { SetServiceAccessSecurityGroups(std::forward<ServiceAccessSecurityGroupsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VCF credentials that are stored as Amazon EVS managed secrets in Amazon
     * Web Services Secrets Manager.</p> <p>Amazon EVS stores credentials that are
     * needed to install vCenter Server, NSX, and SDDC Manager.</p>
     */
    inline const Aws::Vector<Secret>& GetCredentials() const { return m_credentials; }
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }
    template<typename CredentialsT = Aws::Vector<Secret>>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = Aws::Vector<Secret>>
    Environment& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    template<typename CredentialsT = Secret>
    Environment& AddCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials.emplace_back(std::forward<CredentialsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    EnvironmentState m_environmentState{EnvironmentState::NOT_SET};
    bool m_environmentStateHasBeenSet = false;

    Aws::String m_stateDetails;
    bool m_stateDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_environmentArn;
    bool m_environmentArnHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

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

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    CheckResult m_environmentStatus{CheckResult::NOT_SET};
    bool m_environmentStatusHasBeenSet = false;

    Aws::Vector<Check> m_checks;
    bool m_checksHasBeenSet = false;

    ConnectivityInfo m_connectivityInfo;
    bool m_connectivityInfoHasBeenSet = false;

    VcfHostnames m_vcfHostnames;
    bool m_vcfHostnamesHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ServiceAccessSecurityGroups m_serviceAccessSecurityGroups;
    bool m_serviceAccessSecurityGroupsHasBeenSet = false;

    Aws::Vector<Secret> m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace EVS
} // namespace Aws
