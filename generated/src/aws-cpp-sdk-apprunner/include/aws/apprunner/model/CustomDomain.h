/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apprunner/model/CustomDomainAssociationStatus.h>
#include <aws/apprunner/model/CertificateValidationRecord.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes a custom domain that's associated with an App Runner
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CustomDomain">AWS
   * API Reference</a></p>
   */
  class CustomDomain
  {
  public:
    AWS_APPRUNNER_API CustomDomain() = default;
    AWS_APPRUNNER_API CustomDomain(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CustomDomain& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An associated custom domain endpoint. It can be a root domain (for example,
     * <code>example.com</code>), a subdomain (for example,
     * <code>login.example.com</code> or <code>admin.login.example.com</code>), or a
     * wildcard (for example, <code>*.example.com</code>).</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    CustomDomain& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, the subdomain <code>www.<i>DomainName</i> </code> is
     * associated with the App Runner service in addition to the base domain.</p>
     */
    inline bool GetEnableWWWSubdomain() const { return m_enableWWWSubdomain; }
    inline bool EnableWWWSubdomainHasBeenSet() const { return m_enableWWWSubdomainHasBeenSet; }
    inline void SetEnableWWWSubdomain(bool value) { m_enableWWWSubdomainHasBeenSet = true; m_enableWWWSubdomain = value; }
    inline CustomDomain& WithEnableWWWSubdomain(bool value) { SetEnableWWWSubdomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of certificate CNAME records that's used for this domain name.</p>
     */
    inline const Aws::Vector<CertificateValidationRecord>& GetCertificateValidationRecords() const { return m_certificateValidationRecords; }
    inline bool CertificateValidationRecordsHasBeenSet() const { return m_certificateValidationRecordsHasBeenSet; }
    template<typename CertificateValidationRecordsT = Aws::Vector<CertificateValidationRecord>>
    void SetCertificateValidationRecords(CertificateValidationRecordsT&& value) { m_certificateValidationRecordsHasBeenSet = true; m_certificateValidationRecords = std::forward<CertificateValidationRecordsT>(value); }
    template<typename CertificateValidationRecordsT = Aws::Vector<CertificateValidationRecord>>
    CustomDomain& WithCertificateValidationRecords(CertificateValidationRecordsT&& value) { SetCertificateValidationRecords(std::forward<CertificateValidationRecordsT>(value)); return *this;}
    template<typename CertificateValidationRecordsT = CertificateValidationRecord>
    CustomDomain& AddCertificateValidationRecords(CertificateValidationRecordsT&& value) { m_certificateValidationRecordsHasBeenSet = true; m_certificateValidationRecords.emplace_back(std::forward<CertificateValidationRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current state of the domain name association.</p>
     */
    inline CustomDomainAssociationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CustomDomainAssociationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CustomDomain& WithStatus(CustomDomainAssociationStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_enableWWWSubdomain{false};
    bool m_enableWWWSubdomainHasBeenSet = false;

    Aws::Vector<CertificateValidationRecord> m_certificateValidationRecords;
    bool m_certificateValidationRecordsHasBeenSet = false;

    CustomDomainAssociationStatus m_status{CustomDomainAssociationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
