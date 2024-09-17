/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace GroundStation
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContactRequest">AWS
   * API Reference</a></p>
   */
  class ReserveContactRequest : public GroundStationRequest
  {
  public:
    AWS_GROUNDSTATION_API ReserveContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReserveContact"; }

    AWS_GROUNDSTATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>End time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ReserveContactRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ReserveContactRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
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
    inline ReserveContactRequest& WithGroundStation(const Aws::String& value) { SetGroundStation(value); return *this;}
    inline ReserveContactRequest& WithGroundStation(Aws::String&& value) { SetGroundStation(std::move(value)); return *this;}
    inline ReserveContactRequest& WithGroundStation(const char* value) { SetGroundStation(value); return *this;}
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
    inline ReserveContactRequest& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}
    inline ReserveContactRequest& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}
    inline ReserveContactRequest& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = value; }
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::move(value); }
    inline void SetSatelliteArn(const char* value) { m_satelliteArnHasBeenSet = true; m_satelliteArn.assign(value); }
    inline ReserveContactRequest& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}
    inline ReserveContactRequest& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}
    inline ReserveContactRequest& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReserveContactRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReserveContactRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ReserveContactRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ReserveContactRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ReserveContactRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline ReserveContactRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ReserveContactRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ReserveContactRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ReserveContactRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline ReserveContactRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline ReserveContactRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_groundStation;
    bool m_groundStationHasBeenSet = false;

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet = false;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
