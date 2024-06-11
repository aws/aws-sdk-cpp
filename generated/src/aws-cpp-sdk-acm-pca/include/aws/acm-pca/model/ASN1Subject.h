/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/acm-pca/model/CustomAttribute.h>
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
   * <p>Contains information about the certificate subject. The <code>Subject</code>
   * field in the certificate identifies the entity that owns or controls the public
   * key in the certificate. The entity can be a user, computer, device, or service.
   * The <code>Subject </code>must contain an X.500 distinguished name (DN). A DN is
   * a sequence of relative distinguished names (RDNs). The RDNs are separated by
   * commas in the certificate.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/acm-pca-2017-08-22/ASN1Subject">AWS
   * API Reference</a></p>
   */
  class ASN1Subject
  {
  public:
    AWS_ACMPCA_API ASN1Subject();
    AWS_ACMPCA_API ASN1Subject(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API ASN1Subject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Two-digit code that specifies the country in which the certificate subject
     * located.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline ASN1Subject& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline ASN1Subject& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline ASN1Subject& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Legal name of the organization with which the certificate subject is
     * affiliated. </p>
     */
    inline const Aws::String& GetOrganization() const{ return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    inline void SetOrganization(const Aws::String& value) { m_organizationHasBeenSet = true; m_organization = value; }
    inline void SetOrganization(Aws::String&& value) { m_organizationHasBeenSet = true; m_organization = std::move(value); }
    inline void SetOrganization(const char* value) { m_organizationHasBeenSet = true; m_organization.assign(value); }
    inline ASN1Subject& WithOrganization(const Aws::String& value) { SetOrganization(value); return *this;}
    inline ASN1Subject& WithOrganization(Aws::String&& value) { SetOrganization(std::move(value)); return *this;}
    inline ASN1Subject& WithOrganization(const char* value) { SetOrganization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdivision or unit of the organization (such as sales or finance) with
     * which the certificate subject is affiliated.</p>
     */
    inline const Aws::String& GetOrganizationalUnit() const{ return m_organizationalUnit; }
    inline bool OrganizationalUnitHasBeenSet() const { return m_organizationalUnitHasBeenSet; }
    inline void SetOrganizationalUnit(const Aws::String& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = value; }
    inline void SetOrganizationalUnit(Aws::String&& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = std::move(value); }
    inline void SetOrganizationalUnit(const char* value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit.assign(value); }
    inline ASN1Subject& WithOrganizationalUnit(const Aws::String& value) { SetOrganizationalUnit(value); return *this;}
    inline ASN1Subject& WithOrganizationalUnit(Aws::String&& value) { SetOrganizationalUnit(std::move(value)); return *this;}
    inline ASN1Subject& WithOrganizationalUnit(const char* value) { SetOrganizationalUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disambiguating information for the certificate subject.</p>
     */
    inline const Aws::String& GetDistinguishedNameQualifier() const{ return m_distinguishedNameQualifier; }
    inline bool DistinguishedNameQualifierHasBeenSet() const { return m_distinguishedNameQualifierHasBeenSet; }
    inline void SetDistinguishedNameQualifier(const Aws::String& value) { m_distinguishedNameQualifierHasBeenSet = true; m_distinguishedNameQualifier = value; }
    inline void SetDistinguishedNameQualifier(Aws::String&& value) { m_distinguishedNameQualifierHasBeenSet = true; m_distinguishedNameQualifier = std::move(value); }
    inline void SetDistinguishedNameQualifier(const char* value) { m_distinguishedNameQualifierHasBeenSet = true; m_distinguishedNameQualifier.assign(value); }
    inline ASN1Subject& WithDistinguishedNameQualifier(const Aws::String& value) { SetDistinguishedNameQualifier(value); return *this;}
    inline ASN1Subject& WithDistinguishedNameQualifier(Aws::String&& value) { SetDistinguishedNameQualifier(std::move(value)); return *this;}
    inline ASN1Subject& WithDistinguishedNameQualifier(const char* value) { SetDistinguishedNameQualifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>State in which the subject of the certificate is located.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline ASN1Subject& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline ASN1Subject& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline ASN1Subject& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For CA and end-entity certificates in a private PKI, the common name (CN) can
     * be any string within the length limit. </p> <p>Note: In publicly trusted
     * certificates, the common name must be a fully qualified domain name (FQDN)
     * associated with the certificate subject.</p>
     */
    inline const Aws::String& GetCommonName() const{ return m_commonName; }
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
    inline void SetCommonName(const Aws::String& value) { m_commonNameHasBeenSet = true; m_commonName = value; }
    inline void SetCommonName(Aws::String&& value) { m_commonNameHasBeenSet = true; m_commonName = std::move(value); }
    inline void SetCommonName(const char* value) { m_commonNameHasBeenSet = true; m_commonName.assign(value); }
    inline ASN1Subject& WithCommonName(const Aws::String& value) { SetCommonName(value); return *this;}
    inline ASN1Subject& WithCommonName(Aws::String&& value) { SetCommonName(std::move(value)); return *this;}
    inline ASN1Subject& WithCommonName(const char* value) { SetCommonName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate serial number.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }
    inline ASN1Subject& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}
    inline ASN1Subject& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}
    inline ASN1Subject& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locality (such as a city or town) in which the certificate subject is
     * located.</p>
     */
    inline const Aws::String& GetLocality() const{ return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    inline void SetLocality(const Aws::String& value) { m_localityHasBeenSet = true; m_locality = value; }
    inline void SetLocality(Aws::String&& value) { m_localityHasBeenSet = true; m_locality = std::move(value); }
    inline void SetLocality(const char* value) { m_localityHasBeenSet = true; m_locality.assign(value); }
    inline ASN1Subject& WithLocality(const Aws::String& value) { SetLocality(value); return *this;}
    inline ASN1Subject& WithLocality(Aws::String&& value) { SetLocality(std::move(value)); return *this;}
    inline ASN1Subject& WithLocality(const char* value) { SetLocality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title such as Mr. or Ms., which is pre-pended to the name to refer formally
     * to the certificate subject.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline ASN1Subject& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline ASN1Subject& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline ASN1Subject& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Family name. In the US and the UK, for example, the surname of an individual
     * is ordered last. In Asian cultures the surname is typically ordered first.</p>
     */
    inline const Aws::String& GetSurname() const{ return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    inline void SetSurname(const Aws::String& value) { m_surnameHasBeenSet = true; m_surname = value; }
    inline void SetSurname(Aws::String&& value) { m_surnameHasBeenSet = true; m_surname = std::move(value); }
    inline void SetSurname(const char* value) { m_surnameHasBeenSet = true; m_surname.assign(value); }
    inline ASN1Subject& WithSurname(const Aws::String& value) { SetSurname(value); return *this;}
    inline ASN1Subject& WithSurname(Aws::String&& value) { SetSurname(std::move(value)); return *this;}
    inline ASN1Subject& WithSurname(const char* value) { SetSurname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>First name.</p>
     */
    inline const Aws::String& GetGivenName() const{ return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    inline void SetGivenName(const Aws::String& value) { m_givenNameHasBeenSet = true; m_givenName = value; }
    inline void SetGivenName(Aws::String&& value) { m_givenNameHasBeenSet = true; m_givenName = std::move(value); }
    inline void SetGivenName(const char* value) { m_givenNameHasBeenSet = true; m_givenName.assign(value); }
    inline ASN1Subject& WithGivenName(const Aws::String& value) { SetGivenName(value); return *this;}
    inline ASN1Subject& WithGivenName(Aws::String&& value) { SetGivenName(std::move(value)); return *this;}
    inline ASN1Subject& WithGivenName(const char* value) { SetGivenName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Concatenation that typically contains the first letter of the
     * <b>GivenName</b>, the first letter of the middle name if one exists, and the
     * first letter of the <b>Surname</b>.</p>
     */
    inline const Aws::String& GetInitials() const{ return m_initials; }
    inline bool InitialsHasBeenSet() const { return m_initialsHasBeenSet; }
    inline void SetInitials(const Aws::String& value) { m_initialsHasBeenSet = true; m_initials = value; }
    inline void SetInitials(Aws::String&& value) { m_initialsHasBeenSet = true; m_initials = std::move(value); }
    inline void SetInitials(const char* value) { m_initialsHasBeenSet = true; m_initials.assign(value); }
    inline ASN1Subject& WithInitials(const Aws::String& value) { SetInitials(value); return *this;}
    inline ASN1Subject& WithInitials(Aws::String&& value) { SetInitials(std::move(value)); return *this;}
    inline ASN1Subject& WithInitials(const char* value) { SetInitials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically a shortened version of a longer <b>GivenName</b>. For example,
     * Jonathan is often shortened to John. Elizabeth is often shortened to Beth, Liz,
     * or Eliza.</p>
     */
    inline const Aws::String& GetPseudonym() const{ return m_pseudonym; }
    inline bool PseudonymHasBeenSet() const { return m_pseudonymHasBeenSet; }
    inline void SetPseudonym(const Aws::String& value) { m_pseudonymHasBeenSet = true; m_pseudonym = value; }
    inline void SetPseudonym(Aws::String&& value) { m_pseudonymHasBeenSet = true; m_pseudonym = std::move(value); }
    inline void SetPseudonym(const char* value) { m_pseudonymHasBeenSet = true; m_pseudonym.assign(value); }
    inline ASN1Subject& WithPseudonym(const Aws::String& value) { SetPseudonym(value); return *this;}
    inline ASN1Subject& WithPseudonym(Aws::String&& value) { SetPseudonym(std::move(value)); return *this;}
    inline ASN1Subject& WithPseudonym(const char* value) { SetPseudonym(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically a qualifier appended to the name of an individual. Examples include
     * Jr. for junior, Sr. for senior, and III for third.</p>
     */
    inline const Aws::String& GetGenerationQualifier() const{ return m_generationQualifier; }
    inline bool GenerationQualifierHasBeenSet() const { return m_generationQualifierHasBeenSet; }
    inline void SetGenerationQualifier(const Aws::String& value) { m_generationQualifierHasBeenSet = true; m_generationQualifier = value; }
    inline void SetGenerationQualifier(Aws::String&& value) { m_generationQualifierHasBeenSet = true; m_generationQualifier = std::move(value); }
    inline void SetGenerationQualifier(const char* value) { m_generationQualifierHasBeenSet = true; m_generationQualifier.assign(value); }
    inline ASN1Subject& WithGenerationQualifier(const Aws::String& value) { SetGenerationQualifier(value); return *this;}
    inline ASN1Subject& WithGenerationQualifier(Aws::String&& value) { SetGenerationQualifier(std::move(value)); return *this;}
    inline ASN1Subject& WithGenerationQualifier(const char* value) { SetGenerationQualifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/> <p>Contains a sequence of one or more X.500 relative distinguished names
     * (RDNs), each of which consists of an object identifier (OID) and a value. For
     * more information, see NIST’s definition of <a
     * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
     * (OID)</a>.</p>  <p>Custom attributes cannot be used in combination with
     * standard attributes.</p> 
     */
    inline const Aws::Vector<CustomAttribute>& GetCustomAttributes() const{ return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::Vector<CustomAttribute>& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::Vector<CustomAttribute>&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline ASN1Subject& WithCustomAttributes(const Aws::Vector<CustomAttribute>& value) { SetCustomAttributes(value); return *this;}
    inline ASN1Subject& WithCustomAttributes(Aws::Vector<CustomAttribute>&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline ASN1Subject& AddCustomAttributes(const CustomAttribute& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(value); return *this; }
    inline ASN1Subject& AddCustomAttributes(CustomAttribute&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_organization;
    bool m_organizationHasBeenSet = false;

    Aws::String m_organizationalUnit;
    bool m_organizationalUnitHasBeenSet = false;

    Aws::String m_distinguishedNameQualifier;
    bool m_distinguishedNameQualifierHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_commonName;
    bool m_commonNameHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Aws::String m_locality;
    bool m_localityHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_surname;
    bool m_surnameHasBeenSet = false;

    Aws::String m_givenName;
    bool m_givenNameHasBeenSet = false;

    Aws::String m_initials;
    bool m_initialsHasBeenSet = false;

    Aws::String m_pseudonym;
    bool m_pseudonymHasBeenSet = false;

    Aws::String m_generationQualifier;
    bool m_generationQualifierHasBeenSet = false;

    Aws::Vector<CustomAttribute> m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
