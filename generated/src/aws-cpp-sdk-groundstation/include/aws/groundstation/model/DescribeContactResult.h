﻿/**
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
    AWS_GROUNDSTATION_API DescribeContactResult();
    AWS_GROUNDSTATION_API DescribeContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API DescribeContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>UUID of a contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline void SetContactId(const Aws::String& value) { m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactId.assign(value); }
    inline DescribeContactResult& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline DescribeContactResult& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline DescribeContactResult& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of a contact.</p>
     */
    inline const ContactStatus& GetContactStatus() const{ return m_contactStatus; }
    inline void SetContactStatus(const ContactStatus& value) { m_contactStatus = value; }
    inline void SetContactStatus(ContactStatus&& value) { m_contactStatus = std::move(value); }
    inline DescribeContactResult& WithContactStatus(const ContactStatus& value) { SetContactStatus(value); return *this;}
    inline DescribeContactResult& WithContactStatus(ContactStatus&& value) { SetContactStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List describing source and destination details for each dataflow edge.</p>
     */
    inline const Aws::Vector<DataflowDetail>& GetDataflowList() const{ return m_dataflowList; }
    inline void SetDataflowList(const Aws::Vector<DataflowDetail>& value) { m_dataflowList = value; }
    inline void SetDataflowList(Aws::Vector<DataflowDetail>&& value) { m_dataflowList = std::move(value); }
    inline DescribeContactResult& WithDataflowList(const Aws::Vector<DataflowDetail>& value) { SetDataflowList(value); return *this;}
    inline DescribeContactResult& WithDataflowList(Aws::Vector<DataflowDetail>&& value) { SetDataflowList(std::move(value)); return *this;}
    inline DescribeContactResult& AddDataflowList(const DataflowDetail& value) { m_dataflowList.push_back(value); return *this; }
    inline DescribeContactResult& AddDataflowList(DataflowDetail&& value) { m_dataflowList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>End time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeContactResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeContactResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error message for a contact.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline DescribeContactResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline DescribeContactResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline DescribeContactResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Ground station for a contact.</p>
     */
    inline const Aws::String& GetGroundStation() const{ return m_groundStation; }
    inline void SetGroundStation(const Aws::String& value) { m_groundStation = value; }
    inline void SetGroundStation(Aws::String&& value) { m_groundStation = std::move(value); }
    inline void SetGroundStation(const char* value) { m_groundStation.assign(value); }
    inline DescribeContactResult& WithGroundStation(const Aws::String& value) { SetGroundStation(value); return *this;}
    inline DescribeContactResult& WithGroundStation(Aws::String&& value) { SetGroundStation(std::move(value)); return *this;}
    inline DescribeContactResult& WithGroundStation(const char* value) { SetGroundStation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum elevation angle of a contact.</p>
     */
    inline const Elevation& GetMaximumElevation() const{ return m_maximumElevation; }
    inline void SetMaximumElevation(const Elevation& value) { m_maximumElevation = value; }
    inline void SetMaximumElevation(Elevation&& value) { m_maximumElevation = std::move(value); }
    inline DescribeContactResult& WithMaximumElevation(const Elevation& value) { SetMaximumElevation(value); return *this;}
    inline DescribeContactResult& WithMaximumElevation(Elevation&& value) { SetMaximumElevation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a mission profile.</p>
     */
    inline const Aws::String& GetMissionProfileArn() const{ return m_missionProfileArn; }
    inline void SetMissionProfileArn(const Aws::String& value) { m_missionProfileArn = value; }
    inline void SetMissionProfileArn(Aws::String&& value) { m_missionProfileArn = std::move(value); }
    inline void SetMissionProfileArn(const char* value) { m_missionProfileArn.assign(value); }
    inline DescribeContactResult& WithMissionProfileArn(const Aws::String& value) { SetMissionProfileArn(value); return *this;}
    inline DescribeContactResult& WithMissionProfileArn(Aws::String&& value) { SetMissionProfileArn(std::move(value)); return *this;}
    inline DescribeContactResult& WithMissionProfileArn(const char* value) { SetMissionProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time after a contact ends that you’d like to receive a CloudWatch
     * event indicating the pass has finished.</p>
     */
    inline const Aws::Utils::DateTime& GetPostPassEndTime() const{ return m_postPassEndTime; }
    inline void SetPostPassEndTime(const Aws::Utils::DateTime& value) { m_postPassEndTime = value; }
    inline void SetPostPassEndTime(Aws::Utils::DateTime&& value) { m_postPassEndTime = std::move(value); }
    inline DescribeContactResult& WithPostPassEndTime(const Aws::Utils::DateTime& value) { SetPostPassEndTime(value); return *this;}
    inline DescribeContactResult& WithPostPassEndTime(Aws::Utils::DateTime&& value) { SetPostPassEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amount of time prior to contact start you’d like to receive a CloudWatch
     * event indicating an upcoming pass.</p>
     */
    inline const Aws::Utils::DateTime& GetPrePassStartTime() const{ return m_prePassStartTime; }
    inline void SetPrePassStartTime(const Aws::Utils::DateTime& value) { m_prePassStartTime = value; }
    inline void SetPrePassStartTime(Aws::Utils::DateTime&& value) { m_prePassStartTime = std::move(value); }
    inline DescribeContactResult& WithPrePassStartTime(const Aws::Utils::DateTime& value) { SetPrePassStartTime(value); return *this;}
    inline DescribeContactResult& WithPrePassStartTime(Aws::Utils::DateTime&& value) { SetPrePassStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of a contact.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline DescribeContactResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DescribeContactResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DescribeContactResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a satellite.</p>
     */
    inline const Aws::String& GetSatelliteArn() const{ return m_satelliteArn; }
    inline void SetSatelliteArn(const Aws::String& value) { m_satelliteArn = value; }
    inline void SetSatelliteArn(Aws::String&& value) { m_satelliteArn = std::move(value); }
    inline void SetSatelliteArn(const char* value) { m_satelliteArn.assign(value); }
    inline DescribeContactResult& WithSatelliteArn(const Aws::String& value) { SetSatelliteArn(value); return *this;}
    inline DescribeContactResult& WithSatelliteArn(Aws::String&& value) { SetSatelliteArn(std::move(value)); return *this;}
    inline DescribeContactResult& WithSatelliteArn(const char* value) { SetSatelliteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start time of a contact in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeContactResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeContactResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags assigned to a contact.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeContactResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeContactResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeContactResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeContactResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeContactResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeContactResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeContactResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeContactResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeContactResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Projected time in UTC your satellite will set below the <a
     * href="https://docs.aws.amazon.com/ground-station/latest/ug/site-masks.html">receive
     * mask</a>. This time is based on the satellite's current active ephemeris for
     * future contacts and the ephemeris that was active during contact execution for
     * completed contacts. </p>
     */
    inline const Aws::Utils::DateTime& GetVisibilityEndTime() const{ return m_visibilityEndTime; }
    inline void SetVisibilityEndTime(const Aws::Utils::DateTime& value) { m_visibilityEndTime = value; }
    inline void SetVisibilityEndTime(Aws::Utils::DateTime&& value) { m_visibilityEndTime = std::move(value); }
    inline DescribeContactResult& WithVisibilityEndTime(const Aws::Utils::DateTime& value) { SetVisibilityEndTime(value); return *this;}
    inline DescribeContactResult& WithVisibilityEndTime(Aws::Utils::DateTime&& value) { SetVisibilityEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Projected time in UTC your satellite will rise above the <a
     * href="https://docs.aws.amazon.com/ground-station/latest/ug/site-masks.html">receive
     * mask</a>. This time is based on the satellite's current active ephemeris for
     * future contacts and the ephemeris that was active during contact execution for
     * completed contacts. </p>
     */
    inline const Aws::Utils::DateTime& GetVisibilityStartTime() const{ return m_visibilityStartTime; }
    inline void SetVisibilityStartTime(const Aws::Utils::DateTime& value) { m_visibilityStartTime = value; }
    inline void SetVisibilityStartTime(Aws::Utils::DateTime&& value) { m_visibilityStartTime = std::move(value); }
    inline DescribeContactResult& WithVisibilityStartTime(const Aws::Utils::DateTime& value) { SetVisibilityStartTime(value); return *this;}
    inline DescribeContactResult& WithVisibilityStartTime(Aws::Utils::DateTime&& value) { SetVisibilityStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_contactId;

    ContactStatus m_contactStatus;

    Aws::Vector<DataflowDetail> m_dataflowList;

    Aws::Utils::DateTime m_endTime;

    Aws::String m_errorMessage;

    Aws::String m_groundStation;

    Elevation m_maximumElevation;

    Aws::String m_missionProfileArn;

    Aws::Utils::DateTime m_postPassEndTime;

    Aws::Utils::DateTime m_prePassStartTime;

    Aws::String m_region;

    Aws::String m_satelliteArn;

    Aws::Utils::DateTime m_startTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_visibilityEndTime;

    Aws::Utils::DateTime m_visibilityStartTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
