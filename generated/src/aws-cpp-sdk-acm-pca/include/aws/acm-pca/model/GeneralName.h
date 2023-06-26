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
    AWS_ACMPCA_API GeneralName();
    AWS_ACMPCA_API GeneralName(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API GeneralName& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline const OtherName& GetOtherName() const{ return m_otherName; }

    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline bool OtherNameHasBeenSet() const { return m_otherNameHasBeenSet; }

    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline void SetOtherName(const OtherName& value) { m_otherNameHasBeenSet = true; m_otherName = value; }

    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline void SetOtherName(OtherName&& value) { m_otherNameHasBeenSet = true; m_otherName = std::move(value); }

    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline GeneralName& WithOtherName(const OtherName& value) { SetOtherName(value); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> using an <code>OtherName</code>
     * object.</p>
     */
    inline GeneralName& WithOtherName(OtherName&& value) { SetOtherName(std::move(value)); return *this;}


    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline const Aws::String& GetRfc822Name() const{ return m_rfc822Name; }

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline bool Rfc822NameHasBeenSet() const { return m_rfc822NameHasBeenSet; }

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline void SetRfc822Name(const Aws::String& value) { m_rfc822NameHasBeenSet = true; m_rfc822Name = value; }

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline void SetRfc822Name(Aws::String&& value) { m_rfc822NameHasBeenSet = true; m_rfc822Name = std::move(value); }

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline void SetRfc822Name(const char* value) { m_rfc822NameHasBeenSet = true; m_rfc822Name.assign(value); }

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline GeneralName& WithRfc822Name(const Aws::String& value) { SetRfc822Name(value); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline GeneralName& WithRfc822Name(Aws::String&& value) { SetRfc822Name(std::move(value)); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as an <a
     * href="https://datatracker.ietf.org/doc/html/rfc822">RFC 822</a> email
     * address.</p>
     */
    inline GeneralName& WithRfc822Name(const char* value) { SetRfc822Name(value); return *this;}


    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline GeneralName& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline GeneralName& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as a DNS name.</p>
     */
    inline GeneralName& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    
    inline const ASN1Subject& GetDirectoryName() const{ return m_directoryName; }

    
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }

    
    inline void SetDirectoryName(const ASN1Subject& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    
    inline void SetDirectoryName(ASN1Subject&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    
    inline GeneralName& WithDirectoryName(const ASN1Subject& value) { SetDirectoryName(value); return *this;}

    
    inline GeneralName& WithDirectoryName(ASN1Subject&& value) { SetDirectoryName(std::move(value)); return *this;}


    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline const EdiPartyName& GetEdiPartyName() const{ return m_ediPartyName; }

    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline bool EdiPartyNameHasBeenSet() const { return m_ediPartyNameHasBeenSet; }

    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline void SetEdiPartyName(const EdiPartyName& value) { m_ediPartyNameHasBeenSet = true; m_ediPartyName = value; }

    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline void SetEdiPartyName(EdiPartyName&& value) { m_ediPartyNameHasBeenSet = true; m_ediPartyName = std::move(value); }

    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline GeneralName& WithEdiPartyName(const EdiPartyName& value) { SetEdiPartyName(value); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as an <code>EdiPartyName</code>
     * object.</p>
     */
    inline GeneralName& WithEdiPartyName(EdiPartyName&& value) { SetEdiPartyName(std::move(value)); return *this;}


    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline const Aws::String& GetUniformResourceIdentifier() const{ return m_uniformResourceIdentifier; }

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline bool UniformResourceIdentifierHasBeenSet() const { return m_uniformResourceIdentifierHasBeenSet; }

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline void SetUniformResourceIdentifier(const Aws::String& value) { m_uniformResourceIdentifierHasBeenSet = true; m_uniformResourceIdentifier = value; }

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline void SetUniformResourceIdentifier(Aws::String&& value) { m_uniformResourceIdentifierHasBeenSet = true; m_uniformResourceIdentifier = std::move(value); }

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline void SetUniformResourceIdentifier(const char* value) { m_uniformResourceIdentifierHasBeenSet = true; m_uniformResourceIdentifier.assign(value); }

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline GeneralName& WithUniformResourceIdentifier(const Aws::String& value) { SetUniformResourceIdentifier(value); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline GeneralName& WithUniformResourceIdentifier(Aws::String&& value) { SetUniformResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as a URI.</p>
     */
    inline GeneralName& WithUniformResourceIdentifier(const char* value) { SetUniformResourceIdentifier(value); return *this;}


    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline GeneralName& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline GeneralName& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>Represents <code>GeneralName</code> as an IPv4 or IPv6 address.</p>
     */
    inline GeneralName& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline const Aws::String& GetRegisteredId() const{ return m_registeredId; }

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline bool RegisteredIdHasBeenSet() const { return m_registeredIdHasBeenSet; }

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline void SetRegisteredId(const Aws::String& value) { m_registeredIdHasBeenSet = true; m_registeredId = value; }

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline void SetRegisteredId(Aws::String&& value) { m_registeredIdHasBeenSet = true; m_registeredId = std::move(value); }

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline void SetRegisteredId(const char* value) { m_registeredIdHasBeenSet = true; m_registeredId.assign(value); }

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline GeneralName& WithRegisteredId(const Aws::String& value) { SetRegisteredId(value); return *this;}

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline GeneralName& WithRegisteredId(Aws::String&& value) { SetRegisteredId(std::move(value)); return *this;}

    /**
     * <p> Represents <code>GeneralName</code> as an object identifier (OID).</p>
     */
    inline GeneralName& WithRegisteredId(const char* value) { SetRegisteredId(value); return *this;}

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
