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
    AWS_IOTWIRELESS_API ListWirelessDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWirelessDevices"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in this operation.</p>
     */
    inline ListWirelessDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListWirelessDevicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListWirelessDevicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListWirelessDevicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline ListWirelessDevicesRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline ListWirelessDevicesRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this destination.</p>
     */
    inline ListWirelessDevicesRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline const Aws::String& GetDeviceProfileId() const{ return m_deviceProfileId; }

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline bool DeviceProfileIdHasBeenSet() const { return m_deviceProfileIdHasBeenSet; }

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline void SetDeviceProfileId(const Aws::String& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = value; }

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline void SetDeviceProfileId(Aws::String&& value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId = std::move(value); }

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline void SetDeviceProfileId(const char* value) { m_deviceProfileIdHasBeenSet = true; m_deviceProfileId.assign(value); }

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline ListWirelessDevicesRequest& WithDeviceProfileId(const Aws::String& value) { SetDeviceProfileId(value); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline ListWirelessDevicesRequest& WithDeviceProfileId(Aws::String&& value) { SetDeviceProfileId(std::move(value)); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this device profile.</p>
     */
    inline ListWirelessDevicesRequest& WithDeviceProfileId(const char* value) { SetDeviceProfileId(value); return *this;}


    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline const Aws::String& GetServiceProfileId() const{ return m_serviceProfileId; }

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline bool ServiceProfileIdHasBeenSet() const { return m_serviceProfileIdHasBeenSet; }

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline void SetServiceProfileId(const Aws::String& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = value; }

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline void SetServiceProfileId(Aws::String&& value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId = std::move(value); }

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline void SetServiceProfileId(const char* value) { m_serviceProfileIdHasBeenSet = true; m_serviceProfileId.assign(value); }

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline ListWirelessDevicesRequest& WithServiceProfileId(const Aws::String& value) { SetServiceProfileId(value); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline ListWirelessDevicesRequest& WithServiceProfileId(Aws::String&& value) { SetServiceProfileId(std::move(value)); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this service profile.</p>
     */
    inline ListWirelessDevicesRequest& WithServiceProfileId(const char* value) { SetServiceProfileId(value); return *this;}


    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline const WirelessDeviceType& GetWirelessDeviceType() const{ return m_wirelessDeviceType; }

    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline bool WirelessDeviceTypeHasBeenSet() const { return m_wirelessDeviceTypeHasBeenSet; }

    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline void SetWirelessDeviceType(const WirelessDeviceType& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = value; }

    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline void SetWirelessDeviceType(WirelessDeviceType&& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = std::move(value); }

    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline ListWirelessDevicesRequest& WithWirelessDeviceType(const WirelessDeviceType& value) { SetWirelessDeviceType(value); return *this;}

    /**
     * <p>A filter to list only the wireless devices that use this wireless device
     * type.</p>
     */
    inline ListWirelessDevicesRequest& WithWirelessDeviceType(WirelessDeviceType&& value) { SetWirelessDeviceType(std::move(value)); return *this;}


    
    inline const Aws::String& GetFuotaTaskId() const{ return m_fuotaTaskId; }

    
    inline bool FuotaTaskIdHasBeenSet() const { return m_fuotaTaskIdHasBeenSet; }

    
    inline void SetFuotaTaskId(const Aws::String& value) { m_fuotaTaskIdHasBeenSet = true; m_fuotaTaskId = value; }

    
    inline void SetFuotaTaskId(Aws::String&& value) { m_fuotaTaskIdHasBeenSet = true; m_fuotaTaskId = std::move(value); }

    
    inline void SetFuotaTaskId(const char* value) { m_fuotaTaskIdHasBeenSet = true; m_fuotaTaskId.assign(value); }

    
    inline ListWirelessDevicesRequest& WithFuotaTaskId(const Aws::String& value) { SetFuotaTaskId(value); return *this;}

    
    inline ListWirelessDevicesRequest& WithFuotaTaskId(Aws::String&& value) { SetFuotaTaskId(std::move(value)); return *this;}

    
    inline ListWirelessDevicesRequest& WithFuotaTaskId(const char* value) { SetFuotaTaskId(value); return *this;}


    
    inline const Aws::String& GetMulticastGroupId() const{ return m_multicastGroupId; }

    
    inline bool MulticastGroupIdHasBeenSet() const { return m_multicastGroupIdHasBeenSet; }

    
    inline void SetMulticastGroupId(const Aws::String& value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId = value; }

    
    inline void SetMulticastGroupId(Aws::String&& value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId = std::move(value); }

    
    inline void SetMulticastGroupId(const char* value) { m_multicastGroupIdHasBeenSet = true; m_multicastGroupId.assign(value); }

    
    inline ListWirelessDevicesRequest& WithMulticastGroupId(const Aws::String& value) { SetMulticastGroupId(value); return *this;}

    
    inline ListWirelessDevicesRequest& WithMulticastGroupId(Aws::String&& value) { SetMulticastGroupId(std::move(value)); return *this;}

    
    inline ListWirelessDevicesRequest& WithMulticastGroupId(const char* value) { SetMulticastGroupId(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_deviceProfileId;
    bool m_deviceProfileIdHasBeenSet = false;

    Aws::String m_serviceProfileId;
    bool m_serviceProfileIdHasBeenSet = false;

    WirelessDeviceType m_wirelessDeviceType;
    bool m_wirelessDeviceTypeHasBeenSet = false;

    Aws::String m_fuotaTaskId;
    bool m_fuotaTaskIdHasBeenSet = false;

    Aws::String m_multicastGroupId;
    bool m_multicastGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
