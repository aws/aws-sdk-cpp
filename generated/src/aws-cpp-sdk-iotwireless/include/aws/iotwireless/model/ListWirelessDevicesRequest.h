/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class ListWirelessDevicesRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API ListWirelessDevicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWirelessDevices"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWirelessDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWirelessDevicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    ListWirelessDevicesRequest& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const { return m_deviceProfileId; }
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }
    template<typename DeviceProfileIdT = Aws::String>
    void SetDeviceProfileId(DeviceProfileIdT&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::forward<DeviceProfileIdT>(value); }
    template<typename DeviceProfileIdT = Aws::String>
    ListWirelessDevicesRequest& WithDeviceProfileId(DeviceProfileIdT&& value) { SetDeviceProfileId(std::forward<DeviceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline const Aws::String& GetServiceProfileId() const { return m_serviceProfileId; }
    inline bool ServiceProfileIdHasBeenSet() const { return m_serviceProfileIdHasBeenSet; }
    template<typename ServiceProfileIdT = Aws::String>
    void SetServiceProfileId(ServiceProfileIdT&& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = std::forward<ServiceProfileIdT>(value); }
    template<typename ServiceProfileIdT = Aws::String>
    ListWirelessDevicesRequest& WithServiceProfileId(ServiceProfileIdT&& value) { SetServiceProfileId(std::forward<ServiceProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline WirelessDeviceType GetWirelessDeviceType() const { return m_wirelessDeviceType; }
    inline bool WirelessDeviceTypeHasBeenSet() const { return m_wirelessDeviceTypeHasBeenSet; }
    inline void SetWirelessDeviceType(WirelessDeviceType value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = value; }
    inline ListWirelessDevicesRequest& WithWirelessDeviceType(WirelessDeviceType value) { SetWirelessDeviceType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFuotaTaskId() const { return m_fuotaTaskId; }
    inline bool FuotaTaskIdHasBeenSet() const { return m_fuotaTaskIdHasBeenSet; }
    template<typename FuotaTaskIdT = Aws::String>
    void SetFuotaTaskId(FuotaTaskIdT&& value) { m_fuotaTaskIdHasBeenSet = true; m_fuotaTaskId = std::forward<FuotaTaskIdT>(value); }
    template<typename FuotaTaskIdT = Aws::String>
    ListWirelessDevicesRequest& WithFuotaTaskId(FuotaTaskIdT&& value) { SetFuotaTaskId(std::forward<FuotaTaskIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMulticastGroupId() const { return m_multicastGroupId; }
    inline bool MulticastGroupIdHasBeenSet() const { return m_multicastGroupIdHasBeenSet; }
    template<typename MulticastGroupIdT = Aws::String>
    void SetMulticastGroupId(MulticastGroupIdT&& value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId = std::forward<MulticastGroupIdT>(value); }
    template<typename MulticastGroupIdT = Aws::String>
    ListWirelessDevicesRequest& WithMulticastGroupId(MulticastGroupIdT&& value) { SetMulticastGroupId(std::forward<MulticastGroupIdT>(value)); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    Aws::String m_serviceProfileId;
    bool m_serviceProfileIdHasBeenSet = false;

    WirelessDeviceType m_wirelessDeviceType{WirelessDeviceType::NOT_SET};
    bool m_wirelessDeviceTypeHasBeenSet = false;

    Aws::String m_fuotaTaskId;
    bool m_fuotaTaskIdHasBeenSet = false;

    Aws::String m_multicastGroupId;
    bool m_multicastGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
