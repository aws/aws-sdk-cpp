/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/DomainStatus.h>
#include <aws/amplify/model/UpdateStatus.h>
#include <aws/amplify/model/Certificate.h>
#include <aws/amplify/model/SubDomain.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Describes the association between a custom domain and an Amplify app.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DomainAssociation">AWS
   * API Reference</a></p>
   */
  class DomainAssociation
  {
  public:
    AWS_AMPLIFY_API DomainAssociation() = default;
    AWS_AMPLIFY_API DomainAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API DomainAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline const Aws::String& GetDomainAssociationArn() const { return m_domainAssociationArn; }
    inline bool DomainAssociationArnHasBeenSet() const { return m_domainAssociationArnHasBeenSet; }
    template<typename DomainAssociationArnT = Aws::String>
    void SetDomainAssociationArn(DomainAssociationArnT&& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = std::forward<DomainAssociationArnT>(value); }
    template<typename DomainAssociationArnT = Aws::String>
    DomainAssociation& WithDomainAssociationArn(DomainAssociationArnT&& value) { SetDomainAssociationArn(std::forward<DomainAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainAssociation& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const { return m_enableAutoSubDomain; }
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }
    inline DomainAssociation& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoSubDomainCreationPatterns() const { return m_autoSubDomainCreationPatterns; }
    inline bool AutoSubDomainCreationPatternsHasBeenSet() const { return m_autoSubDomainCreationPatternsHasBeenSet; }
    template<typename AutoSubDomainCreationPatternsT = Aws::Vector<Aws::String>>
    void SetAutoSubDomainCreationPatterns(AutoSubDomainCreationPatternsT&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = std::forward<AutoSubDomainCreationPatternsT>(value); }
    template<typename AutoSubDomainCreationPatternsT = Aws::Vector<Aws::String>>
    DomainAssociation& WithAutoSubDomainCreationPatterns(AutoSubDomainCreationPatternsT&& value) { SetAutoSubDomainCreationPatterns(std::forward<AutoSubDomainCreationPatternsT>(value)); return *this;}
    template<typename AutoSubDomainCreationPatternsT = Aws::String>
    DomainAssociation& AddAutoSubDomainCreationPatterns(AutoSubDomainCreationPatternsT&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.emplace_back(std::forward<AutoSubDomainCreationPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline const Aws::String& GetAutoSubDomainIAMRole() const { return m_autoSubDomainIAMRole; }
    inline bool AutoSubDomainIAMRoleHasBeenSet() const { return m_autoSubDomainIAMRoleHasBeenSet; }
    template<typename AutoSubDomainIAMRoleT = Aws::String>
    void SetAutoSubDomainIAMRole(AutoSubDomainIAMRoleT&& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = std::forward<AutoSubDomainIAMRoleT>(value); }
    template<typename AutoSubDomainIAMRoleT = Aws::String>
    DomainAssociation& WithAutoSubDomainIAMRole(AutoSubDomainIAMRoleT&& value) { SetAutoSubDomainIAMRole(std::forward<AutoSubDomainIAMRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the domain association. </p>
     */
    inline DomainStatus GetDomainStatus() const { return m_domainStatus; }
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }
    inline void SetDomainStatus(DomainStatus value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }
    inline DomainAssociation& WithDomainStatus(DomainStatus value) { SetDomainStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the domain update operation that is currently in progress. The
     * following list describes the valid update states.</p> <dl>
     * <dt>REQUESTING_CERTIFICATE</dt> <dd> <p>The certificate is in the process of
     * being updated.</p> </dd> <dt>PENDING_VERIFICATION</dt> <dd> <p>Indicates that an
     * Amplify managed certificate is in the process of being verified. This occurs
     * during the creation of a custom domain or when a custom domain is updated to use
     * a managed certificate.</p> </dd> <dt>IMPORTING_CUSTOM_CERTIFICATE</dt> <dd>
     * <p>Indicates that an Amplify custom certificate is in the process of being
     * imported. This occurs during the creation of a custom domain or when a custom
     * domain is updated to use a custom certificate.</p> </dd>
     * <dt>PENDING_DEPLOYMENT</dt> <dd> <p>Indicates that the subdomain or certificate
     * changes are being propagated.</p> </dd> <dt>AWAITING_APP_CNAME</dt> <dd>
     * <p>Amplify is waiting for CNAME records corresponding to subdomains to be
     * propagated. If your custom domain is on Route 53, Amplify handles this for you
     * automatically. For more information about custom domains, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/custom-domains.html">Setting
     * up custom domains</a> in the <i>Amplify Hosting User Guide</i>. </p> </dd>
     * <dt>UPDATE_COMPLETE</dt> <dd> <p>The certificate has been associated with a
     * domain.</p> </dd> <dt>UPDATE_FAILED</dt> <dd> <p>The certificate has failed to
     * be provisioned or associated, and there is no existing active certificate to
     * roll back to.</p> </dd> </dl>
     */
    inline UpdateStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(UpdateStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline DomainAssociation& WithUpdateStatus(UpdateStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional information that describes why the domain association is in the
     * current state.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DomainAssociation& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline const Aws::String& GetCertificateVerificationDNSRecord() const { return m_certificateVerificationDNSRecord; }
    inline bool CertificateVerificationDNSRecordHasBeenSet() const { return m_certificateVerificationDNSRecordHasBeenSet; }
    template<typename CertificateVerificationDNSRecordT = Aws::String>
    void SetCertificateVerificationDNSRecord(CertificateVerificationDNSRecordT&& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = std::forward<CertificateVerificationDNSRecordT>(value); }
    template<typename CertificateVerificationDNSRecordT = Aws::String>
    DomainAssociation& WithCertificateVerificationDNSRecord(CertificateVerificationDNSRecordT&& value) { SetCertificateVerificationDNSRecord(std::forward<CertificateVerificationDNSRecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline const Aws::Vector<SubDomain>& GetSubDomains() const { return m_subDomains; }
    inline bool SubDomainsHasBeenSet() const { return m_subDomainsHasBeenSet; }
    template<typename SubDomainsT = Aws::Vector<SubDomain>>
    void SetSubDomains(SubDomainsT&& value) { m_subDomainsHasBeenSet = true; m_subDomains = std::forward<SubDomainsT>(value); }
    template<typename SubDomainsT = Aws::Vector<SubDomain>>
    DomainAssociation& WithSubDomains(SubDomainsT&& value) { SetSubDomains(std::forward<SubDomainsT>(value)); return *this;}
    template<typename SubDomainsT = SubDomain>
    DomainAssociation& AddSubDomains(SubDomainsT&& value) { m_subDomainsHasBeenSet = true; m_subDomains.emplace_back(std::forward<SubDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the SSL/TLS certificate for the domain association. This can be
     * your own custom certificate or the default certificate that Amplify provisions
     * for you.</p> <p>If you are updating your domain to use a different certificate,
     * <code>certificate</code> points to the new certificate that is being created
     * instead of the current active certificate. Otherwise, <code>certificate</code>
     * points to the current active certificate.</p>
     */
    inline const Certificate& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Certificate>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Certificate>
    DomainAssociation& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainAssociationArn;
    bool m_domainAssociationArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableAutoSubDomain{false};
    bool m_enableAutoSubDomainHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoSubDomainCreationPatterns;
    bool m_autoSubDomainCreationPatternsHasBeenSet = false;

    Aws::String m_autoSubDomainIAMRole;
    bool m_autoSubDomainIAMRoleHasBeenSet = false;

    DomainStatus m_domainStatus{DomainStatus::NOT_SET};
    bool m_domainStatusHasBeenSet = false;

    UpdateStatus m_updateStatus{UpdateStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_certificateVerificationDNSRecord;
    bool m_certificateVerificationDNSRecordHasBeenSet = false;

    Aws::Vector<SubDomain> m_subDomains;
    bool m_subDomainsHasBeenSet = false;

    Certificate m_certificate;
    bool m_certificateHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
