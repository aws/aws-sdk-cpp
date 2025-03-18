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
    AWS_LOCATIONSERVICE_API GetDevicePositionHistoryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDevicePositionHistory"; }

    AWS_LOCATIONSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The tracker resource receiving the request for the device position
     * history.</p>
     */
    inline const Aws::String& GetTrackerName() const { return m_trackerName; }
    inline bool TrackerNameHasBeenSet() const { return m_trackerNameHasBeenSet; }
    template<typename TrackerNameT = Aws::String>
    void SetTrackerName(TrackerNameT&& value) { m_trackerNameHasBeenSet = true; m_trackerName = std::forward<TrackerNameT>(value); }
    template<typename TrackerNameT = Aws::String>
    GetDevicePositionHistoryRequest& WithTrackerName(TrackerNameT&& value) { SetTrackerName(std::forward<TrackerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device whose position history you want to retrieve.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    GetDevicePositionHistoryRequest& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token specifying which page of results to return in the
     * response. If no token is provided, the default page is the first page. </p>
     * <p>Default value: <code>null</code> </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDevicePositionHistoryRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the start time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be 24
     * hours prior to the time that the request is made.</p> <p>Requirement:</p> <ul>
     * <li> <p>The time specified for <code>StartTimeInclusive</code> must be before
     * <code>EndTimeExclusive</code>.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStartTimeInclusive() const { return m_startTimeInclusive; }
    inline bool StartTimeInclusiveHasBeenSet() const { return m_startTimeInclusiveHasBeenSet; }
    template<typename StartTimeInclusiveT = Aws::Utils::DateTime>
    void SetStartTimeInclusive(StartTimeInclusiveT&& value) { m_startTimeInclusiveHasBeenSet = true; m_startTimeInclusive = std::forward<StartTimeInclusiveT>(value); }
    template<typename StartTimeInclusiveT = Aws::Utils::DateTime>
    GetDevicePositionHistoryRequest& WithStartTimeInclusive(StartTimeInclusiveT&& value) { SetStartTimeInclusive(std::forward<StartTimeInclusiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the end time for the position history in <a
     * href="https://www.iso.org/iso-8601-date-and-time-format.html"> ISO 8601</a>
     * format: <code>YYYY-MM-DDThh:mm:ss.sssZ</code>. By default, the value will be the
     * time that the request is made.</p> <p>Requirement:</p> <ul> <li> <p>The time
     * specified for <code>EndTimeExclusive</code> must be after the time for
     * <code>StartTimeInclusive</code>.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetEndTimeExclusive() const { return m_endTimeExclusive; }
    inline bool EndTimeExclusiveHasBeenSet() const { return m_endTimeExclusiveHasBeenSet; }
    template<typename EndTimeExclusiveT = Aws::Utils::DateTime>
    void SetEndTimeExclusive(EndTimeExclusiveT&& value) { m_endTimeExclusiveHasBeenSet = true; m_endTimeExclusive = std::forward<EndTimeExclusiveT>(value); }
    template<typename EndTimeExclusiveT = Aws::Utils::DateTime>
    GetDevicePositionHistoryRequest& WithEndTimeExclusive(EndTimeExclusiveT&& value) { SetEndTimeExclusive(std::forward<EndTimeExclusiveT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional limit for the number of device positions returned in a single
     * call.</p> <p>Default value: <code>100</code> </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDevicePositionHistoryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_trackerName;
    bool m_trackerNameHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_startTimeInclusive{};
    bool m_startTimeInclusiveHasBeenSet = false;

    Aws::Utils::DateTime m_endTimeExclusive{};
    bool m_endTimeExclusiveHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
