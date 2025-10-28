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
#include <aws/groundstation/model/EphemerisStatus.h>
#include <aws/groundstation/model/EphemerisType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace GroundStation {
namespace Model {

/**
 */
class ListEphemeridesRequest : public GroundStationRequest {
 public:
  AWS_GROUNDSTATION_API ListEphemeridesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListEphemerides"; }

  AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

  AWS_GROUNDSTATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The AWS Ground Station satellite ID to list ephemeris for.</p>
   */
  inline const Aws::String& GetSatelliteId() const { return m_satelliteId; }
  inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }
  template <typename SatelliteIdT = Aws::String>
  void SetSatelliteId(SatelliteIdT&& value) {
    m_satelliteIdHasBeenSet = true;
    m_satelliteId = std::forward<SatelliteIdT>(value);
  }
  template <typename SatelliteIdT = Aws::String>
  ListEphemeridesRequest& WithSatelliteId(SatelliteIdT&& value) {
    SetSatelliteId(std::forward<SatelliteIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter ephemerides by type. If not specified, all ephemeris types will be
   * returned.</p>
   */
  inline EphemerisType GetEphemerisType() const { return m_ephemerisType; }
  inline bool EphemerisTypeHasBeenSet() const { return m_ephemerisTypeHasBeenSet; }
  inline void SetEphemerisType(EphemerisType value) {
    m_ephemerisTypeHasBeenSet = true;
    m_ephemerisType = value;
  }
  inline ListEphemeridesRequest& WithEphemerisType(EphemerisType value) {
    SetEphemerisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time for the list operation in UTC. Returns ephemerides with
   * expiration times within your specified time range.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ListEphemeridesRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time for the list operation in UTC. Returns ephemerides with
   * expiration times within your specified time range.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ListEphemeridesRequest& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of ephemeris status to return.</p>
   */
  inline const Aws::Vector<EphemerisStatus>& GetStatusList() const { return m_statusList; }
  inline bool StatusListHasBeenSet() const { return m_statusListHasBeenSet; }
  template <typename StatusListT = Aws::Vector<EphemerisStatus>>
  void SetStatusList(StatusListT&& value) {
    m_statusListHasBeenSet = true;
    m_statusList = std::forward<StatusListT>(value);
  }
  template <typename StatusListT = Aws::Vector<EphemerisStatus>>
  ListEphemeridesRequest& WithStatusList(StatusListT&& value) {
    SetStatusList(std::forward<StatusListT>(value));
    return *this;
  }
  inline ListEphemeridesRequest& AddStatusList(EphemerisStatus value) {
    m_statusListHasBeenSet = true;
    m_statusList.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of ephemerides to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListEphemeridesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEphemeridesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_satelliteId;
  bool m_satelliteIdHasBeenSet = false;

  EphemerisType m_ephemerisType{EphemerisType::NOT_SET};
  bool m_ephemerisTypeHasBeenSet = false;

  Aws::Utils::DateTime m_startTime{};
  bool m_startTimeHasBeenSet = false;

  Aws::Utils::DateTime m_endTime{};
  bool m_endTimeHasBeenSet = false;

  Aws::Vector<EphemerisStatus> m_statusList;
  bool m_statusListHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
