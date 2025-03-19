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
    AWS_IOTWIRELESS_API ListDevicesForWirelessDeviceImportTaskResult() = default;
    AWS_IOTWIRELESS_API ListDevicesForWirelessDeviceImportTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListDevicesForWirelessDeviceImportTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDevicesForWirelessDeviceImportTaskResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Sidewalk destination that describes the IoT rule to route
     * messages received from devices in an import task that are onboarded to AWS IoT
     * Wireless.</p>
     */
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    ListDevicesForWirelessDeviceImportTaskResult& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of wireless devices in an import task and their onboarding status.</p>
     */
    inline const Aws::Vector<ImportedWirelessDevice>& GetImportedWirelessDeviceList() const { return m_importedWirelessDeviceList; }
    template<typename ImportedWirelessDeviceListT = Aws::Vector<ImportedWirelessDevice>>
    void SetImportedWirelessDeviceList(ImportedWirelessDeviceListT&& value) { m_importedWirelessDeviceListHasBeenSet = true; m_importedWirelessDeviceList = std::forward<ImportedWirelessDeviceListT>(value); }
    template<typename ImportedWirelessDeviceListT = Aws::Vector<ImportedWirelessDevice>>
    ListDevicesForWirelessDeviceImportTaskResult& WithImportedWirelessDeviceList(ImportedWirelessDeviceListT&& value) { SetImportedWirelessDeviceList(std::forward<ImportedWirelessDeviceListT>(value)); return *this;}
    template<typename ImportedWirelessDeviceListT = ImportedWirelessDevice>
    ListDevicesForWirelessDeviceImportTaskResult& AddImportedWirelessDeviceList(ImportedWirelessDeviceListT&& value) { m_importedWirelessDeviceListHasBeenSet = true; m_importedWirelessDeviceList.emplace_back(std::forward<ImportedWirelessDeviceListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDevicesForWirelessDeviceImportTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::Vector<ImportedWirelessDevice> m_importedWirelessDeviceList;
    bool m_importedWirelessDeviceListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
