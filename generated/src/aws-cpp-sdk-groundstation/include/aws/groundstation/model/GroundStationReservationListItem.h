/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ReservationDetails.h>
#include <aws/groundstation/model/ReservationType.h>

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
 * <p>Item in a list of ground station reservations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GroundStationReservationListItem">AWS
 * API Reference</a></p>
 */
class GroundStationReservationListItem {
 public:
  AWS_GROUNDSTATION_API GroundStationReservationListItem() = default;
  AWS_GROUNDSTATION_API GroundStationReservationListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API GroundStationReservationListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Type of a ground station reservation.</p>
   */
  inline ReservationType GetReservationType() const { return m_reservationType; }
  inline bool ReservationTypeHasBeenSet() const { return m_reservationTypeHasBeenSet; }
  inline void SetReservationType(ReservationType value) {
    m_reservationTypeHasBeenSet = true;
    m_reservationType = value;
  }
  inline GroundStationReservationListItem& WithReservationType(ReservationType value) {
    SetReservationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ID of a ground station.</p>
   */
  inline const Aws::String& GetGroundStationId() const { return m_groundStationId; }
  inline bool GroundStationIdHasBeenSet() const { return m_groundStationIdHasBeenSet; }
  template <typename GroundStationIdT = Aws::String>
  void SetGroundStationId(GroundStationIdT&& value) {
    m_groundStationIdHasBeenSet = true;
    m_groundStationId = std::forward<GroundStationIdT>(value);
  }
  template <typename GroundStationIdT = Aws::String>
  GroundStationReservationListItem& WithGroundStationId(GroundStationIdT&& value) {
    SetGroundStationId(std::forward<GroundStationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of an antenna.</p>
   */
  inline const Aws::String& GetAntennaName() const { return m_antennaName; }
  inline bool AntennaNameHasBeenSet() const { return m_antennaNameHasBeenSet; }
  template <typename AntennaNameT = Aws::String>
  void SetAntennaName(AntennaNameT&& value) {
    m_antennaNameHasBeenSet = true;
    m_antennaName = std::forward<AntennaNameT>(value);
  }
  template <typename AntennaNameT = Aws::String>
  GroundStationReservationListItem& WithAntennaName(AntennaNameT&& value) {
    SetAntennaName(std::forward<AntennaNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Start time of a ground station reservation in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GroundStationReservationListItem& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>End time of a ground station reservation in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GroundStationReservationListItem& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of a ground station reservation.</p>
   */
  inline const ReservationDetails& GetReservationDetails() const { return m_reservationDetails; }
  inline bool ReservationDetailsHasBeenSet() const { return m_reservationDetailsHasBeenSet; }
  template <typename ReservationDetailsT = ReservationDetails>
  void SetReservationDetails(ReservationDetailsT&& value) {
    m_reservationDetailsHasBeenSet = true;
    m_reservationDetails = std::forward<ReservationDetailsT>(value);
  }
  template <typename ReservationDetailsT = ReservationDetails>
  GroundStationReservationListItem& WithReservationDetails(ReservationDetailsT&& value) {
    SetReservationDetails(std::forward<ReservationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ReservationType m_reservationType{ReservationType::NOT_SET};

  Aws::String m_groundStationId;

  Aws::String m_antennaName;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  ReservationDetails m_reservationDetails;
  bool m_reservationTypeHasBeenSet = false;
  bool m_groundStationIdHasBeenSet = false;
  bool m_antennaNameHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_reservationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
