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
    AWS_GROUNDSTATION_API ReserveContactRequest() = default;

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
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ReserveContactRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a ground station.</p>
     */
    inline const Aws::String& GetGroundStation() const { return m_groundStation; }
    inline bool GroundStationHasBeenSet() const { return m_groundStationHasBeenSet; }
    template<typename GroundStationT = Aws::String>
    void SetGroundStation(GroundStationT&& value) { m_groundStationHasBeenSet = true; m_groundStation = std::forward<GroundStationT>(value); }
    template<typename GroundStationT = Aws::String>
    ReserveContactRequest& WithGroundStation(GroundStationT&& value) { SetGroundStation(std::forward<GroundStationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const { return m_missionProfileArn; }
    inline bool MissionProfileArnHasBeenSet() const { return m_missionProfileArnHasBeenSet; }
    template<typename MissionProfileArnT = Aws::String>
    void SetMissionProfileArn(MissionProfileArnT&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::forward<MissionProfileArnT>(value); }
    template<typename MissionProfileArnT = Aws::String>
    ReserveContactRequest& WithMissionProfileArn(MissionProfileArnT&& value) { SetMissionProfileArn(std::forward<MissionProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite</p>
     */
    inline const Aws::String& GetSatelliteArn() const { return m_satelliteArn; }
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }
    template<typename SatelliteArnT = Aws::String>
    void SetSatelliteArn(SatelliteArnT&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::forward<SatelliteArnT>(value); }
    template<typename SatelliteArnT = Aws::String>
    ReserveContactRequest& WithSatelliteArn(SatelliteArnT&& value) { SetSatelliteArn(std::forward<SatelliteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ReserveContactRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ReserveContactRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ReserveContactRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_groundStation;
    bool m_groundStationHasBeenSet = false;

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet = false;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
