/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ContactStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/groundstation/model/Elevation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Data describing a contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ContactData">AWS
   * API Reference</a></p>
   */
  class ContactData
  {
  public:
    AWS_GROUNDSTATION_API ContactData() = default;
    AWS_GROUNDSTATION_API ContactData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ContactData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    ContactData& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of a contact.</p>
     */
    inline ContactStatus GetContactStatus() const { return m_contactStatus; }
    inline bool ContactStatusHasBeenSet() const { return m_contactStatusHasBeenSet; }
    inline void SetContactStatus(ContactStatus value) { m_contactStatusHasBeenSet = true; m_contactStatus = value; }
    inline ContactData& WithContactStatus(ContactStatus value) { SetContactStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>End time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ContactData& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message of a contact.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ContactData& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
    ContactData& WithGroundStation(GroundStationT&& value) { SetGroundStation(std::forward<GroundStationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline const Elevation& GetMaximumElevation() const { return m_maximumElevation; }
    inline bool MaximumElevationHasBeenSet() const { return m_maximumElevationHasBeenSet; }
    template<typename MaximumElevationT = Elevation>
    void SetMaximumElevation(MaximumElevationT&& value) { m_maximumElevationHasBeenSet = true; m_maximumElevation = std::forward<MaximumElevationT>(value); }
    template<typename MaximumElevationT = Elevation>
    ContactData& WithMaximumElevation(MaximumElevationT&& value) { SetMaximumElevation(std::forward<MaximumElevationT>(value)); return *this;}
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
    ContactData& WithMissionProfileArn(MissionProfileArnT&& value) { SetMissionProfileArn(std::forward<MissionProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetPostPassEndTime() const { return m_postPassEndTime; }
    inline bool PostPassEndTimeHasBeenSet() const { return m_postPassEndTimeHasBeenSet; }
    template<typename PostPassEndTimeT = Aws::Utils::DateTime>
    void SetPostPassEndTime(PostPassEndTimeT&& value) { m_postPassEndTimeHasBeenSet = true; m_postPassEndTime = std::forward<PostPassEndTimeT>(value); }
    template<typename PostPassEndTimeT = Aws::Utils::DateTime>
    ContactData& WithPostPassEndTime(PostPassEndTimeT&& value) { SetPostPassEndTime(std::forward<PostPassEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline const Aws::Utils::DateTime& GetPrePassStartTime() const { return m_prePassStartTime; }
    inline bool PrePassStartTimeHasBeenSet() const { return m_prePassStartTimeHasBeenSet; }
    template<typename PrePassStartTimeT = Aws::Utils::DateTime>
    void SetPrePassStartTime(PrePassStartTimeT&& value) { m_prePassStartTimeHasBeenSet = true; m_prePassStartTime = std::forward<PrePassStartTimeT>(value); }
    template<typename PrePassStartTimeT = Aws::Utils::DateTime>
    ContactData& WithPrePassStartTime(PrePassStartTimeT&& value) { SetPrePassStartTime(std::forward<PrePassStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a contact.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ContactData& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const { return m_satelliteArn; }
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }
    template<typename SatelliteArnT = Aws::String>
    void SetSatelliteArn(SatelliteArnT&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::forward<SatelliteArnT>(value); }
    template<typename SatelliteArnT = Aws::String>
    ContactData& WithSatelliteArn(SatelliteArnT&& value) { SetSatelliteArn(std::forward<SatelliteArnT>(value)); return *this;}
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
    ContactData& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    ContactData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ContactData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Projected time in UTC your satellite will set below the <a
     * href="https://docs.aws.amazon.com/ground-station/latest/ug/site-masks.html">receive
     * mask</a>. This time is based on the satellite's current active ephemeris for
     * future contacts and the ephemeris that was active during contact execution for
     * completed contacts. <i>This field is not present for contacts with a
     * <code>SCHEDULING</code> or <code>SCHEDULED</code> status.</i> </p>
     */
    inline const Aws::Utils::DateTime& GetVisibilityEndTime() const { return m_visibilityEndTime; }
    inline bool VisibilityEndTimeHasBeenSet() const { return m_visibilityEndTimeHasBeenSet; }
    template<typename VisibilityEndTimeT = Aws::Utils::DateTime>
    void SetVisibilityEndTime(VisibilityEndTimeT&& value) { m_visibilityEndTimeHasBeenSet = true; m_visibilityEndTime = std::forward<VisibilityEndTimeT>(value); }
    template<typename VisibilityEndTimeT = Aws::Utils::DateTime>
    ContactData& WithVisibilityEndTime(VisibilityEndTimeT&& value) { SetVisibilityEndTime(std::forward<VisibilityEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Projected time in UTC your satellite will rise above the <a
     * href="https://docs.aws.amazon.com/ground-station/latest/ug/site-masks.html">receive
     * mask</a>. This time is based on the satellite's current active ephemeris for
     * future contacts and the ephemeris that was active during contact execution for
     * completed contacts. <i>This field is not present for contacts with a
     * <code>SCHEDULING</code> or <code>SCHEDULED</code> status.</i> </p>
     */
    inline const Aws::Utils::DateTime& GetVisibilityStartTime() const { return m_visibilityStartTime; }
    inline bool VisibilityStartTimeHasBeenSet() const { return m_visibilityStartTimeHasBeenSet; }
    template<typename VisibilityStartTimeT = Aws::Utils::DateTime>
    void SetVisibilityStartTime(VisibilityStartTimeT&& value) { m_visibilityStartTimeHasBeenSet = true; m_visibilityStartTime = std::forward<VisibilityStartTimeT>(value); }
    template<typename VisibilityStartTimeT = Aws::Utils::DateTime>
    ContactData& WithVisibilityStartTime(VisibilityStartTimeT&& value) { SetVisibilityStartTime(std::forward<VisibilityStartTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    ContactStatus m_contactStatus{ContactStatus::NOT_SET};
    bool m_contactStatusHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_groundStation;
    bool m_groundStationHasBeenSet = false;

    Elevation m_maximumElevation;
    bool m_maximumElevationHasBeenSet = false;

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet = false;

    Aws::Utils::DateTime m_postPassEndTime{};
    bool m_postPassEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_prePassStartTime{};
    bool m_prePassStartTimeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_visibilityEndTime{};
    bool m_visibilityEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_visibilityStartTime{};
    bool m_visibilityStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
