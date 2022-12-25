/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/LocationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace LocationService
{
namespace Model
{

  /**
   */
  class GetDevicePositionHistoryRequest : public LocationServiceRequest
  {
  public:
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicePositionHistory"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline GetDevicePositionHistoryRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline GetDevicePositionHistoryRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline GetDevicePositionHistoryRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTimeExclusive() const{ return m_endTimeExclusive; }

    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline bool EndTimeExclusiveHasBeenSet() const { return m_endTimeExclusiveHasBeenSet; }

    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline void SetEndTimeExclusive(const Aws::Utils::DateTime& value) { m_endTimeExclusiveHasBeenSet = true; m_endTimeExclusive = value; }

    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline void SetEndTimeExclusive(Aws::Utils::DateTime&& value) { m_endTimeExclusiveHasBeenSet = true; m_endTimeExclusive = std::move(value); }

    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline GetDevicePositionHistoryRequest& WithEndTimeExclusive(const Aws::Utils::DateTime& value) { SetEndTimeExclusive(value); return *this;}

    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline GetDevicePositionHistoryRequest& WithEndTimeExclusive(Aws::Utils::DateTime&& value) { SetEndTimeExclusive(std::move(value)); return *this;}


    /**
     * <p>An optional limit for the number of device positions returned in a single
     * call.</p> <p>Default value: <code>100</code> </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional limit for the number of device positions returned in a single
     * call.</p> <p>Default value: <code>100</code> </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional limit for the number of device positions returned in a single
     * call.</p> <p>Default value: <code>100</code> </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional limit for the number of device positions returned in a single
     * call.</p> <p>Default value: <code>100</code> </p>
     */
    inline GetDevicePositionHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline GetDevicePositionHistoryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline GetDevicePositionHistoryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline GetDevicePositionHistoryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTimeInclusive() const{ return m_startTimeInclusive; }

    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline bool StartTimeInclusiveHasBeenSet() const { return m_startTimeInclusiveHasBeenSet; }

    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline void SetStartTimeInclusive(const Aws::Utils::DateTime& value) { m_startTimeInclusiveHasBeenSet = true; m_startTimeInclusive = value; }

    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline void SetStartTimeInclusive(Aws::Utils::DateTime&& value) { m_startTimeInclusiveHasBeenSet = true; m_startTimeInclusive = std::move(value); }

    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline GetDevicePositionHistoryRequest& WithStartTimeInclusive(const Aws::Utils::DateTime& value) { SetStartTimeInclusive(value); return *this;}

    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline GetDevicePositionHistoryRequest& WithStartTimeInclusive(Aws::Utils::DateTime&& value) { SetStartTimeInclusive(std::move(value)); return *this;}


    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline const Aws::String& GetTrackerName() const{ return m_trackerName; }

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline void SetTrackerName(const Aws::String& value) { m_trackerNameHasBeenSet = true; m_trackerName = value; }

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline void SetTrackerName(Aws::String&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::move(value); }

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline void SetTrackerName(const char* value) { m_trackerNameHasBeenSet = true; m_trackerName.assign(value); }

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline GetDevicePositionHistoryRequest& WithTrackerName(const Aws::String& value) { SetTrackerName(value); return *this;}

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline GetDevicePositionHistoryRequest& WithTrackerName(Aws::String&& value) { SetTrackerName(std::move(value)); return *this;}

    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline GetDevicePositionHistoryRequest& WithTrackerName(const char* value) { SetTrackerName(value); return *this;}

  private:

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeExclusive;
    bool m_endTimeExclusiveHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeInclusive;
    bool m_startTimeInclusiveHasBeenSet = false;

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
