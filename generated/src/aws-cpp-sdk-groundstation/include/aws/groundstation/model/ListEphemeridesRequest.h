/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/model/EphemerisStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GroundStation
{
namespace Model
{

  /**
   */
  class ListEphemeridesRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API ListEphemeridesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEphemerides"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;

    AWS_GROUNDSTATION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The end time to list in UTC. The operation will return an ephemeris if its
     * expiration time is within the time range defined by the <code>startTime</code>
     * and <code>endTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListEphemeridesRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListEphemeridesRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of ephemerides to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEphemeridesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEphemeridesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEphemeridesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEphemeridesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Ground Station satellite ID to list ephemeris for.</p>
     */
    inline const Aws::String& GetSatelliteId() const{ return m_satelliteId; }
    inline bool SatelliteIdHasBeenSet() const { return m_satelliteIdHasBeenSet; }
    inline void SetSatelliteId(const Aws::String& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = value; }
    inline void SetSatelliteId(Aws::String&& value) { m_satelliteIdHasBeenSet = true; m_satelliteId = std::move(value); }
    inline void SetSatelliteId(const char* value) { m_satelliteIdHasBeenSet = true; m_satelliteId.assign(value); }
    inline ListEphemeridesRequest& WithSatelliteId(const Aws::String& value) { SetSatelliteId(value); return *this;}
    inline ListEphemeridesRequest& WithSatelliteId(Aws::String&& value) { SetSatelliteId(std::move(value)); return *this;}
    inline ListEphemeridesRequest& WithSatelliteId(const char* value) { SetSatelliteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time to list in UTC. The operation will return an ephemeris if its
     * expiration time is within the time range defined by the <code>startTime</code>
     * and <code>endTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListEphemeridesRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListEphemeridesRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of ephemeris status to return.</p>
     */
    inline const Aws::Vector<EphemerisStatus>& GetStatusList() const{ return m_statusList; }
    inline bool StatusListHasBeenSet() const { return m_statusListHasBeenSet; }
    inline void SetStatusList(const Aws::Vector<EphemerisStatus>& value) { m_statusListHasBeenSet = true; m_statusList = value; }
    inline void SetStatusList(Aws::Vector<EphemerisStatus>&& value) { m_statusListHasBeenSet = true; m_statusList = std::move(value); }
    inline ListEphemeridesRequest& WithStatusList(const Aws::Vector<EphemerisStatus>& value) { SetStatusList(value); return *this;}
    inline ListEphemeridesRequest& WithStatusList(Aws::Vector<EphemerisStatus>&& value) { SetStatusList(std::move(value)); return *this;}
    inline ListEphemeridesRequest& AddStatusList(const EphemerisStatus& value) { m_statusListHasBeenSet = true; m_statusList.push_back(value); return *this; }
    inline ListEphemeridesRequest& AddStatusList(EphemerisStatus&& value) { m_statusListHasBeenSet = true; m_statusList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_satelliteId;
    bool m_satelliteIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<EphemerisStatus> m_statusList;
    bool m_statusListHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
