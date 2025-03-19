/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/ContactStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/groundstation/model/Elevation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/groundstation/model/DataflowDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContactResponse">AWS
   * API Reference</a></p>
   */
  class DescribeContactResult
  {
  public:
    AWS_GROUNDSTATION_API DescribeContactResult() = default;
    AWS_GROUNDSTATION_API DescribeContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API DescribeContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const { return m_contactId; }
    template<typename ContactIdT = Aws::String>
    void SetContactId(ContactIdT&& value) { m_contactIdHasBeenSet = true; m_contactId = std::forward<ContactIdT>(value); }
    template<typename ContactIdT = Aws::String>
    DescribeContactResult& WithContactId(ContactIdT&& value) { SetContactId(std::forward<ContactIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of a contact.</p>
     */
    inline ContactStatus GetContactStatus() const { return m_contactStatus; }
    inline void SetContactStatus(ContactStatus value) { m_contactStatusHasBeenSet = true; m_contactStatus = value; }
    inline DescribeContactResult& WithContactStatus(ContactStatus value) { SetContactStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List describing source and destination details for each dataflow edge.</p>
     */
    inline const Aws::Vector<DataflowDetail>& GetDataflowList() const { return m_dataflowList; }
    template<typename DataflowListT = Aws::Vector<DataflowDetail>>
    void SetDataflowList(DataflowListT&& value) { m_dataflowListHasBeenSet = true; m_dataflowList = std::forward<DataflowListT>(value); }
    template<typename DataflowListT = Aws::Vector<DataflowDetail>>
    DescribeContactResult& WithDataflowList(DataflowListT&& value) { SetDataflowList(std::forward<DataflowListT>(value)); return *this;}
    template<typename DataflowListT = DataflowDetail>
    DescribeContactResult& AddDataflowList(DataflowListT&& value) { m_dataflowListHasBeenSet = true; m_dataflowList.emplace_back(std::forward<DataflowListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>End time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeContactResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message for a contact.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeContactResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ground station for a contact.</p>
     */
    inline const Aws::String& GetGroundStation() const { return m_groundStation; }
    template<typename GroundStationT = Aws::String>
    void SetGroundStation(GroundStationT&& value) { m_groundStationHasBeenSet = true; m_groundStation = std::forward<GroundStationT>(value); }
    template<typename GroundStationT = Aws::String>
    DescribeContactResult& WithGroundStation(GroundStationT&& value) { SetGroundStation(std::forward<GroundStationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline const Elevation& GetMaximumElevation() const { return m_maximumElevation; }
    template<typename MaximumElevationT = Elevation>
    void SetMaximumElevation(MaximumElevationT&& value) { m_maximumElevationHasBeenSet = true; m_maximumElevation = std::forward<MaximumElevationT>(value); }
    template<typename MaximumElevationT = Elevation>
    DescribeContactResult& WithMaximumElevation(MaximumElevationT&& value) { SetMaximumElevation(std::forward<MaximumElevationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const { return m_missionProfileArn; }
    template<typename MissionProfileArnT = Aws::String>
    void SetMissionProfileArn(MissionProfileArnT&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::forward<MissionProfileArnT>(value); }
    template<typename MissionProfileArnT = Aws::String>
    DescribeContactResult& WithMissionProfileArn(MissionProfileArnT&& value) { SetMissionProfileArn(std::forward<MissionProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetPostPassEndTime() const { return m_postPassEndTime; }
    template<typename PostPassEndTimeT = Aws::Utils::DateTime>
    void SetPostPassEndTime(PostPassEndTimeT&& value) { m_postPassEndTimeHasBeenSet = true; m_postPassEndTime = std::forward<PostPassEndTimeT>(value); }
    template<typename PostPassEndTimeT = Aws::Utils::DateTime>
    DescribeContactResult& WithPostPassEndTime(PostPassEndTimeT&& value) { SetPostPassEndTime(std::forward<PostPassEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline const Aws::Utils::DateTime& GetPrePassStartTime() const { return m_prePassStartTime; }
    template<typename PrePassStartTimeT = Aws::Utils::DateTime>
    void SetPrePassStartTime(PrePassStartTimeT&& value) { m_prePassStartTimeHasBeenSet = true; m_prePassStartTime = std::forward<PrePassStartTimeT>(value); }
    template<typename PrePassStartTimeT = Aws::Utils::DateTime>
    DescribeContactResult& WithPrePassStartTime(PrePassStartTimeT&& value) { SetPrePassStartTime(std::forward<PrePassStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a contact.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DescribeContactResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const { return m_satelliteArn; }
    template<typename SatelliteArnT = Aws::String>
    void SetSatelliteArn(SatelliteArnT&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::forward<SatelliteArnT>(value); }
    template<typename SatelliteArnT = Aws::String>
    DescribeContactResult& WithSatelliteArn(SatelliteArnT&& value) { SetSatelliteArn(std::forward<SatelliteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeContactResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribeContactResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribeContactResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> Projected time in UTC your satellite will set below the <a
     * href="https://docs.aws.amazon.com/ground-station/latest/ug/site-masks.html">receive
     * mask</a>. This time is based on the satellite's current active ephemeris for
     * future contacts and the ephemeris that was active during contact execution for
     * completed contacts. </p>
     */
    inline const Aws::Utils::DateTime& GetVisibilityEndTime() const { return m_visibilityEndTime; }
    template<typename VisibilityEndTimeT = Aws::Utils::DateTime>
    void SetVisibilityEndTime(VisibilityEndTimeT&& value) { m_visibilityEndTimeHasBeenSet = true; m_visibilityEndTime = std::forward<VisibilityEndTimeT>(value); }
    template<typename VisibilityEndTimeT = Aws::Utils::DateTime>
    DescribeContactResult& WithVisibilityEndTime(VisibilityEndTimeT&& value) { SetVisibilityEndTime(std::forward<VisibilityEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Projected time in UTC your satellite will rise above the <a
     * href="https://docs.aws.amazon.com/ground-station/latest/ug/site-masks.html">receive
     * mask</a>. This time is based on the satellite's current active ephemeris for
     * future contacts and the ephemeris that was active during contact execution for
     * completed contacts. </p>
     */
    inline const Aws::Utils::DateTime& GetVisibilityStartTime() const { return m_visibilityStartTime; }
    template<typename VisibilityStartTimeT = Aws::Utils::DateTime>
    void SetVisibilityStartTime(VisibilityStartTimeT&& value) { m_visibilityStartTimeHasBeenSet = true; m_visibilityStartTime = std::forward<VisibilityStartTimeT>(value); }
    template<typename VisibilityStartTimeT = Aws::Utils::DateTime>
    DescribeContactResult& WithVisibilityStartTime(VisibilityStartTimeT&& value) { SetVisibilityStartTime(std::forward<VisibilityStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeContactResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    ContactStatus m_contactStatus{ContactStatus::NOT_SET};
    bool m_contactStatusHasBeenSet = false;

    Aws::Vector<DataflowDetail> m_dataflowList;
    bool m_dataflowListHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
