﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/NetworkInterface.h>

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
namespace StorageGateway
{
namespace Model
{
  /**
   * <p>A JSON object containing the following fields:</p>
   */
  class AWS_STORAGEGATEWAY_API DescribeGatewayInformationResult
  {
  public:
    DescribeGatewayInformationResult();
    DescribeGatewayInformationResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGatewayInformationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline DescribeGatewayInformationResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeGatewayInformationResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline DescribeGatewayInformationResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayId = value; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayId = value; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayId.assign(value); }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayId(Aws::String&& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline const Aws::String& GetGatewayName() const{ return m_gatewayName; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(const Aws::String& value) { m_gatewayName = value; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(Aws::String&& value) { m_gatewayName = value; }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline void SetGatewayName(const char* value) { m_gatewayName.assign(value); }

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayName(const Aws::String& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayName(Aws::String&& value) { SetGatewayName(value); return *this;}

    /**
     * <p>The name you configured for your gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayName(const char* value) { SetGatewayName(value); return *this;}

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline const Aws::String& GetGatewayTimezone() const{ return m_gatewayTimezone; }

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline void SetGatewayTimezone(const Aws::String& value) { m_gatewayTimezone = value; }

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline void SetGatewayTimezone(Aws::String&& value) { m_gatewayTimezone = value; }

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline void SetGatewayTimezone(const char* value) { m_gatewayTimezone.assign(value); }

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayTimezone(const Aws::String& value) { SetGatewayTimezone(value); return *this;}

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayTimezone(Aws::String&& value) { SetGatewayTimezone(value); return *this;}

    /**
     * <p>A value that indicates the time zone configured for the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayTimezone(const char* value) { SetGatewayTimezone(value); return *this;}

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline const Aws::String& GetGatewayState() const{ return m_gatewayState; }

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline void SetGatewayState(const Aws::String& value) { m_gatewayState = value; }

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline void SetGatewayState(Aws::String&& value) { m_gatewayState = value; }

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline void SetGatewayState(const char* value) { m_gatewayState.assign(value); }

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayState(const Aws::String& value) { SetGatewayState(value); return *this;}

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayState(Aws::String&& value) { SetGatewayState(value); return *this;}

    /**
     * <p>A value that indicates the operating state of the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayState(const char* value) { SetGatewayState(value); return *this;}

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetGatewayNetworkInterfaces() const{ return m_gatewayNetworkInterfaces; }

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline void SetGatewayNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_gatewayNetworkInterfaces = value; }

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline void SetGatewayNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_gatewayNetworkInterfaces = value; }

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetGatewayNetworkInterfaces(value); return *this;}

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetGatewayNetworkInterfaces(value); return *this;}

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline DescribeGatewayInformationResult& AddGatewayNetworkInterfaces(const NetworkInterface& value) { m_gatewayNetworkInterfaces.push_back(value); return *this; }

    /**
     * <p>A <a>NetworkInterface</a> array that contains descriptions of the gateway
     * network interfaces.</p>
     */
    inline DescribeGatewayInformationResult& AddGatewayNetworkInterfaces(NetworkInterface&& value) { m_gatewayNetworkInterfaces.push_back(value); return *this; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline const Aws::String& GetGatewayType() const{ return m_gatewayType; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(const Aws::String& value) { m_gatewayType = value; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(Aws::String&& value) { m_gatewayType = value; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(const char* value) { m_gatewayType.assign(value); }

    /**
     * <p>The type of the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayType(const Aws::String& value) { SetGatewayType(value); return *this;}

    /**
     * <p>The type of the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayType(Aws::String&& value) { SetGatewayType(value); return *this;}

    /**
     * <p>The type of the gateway.</p>
     */
    inline DescribeGatewayInformationResult& WithGatewayType(const char* value) { SetGatewayType(value); return *this;}

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline const Aws::String& GetNextUpdateAvailabilityDate() const{ return m_nextUpdateAvailabilityDate; }

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline void SetNextUpdateAvailabilityDate(const Aws::String& value) { m_nextUpdateAvailabilityDate = value; }

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline void SetNextUpdateAvailabilityDate(Aws::String&& value) { m_nextUpdateAvailabilityDate = value; }

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline void SetNextUpdateAvailabilityDate(const char* value) { m_nextUpdateAvailabilityDate.assign(value); }

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(const Aws::String& value) { SetNextUpdateAvailabilityDate(value); return *this;}

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(Aws::String&& value) { SetNextUpdateAvailabilityDate(value); return *this;}

    /**
     * <p>The date on which an update to the gateway is available. This date is in the
     * time zone of the gateway. If the gateway is not available for an update this
     * field is not returned in the response.</p>
     */
    inline DescribeGatewayInformationResult& WithNextUpdateAvailabilityDate(const char* value) { SetNextUpdateAvailabilityDate(value); return *this;}

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline const Aws::String& GetLastSoftwareUpdate() const{ return m_lastSoftwareUpdate; }

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline void SetLastSoftwareUpdate(const Aws::String& value) { m_lastSoftwareUpdate = value; }

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline void SetLastSoftwareUpdate(Aws::String&& value) { m_lastSoftwareUpdate = value; }

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline void SetLastSoftwareUpdate(const char* value) { m_lastSoftwareUpdate.assign(value); }

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline DescribeGatewayInformationResult& WithLastSoftwareUpdate(const Aws::String& value) { SetLastSoftwareUpdate(value); return *this;}

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline DescribeGatewayInformationResult& WithLastSoftwareUpdate(Aws::String&& value) { SetLastSoftwareUpdate(value); return *this;}

    /**
     * <p>The date on which the last software update was applied to the gateway. If the
     * gateway has never been updated, this field does not return a value in the
     * response.</p>
     */
    inline DescribeGatewayInformationResult& WithLastSoftwareUpdate(const char* value) { SetLastSoftwareUpdate(value); return *this;}

  private:
    Aws::String m_gatewayARN;
    Aws::String m_gatewayId;
    Aws::String m_gatewayName;
    Aws::String m_gatewayTimezone;
    Aws::String m_gatewayState;
    Aws::Vector<NetworkInterface> m_gatewayNetworkInterfaces;
    Aws::String m_gatewayType;
    Aws::String m_nextUpdateAvailabilityDate;
    Aws::String m_lastSoftwareUpdate;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
