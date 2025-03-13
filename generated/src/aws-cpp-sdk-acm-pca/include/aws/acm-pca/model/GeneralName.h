/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/OtherName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/acm-pca/model/ASN1Subject.h>
#include <aws/acm-pca/model/EdiPartyName.h>
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
namespace ACMPCA
{
namespace Model
{

  /**
   * <p>Describes an ASN.1 X.400 <code>GeneralName</code> as defined in <a
   * href="https://datatracker.ietf.org/doc/html/rfc5280">RFC 5280</a>. Only one of
   * the following naming options should be provided. Providing more than one option
   * results in an <code>InvalidArgsException</code> error.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/GeneralName">AWS
   * API Reference</a></p>
   */
  class GeneralName
  {
  public:
    AWS_ACMPCA_API GeneralName() = default;
    AWS_ACMPCA_API GeneralName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API GeneralName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline const OtherName& GetOtherName() const { return m_otherName; }
    inline bool OtherNameHasBeenSet() const { return m_otherNameHasBeenSet; }
    template<typename OtherNameT = OtherName>
    void SetOtherName(OtherNameT&& value) { m_otherNameHasBeenSet = true; m_otherName = std::forward<OtherNameT>(value); }
    template<typename OtherNameT = OtherName>
    GeneralName& WithOtherName(OtherNameT&& value) { SetOtherName(std::forward<OtherNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline const Aws::String& GetRfc822Name() const { return m_rfc822Name; }
    inline bool Rfc822NameHasBeenSet() const { return m_rfc822NameHasBeenSet; }
    template<typename Rfc822NameT = Aws::String>
    void SetRfc822Name(Rfc822NameT&& value) { m_rfc822NameHasBeenSet = true; m_rfc822Name = std::forward<Rfc822NameT>(value); }
    template<typename Rfc822NameT = Aws::String>
    GeneralName& WithRfc822Name(Rfc822NameT&& value) { SetRfc822Name(std::forward<Rfc822NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    GeneralName& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ASN1Subject& GetDirectoryName() const { return m_directoryName; }
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
    template<typename DirectoryNameT = ASN1Subject>
    void SetDirectoryName(DirectoryNameT&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::forward<DirectoryNameT>(value); }
    template<typename DirectoryNameT = ASN1Subject>
    GeneralName& WithDirectoryName(DirectoryNameT&& value) { SetDirectoryName(std::forward<DirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline const EdiPartyName& GetEdiPartyName() const { return m_ediPartyName; }
    inline bool EdiPartyNameHasBeenSet() const { return m_ediPartyNameHasBeenSet; }
    template<typename EdiPartyNameT = EdiPartyName>
    void SetEdiPartyName(EdiPartyNameT&& value) { m_ediPartyNameHasBeenSet = true; m_ediPartyName = std::forward<EdiPartyNameT>(value); }
    template<typename EdiPartyNameT = EdiPartyName>
    GeneralName& WithEdiPartyName(EdiPartyNameT&& value) { SetEdiPartyName(std::forward<EdiPartyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline const Aws::String& GetUniformResourceIdentifier() const { return m_uniformResourceIdentifier; }
    inline bool UniformResourceIdentifierHasBeenSet() const { return m_uniformResourceIdentifierHasBeenSet; }
    template<typename UniformResourceIdentifierT = Aws::String>
    void SetUniformResourceIdentifier(UniformResourceIdentifierT&& value) { m_uniformResourceIdentifierHasBeenSet = true; m_uniformResourceIdentifier = std::forward<UniformResourceIdentifierT>(value); }
    template<typename UniformResourceIdentifierT = Aws::String>
    GeneralName& WithUniformResourceIdentifier(UniformResourceIdentifierT&& value) { SetUniformResourceIdentifier(std::forward<UniformResourceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    GeneralName& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline const Aws::String& GetRegisteredId() const { return m_registeredId; }
    inline bool RegisteredIdHasBeenSet() const { return m_registeredIdHasBeenSet; }
    template<typename RegisteredIdT = Aws::String>
    void SetRegisteredId(RegisteredIdT&& value) { m_registeredIdHasBeenSet = true; m_registeredId = std::forward<RegisteredIdT>(value); }
    template<typename RegisteredIdT = Aws::String>
    GeneralName& WithRegisteredId(RegisteredIdT&& value) { SetRegisteredId(std::forward<RegisteredIdT>(value)); return *this;}
    ///@}
  private:

    OtherName m_otherName;
    bool m_otherNameHasBeenSet = false;

    Aws::String m_rfc822Name;
    bool m_rfc822NameHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    ASN1Subject m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    EdiPartyName m_ediPartyName;
    bool m_ediPartyNameHasBeenSet = false;

    Aws::String m_uniformResourceIdentifier;
    bool m_uniformResourceIdentifierHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_registeredId;
    bool m_registeredIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
