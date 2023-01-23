/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-devices/IoT1ClickDevicesService_EXPORTS.h>
#include <aws/iot1click-devices/IoT1ClickDevicesServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoT1ClickDevicesService
{
namespace Model
{

  /**
   */
  class ListDevicesRequest : public IoT1ClickDevicesServiceRequest
  {
  public:
    AWS_IOT1CLICKDEVICESSERVICE_API ListDevicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDevices"; }

    AWS_IOT1CLICKDEVICESSERVICE_API Aws::String SerializePayload() const override;

    AWS_IOT1CLICKDEVICESSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline const Aws::String& GetDeviceType() const{ return m_deviceType; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetDeviceType(const Aws::String& value) { m_deviceTypeHasBeenSet = true; m_deviceType = value; }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetDeviceType(Aws::String&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::move(value); }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline void SetDeviceType(const char* value) { m_deviceTypeHasBeenSet = true; m_deviceType.assign(value); }

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline ListDevicesRequest& WithDeviceType(const Aws::String& value) { SetDeviceType(value); return *this;}

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline ListDevicesRequest& WithDeviceType(Aws::String&& value) { SetDeviceType(std::move(value)); return *this;}

    /**
     * <p>The type of the device, such as "button".</p>
     */
    inline ListDevicesRequest& WithDeviceType(const char* value) { SetDeviceType(value); return *this;}


    /**
     * <p>The maximum number of results to return per request. If not set, a default
     * value of
 100 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per request. If not set, a default
     * value of
 100 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per request. If not set, a default
     * value of
 100 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per request. If not set, a default
     * value of
 100 is used.</p>
     */
    inline ListDevicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListDevicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListDevicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListDevicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickDevicesService
} // namespace Aws
