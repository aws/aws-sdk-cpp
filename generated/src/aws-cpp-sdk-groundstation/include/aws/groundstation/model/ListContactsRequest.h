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
#include <aws/groundstation/model/ContactStatus.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContactsRequest">AWS
   * API Reference</a></p>
   */
  class ListContactsRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API ListContactsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContacts"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>End time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ListContactsRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ListContactsRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a ground station.</p>
     */
    inline const Aws::String& GetGroundStation() const{ return m_groundStation; }
    inline bool GroundStationHasBeenSet() const { return m_groundStationHasBeenSet; }
    inline void SetGroundStation(const Aws::String& value) { m_groundStationHasBeenSet = true; m_groundStation = value; }
    inline void SetGroundStation(Aws::String&& value) { m_groundStationHasBeenSet = true; m_groundStation = std::move(value); }
    inline void SetGroundStation(const char* value) { m_groundStationHasBeenSet = true; m_groundStation.assign(value); }
    inline ListContactsRequest& WithGroundStation(const Aws::String& value) { SetGroundStation(value); return *this;}
    inline ListContactsRequest& WithGroundStation(Aws::String&& value) { SetGroundStation(std::move(value)); return *this;}
    inline ListContactsRequest& WithGroundStation(const char* value) { SetGroundStation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of contacts returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListContactsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }
    inline bool MissionProfileArnHasBeenSet() const { return m_missionProfileArnHasBeenSet; }
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = value; }
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::move(value); }
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn.assign(value); }
    inline ListContactsRequest& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}
    inline ListContactsRequest& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}
    inline ListContactsRequest& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Next token returned in the request of a previous <code>ListContacts</code>
     * call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListContactsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListContactsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListContactsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = value; }
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::move(value); }
    inline void SetSatelliteArn(const char* value) { m_satelliteArnHasBeenSet = true; m_satelliteArn.assign(value); }
    inline ListContactsRequest& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}
    inline ListContactsRequest& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}
    inline ListContactsRequest& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ListContactsRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ListContactsRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of a contact reservation.</p>
     */
    inline const Aws::Vector<ContactStatus>& GetStatusList() const{ return m_statusList; }
    inline bool StatusListHasBeenSet() const { return m_statusListHasBeenSet; }
    inline void SetStatusList(const Aws::Vector<ContactStatus>& value) { m_statusListHasBeenSet = true; m_statusList = value; }
    inline void SetStatusList(Aws::Vector<ContactStatus>&& value) { m_statusListHasBeenSet = true; m_statusList = std::move(value); }
    inline ListContactsRequest& WithStatusList(const Aws::Vector<ContactStatus>& value) { SetStatusList(value); return *this;}
    inline ListContactsRequest& WithStatusList(Aws::Vector<ContactStatus>&& value) { SetStatusList(std::move(value)); return *this;}
    inline ListContactsRequest& AddStatusList(const ContactStatus& value) { m_statusListHasBeenSet = true; m_statusList.push_back(value); return *this; }
    inline ListContactsRequest& AddStatusList(ContactStatus&& value) { m_statusListHasBeenSet = true; m_statusList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_groundStation;
    bool m_groundStationHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Vector<ContactStatus> m_statusList;
    bool m_statusListHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
