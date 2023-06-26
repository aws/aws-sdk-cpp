/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/DomainStatus.h>
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
   * <p> Describes a domain association that associates a custom domain with an
   * Amplify app. </p><p><h3>See Also:</h3>   <a
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


    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline const Aws::String& GetDomainAssociationArn() const{ return m_domainAssociationArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline bool DomainAssociationArnHasBeenSet() const { return m_domainAssociationArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline void SetDomainAssociationArn(const Aws::String& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline void SetDomainAssociationArn(Aws::String&& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline void SetDomainAssociationArn(const char* value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline DomainAssociation& WithDomainAssociationArn(const Aws::String& value) { SetDomainAssociationArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline DomainAssociation& WithDomainAssociationArn(Aws::String&& value) { SetDomainAssociationArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for the domain association. </p>
     */
    inline DomainAssociation& WithDomainAssociationArn(const char* value) { SetDomainAssociationArn(value); return *this;}


    /**
     * <p> The name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> The name of the domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> The name of the domain. </p>
     */
    inline DomainAssociation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline DomainAssociation& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> The name of the domain. </p>
     */
    inline DomainAssociation& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const{ return m_enableAutoSubDomain; }

    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }

    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }

    /**
     * <p> Enables the automated creation of subdomains for branches. </p>
     */
    inline DomainAssociation& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}


    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoSubDomainCreationPatterns() const{ return m_autoSubDomainCreationPatterns; }

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline bool AutoSubDomainCreationPatternsHasBeenSet() const { return m_autoSubDomainCreationPatternsHasBeenSet; }

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline void SetAutoSubDomainCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = value; }

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline void SetAutoSubDomainCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns = std::move(value); }

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline DomainAssociation& WithAutoSubDomainCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoSubDomainCreationPatterns(value); return *this;}

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline DomainAssociation& WithAutoSubDomainCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoSubDomainCreationPatterns(std::move(value)); return *this;}

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline DomainAssociation& AddAutoSubDomainCreationPatterns(const Aws::String& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(value); return *this; }

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline DomainAssociation& AddAutoSubDomainCreationPatterns(Aws::String&& value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(std::move(value)); return *this; }

    /**
     * <p> Sets branch patterns for automatic subdomain creation. </p>
     */
    inline DomainAssociation& AddAutoSubDomainCreationPatterns(const char* value) { m_autoSubDomainCreationPatternsHasBeenSet = true; m_autoSubDomainCreationPatterns.push_back(value); return *this; }


    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline const Aws::String& GetAutoSubDomainIAMRole() const{ return m_autoSubDomainIAMRole; }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline bool AutoSubDomainIAMRoleHasBeenSet() const { return m_autoSubDomainIAMRoleHasBeenSet; }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline void SetAutoSubDomainIAMRole(const Aws::String& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = value; }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline void SetAutoSubDomainIAMRole(Aws::String&& value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole = std::move(value); }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline void SetAutoSubDomainIAMRole(const char* value) { m_autoSubDomainIAMRoleHasBeenSet = true; m_autoSubDomainIAMRole.assign(value); }

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline DomainAssociation& WithAutoSubDomainIAMRole(const Aws::String& value) { SetAutoSubDomainIAMRole(value); return *this;}

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline DomainAssociation& WithAutoSubDomainIAMRole(Aws::String&& value) { SetAutoSubDomainIAMRole(std::move(value)); return *this;}

    /**
     * <p> The required AWS Identity and Access Management (IAM) service role for the
     * Amazon Resource Name (ARN) for automatically creating subdomains. </p>
     */
    inline DomainAssociation& WithAutoSubDomainIAMRole(const char* value) { SetAutoSubDomainIAMRole(value); return *this;}


    /**
     * <p> The current status of the domain association. </p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p> The current status of the domain association. </p>
     */
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }

    /**
     * <p> The current status of the domain association. </p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }

    /**
     * <p> The current status of the domain association. </p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::move(value); }

    /**
     * <p> The current status of the domain association. </p>
     */
    inline DomainAssociation& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p> The current status of the domain association. </p>
     */
    inline DomainAssociation& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline DomainAssociation& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline DomainAssociation& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> The reason for the current status of the domain association. </p>
     */
    inline DomainAssociation& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline const Aws::String& GetCertificateVerificationDNSRecord() const{ return m_certificateVerificationDNSRecord; }

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline bool CertificateVerificationDNSRecordHasBeenSet() const { return m_certificateVerificationDNSRecordHasBeenSet; }

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline void SetCertificateVerificationDNSRecord(const Aws::String& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = value; }

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline void SetCertificateVerificationDNSRecord(Aws::String&& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = std::move(value); }

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline void SetCertificateVerificationDNSRecord(const char* value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord.assign(value); }

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline DomainAssociation& WithCertificateVerificationDNSRecord(const Aws::String& value) { SetCertificateVerificationDNSRecord(value); return *this;}

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline DomainAssociation& WithCertificateVerificationDNSRecord(Aws::String&& value) { SetCertificateVerificationDNSRecord(std::move(value)); return *this;}

    /**
     * <p> The DNS record for certificate verification. </p>
     */
    inline DomainAssociation& WithCertificateVerificationDNSRecord(const char* value) { SetCertificateVerificationDNSRecord(value); return *this;}


    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline const Aws::Vector<SubDomain>& GetSubDomains() const{ return m_subDomains; }

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline bool SubDomainsHasBeenSet() const { return m_subDomainsHasBeenSet; }

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline void SetSubDomains(const Aws::Vector<SubDomain>& value) { m_subDomainsHasBeenSet = true; m_subDomains = value; }

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline void SetSubDomains(Aws::Vector<SubDomain>&& value) { m_subDomainsHasBeenSet = true; m_subDomains = std::move(value); }

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline DomainAssociation& WithSubDomains(const Aws::Vector<SubDomain>& value) { SetSubDomains(value); return *this;}

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline DomainAssociation& WithSubDomains(Aws::Vector<SubDomain>&& value) { SetSubDomains(std::move(value)); return *this;}

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline DomainAssociation& AddSubDomains(const SubDomain& value) { m_subDomainsHasBeenSet = true; m_subDomains.push_back(value); return *this; }

    /**
     * <p> The subdomains for the domain association. </p>
     */
    inline DomainAssociation& AddSubDomains(SubDomain&& value) { m_subDomainsHasBeenSet = true; m_subDomains.push_back(std::move(value)); return *this; }

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

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_certificateVerificationDNSRecord;
    bool m_certificateVerificationDNSRecordHasBeenSet = false;

    Aws::Vector<SubDomain> m_subDomains;
    bool m_subDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
