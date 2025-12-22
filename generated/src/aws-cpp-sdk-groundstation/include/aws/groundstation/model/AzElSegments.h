/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AngleUnits.h>
#include <aws/groundstation/model/AzElSegment.h>

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
 * <p>Azimuth elevation segment collection.</p> <p>Contains five or more
 * time-ordered segments that define antenna pointing angles over the ephemeris
 * validity period.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AzElSegments">AWS
 * API Reference</a></p>
 */
class AzElSegments {
 public:
  AWS_GROUNDSTATION_API AzElSegments() = default;
  AWS_GROUNDSTATION_API AzElSegments(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API AzElSegments& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unit of measure for azimuth and elevation angles. All angles in all
   * segments must use the same unit.</p>
   */
  inline AngleUnits GetAngleUnit() const { return m_angleUnit; }
  inline bool AngleUnitHasBeenSet() const { return m_angleUnitHasBeenSet; }
  inline void SetAngleUnit(AngleUnits value) {
    m_angleUnitHasBeenSet = true;
    m_angleUnit = value;
  }
  inline AzElSegments& WithAngleUnit(AngleUnits value) {
    SetAngleUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of azimuth elevation segments.</p> <p>Must contain between 1 and 100
   * segments. Segments must be in chronological order with no overlaps.</p>
   */
  inline const Aws::Vector<AzElSegment>& GetAzElSegmentList() const { return m_azElSegmentList; }
  inline bool AzElSegmentListHasBeenSet() const { return m_azElSegmentListHasBeenSet; }
  template <typename AzElSegmentListT = Aws::Vector<AzElSegment>>
  void SetAzElSegmentList(AzElSegmentListT&& value) {
    m_azElSegmentListHasBeenSet = true;
    m_azElSegmentList = std::forward<AzElSegmentListT>(value);
  }
  template <typename AzElSegmentListT = Aws::Vector<AzElSegment>>
  AzElSegments& WithAzElSegmentList(AzElSegmentListT&& value) {
    SetAzElSegmentList(std::forward<AzElSegmentListT>(value));
    return *this;
  }
  template <typename AzElSegmentListT = AzElSegment>
  AzElSegments& AddAzElSegmentList(AzElSegmentListT&& value) {
    m_azElSegmentListHasBeenSet = true;
    m_azElSegmentList.emplace_back(std::forward<AzElSegmentListT>(value));
    return *this;
  }
  ///@}
 private:
  AngleUnits m_angleUnit{AngleUnits::NOT_SET};

  Aws::Vector<AzElSegment> m_azElSegmentList;
  bool m_angleUnitHasBeenSet = false;
  bool m_azElSegmentListHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
