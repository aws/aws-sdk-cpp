/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains additional context about activity, such as geolocation and threat
 * intelligence information. Not every member is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Enrichment">AWS
 * API Reference</a></p>
 */
class Enrichment {
 public:
  AWS_GUARDDUTY_API Enrichment() = default;
  AWS_GUARDDUTY_API Enrichment(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Enrichment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the country associated with the activity.</p>
   */
  inline const Aws::String& GetCountryName() const { return m_countryName; }
  inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }
  template <typename CountryNameT = Aws::String>
  void SetCountryName(CountryNameT&& value) {
    m_countryNameHasBeenSet = true;
    m_countryName = std::forward<CountryNameT>(value);
  }
  template <typename CountryNameT = Aws::String>
  Enrichment& WithCountryName(CountryNameT&& value) {
    SetCountryName(std::forward<CountryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the organization that owns the autonomous system number
   * (ASN).</p>
   */
  inline const Aws::String& GetAsnOrg() const { return m_asnOrg; }
  inline bool AsnOrgHasBeenSet() const { return m_asnOrgHasBeenSet; }
  template <typename AsnOrgT = Aws::String>
  void SetAsnOrg(AsnOrgT&& value) {
    m_asnOrgHasBeenSet = true;
    m_asnOrg = std::forward<AsnOrgT>(value);
  }
  template <typename AsnOrgT = Aws::String>
  Enrichment& WithAsnOrg(AsnOrgT&& value) {
    SetAsnOrg(std::forward<AsnOrgT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the threat list that contains the indicator.</p>
   */
  inline const Aws::String& GetThreatListName() const { return m_threatListName; }
  inline bool ThreatListNameHasBeenSet() const { return m_threatListNameHasBeenSet; }
  template <typename ThreatListNameT = Aws::String>
  void SetThreatListName(ThreatListNameT&& value) {
    m_threatListNameHasBeenSet = true;
    m_threatListName = std::forward<ThreatListNameT>(value);
  }
  template <typename ThreatListNameT = Aws::String>
  Enrichment& WithThreatListName(ThreatListNameT&& value) {
    SetThreatListName(std::forward<ThreatListNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the threat.</p>
   */
  inline const Aws::String& GetThreatName() const { return m_threatName; }
  inline bool ThreatNameHasBeenSet() const { return m_threatNameHasBeenSet; }
  template <typename ThreatNameT = Aws::String>
  void SetThreatName(ThreatNameT&& value) {
    m_threatNameHasBeenSet = true;
    m_threatName = std::forward<ThreatNameT>(value);
  }
  template <typename ThreatNameT = Aws::String>
  Enrichment& WithThreatName(ThreatNameT&& value) {
    SetThreatName(std::forward<ThreatNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_countryName;

  Aws::String m_asnOrg;

  Aws::String m_threatListName;

  Aws::String m_threatName;
  bool m_countryNameHasBeenSet = false;
  bool m_asnOrgHasBeenSet = false;
  bool m_threatListNameHasBeenSet = false;
  bool m_threatNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
