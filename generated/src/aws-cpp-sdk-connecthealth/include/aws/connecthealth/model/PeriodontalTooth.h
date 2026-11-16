/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/PeriodontalSite.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>The chart for one tooth.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/PeriodontalTooth">AWS
 * API Reference</a></p>
 */
class PeriodontalTooth {
 public:
  AWS_CONNECTHEALTH_API PeriodontalTooth() = default;
  AWS_CONNECTHEALTH_API PeriodontalTooth(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API PeriodontalTooth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The tooth number in the Universal Numbering System. The value ranges from 1
   * to 32.</p>
   */
  inline int GetToothNumber() const { return m_toothNumber; }
  inline bool ToothNumberHasBeenSet() const { return m_toothNumberHasBeenSet; }
  inline void SetToothNumber(int value) {
    m_toothNumberHasBeenSet = true;
    m_toothNumber = value;
  }
  inline PeriodontalTooth& WithToothNumber(int value) {
    SetToothNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the tooth is missing.</p>
   */
  inline bool GetMissing() const { return m_missing; }
  inline bool MissingHasBeenSet() const { return m_missingHasBeenSet; }
  inline void SetMissing(bool value) {
    m_missingHasBeenSet = true;
    m_missing = value;
  }
  inline PeriodontalTooth& WithMissing(bool value) {
    SetMissing(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tooth mobility grade. The value ranges from 0 to 3.</p>
   */
  inline int GetMobility() const { return m_mobility; }
  inline bool MobilityHasBeenSet() const { return m_mobilityHasBeenSet; }
  inline void SetMobility(int value) {
    m_mobilityHasBeenSet = true;
    m_mobility = value;
  }
  inline PeriodontalTooth& WithMobility(int value) {
    SetMobility(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The furcation involvement class. The value ranges from 0 to 3.</p>
   */
  inline int GetFurcation() const { return m_furcation; }
  inline bool FurcationHasBeenSet() const { return m_furcationHasBeenSet; }
  inline void SetFurcation(int value) {
    m_furcationHasBeenSet = true;
    m_furcation = value;
  }
  inline PeriodontalTooth& WithFurcation(int value) {
    SetFurcation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The probing sites that have a recorded measurement, in the order
   * <code>MB</code>, <code>B</code>, <code>DB</code>, <code>ML</code>,
   * <code>L</code>, <code>DL</code>.</p>
   */
  inline const Aws::Vector<PeriodontalSite>& GetSites() const { return m_sites; }
  inline bool SitesHasBeenSet() const { return m_sitesHasBeenSet; }
  template <typename SitesT = Aws::Vector<PeriodontalSite>>
  void SetSites(SitesT&& value) {
    m_sitesHasBeenSet = true;
    m_sites = std::forward<SitesT>(value);
  }
  template <typename SitesT = Aws::Vector<PeriodontalSite>>
  PeriodontalTooth& WithSites(SitesT&& value) {
    SetSites(std::forward<SitesT>(value));
    return *this;
  }
  template <typename SitesT = PeriodontalSite>
  PeriodontalTooth& AddSites(SitesT&& value) {
    m_sitesHasBeenSet = true;
    m_sites.emplace_back(std::forward<SitesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_toothNumber{0};

  bool m_missing{false};

  int m_mobility{0};

  int m_furcation{0};

  Aws::Vector<PeriodontalSite> m_sites;
  bool m_toothNumberHasBeenSet = false;
  bool m_missingHasBeenSet = false;
  bool m_mobilityHasBeenSet = false;
  bool m_furcationHasBeenSet = false;
  bool m_sitesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
