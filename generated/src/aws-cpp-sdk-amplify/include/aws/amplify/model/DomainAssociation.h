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
    AWS_AMPLIFY_API DomainAssociation();
    AWS_AMPLIFY_API DomainAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API DomainAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline const Aws::String& GetDomainAssociationArn() const{ return m_domainAssociationArn; }
    inline bool DomainAssociationArnHasBeenSet() const { return m_domainAssociationArnHasBeenSet; }
    inline void SetDomainAssociationArn(const Aws::String& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = value; }
    inline void SetDomainAssociationArn(Aws::String&& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = std::move(value); }
    inline void SetDomainAssociationArn(const char* value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn.assign(value); }
    inline DomainAssociation& WithDomainAssociationArn(const Aws::String& value) { SetDomainAssociationArn(value); return *this;}
    inline DomainAssociation& WithDomainAssociationArn(Aws::String&& value) { SetDomainAssociationArn(std::move(value)); return *this;}
    inline DomainAssociation& WithDomainAssociationArn(const char* value) { SetDomainAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline DomainAssociation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline DomainAssociation& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline DomainAssociation& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const{ return m_enableAutoSubDomain; }
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }
    inline DomainAssociation& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoSubDomainCreationPatterns() const{ return m_autoSubDomainCreationPatterns; }
    inline bool AutoSubDomainCreationPatternsHasBeenSet() const { return m_autoSubDomainCreationPatternsHasBeenSet; }
    inline void SetAutoSubDomainCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = value; }
    inline void SetAutoSubDomainCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = std::move(value); }
    inline DomainAssociation& WithAutoSubDomainCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoSubDomainCreationPatterns(value); return *this;}
    inline DomainAssociation& WithAutoSubDomainCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoSubDomainCreationPatterns(std::move(value)); return *this;}
    inline DomainAssociation& AddAutoSubDomainCreationPatterns(const Aws::String& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(value); return *this; }
    inline DomainAssociation& AddAutoSubDomainCreationPatterns(Aws::String&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(std::move(value)); return *this; }
    inline DomainAssociation& AddAutoSubDomainCreationPatterns(const char* value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline const Aws::String& GetAutoSubDomainIAMRole() const{ return m_autoSubDomainIAMRole; }
    inline bool AutoSubDomainIAMRoleHasBeenSet() const { return m_autoSubDomainIAMRoleHasBeenSet; }
    inline void SetAutoSubDomainIAMRole(const Aws::String& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = value; }
    inline void SetAutoSubDomainIAMRole(Aws::String&& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = std::move(value); }
    inline void SetAutoSubDomainIAMRole(const char* value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole.assign(value); }
    inline DomainAssociation& WithAutoSubDomainIAMRole(const Aws::String& value) { SetAutoSubDomainIAMRole(value); return *this;}
    inline DomainAssociation& WithAutoSubDomainIAMRole(Aws::String&& value) { SetAutoSubDomainIAMRole(std::move(value)); return *this;}
    inline DomainAssociation& WithAutoSubDomainIAMRole(const char* value) { SetAutoSubDomainIAMRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the domain association. </p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::move(value); }
    inline DomainAssociation& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}
    inline DomainAssociation& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}
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
    inline const UpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const UpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(UpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline DomainAssociation& WithUpdateStatus(const UpdateStatus& value) { SetUpdateStatus(value); return *this;}
    inline DomainAssociation& WithUpdateStatus(UpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional information that describes why the domain association is in the
     * current state.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline DomainAssociation& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline DomainAssociation& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline DomainAssociation& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline const Aws::String& GetCertificateVerificationDNSRecord() const{ return m_certificateVerificationDNSRecord; }
    inline bool CertificateVerificationDNSRecordHasBeenSet() const { return m_certificateVerificationDNSRecordHasBeenSet; }
    inline void SetCertificateVerificationDNSRecord(const Aws::String& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = value; }
    inline void SetCertificateVerificationDNSRecord(Aws::String&& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = std::move(value); }
    inline void SetCertificateVerificationDNSRecord(const char* value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord.assign(value); }
    inline DomainAssociation& WithCertificateVerificationDNSRecord(const Aws::String& value) { SetCertificateVerificationDNSRecord(value); return *this;}
    inline DomainAssociation& WithCertificateVerificationDNSRecord(Aws::String&& value) { SetCertificateVerificationDNSRecord(std::move(value)); return *this;}
    inline DomainAssociation& WithCertificateVerificationDNSRecord(const char* value) { SetCertificateVerificationDNSRecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline const Aws::Vector<SubDomain>& GetSubDomains() const{ return m_subDomains; }
    inline bool SubDomainsHasBeenSet() const { return m_subDomainsHasBeenSet; }
    inline void SetSubDomains(const Aws::Vector<SubDomain>& value) { m_subDomainsHasBeenSet = true; m_subDomains = value; }
    inline void SetSubDomains(Aws::Vector<SubDomain>&& value) { m_subDomainsHasBeenSet = true; m_subDomains = std::move(value); }
    inline DomainAssociation& WithSubDomains(const Aws::Vector<SubDomain>& value) { SetSubDomains(value); return *this;}
    inline DomainAssociation& WithSubDomains(Aws::Vector<SubDomain>&& value) { SetSubDomains(std::move(value)); return *this;}
    inline DomainAssociation& AddSubDomains(const SubDomain& value) { m_subDomainsHasBeenSet = true; m_subDomains.push_back(value); return *this; }
    inline DomainAssociation& AddSubDomains(SubDomain&& value) { m_subDomainsHasBeenSet = true; m_subDomains.push_back(std::move(value)); return *this; }
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
    inline const Certificate& GetCertificate() const{ return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    inline void SetCertificate(const Certificate& value) { m_certificateHasBeenSet = true; m_certificate = value; }
    inline void SetCertificate(Certificate&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }
    inline DomainAssociation& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}
    inline DomainAssociation& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainAssociationArn;
    bool m_domainAssociationArnHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableAutoSubDomain;
    bool m_enableAutoSubDomainHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoSubDomainCreationPatterns;
    bool m_autoSubDomainCreationPatternsHasBeenSet = false;

    Aws::String m_autoSubDomainIAMRole;
    bool m_autoSubDomainIAMRoleHasBeenSet = false;

    DomainStatus m_domainStatus;
    bool m_domainStatusHasBeenSet = false;

    UpdateStatus m_updateStatus;
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
