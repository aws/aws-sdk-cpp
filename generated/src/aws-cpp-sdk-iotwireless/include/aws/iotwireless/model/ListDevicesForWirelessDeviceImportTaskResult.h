/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/ImportedWirelessDevice.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListDevicesForWirelessDeviceImportTaskResult
  {
  public:
    AWS_IOTWIRELESS_API ListDevicesForWirelessDeviceImportTaskResult();
    AWS_IOTWIRELESS_API ListDevicesForWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListDevicesForWirelessDeviceImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationName = value; }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationName = std::move(value); }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationName.assign(value); }

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline const Aws::Vector<ImportedWirelessDevice>& GetImportedWirelessDeviceList() const{ return m_importedWirelessDeviceList; }

    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline void SetImportedWirelessDeviceList(const Aws::Vector<ImportedWirelessDevice>& value) { m_importedWirelessDeviceList = value; }

    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline void SetImportedWirelessDeviceList(Aws::Vector<ImportedWirelessDevice>&& value) { m_importedWirelessDeviceList = std::move(value); }

    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithImportedWirelessDeviceList(const Aws::Vector<ImportedWirelessDevice>& value) { SetImportedWirelessDeviceList(value); return *this;}

    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& WithImportedWirelessDeviceList(Aws::Vector<ImportedWirelessDevice>&& value) { SetImportedWirelessDeviceList(std::move(value)); return *this;}

    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& AddImportedWirelessDeviceList(const ImportedWirelessDevice& value) { m_importedWirelessDeviceList.push_back(value); return *this; }

    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline ListDevicesForWirelessDeviceImportTaskResult& AddImportedWirelessDeviceList(ImportedWirelessDevice&& value) { m_importedWirelessDeviceList.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDevicesForWirelessDeviceImportTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDevicesForWirelessDeviceImportTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDevicesForWirelessDeviceImportTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::String m_destinationName;

    Aws::Vector<ImportedWirelessDevice> m_importedWirelessDeviceList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
