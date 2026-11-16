/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/PeriodontalSiteName.h>

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
 * <p>The measurements at one probing site of a tooth.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/PeriodontalSite">AWS
 * API Reference</a></p>
 */
class PeriodontalSite {
 public:
  AWS_CONNECTHEALTH_API PeriodontalSite() = default;
  AWS_CONNECTHEALTH_API PeriodontalSite(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API PeriodontalSite& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The probing site. The following values are valid:</p> <ul> <li> <p>
   * <code>DB</code>: Distobuccal.</p> </li> <li> <p> <code>B</code>: Buccal.</p>
   * </li> <li> <p> <code>MB</code>: Mesiobuccal.</p> </li> <li> <p> <code>DL</code>:
   * Distolingual.</p> </li> <li> <p> <code>L</code>: Lingual.</p> </li> <li> <p>
   * <code>ML</code>: Mesiolingual.</p> </li> </ul>
   */
  inline PeriodontalSiteName GetSite() const { return m_site; }
  inline bool SiteHasBeenSet() const { return m_siteHasBeenSet; }
  inline void SetSite(PeriodontalSiteName value) {
    m_siteHasBeenSet = true;
    m_site = value;
  }
  inline PeriodontalSite& WithSite(PeriodontalSiteName value) {
    SetSite(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The probing depth, in millimeters. The value ranges from 0 to 15.</p>
   */
  inline int GetProbingDepth() const { return m_probingDepth; }
  inline bool ProbingDepthHasBeenSet() const { return m_probingDepthHasBeenSet; }
  inline void SetProbingDepth(int value) {
    m_probingDepthHasBeenSet = true;
    m_probingDepth = value;
  }
  inline PeriodontalSite& WithProbingDepth(int value) {
    SetProbingDepth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gingival recession, in millimeters. The value ranges from -5 to 15. For
   * example, <code>-1</code> represents "plus one."</p>
   */
  inline int GetRecession() const { return m_recession; }
  inline bool RecessionHasBeenSet() const { return m_recessionHasBeenSet; }
  inline void SetRecession(int value) {
    m_recessionHasBeenSet = true;
    m_recession = value;
  }
  inline PeriodontalSite& WithRecession(int value) {
    SetRecession(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the site bled during probing.</p>
   */
  inline bool GetBleeding() const { return m_bleeding; }
  inline bool BleedingHasBeenSet() const { return m_bleedingHasBeenSet; }
  inline void SetBleeding(bool value) {
    m_bleedingHasBeenSet = true;
    m_bleeding = value;
  }
  inline PeriodontalSite& WithBleeding(bool value) {
    SetBleeding(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether suppuration was present at the site.</p>
   */
  inline bool GetSuppuration() const { return m_suppuration; }
  inline bool SuppurationHasBeenSet() const { return m_suppurationHasBeenSet; }
  inline void SetSuppuration(bool value) {
    m_suppurationHasBeenSet = true;
    m_suppuration = value;
  }
  inline PeriodontalSite& WithSuppuration(bool value) {
    SetSuppuration(value);
    return *this;
  }
  ///@}
 private:
  PeriodontalSiteName m_site{PeriodontalSiteName::NOT_SET};

  int m_probingDepth{0};

  int m_recession{0};

  bool m_bleeding{false};

  bool m_suppuration{false};
  bool m_siteHasBeenSet = false;
  bool m_probingDepthHasBeenSet = false;
  bool m_recessionHasBeenSet = false;
  bool m_bleedingHasBeenSet = false;
  bool m_suppurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
