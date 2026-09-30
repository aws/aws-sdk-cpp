/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/PointType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Point-in-time configuration for a subscriber. Only applicable when
 * StartingPosition is POINT_IN_TIME.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PointInTimeConfiguration">AWS
 * API Reference</a></p>
 */
class PointInTimeConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API PointInTimeConfiguration() = default;
  AWS_EVENTBRIDGEV2_API PointInTimeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API PointInTimeConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Whether to start from the horizon or a specific timestamp.</p>
   */
  inline PointType GetPointType() const { return m_pointType; }
  inline bool PointTypeHasBeenSet() const { return m_pointTypeHasBeenSet; }
  inline void SetPointType(PointType value) {
    m_pointTypeHasBeenSet = true;
    m_pointType = value;
  }
  inline PointInTimeConfiguration& WithPointType(PointType value) {
    SetPointType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp to start from. Required when PointType is TIMESTAMP.</p>
   */
  inline const Aws::Utils::DateTime& GetStartingPoint() const { return m_startingPoint; }
  inline bool StartingPointHasBeenSet() const { return m_startingPointHasBeenSet; }
  template <typename StartingPointT = Aws::Utils::DateTime>
  void SetStartingPoint(StartingPointT&& value) {
    m_startingPointHasBeenSet = true;
    m_startingPoint = std::forward<StartingPointT>(value);
  }
  template <typename StartingPointT = Aws::Utils::DateTime>
  PointInTimeConfiguration& WithStartingPoint(StartingPointT&& value) {
    SetStartingPoint(std::forward<StartingPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp to stop at. Optional.</p>
   */
  inline const Aws::Utils::DateTime& GetEndPoint() const { return m_endPoint; }
  inline bool EndPointHasBeenSet() const { return m_endPointHasBeenSet; }
  template <typename EndPointT = Aws::Utils::DateTime>
  void SetEndPoint(EndPointT&& value) {
    m_endPointHasBeenSet = true;
    m_endPoint = std::forward<EndPointT>(value);
  }
  template <typename EndPointT = Aws::Utils::DateTime>
  PointInTimeConfiguration& WithEndPoint(EndPointT&& value) {
    SetEndPoint(std::forward<EndPointT>(value));
    return *this;
  }
  ///@}
 private:
  PointType m_pointType{PointType::NOT_SET};

  Aws::Utils::DateTime m_startingPoint{};

  Aws::Utils::DateTime m_endPoint{};
  bool m_pointTypeHasBeenSet = false;
  bool m_startingPointHasBeenSet = false;
  bool m_endPointHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
