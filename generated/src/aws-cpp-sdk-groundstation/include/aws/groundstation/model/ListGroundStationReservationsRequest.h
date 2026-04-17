/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/ReservationType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GroundStation {
namespace Model {

/**
 */
class ListGroundStationReservationsRequest : public GroundStationRequest {
 public:
  AWS_GROUNDSTATION_API ListGroundStationReservationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListGroundStationReservations"; }

  AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

  AWS_GROUNDSTATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  ListGroundStationReservationsRequest& WithGroundStationId(GroundStationIdT&& value) {
    SetGroundStationId(std::forward<GroundStationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Start time of the reservation window in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListGroundStationReservationsRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>End time of the reservation window in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListGroundStationReservationsRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Types of reservations to filter by.</p>
   */
  inline const Aws::Vector<ReservationType>& GetReservationTypes() const { return m_reservationTypes; }
  inline bool ReservationTypesHasBeenSet() const { return m_reservationTypesHasBeenSet; }
  template <typename ReservationTypesT = Aws::Vector<ReservationType>>
  void SetReservationTypes(ReservationTypesT&& value) {
    m_reservationTypesHasBeenSet = true;
    m_reservationTypes = std::forward<ReservationTypesT>(value);
  }
  template <typename ReservationTypesT = Aws::Vector<ReservationType>>
  ListGroundStationReservationsRequest& WithReservationTypes(ReservationTypesT&& value) {
    SetReservationTypes(std::forward<ReservationTypesT>(value));
    return *this;
  }
  inline ListGroundStationReservationsRequest& AddReservationTypes(ReservationType value) {
    m_reservationTypesHasBeenSet = true;
    m_reservationTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of ground station reservations returned.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListGroundStationReservationsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Next token returned in the request of a previous
   * <code>ListGroundStationReservations</code> call. Used to get the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGroundStationReservationsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_groundStationId;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Vector<ReservationType> m_reservationTypes;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_groundStationIdHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_reservationTypesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
