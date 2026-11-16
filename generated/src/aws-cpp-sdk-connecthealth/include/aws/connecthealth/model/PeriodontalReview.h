/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/PeriodontalReviewReason.h>
#include <aws/connecthealth/model/PeriodontalSiteName.h>
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
 * <p>An item of the periodontal chart that needs the clinician's
 * confirmation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/PeriodontalReview">AWS
 * API Reference</a></p>
 */
class PeriodontalReview {
 public:
  AWS_CONNECTHEALTH_API PeriodontalReview() = default;
  AWS_CONNECTHEALTH_API PeriodontalReview(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API PeriodontalReview& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason for review. The following values are valid:</p> <ul> <li> <p>
   * <code>SITE_NOT_CHARTED</code>: One or more sites have no reading.</p> </li> <li>
   * <p> <code>VALUE_NOT_CHARTED</code>: A dictated value or charting instruction was
   * not charted, for example because the value was out of range or not valid at its
   * position.</p> </li> <li> <p> <code>READING_COUNT_MISMATCH</code>: The number of
   * dictated values did not match the number of open sites. The values were charted
   * as dictated.</p> </li> <li> <p> <code>LINE_UNCLEAR</code>: A line of dictation
   * could not be interpreted and was not charted.</p> </li> <li> <p>
   * <code>TOOTH_UNCLEAR</code>: A line of dictation did not identify the tooth and
   * was not charted.</p> </li> <li> <p> <code>MISSING_TOOTH_CONFLICT</code>: The
   * dictation conflicts with a tooth marked as missing.</p> </li> <li> <p>
   * <code>MEASUREMENT_NOT_CHARTED</code>: The dictation included a measurement that
   * the chart does not record, such as plaque, calculus, or the mucogingival
   * junction.</p> </li> <li> <p> <code>SESSION_ISSUE</code>: The exam setup could
   * not be used and all teeth were assumed to be present, or the earlier chart could
   * not be restored and charting restarted.</p> </li> </ul>
   */
  inline PeriodontalReviewReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(PeriodontalReviewReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline PeriodontalReview& WithReason(PeriodontalReviewReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tooth that the item refers to.</p>
   */
  inline int GetToothNumber() const { return m_toothNumber; }
  inline bool ToothNumberHasBeenSet() const { return m_toothNumberHasBeenSet; }
  inline void SetToothNumber(int value) {
    m_toothNumberHasBeenSet = true;
    m_toothNumber = value;
  }
  inline PeriodontalReview& WithToothNumber(int value) {
    SetToothNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The probing sites of that tooth that the item refers to.</p>
   */
  inline const Aws::Vector<PeriodontalSiteName>& GetSites() const { return m_sites; }
  inline bool SitesHasBeenSet() const { return m_sitesHasBeenSet; }
  template <typename SitesT = Aws::Vector<PeriodontalSiteName>>
  void SetSites(SitesT&& value) {
    m_sitesHasBeenSet = true;
    m_sites = std::forward<SitesT>(value);
  }
  template <typename SitesT = Aws::Vector<PeriodontalSiteName>>
  PeriodontalReview& WithSites(SitesT&& value) {
    SetSites(std::forward<SitesT>(value));
    return *this;
  }
  inline PeriodontalReview& AddSites(PeriodontalSiteName value) {
    m_sitesHasBeenSet = true;
    m_sites.push_back(value);
    return *this;
  }
  ///@}
 private:
  PeriodontalReviewReason m_reason{PeriodontalReviewReason::NOT_SET};

  int m_toothNumber{0};

  Aws::Vector<PeriodontalSiteName> m_sites;
  bool m_reasonHasBeenSet = false;
  bool m_toothNumberHasBeenSet = false;
  bool m_sitesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
