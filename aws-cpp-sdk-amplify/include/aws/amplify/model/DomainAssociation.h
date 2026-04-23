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
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/DomainStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Structure for Domain Association, which associates a custom domain with an
   * Amplify App. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/DomainAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_AMPLIFY_API DomainAssociation
  {
  public:
    DomainAssociation();
    DomainAssociation(Aws::Utils::Json::JsonView jsonValue);
    DomainAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline const Aws::String& GetDomainAssociationArn() const{ return m_domainAssociationArn; }

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline bool DomainAssociationArnHasBeenSet() const { return m_domainAssociationArnHasBeenSet; }

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline void SetDomainAssociationArn(const Aws::String& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = value; }

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline void SetDomainAssociationArn(Aws::String&& value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn = std::move(value); }

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline void SetDomainAssociationArn(const char* value) { m_domainAssociationArnHasBeenSet = true; m_domainAssociationArn.assign(value); }

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline DomainAssociation& WithDomainAssociationArn(const Aws::String& value) { SetDomainAssociationArn(value); return *this;}

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline DomainAssociation& WithDomainAssociationArn(Aws::String&& value) { SetDomainAssociationArn(std::move(value)); return *this;}

    /**
     * <p> ARN for the Domain Association. </p>
     */
    inline DomainAssociation& WithDomainAssociationArn(const char* value) { SetDomainAssociationArn(value); return *this;}


    /**
     * <p> Name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Name of the domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Name of the domain. </p>
     */
    inline DomainAssociation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Name of the domain. </p>
     */
    inline DomainAssociation& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> Name of the domain. </p>
     */
    inline DomainAssociation& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline bool GetEnableAutoSubDomain() const{ return m_enableAutoSubDomain; }

    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline bool EnableAutoSubDomainHasBeenSet() const { return m_enableAutoSubDomainHasBeenSet; }

    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline void SetEnableAutoSubDomain(bool value) { m_enableAutoSubDomainHasBeenSet = true; m_enableAutoSubDomain = value; }

    /**
     * <p> Enables automated creation of Subdomains for branches. </p>
     */
    inline DomainAssociation& WithEnableAutoSubDomain(bool value) { SetEnableAutoSubDomain(value); return *this;}


    /**
     * <p> Status fo the Domain Association. </p>
     */
    inline const DomainStatus& GetDomainStatus() const{ return m_domainStatus; }

    /**
     * <p> Status fo the Domain Association. </p>
     */
    inline bool DomainStatusHasBeenSet() const { return m_domainStatusHasBeenSet; }

    /**
     * <p> Status fo the Domain Association. </p>
     */
    inline void SetDomainStatus(const DomainStatus& value) { m_domainStatusHasBeenSet = true; m_domainStatus = value; }

    /**
     * <p> Status fo the Domain Association. </p>
     */
    inline void SetDomainStatus(DomainStatus&& value) { m_domainStatusHasBeenSet = true; m_domainStatus = std::move(value); }

    /**
     * <p> Status fo the Domain Association. </p>
     */
    inline DomainAssociation& WithDomainStatus(const DomainStatus& value) { SetDomainStatus(value); return *this;}

    /**
     * <p> Status fo the Domain Association. </p>
     */
    inline DomainAssociation& WithDomainStatus(DomainStatus&& value) { SetDomainStatus(std::move(value)); return *this;}


    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline DomainAssociation& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline DomainAssociation& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p> Reason for the current status of the Domain Association. </p>
     */
    inline DomainAssociation& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline const Aws::String& GetCertificateVerificationDNSRecord() const{ return m_certificateVerificationDNSRecord; }

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline bool CertificateVerificationDNSRecordHasBeenSet() const { return m_certificateVerificationDNSRecordHasBeenSet; }

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline void SetCertificateVerificationDNSRecord(const Aws::String& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = value; }

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline void SetCertificateVerificationDNSRecord(Aws::String&& value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord = std::move(value); }

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline void SetCertificateVerificationDNSRecord(const char* value) { m_certificateVerificationDNSRecordHasBeenSet = true; m_certificateVerificationDNSRecord.assign(value); }

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline DomainAssociation& WithCertificateVerificationDNSRecord(const Aws::String& value) { SetCertificateVerificationDNSRecord(value); return *this;}

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline DomainAssociation& WithCertificateVerificationDNSRecord(Aws::String&& value) { SetCertificateVerificationDNSRecord(std::move(value)); return *this;}

    /**
     * <p> DNS Record for certificate verification. </p>
     */
    inline DomainAssociation& WithCertificateVerificationDNSRecord(const char* value) { SetCertificateVerificationDNSRecord(value); return *this;}


    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline const Aws::Vector<SubDomain>& GetSubDomains() const{ return m_subDomains; }

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline bool SubDomainsHasBeenSet() const { return m_subDomainsHasBeenSet; }

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline void SetSubDomains(const Aws::Vector<SubDomain>& value) { m_subDomainsHasBeenSet = true; m_subDomains = value; }

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline void SetSubDomains(Aws::Vector<SubDomain>&& value) { m_subDomainsHasBeenSet = true; m_subDomains = std::move(value); }

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline DomainAssociation& WithSubDomains(const Aws::Vector<SubDomain>& value) { SetSubDomains(value); return *this;}

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline DomainAssociation& WithSubDomains(Aws::Vector<SubDomain>&& value) { SetSubDomains(std::move(value)); return *this;}

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline DomainAssociation& AddSubDomains(const SubDomain& value) { m_subDomainsHasBeenSet = true; m_subDomains.push_back(value); return *this; }

    /**
     * <p> Subdomains for the Domain Association. </p>
     */
    inline DomainAssociation& AddSubDomains(SubDomain&& value) { m_subDomainsHasBeenSet = true; m_subDomains.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_domainAssociationArn;
    bool m_domainAssociationArnHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    bool m_enableAutoSubDomain;
    bool m_enableAutoSubDomainHasBeenSet;

    DomainStatus m_domainStatus;
    bool m_domainStatusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    Aws::String m_certificateVerificationDNSRecord;
    bool m_certificateVerificationDNSRecordHasBeenSet;

    Aws::Vector<SubDomain> m_subDomains;
    bool m_subDomainsHasBeenSet;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
