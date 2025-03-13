/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/ResourceLocation.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateStatus.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateFailureReason.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateRenewalSummary.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateRevocationReason.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/LoadBalancerTlsCertificateDomainValidationRecord.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a load balancer SSL/TLS certificate.</p> <p>TLS is just an updated,
   * more secure version of Secure Socket Layer (SSL).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/LoadBalancerTlsCertificate">AWS
   * API Reference</a></p>
   */
  class LoadBalancerTlsCertificate
  {
  public:
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificate() = default;
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API LoadBalancerTlsCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SSL/TLS certificate (<code>my-certificate</code>).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    LoadBalancerTlsCertificate& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the SSL/TLS certificate.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LoadBalancerTlsCertificate& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The support code. Include this code in your email to support when you have
     * questions about your Lightsail load balancer or SSL/TLS certificate. This code
     * enables our support team to look up your Lightsail information more easily.</p>
     */
    inline const Aws::String& GetSupportCode() const { return m_supportCode; }
    inline bool SupportCodeHasBeenSet() const { return m_supportCodeHasBeenSet; }
    template<typename SupportCodeT = Aws::String>
    void SetSupportCode(SupportCodeT&& value) { m_supportCodeHasBeenSet = true; m_supportCode = std::forward<SupportCodeT>(value); }
    template<typename SupportCodeT = Aws::String>
    LoadBalancerTlsCertificate& WithSupportCode(SupportCodeT&& value) { SetSupportCode(std::forward<SupportCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when you created your SSL/TLS certificate.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    LoadBalancerTlsCertificate& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region and Availability Zone where you created your
     * certificate.</p>
     */
    inline const ResourceLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = ResourceLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = ResourceLocation>
    LoadBalancerTlsCertificate& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type (<code>LoadBalancerTlsCertificate</code>).</p> <ul> <li>
     * <p> <b> <code>Instance</code> </b> - A Lightsail instance (a virtual private
     * server)</p> </li> <li> <p> <b> <code>StaticIp</code> </b> - A static IP
     * address</p> </li> <li> <p> <b> <code>KeyPair</code> </b> - The key pair used to
     * connect to a Lightsail instance</p> </li> <li> <p> <b>
     * <code>InstanceSnapshot</code> </b> - A Lightsail instance snapshot</p> </li>
     * <li> <p> <b> <code>Domain</code> </b> - A DNS zone</p> </li> <li> <p> <b>
     * <code>PeeredVpc</code> </b> - A peered VPC</p> </li> <li> <p> <b>
     * <code>LoadBalancer</code> </b> - A Lightsail load balancer</p> </li> <li> <p>
     * <b> <code>LoadBalancerTlsCertificate</code> </b> - An SSL/TLS certificate
     * associated with a Lightsail load balancer</p> </li> <li> <p> <b>
     * <code>Disk</code> </b> - A Lightsail block storage disk</p> </li> <li> <p> <b>
     * <code>DiskSnapshot</code> </b> - A block storage disk snapshot</p> </li> </ul>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline LoadBalancerTlsCertificate& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values for the resource. For more information about
     * tags in Lightsail, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-tags">Amazon
     * Lightsail Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    LoadBalancerTlsCertificate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    LoadBalancerTlsCertificate& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The load balancer name where your SSL/TLS certificate is attached.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    LoadBalancerTlsCertificate& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, the SSL/TLS certificate is attached to the Lightsail
     * load balancer.</p>
     */
    inline bool GetIsAttached() const { return m_isAttached; }
    inline bool IsAttachedHasBeenSet() const { return m_isAttachedHasBeenSet; }
    inline void SetIsAttached(bool value) { m_isAttachedHasBeenSet = true; m_isAttached = value; }
    inline LoadBalancerTlsCertificate& WithIsAttached(bool value) { SetIsAttached(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation status of the SSL/TLS certificate. Valid values are below.</p>
     */
    inline LoadBalancerTlsCertificateStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LoadBalancerTlsCertificateStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LoadBalancerTlsCertificate& WithStatus(LoadBalancerTlsCertificateStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name for your SSL/TLS certificate.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    LoadBalancerTlsCertificate& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of LoadBalancerTlsCertificateDomainValidationRecord objects
     * describing the records.</p>
     */
    inline const Aws::Vector<LoadBalancerTlsCertificateDomainValidationRecord>& GetDomainValidationRecords() const { return m_domainValidationRecords; }
    inline bool DomainValidationRecordsHasBeenSet() const { return m_domainValidationRecordsHasBeenSet; }
    template<typename DomainValidationRecordsT = Aws::Vector<LoadBalancerTlsCertificateDomainValidationRecord>>
    void SetDomainValidationRecords(DomainValidationRecordsT&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords = std::forward<DomainValidationRecordsT>(value); }
    template<typename DomainValidationRecordsT = Aws::Vector<LoadBalancerTlsCertificateDomainValidationRecord>>
    LoadBalancerTlsCertificate& WithDomainValidationRecords(DomainValidationRecordsT&& value) { SetDomainValidationRecords(std::forward<DomainValidationRecordsT>(value)); return *this;}
    template<typename DomainValidationRecordsT = LoadBalancerTlsCertificateDomainValidationRecord>
    LoadBalancerTlsCertificate& AddDomainValidationRecords(DomainValidationRecordsT&& value) { m_domainValidationRecordsHasBeenSet = true; m_domainValidationRecords.emplace_back(std::forward<DomainValidationRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The validation failure reason, if any, of the certificate.</p> <p>The
     * following failure reasons are possible:</p> <ul> <li> <p> <b>
     * <code>NO_AVAILABLE_CONTACTS</code> </b> - This failure applies to email
     * validation, which is not available for Lightsail certificates.</p> </li> <li>
     * <p> <b> <code>ADDITIONAL_VERIFICATION_REQUIRED</code> </b> - Lightsail requires
     * additional information to process this certificate request. This can happen as a
     * fraud-protection measure, such as when the domain ranks within the Alexa top
     * 1000 websites. To provide the required information, use the <a
     * href="https://console.aws.amazon.com/support/home">AWS Support Center</a> to
     * contact AWS Support.</p>  <p>You cannot request a certificate for
     * Amazon-owned domain names such as those ending in amazonaws.com, cloudfront.net,
     * or elasticbeanstalk.com.</p>  </li> <li> <p> <b>
     * <code>DOMAIN_NOT_ALLOWED</code> </b> - One or more of the domain names in the
     * certificate request was reported as an unsafe domain by <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a>. To correct the
     * problem, search for your domain name on the <a
     * href="https://www.virustotal.com/gui/home/url">VirusTotal</a> website. If your
     * domain is reported as suspicious, see <a
     * href="https://developers.google.com/web/fundamentals/security/hacked">Google
     * Help for Hacked Websites</a> to learn what you can do.</p> <p>If you believe
     * that the result is a false positive, notify the organization that is reporting
     * the domain. VirusTotal is an aggregate of several antivirus and URL scanners and
     * cannot remove your domain from a block list itself. After you correct the
     * problem and the VirusTotal registry has been updated, request a new
     * certificate.</p> <p>If you see this error and your domain is not included in the
     * VirusTotal list, visit the <a
     * href="https://console.aws.amazon.com/support/home">AWS Support Center</a> and
     * create a case.</p> </li> <li> <p> <b> <code>INVALID_PUBLIC_DOMAIN</code> </b> -
     * One or more of the domain names in the certificate request is not valid.
     * Typically, this is because a domain name in the request is not a valid top-level
     * domain. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request, and ensure that all domain names in the
     * request are for valid top-level domains. For example, you cannot request a
     * certificate for <code>example.invalidpublicdomain</code> because
     * <code>invalidpublicdomain</code> is not a valid top-level domain.</p> </li> <li>
     * <p> <b> <code>OTHER</code> </b> - Typically, this failure occurs when there is a
     * typographical error in one or more of the domain names in the certificate
     * request. Try to request a certificate again, correcting any spelling errors or
     * typos that were in the failed request. </p> </li> </ul>
     */
    inline LoadBalancerTlsCertificateFailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(LoadBalancerTlsCertificateFailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline LoadBalancerTlsCertificate& WithFailureReason(LoadBalancerTlsCertificateFailureReason value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the SSL/TLS certificate was issued.</p>
     */
    inline const Aws::Utils::DateTime& GetIssuedAt() const { return m_issuedAt; }
    inline bool IssuedAtHasBeenSet() const { return m_issuedAtHasBeenSet; }
    template<typename IssuedAtT = Aws::Utils::DateTime>
    void SetIssuedAt(IssuedAtT&& value) { m_issuedAtHasBeenSet = true; m_issuedAt = std::forward<IssuedAtT>(value); }
    template<typename IssuedAtT = Aws::Utils::DateTime>
    LoadBalancerTlsCertificate& WithIssuedAt(IssuedAtT&& value) { SetIssuedAt(std::forward<IssuedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer of the certificate.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    LoadBalancerTlsCertificate& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to generate the key pair (the public and private key).</p>
     */
    inline const Aws::String& GetKeyAlgorithm() const { return m_keyAlgorithm; }
    inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
    template<typename KeyAlgorithmT = Aws::String>
    void SetKeyAlgorithm(KeyAlgorithmT&& value) { m_keyAlgorithmHasBeenSet = true; m_keyAlgorithm = std::forward<KeyAlgorithmT>(value); }
    template<typename KeyAlgorithmT = Aws::String>
    LoadBalancerTlsCertificate& WithKeyAlgorithm(KeyAlgorithmT&& value) { SetKeyAlgorithm(std::forward<KeyAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the SSL/TLS certificate expires.</p>
     */
    inline const Aws::Utils::DateTime& GetNotAfter() const { return m_notAfter; }
    inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
    template<typename NotAfterT = Aws::Utils::DateTime>
    void SetNotAfter(NotAfterT&& value) { m_notAfterHasBeenSet = true; m_notAfter = std::forward<NotAfterT>(value); }
    template<typename NotAfterT = Aws::Utils::DateTime>
    LoadBalancerTlsCertificate& WithNotAfter(NotAfterT&& value) { SetNotAfter(std::forward<NotAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the SSL/TLS certificate is first valid.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    LoadBalancerTlsCertificate& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes the status of the certificate renewal managed by
     * Lightsail.</p>
     */
    inline const LoadBalancerTlsCertificateRenewalSummary& GetRenewalSummary() const { return m_renewalSummary; }
    inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }
    template<typename RenewalSummaryT = LoadBalancerTlsCertificateRenewalSummary>
    void SetRenewalSummary(RenewalSummaryT&& value) { m_renewalSummaryHasBeenSet = true; m_renewalSummary = std::forward<RenewalSummaryT>(value); }
    template<typename RenewalSummaryT = LoadBalancerTlsCertificateRenewalSummary>
    LoadBalancerTlsCertificate& WithRenewalSummary(RenewalSummaryT&& value) { SetRenewalSummary(std::forward<RenewalSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the certificate was revoked. This value is present only when the
     * certificate status is <code>REVOKED</code>.</p>
     */
    inline LoadBalancerTlsCertificateRevocationReason GetRevocationReason() const { return m_revocationReason; }
    inline bool RevocationReasonHasBeenSet() const { return m_revocationReasonHasBeenSet; }
    inline void SetRevocationReason(LoadBalancerTlsCertificateRevocationReason value) { m_revocationReasonHasBeenSet = true; m_revocationReason = value; }
    inline LoadBalancerTlsCertificate& WithRevocationReason(LoadBalancerTlsCertificateRevocationReason value) { SetRevocationReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the certificate was revoked. This value is present only
     * when the certificate status is <code>REVOKED</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRevokedAt() const { return m_revokedAt; }
    inline bool RevokedAtHasBeenSet() const { return m_revokedAtHasBeenSet; }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    void SetRevokedAt(RevokedAtT&& value) { m_revokedAtHasBeenSet = true; m_revokedAt = std::forward<RevokedAtT>(value); }
    template<typename RevokedAtT = Aws::Utils::DateTime>
    LoadBalancerTlsCertificate& WithRevokedAt(RevokedAtT&& value) { SetRevokedAt(std::forward<RevokedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetSerial() const { return m_serial; }
    inline bool SerialHasBeenSet() const { return m_serialHasBeenSet; }
    template<typename SerialT = Aws::String>
    void SetSerial(SerialT&& value) { m_serialHasBeenSet = true; m_serial = std::forward<SerialT>(value); }
    template<typename SerialT = Aws::String>
    LoadBalancerTlsCertificate& WithSerial(SerialT&& value) { SetSerial(std::forward<SerialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm that was used to sign the certificate.</p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const { return m_signatureAlgorithm; }
    inline bool SignatureAlgorithmHasBeenSet() const { return m_signatureAlgorithmHasBeenSet; }
    template<typename SignatureAlgorithmT = Aws::String>
    void SetSignatureAlgorithm(SignatureAlgorithmT&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::forward<SignatureAlgorithmT>(value); }
    template<typename SignatureAlgorithmT = Aws::String>
    LoadBalancerTlsCertificate& WithSignatureAlgorithm(SignatureAlgorithmT&& value) { SetSignatureAlgorithm(std::forward<SignatureAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity that is associated with the public key contained in
     * the certificate.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    LoadBalancerTlsCertificate& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of strings that specify the alternate domains
     * (<code>example2.com</code>) and subdomains (<code>blog.example.com</code>) for
     * the certificate.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubjectAlternativeNames() const { return m_subjectAlternativeNames; }
    inline bool SubjectAlternativeNamesHasBeenSet() const { return m_subjectAlternativeNamesHasBeenSet; }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    void SetSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames = std::forward<SubjectAlternativeNamesT>(value); }
    template<typename SubjectAlternativeNamesT = Aws::Vector<Aws::String>>
    LoadBalancerTlsCertificate& WithSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { SetSubjectAlternativeNames(std::forward<SubjectAlternativeNamesT>(value)); return *this;}
    template<typename SubjectAlternativeNamesT = Aws::String>
    LoadBalancerTlsCertificate& AddSubjectAlternativeNames(SubjectAlternativeNamesT&& value) { m_subjectAlternativeNamesHasBeenSet = true; m_subjectAlternativeNames.emplace_back(std::forward<SubjectAlternativeNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_supportCode;
    bool m_supportCodeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    ResourceLocation m_location;
    bool m_locationHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    bool m_isAttached{false};
    bool m_isAttachedHasBeenSet = false;

    LoadBalancerTlsCertificateStatus m_status{LoadBalancerTlsCertificateStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<LoadBalancerTlsCertificateDomainValidationRecord> m_domainValidationRecords;
    bool m_domainValidationRecordsHasBeenSet = false;

    LoadBalancerTlsCertificateFailureReason m_failureReason{LoadBalancerTlsCertificateFailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_issuedAt{};
    bool m_issuedAtHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_keyAlgorithm;
    bool m_keyAlgorithmHasBeenSet = false;

    Aws::Utils::DateTime m_notAfter{};
    bool m_notAfterHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;

    LoadBalancerTlsCertificateRenewalSummary m_renewalSummary;
    bool m_renewalSummaryHasBeenSet = false;

    LoadBalancerTlsCertificateRevocationReason m_revocationReason{LoadBalancerTlsCertificateRevocationReason::NOT_SET};
    bool m_revocationReasonHasBeenSet = false;

    Aws::Utils::DateTime m_revokedAt{};
    bool m_revokedAtHasBeenSet = false;

    Aws::String m_serial;
    bool m_serialHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Vector<Aws::String> m_subjectAlternativeNames;
    bool m_subjectAlternativeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
