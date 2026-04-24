/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/GroundStationReservationListItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {
class ListGroundStationReservationsResult {
 public:
  AWS_GROUNDSTATION_API ListGroundStationReservationsResult() = default;
  AWS_GROUNDSTATION_API ListGroundStationReservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GROUNDSTATION_API ListGroundStationReservationsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of ground station reservations.</p>
   */
  inline const Aws::Vector<GroundStationReservationListItem>& GetReservationList() const { return m_reservationList; }
  template <typename ReservationListT = Aws::Vector<GroundStationReservationListItem>>
  void SetReservationList(ReservationListT&& value) {
    m_reservationListHasBeenSet = true;
    m_reservationList = std::forward<ReservationListT>(value);
  }
  template <typename ReservationListT = Aws::Vector<GroundStationReservationListItem>>
  ListGroundStationReservationsResult& WithReservationList(ReservationListT&& value) {
    SetReservationList(std::forward<ReservationListT>(value));
    return *this;
  }
  template <typename ReservationListT = GroundStationReservationListItem>
  ListGroundStationReservationsResult& AddReservationList(ReservationListT&& value) {
    m_reservationListHasBeenSet = true;
    m_reservationList.emplace_back(std::forward<ReservationListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Next token to be used in a subsequent
   * <code>ListGroundStationReservations</code> call to retrieve the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListGroundStationReservationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListGroundStationReservationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<GroundStationReservationListItem> m_reservationList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reservationListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
