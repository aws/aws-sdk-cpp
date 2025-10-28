/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ISO8601TimeRange.h>
#include <aws/groundstation/model/TimeAzEl.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>A time segment containing azimuth elevation pointing data.</p> <p> Each
 * segment defines a continuous time period with pointing angle data points. AWS
 * Ground Station uses 4th order Lagrange interpolation between the provided
 * points, so each segment must contain at least five data points. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AzElSegment">AWS
 * API Reference</a></p>
 */
class AzElSegment {
 public:
  AWS_GROUNDSTATION_API AzElSegment() = default;
  AWS_GROUNDSTATION_API AzElSegment(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API AzElSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reference time for this segment in ISO 8601 format in Coordinated
   * Universal Time (UTC).</p> <p>All time values within the segment's
   * <a>AzElSegment$azElList</a> are specified as offsets in atomic seconds from this
   * reference epoch.</p> <p>Example: <code>2024-01-15T12:00:00.000Z</code> </p>
   */
  inline const Aws::Utils::DateTime& GetReferenceEpoch() const { return m_referenceEpoch; }
  inline bool ReferenceEpochHasBeenSet() const { return m_referenceEpochHasBeenSet; }
  template <typename ReferenceEpochT = Aws::Utils::DateTime>
  void SetReferenceEpoch(ReferenceEpochT&& value) {
    m_referenceEpochHasBeenSet = true;
    m_referenceEpoch = std::forward<ReferenceEpochT>(value);
  }
  template <typename ReferenceEpochT = Aws::Utils::DateTime>
  AzElSegment& WithReferenceEpoch(ReferenceEpochT&& value) {
    SetReferenceEpoch(std::forward<ReferenceEpochT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The valid time range for this segment.</p> <p> Specifies the start and end
   * timestamps in ISO 8601 format in Coordinated Universal Time (UTC). The segment's
   * pointing data must cover this entire time range. </p>
   */
  inline const ISO8601TimeRange& GetValidTimeRange() const { return m_validTimeRange; }
  inline bool ValidTimeRangeHasBeenSet() const { return m_validTimeRangeHasBeenSet; }
  template <typename ValidTimeRangeT = ISO8601TimeRange>
  void SetValidTimeRange(ValidTimeRangeT&& value) {
    m_validTimeRangeHasBeenSet = true;
    m_validTimeRange = std::forward<ValidTimeRangeT>(value);
  }
  template <typename ValidTimeRangeT = ISO8601TimeRange>
  AzElSegment& WithValidTimeRange(ValidTimeRangeT&& value) {
    SetValidTimeRange(std::forward<ValidTimeRangeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of time-tagged azimuth elevation data points.</p> <p> Must contain at
   * least five points to support 4th order Lagrange interpolation. Points must be in
   * chronological order with no duplicates. </p>
   */
  inline const Aws::Vector<TimeAzEl>& GetAzElList() const { return m_azElList; }
  inline bool AzElListHasBeenSet() const { return m_azElListHasBeenSet; }
  template <typename AzElListT = Aws::Vector<TimeAzEl>>
  void SetAzElList(AzElListT&& value) {
    m_azElListHasBeenSet = true;
    m_azElList = std::forward<AzElListT>(value);
  }
  template <typename AzElListT = Aws::Vector<TimeAzEl>>
  AzElSegment& WithAzElList(AzElListT&& value) {
    SetAzElList(std::forward<AzElListT>(value));
    return *this;
  }
  template <typename AzElListT = TimeAzEl>
  AzElSegment& AddAzElList(AzElListT&& value) {
    m_azElListHasBeenSet = true;
    m_azElList.emplace_back(std::forward<AzElListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_referenceEpoch{};
  bool m_referenceEpochHasBeenSet = false;

  ISO8601TimeRange m_validTimeRange;
  bool m_validTimeRangeHasBeenSet = false;

  Aws::Vector<TimeAzEl> m_azElList;
  bool m_azElListHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
