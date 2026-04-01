/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CustomAttribute.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Contains X.500 distinguished name information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/DistinguishedName">AWS
 * API Reference</a></p>
 */
class DistinguishedName {
 public:
  AWS_ACM_API DistinguishedName() = default;
  AWS_ACM_API DistinguishedName(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API DistinguishedName& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The common name (CN) attribute.</p>
   */
  inline const Aws::String& GetCommonName() const { return m_commonName; }
  inline bool CommonNameHasBeenSet() const { return m_commonNameHasBeenSet; }
  template <typename CommonNameT = Aws::String>
  void SetCommonName(CommonNameT&& value) {
    m_commonNameHasBeenSet = true;
    m_commonName = std::forward<CommonNameT>(value);
  }
  template <typename CommonNameT = Aws::String>
  DistinguishedName& WithCommonName(CommonNameT&& value) {
    SetCommonName(std::forward<CommonNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain component attributes.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDomainComponents() const { return m_domainComponents; }
  inline bool DomainComponentsHasBeenSet() const { return m_domainComponentsHasBeenSet; }
  template <typename DomainComponentsT = Aws::Vector<Aws::String>>
  void SetDomainComponents(DomainComponentsT&& value) {
    m_domainComponentsHasBeenSet = true;
    m_domainComponents = std::forward<DomainComponentsT>(value);
  }
  template <typename DomainComponentsT = Aws::Vector<Aws::String>>
  DistinguishedName& WithDomainComponents(DomainComponentsT&& value) {
    SetDomainComponents(std::forward<DomainComponentsT>(value));
    return *this;
  }
  template <typename DomainComponentsT = Aws::String>
  DistinguishedName& AddDomainComponents(DomainComponentsT&& value) {
    m_domainComponentsHasBeenSet = true;
    m_domainComponents.emplace_back(std::forward<DomainComponentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The country (C) attribute.</p>
   */
  inline const Aws::String& GetCountry() const { return m_country; }
  inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
  template <typename CountryT = Aws::String>
  void SetCountry(CountryT&& value) {
    m_countryHasBeenSet = true;
    m_country = std::forward<CountryT>(value);
  }
  template <typename CountryT = Aws::String>
  DistinguishedName& WithCountry(CountryT&& value) {
    SetCountry(std::forward<CountryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of custom attributes in the distinguished name. Each custom attribute
   * contains an object identifier (OID) and its corresponding value.</p>
   */
  inline const Aws::Vector<CustomAttribute>& GetCustomAttributes() const { return m_customAttributes; }
  inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
  template <typename CustomAttributesT = Aws::Vector<CustomAttribute>>
  void SetCustomAttributes(CustomAttributesT&& value) {
    m_customAttributesHasBeenSet = true;
    m_customAttributes = std::forward<CustomAttributesT>(value);
  }
  template <typename CustomAttributesT = Aws::Vector<CustomAttribute>>
  DistinguishedName& WithCustomAttributes(CustomAttributesT&& value) {
    SetCustomAttributes(std::forward<CustomAttributesT>(value));
    return *this;
  }
  template <typename CustomAttributesT = CustomAttribute>
  DistinguishedName& AddCustomAttributes(CustomAttributesT&& value) {
    m_customAttributesHasBeenSet = true;
    m_customAttributes.emplace_back(std::forward<CustomAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distinguished name qualifier attribute.</p>
   */
  inline const Aws::String& GetDistinguishedNameQualifier() const { return m_distinguishedNameQualifier; }
  inline bool DistinguishedNameQualifierHasBeenSet() const { return m_distinguishedNameQualifierHasBeenSet; }
  template <typename DistinguishedNameQualifierT = Aws::String>
  void SetDistinguishedNameQualifier(DistinguishedNameQualifierT&& value) {
    m_distinguishedNameQualifierHasBeenSet = true;
    m_distinguishedNameQualifier = std::forward<DistinguishedNameQualifierT>(value);
  }
  template <typename DistinguishedNameQualifierT = Aws::String>
  DistinguishedName& WithDistinguishedNameQualifier(DistinguishedNameQualifierT&& value) {
    SetDistinguishedNameQualifier(std::forward<DistinguishedNameQualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The generation qualifier attribute.</p>
   */
  inline const Aws::String& GetGenerationQualifier() const { return m_generationQualifier; }
  inline bool GenerationQualifierHasBeenSet() const { return m_generationQualifierHasBeenSet; }
  template <typename GenerationQualifierT = Aws::String>
  void SetGenerationQualifier(GenerationQualifierT&& value) {
    m_generationQualifierHasBeenSet = true;
    m_generationQualifier = std::forward<GenerationQualifierT>(value);
  }
  template <typename GenerationQualifierT = Aws::String>
  DistinguishedName& WithGenerationQualifier(GenerationQualifierT&& value) {
    SetGenerationQualifier(std::forward<GenerationQualifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The given name attribute.</p>
   */
  inline const Aws::String& GetGivenName() const { return m_givenName; }
  inline bool GivenNameHasBeenSet() const { return m_givenNameHasBeenSet; }
  template <typename GivenNameT = Aws::String>
  void SetGivenName(GivenNameT&& value) {
    m_givenNameHasBeenSet = true;
    m_givenName = std::forward<GivenNameT>(value);
  }
  template <typename GivenNameT = Aws::String>
  DistinguishedName& WithGivenName(GivenNameT&& value) {
    SetGivenName(std::forward<GivenNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initials attribute.</p>
   */
  inline const Aws::String& GetInitials() const { return m_initials; }
  inline bool InitialsHasBeenSet() const { return m_initialsHasBeenSet; }
  template <typename InitialsT = Aws::String>
  void SetInitials(InitialsT&& value) {
    m_initialsHasBeenSet = true;
    m_initials = std::forward<InitialsT>(value);
  }
  template <typename InitialsT = Aws::String>
  DistinguishedName& WithInitials(InitialsT&& value) {
    SetInitials(std::forward<InitialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The locality (L) attribute.</p>
   */
  inline const Aws::String& GetLocality() const { return m_locality; }
  inline bool LocalityHasBeenSet() const { return m_localityHasBeenSet; }
  template <typename LocalityT = Aws::String>
  void SetLocality(LocalityT&& value) {
    m_localityHasBeenSet = true;
    m_locality = std::forward<LocalityT>(value);
  }
  template <typename LocalityT = Aws::String>
  DistinguishedName& WithLocality(LocalityT&& value) {
    SetLocality(std::forward<LocalityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization (O) attribute.</p>
   */
  inline const Aws::String& GetOrganization() const { return m_organization; }
  inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
  template <typename OrganizationT = Aws::String>
  void SetOrganization(OrganizationT&& value) {
    m_organizationHasBeenSet = true;
    m_organization = std::forward<OrganizationT>(value);
  }
  template <typename OrganizationT = Aws::String>
  DistinguishedName& WithOrganization(OrganizationT&& value) {
    SetOrganization(std::forward<OrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organizational unit (OU) attribute.</p>
   */
  inline const Aws::String& GetOrganizationalUnit() const { return m_organizationalUnit; }
  inline bool OrganizationalUnitHasBeenSet() const { return m_organizationalUnitHasBeenSet; }
  template <typename OrganizationalUnitT = Aws::String>
  void SetOrganizationalUnit(OrganizationalUnitT&& value) {
    m_organizationalUnitHasBeenSet = true;
    m_organizationalUnit = std::forward<OrganizationalUnitT>(value);
  }
  template <typename OrganizationalUnitT = Aws::String>
  DistinguishedName& WithOrganizationalUnit(OrganizationalUnitT&& value) {
    SetOrganizationalUnit(std::forward<OrganizationalUnitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pseudonym attribute.</p>
   */
  inline const Aws::String& GetPseudonym() const { return m_pseudonym; }
  inline bool PseudonymHasBeenSet() const { return m_pseudonymHasBeenSet; }
  template <typename PseudonymT = Aws::String>
  void SetPseudonym(PseudonymT&& value) {
    m_pseudonymHasBeenSet = true;
    m_pseudonym = std::forward<PseudonymT>(value);
  }
  template <typename PseudonymT = Aws::String>
  DistinguishedName& WithPseudonym(PseudonymT&& value) {
    SetPseudonym(std::forward<PseudonymT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The serial number attribute.</p>
   */
  inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
  inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
  template <typename SerialNumberT = Aws::String>
  void SetSerialNumber(SerialNumberT&& value) {
    m_serialNumberHasBeenSet = true;
    m_serialNumber = std::forward<SerialNumberT>(value);
  }
  template <typename SerialNumberT = Aws::String>
  DistinguishedName& WithSerialNumber(SerialNumberT&& value) {
    SetSerialNumber(std::forward<SerialNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state or province (ST) attribute.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  DistinguishedName& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The surname attribute.</p>
   */
  inline const Aws::String& GetSurname() const { return m_surname; }
  inline bool SurnameHasBeenSet() const { return m_surnameHasBeenSet; }
  template <typename SurnameT = Aws::String>
  void SetSurname(SurnameT&& value) {
    m_surnameHasBeenSet = true;
    m_surname = std::forward<SurnameT>(value);
  }
  template <typename SurnameT = Aws::String>
  DistinguishedName& WithSurname(SurnameT&& value) {
    SetSurname(std::forward<SurnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title attribute.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  DistinguishedName& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_commonName;

  Aws::Vector<Aws::String> m_domainComponents;

  Aws::String m_country;

  Aws::Vector<CustomAttribute> m_customAttributes;

  Aws::String m_distinguishedNameQualifier;

  Aws::String m_generationQualifier;

  Aws::String m_givenName;

  Aws::String m_initials;

  Aws::String m_locality;

  Aws::String m_organization;

  Aws::String m_organizationalUnit;

  Aws::String m_pseudonym;

  Aws::String m_serialNumber;

  Aws::String m_state;

  Aws::String m_surname;

  Aws::String m_title;
  bool m_commonNameHasBeenSet = false;
  bool m_domainComponentsHasBeenSet = false;
  bool m_countryHasBeenSet = false;
  bool m_customAttributesHasBeenSet = false;
  bool m_distinguishedNameQualifierHasBeenSet = false;
  bool m_generationQualifierHasBeenSet = false;
  bool m_givenNameHasBeenSet = false;
  bool m_initialsHasBeenSet = false;
  bool m_localityHasBeenSet = false;
  bool m_organizationHasBeenSet = false;
  bool m_organizationalUnitHasBeenSet = false;
  bool m_pseudonymHasBeenSet = false;
  bool m_serialNumberHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_surnameHasBeenSet = false;
  bool m_titleHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
