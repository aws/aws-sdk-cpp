/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/PeriodontalReview.h>
#include <aws/connecthealth/model/PeriodontalTooth.h>
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
 * <p>Real-time extraction is in preview release for Amazon Connect Health and is
 * subject to change. To request access to this feature, contact your AWS account
 * team.</p> <p>The periodontal chart as of this point in the session. Each event
 * carries every tooth charted so far, not only the teeth that
 * changed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribePeriodontalChartEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribePeriodontalChartEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribePeriodontalChartEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribePeriodontalChartEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribePeriodontalChartEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of this snapshot. Versions increase within a session and can skip
   * values. Keep the snapshot with the highest version and ignore any event whose
   * version is not higher, including after you reconnect to the session. Versions of
   * checklist events and periodontal chart events are independent.</p>
   */
  inline long long GetSnapshotVersion() const { return m_snapshotVersion; }
  inline bool SnapshotVersionHasBeenSet() const { return m_snapshotVersionHasBeenSet; }
  inline void SetSnapshotVersion(long long value) {
    m_snapshotVersionHasBeenSet = true;
    m_snapshotVersion = value;
  }
  inline MedicalScribePeriodontalChartEvent& WithSnapshotVersion(long long value) {
    SetSnapshotVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The teeth that have a recorded value or are marked missing, in ascending
   * <code>toothNumber</code> order.</p>
   */
  inline const Aws::Vector<PeriodontalTooth>& GetTeeth() const { return m_teeth; }
  inline bool TeethHasBeenSet() const { return m_teethHasBeenSet; }
  template <typename TeethT = Aws::Vector<PeriodontalTooth>>
  void SetTeeth(TeethT&& value) {
    m_teethHasBeenSet = true;
    m_teeth = std::forward<TeethT>(value);
  }
  template <typename TeethT = Aws::Vector<PeriodontalTooth>>
  MedicalScribePeriodontalChartEvent& WithTeeth(TeethT&& value) {
    SetTeeth(std::forward<TeethT>(value));
    return *this;
  }
  template <typename TeethT = PeriodontalTooth>
  MedicalScribePeriodontalChartEvent& AddTeeth(TeethT&& value) {
    m_teethHasBeenSet = true;
    m_teeth.emplace_back(std::forward<TeethT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Items that need the clinician's confirmation.</p>
   */
  inline const Aws::Vector<PeriodontalReview>& GetReviewItems() const { return m_reviewItems; }
  inline bool ReviewItemsHasBeenSet() const { return m_reviewItemsHasBeenSet; }
  template <typename ReviewItemsT = Aws::Vector<PeriodontalReview>>
  void SetReviewItems(ReviewItemsT&& value) {
    m_reviewItemsHasBeenSet = true;
    m_reviewItems = std::forward<ReviewItemsT>(value);
  }
  template <typename ReviewItemsT = Aws::Vector<PeriodontalReview>>
  MedicalScribePeriodontalChartEvent& WithReviewItems(ReviewItemsT&& value) {
    SetReviewItems(std::forward<ReviewItemsT>(value));
    return *this;
  }
  template <typename ReviewItemsT = PeriodontalReview>
  MedicalScribePeriodontalChartEvent& AddReviewItems(ReviewItemsT&& value) {
    m_reviewItemsHasBeenSet = true;
    m_reviewItems.emplace_back(std::forward<ReviewItemsT>(value));
    return *this;
  }
  ///@}
 private:
  long long m_snapshotVersion{0};

  Aws::Vector<PeriodontalTooth> m_teeth;

  Aws::Vector<PeriodontalReview> m_reviewItems;
  bool m_snapshotVersionHasBeenSet = false;
  bool m_teethHasBeenSet = false;
  bool m_reviewItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
