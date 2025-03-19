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
    AWS_ACMPCA_API ASN1Subject() = default;
    AWS_ACMPCA_API ASN1Subject(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API ASN1Subject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACMPCA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Two-digit code that specifies the country in which the certificate subject
     * located.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    ASN1Subject& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Legal name of the organization with which the certificate subject is
     * affiliated. </p>
     */
    inline const Aws::String& GetOrganization() const { return m_organization; }
    inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
    template<typename OrganizationT = Aws::String>
    void SetOrganization(OrganizationT&& value) { m_organizationHasBeenSet = true; m_organization = std::forward<OrganizationT>(value); }
    template<typename OrganizationT = Aws::String>
    ASN1Subject& WithOrganization(OrganizationT&& value) { SetOrganization(std::forward<OrganizationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A subdivision or unit of the organization (such as sales or finance) with
     * which the certificate subject is affiliated.</p>
     */
    inline const Aws::String& GetOrganizationalUnit() const { return m_organizationalUnit; }
    inline bool OrganizationalUnitHasBeenSet() const { return m_organizationalUnitHasBeenSet; }
    template<typename OrganizationalUnitT = Aws::String>
    void SetOrganizationalUnit(OrganizationalUnitT&& value) { m_organizationalUnitHasBeenSet = true; m_organizationalUnit = std::forward<OrganizationalUnitT>(value); }
    template<typename OrganizationalUnitT = Aws::String>
    ASN1Subject& WithOrganizationalUnit(OrganizationalUnitT&& value) { SetOrganizationalUnit(std::forward<OrganizationalUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disambiguating information for the certificate subject.</p>
     */
    inline const Aws::String& GetDistinguishedNameQualifier() const { return m_distinguishedNameQualifier; }
    inline bool DistinguishedNameQualifierHasBeenSet() const { return m_distinguishedNameQualifierHasBeenSet; }
    template<typename DistinguishedNameQualifierT = Aws::String>
    void SetDistinguishedNameQualifier(DistinguishedNameQualifierT&& value) { m_distinguishedNameQualifierHasBeenSet = true; m_distinguishedNameQualifier = std::forward<DistinguishedNameQualifierT>(value); }
    template<typename DistinguishedNameQualifierT = Aws::String>
    ASN1Subject& WithDistinguishedNameQualifier(DistinguishedNameQualifierT&& value) { SetDistinguishedNameQualifier(std::forward<DistinguishedNameQualifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State in which the subject of the certificate is located.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ASN1Subject& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For CA and end-entity certificates in a private PKI, the common name (CN) can
     * be any string within the length limit. </p> <p>Note: In publicly trusted
     * certificates, the common name must be a fully qualified domain name (FQDN)
     * associated with the certificate subject.</p>
     */
    inline const Aws::String& GetCommonName() const { return m_commonName; }
    inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
    template<typename CommonNameT = Aws::String>
    void SetCommonName(CommonNameT&& value) { m_commonNameHasBeenSet = true; m_commonName = std::forward<CommonNameT>(value); }
    template<typename CommonNameT = Aws::String>
    ASN1Subject& WithCommonName(CommonNameT&& value) { SetCommonName(std::forward<CommonNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate serial number.</p>
     */
    inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
    template<typename SerialNumberT = Aws::String>
    void SetSerialNumber(SerialNumberT&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::forward<SerialNumberT>(value); }
    template<typename SerialNumberT = Aws::String>
    ASN1Subject& WithSerialNumber(SerialNumberT&& value) { SetSerialNumber(std::forward<SerialNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The locality (such as a city or town) in which the certificate subject is
     * located.</p>
     */
    inline const Aws::String& GetLocality() const { return m_locality; }
    inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
    template<typename LocalityT = Aws::String>
    void SetLocality(LocalityT&& value) { m_localityHasBeenSet = true; m_locality = std::forward<LocalityT>(value); }
    template<typename LocalityT = Aws::String>
    ASN1Subject& WithLocality(LocalityT&& value) { SetLocality(std::forward<LocalityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A title such as Mr. or Ms., which is pre-pended to the name to refer formally
     * to the certificate subject.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ASN1Subject& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Family name. In the US and the UK, for example, the surname of an individual
     * is ordered last. In Asian cultures the surname is typically ordered first.</p>
     */
    inline const Aws::String& GetSurname() const { return m_surname; }
    inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
    template<typename SurnameT = Aws::String>
    void SetSurname(SurnameT&& value) { m_surnameHasBeenSet = true; m_surname = std::forward<SurnameT>(value); }
    template<typename SurnameT = Aws::String>
    ASN1Subject& WithSurname(SurnameT&& value) { SetSurname(std::forward<SurnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>First name.</p>
     */
    inline const Aws::String& GetGivenName() const { return m_givenName; }
    inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
    template<typename GivenNameT = Aws::String>
    void SetGivenName(GivenNameT&& value) { m_givenNameHasBeenSet = true; m_givenName = std::forward<GivenNameT>(value); }
    template<typename GivenNameT = Aws::String>
    ASN1Subject& WithGivenName(GivenNameT&& value) { SetGivenName(std::forward<GivenNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Concatenation that typically contains the first letter of the
     * <b>GivenName</b>, the first letter of the middle name if one exists, and the
     * first letter of the <b>Surname</b>.</p>
     */
    inline const Aws::String& GetInitials() const { return m_initials; }
    inline bool InitialsHasBeenSet() const { return m_initialsHasBeenSet; }
    template<typename InitialsT = Aws::String>
    void SetInitials(InitialsT&& value) { m_initialsHasBeenSet = true; m_initials = std::forward<InitialsT>(value); }
    template<typename InitialsT = Aws::String>
    ASN1Subject& WithInitials(InitialsT&& value) { SetInitials(std::forward<InitialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically a shortened version of a longer <b>GivenName</b>. For example,
     * Jonathan is often shortened to John. Elizabeth is often shortened to Beth, Liz,
     * or Eliza.</p>
     */
    inline const Aws::String& GetPseudonym() const { return m_pseudonym; }
    inline bool PseudonymHasBeenSet() const { return m_pseudonymHasBeenSet; }
    template<typename PseudonymT = Aws::String>
    void SetPseudonym(PseudonymT&& value) { m_pseudonymHasBeenSet = true; m_pseudonym = std::forward<PseudonymT>(value); }
    template<typename PseudonymT = Aws::String>
    ASN1Subject& WithPseudonym(PseudonymT&& value) { SetPseudonym(std::forward<PseudonymT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Typically a qualifier appended to the name of an individual. Examples include
     * Jr. for junior, Sr. for senior, and III for third.</p>
     */
    inline const Aws::String& GetGenerationQualifier() const { return m_generationQualifier; }
    inline bool GenerationQualifierHasBeenSet() const { return m_generationQualifierHasBeenSet; }
    template<typename GenerationQualifierT = Aws::String>
    void SetGenerationQualifier(GenerationQualifierT&& value) { m_generationQualifierHasBeenSet = true; m_generationQualifier = std::forward<GenerationQualifierT>(value); }
    template<typename GenerationQualifierT = Aws::String>
    ASN1Subject& WithGenerationQualifier(GenerationQualifierT&& value) { SetGenerationQualifier(std::forward<GenerationQualifierT>(value)); return *this;}
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
    inline const Aws::Vector<CustomAttribute>& GetCustomAttributes() const { return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::Vector<CustomAttribute>>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::Vector<CustomAttribute>>
    ASN1Subject& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    template<typename CustomAttributesT = CustomAttribute>
    ASN1Subject& AddCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes.emplace_back(std::forward<CustomAttributesT>(value)); return *this; }
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
