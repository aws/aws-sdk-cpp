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
  class AWS_GROUNDSTATION_API DescribeContactResult
  {
  public:
    DescribeContactResult();
    DescribeContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }

    /**
     * <p>UUID of a contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactId.assign(value); }

    /**
     * <p>UUID of a contact.</p>
     */
    inline DescribeContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>UUID of a contact.</p>
     */
    inline DescribeContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>UUID of a contact.</p>
     */
    inline DescribeContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>Status of a contact.</p>
     */
    inline const ContactStatus& GetContactStatus() const{ return m_contactStatus; }

    /**
     * <p>Status of a contact.</p>
     */
    inline void SetContactStatus(const ContactStatus& value) { m_contactStatus = value; }

    /**
     * <p>Status of a contact.</p>
     */
    inline void SetContactStatus(ContactStatus&& value) { m_contactStatus = std::move(value); }

    /**
     * <p>Status of a contact.</p>
     */
    inline DescribeContactResult& WithContactStatus(const ContactStatus& value) { SetContactStatus(value); return *this;}

    /**
     * <p>Status of a contact.</p>
     */
    inline DescribeContactResult& WithContactStatus(ContactStatus&& value) { SetContactStatus(std::move(value)); return *this;}


    /**
     * <p>End time of a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>End time of a contact.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>End time of a contact.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>End time of a contact.</p>
     */
    inline DescribeContactResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>End time of a contact.</p>
     */
    inline DescribeContactResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>Error message for a contact.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Error message for a contact.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * <p>Error message for a contact.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Error message for a contact.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * <p>Error message for a contact.</p>
     */
    inline DescribeContactResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Error message for a contact.</p>
     */
    inline DescribeContactResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>Error message for a contact.</p>
     */
    inline DescribeContactResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Ground station for a contact.</p>
     */
    inline const Aws::String& GetGroundStation() const{ return m_groundStation; }

    /**
     * <p>Ground station for a contact.</p>
     */
    inline void SetGroundStation(const Aws::String& value) { m_groundStation = value; }

    /**
     * <p>Ground station for a contact.</p>
     */
    inline void SetGroundStation(Aws::String&& value) { m_groundStation = std::move(value); }

    /**
     * <p>Ground station for a contact.</p>
     */
    inline void SetGroundStation(const char* value) { m_groundStation.assign(value); }

    /**
     * <p>Ground station for a contact.</p>
     */
    inline DescribeContactResult& WithGroundStation(const Aws::String& value) { SetGroundStation(value); return *this;}

    /**
     * <p>Ground station for a contact.</p>
     */
    inline DescribeContactResult& WithGroundStation(Aws::String&& value) { SetGroundStation(std::move(value)); return *this;}

    /**
     * <p>Ground station for a contact.</p>
     */
    inline DescribeContactResult& WithGroundStation(const char* value) { SetGroundStation(value); return *this;}


    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline const Elevation& GetMaximumElevation() const{ return m_maximumElevation; }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline void SetMaximumElevation(const Elevation& value) { m_maximumElevation = value; }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline void SetMaximumElevation(Elevation&& value) { m_maximumElevation = std::move(value); }

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline DescribeContactResult& WithMaximumElevation(const Elevation& value) { SetMaximumElevation(value); return *this;}

    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline DescribeContactResult& WithMaximumElevation(Elevation&& value) { SetMaximumElevation(std::move(value)); return *this;}


    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArn = value; }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArn = std::move(value); }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArn.assign(value); }

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline DescribeContactResult& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline DescribeContactResult& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a mission profile.</p>
     */
    inline DescribeContactResult& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}


    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetPostPassEndTime() const{ return m_postPassEndTime; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline void SetPostPassEndTime(const Aws::Utils::DateTime& value) { m_postPassEndTime = value; }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline void SetPostPassEndTime(Aws::Utils::DateTime&& value) { m_postPassEndTime = std::move(value); }

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline DescribeContactResult& WithPostPassEndTime(const Aws::Utils::DateTime& value) { SetPostPassEndTime(value); return *this;}

    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline DescribeContactResult& WithPostPassEndTime(Aws::Utils::DateTime&& value) { SetPostPassEndTime(std::move(value)); return *this;}


    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline const Aws::Utils::DateTime& GetPrePassStartTime() const{ return m_prePassStartTime; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline void SetPrePassStartTime(const Aws::Utils::DateTime& value) { m_prePassStartTime = value; }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline void SetPrePassStartTime(Aws::Utils::DateTime&& value) { m_prePassStartTime = std::move(value); }

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline DescribeContactResult& WithPrePassStartTime(const Aws::Utils::DateTime& value) { SetPrePassStartTime(value); return *this;}

    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline DescribeContactResult& WithPrePassStartTime(Aws::Utils::DateTime&& value) { SetPrePassStartTime(std::move(value)); return *this;}


    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArn = value; }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArn = std::move(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline void SetSatelliteArn(const char* value) { m_satelliteArn.assign(value); }

    /**
     * <p>ARN of a satellite.</p>
     */
    inline DescribeContactResult& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline DescribeContactResult& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}

    /**
     * <p>ARN of a satellite.</p>
     */
    inline DescribeContactResult& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}


    /**
     * <p>Start time of a contact.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Start time of a contact.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>Start time of a contact.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>Start time of a contact.</p>
     */
    inline DescribeContactResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Start time of a contact.</p>
     */
    inline DescribeContactResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline DescribeContactResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_contactId;

    ContactStatus m_contactStatus;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_errorMessage;

    Aws::String m_groundStation;

    Elevation m_maximumElevation;

    Aws::String m_missionProfileArn;

    Aws::Utils::DateTime m_postPassEndTime;

    Aws::Utils::DateTime m_prePassStartTime;

    Aws::String m_satelliteArn;

    Aws::Utils::DateTime m_startTime;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
