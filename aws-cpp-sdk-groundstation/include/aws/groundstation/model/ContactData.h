/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GROUNDSTATION_API ContactData
  {
  public:
    ContactData();
    ContactData(Aws::Utils::Json::JsonView jsonValue);
    ContactData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>UUID of a contact.</p>
     */
    inline ContactData& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>UUID of a contact.</p>
     */
    inline ContactData& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>UUID of a contact.</p>
     */
    inline ContactData& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>Status of a contact.</p>
     */
    inline const ContactStatus& GetContactStatus() const{ return m_contactStatus; }

    /**
     * <p>Status of a contact.</p>
     */
    inline bool ContactStatusHasBeenSet() const { return m_contactStatusHasBeenSet; }

    /**
     * <p>Status of a contact.</p>
     */
    inline void SetContactStatus(const ContactStatus& value) { m_contactStatusHasBeenSet = true; m_contactStatus = value; }

    /**
     * <p>Status of a contact.</p>
     */
    inline void SetContactStatus(ContactStatus&& value) { m_contactStatusHasBeenSet = true; m_contactStatus = std::move(value); }

    /**
     * <p>Status of a contact.</p>
     */
    inline ContactData& WithContactStatus(const ContactStatus& value) { SetContactStatus(value); return *this;}

    /**
     * <p>Status of a contact.</p>
     */
    inline ContactData& WithContactStatus(ContactStatus&& value) { SetContactStatus(std::move(value)); return *this;}


    /**
     * <p>End time of a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>End time of a contact.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>End time of a contact.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>End time of a contact.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>End time of a contact.</p>
     */
    inline ContactData& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>End time of a contact.</p>
     */
    inline ContactData& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Error message of a contact.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Error message of a contact.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>Error message of a contact.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>Error message of a contact.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>Error message of a contact.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>Error message of a contact.</p>
     */
    inline ContactData& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Error message of a contact.</p>
     */
    inline ContactData& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Error message of a contact.</p>
     */
    inline ContactData& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Name of a ground station.</p>
     */
    inline const Aws::String& GetGroundStation() const{ return m_groundStation; }

    /**
     * <p>Name of a ground station.</p>
     */
    inline bool GroundStationHasBeenSet() const { return m_groundStationHasBeenSet; }

    /**
     * <p>Name of a ground station.</p>
     */
    inline void SetGroundStation(const Aws::String& value) { m_groundStationHasBeenSet = true; m_groundStation = value; }

    /**
     * <p>Name of a ground station.</p>
     */
    inline void SetGroundStation(Aws::String&& value) { m_groundStationHasBeenSet = true; m_groundStation = std::move(value); }

    /**
     * <p>Name of a ground station.</p>
     */
    inline void SetGroundStation(const char* value) { m_groundStationHasBeenSet = true; m_groundStation.assign(value); }

    /**
     * <p>Name of a ground station.</p>
     */
    inline ContactData& WithGroundStation(const Aws::String& value) { SetGroundStation(value); return *this;}

    /**
     * <p>Name of a ground station.</p>
     */
    inline ContactData& WithGroundStation(Aws::String&& value) { SetGroundStation(std::move(value)); return *this;}

    /**
     * <p>Name of a ground station.</p>
     */
    inline ContactData& WithGroundStation(const char* value) { SetGroundStation(value); return *this;}


    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline const Elevation& GetMaximumElevation() const{ return m_maximumElevation; }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline bool MaximumElevationHasBeenSet() const { return m_maximumElevationHasBeenSet; }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline void SetMaximumElevation(const Elevation& value) { m_maximumElevationHasBeenSet = true; m_maximumElevation = value; }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline void SetMaximumElevation(Elevation&& value) { m_maximumElevationHasBeenSet = true; m_maximumElevation = std::move(value); }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline ContactData& WithMaximumElevation(const Elevation& value) { SetMaximumElevation(value); return *this;}

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline ContactData& WithMaximumElevation(Elevation&& value) { SetMaximumElevation(std::move(value)); return *this;}


    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline bool MissionProfileArnHasBeenSet() const { return m_missionProfileArnHasBeenSet; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = value; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn = std::move(value); }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArnHasBeenSet = true; m_missionProfileArn.assign(value); }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline ContactData& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline ContactData& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline ContactData& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}


    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetPostPassEndTime() const{ return m_postPassEndTime; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline bool PostPassEndTimeHasBeenSet() const { return m_postPassEndTimeHasBeenSet; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline void SetPostPassEndTime(const Aws::Utils::DateTime& value) { m_postPassEndTimeHasBeenSet = true; m_postPassEndTime = value; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline void SetPostPassEndTime(Aws::Utils::DateTime&& value) { m_postPassEndTimeHasBeenSet = true; m_postPassEndTime = std::move(value); }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline ContactData& WithPostPassEndTime(const Aws::Utils::DateTime& value) { SetPostPassEndTime(value); return *this;}

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline ContactData& WithPostPassEndTime(Aws::Utils::DateTime&& value) { SetPostPassEndTime(std::move(value)); return *this;}


    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline const Aws::Utils::DateTime& GetPrePassStartTime() const{ return m_prePassStartTime; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline bool PrePassStartTimeHasBeenSet() const { return m_prePassStartTimeHasBeenSet; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline void SetPrePassStartTime(const Aws::Utils::DateTime& value) { m_prePassStartTimeHasBeenSet = true; m_prePassStartTime = value; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline void SetPrePassStartTime(Aws::Utils::DateTime&& value) { m_prePassStartTimeHasBeenSet = true; m_prePassStartTime = std::move(value); }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline ContactData& WithPrePassStartTime(const Aws::Utils::DateTime& value) { SetPrePassStartTime(value); return *this;}

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline ContactData& WithPrePassStartTime(Aws::Utils::DateTime&& value) { SetPrePassStartTime(std::move(value)); return *this;}


    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline bool SatelliteArnHasBeenSet() const { return m_satelliteArnHasBeenSet; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = value; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArnHasBeenSet = true; m_satelliteArn = std::move(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const char* value) { m_satelliteArnHasBeenSet = true; m_satelliteArn.assign(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline ContactData& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline ContactData& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline ContactData& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}


    /**
     * <p>Start time of a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Start time of a contact.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Start time of a contact.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Start time of a contact.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Start time of a contact.</p>
     */
    inline ContactData& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Start time of a contact.</p>
     */
    inline ContactData& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline ContactData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet;

    ContactStatus m_contactStatus;
    bool m_contactStatusHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::String m_groundStation;
    bool m_groundStationHasBeenSet;

    Elevation m_maximumElevation;
    bool m_maximumElevationHasBeenSet;

    Aws::String m_missionProfileArn;
    bool m_missionProfileArnHasBeenSet;

    Aws::Utils::DateTime m_postPassEndTime;
    bool m_postPassEndTimeHasBeenSet;

    Aws::Utils::DateTime m_prePassStartTime;
    bool m_prePassStartTimeHasBeenSet;

    Aws::String m_satelliteArn;
    bool m_satelliteArnHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
