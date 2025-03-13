/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/WirelessDeviceImportTask.h>
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
  class ListWirelessDeviceImportTasksResult
  {
  public:
    AWS_IOTWIRELESS_API ListWirelessDeviceImportTasksResult() = default;
    AWS_IOTWIRELESS_API ListWirelessDeviceImportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessDeviceImportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWirelessDeviceImportTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of import tasks and summary information of onboarding status of devices
     * in each import task.</p>
     */
    inline const Aws::Vector<WirelessDeviceImportTask>& GetWirelessDeviceImportTaskList() const { return m_wirelessDeviceImportTaskList; }
    template<typename WirelessDeviceImportTaskListT = Aws::Vector<WirelessDeviceImportTask>>
    void SetWirelessDeviceImportTaskList(WirelessDeviceImportTaskListT&& value) { m_wirelessDeviceImportTaskListHasBeenSet = true; m_wirelessDeviceImportTaskList = std::forward<WirelessDeviceImportTaskListT>(value); }
    template<typename WirelessDeviceImportTaskListT = Aws::Vector<WirelessDeviceImportTask>>
    ListWirelessDeviceImportTasksResult& WithWirelessDeviceImportTaskList(WirelessDeviceImportTaskListT&& value) { SetWirelessDeviceImportTaskList(std::forward<WirelessDeviceImportTaskListT>(value)); return *this;}
    template<typename WirelessDeviceImportTaskListT = WirelessDeviceImportTask>
    ListWirelessDeviceImportTasksResult& AddWirelessDeviceImportTaskList(WirelessDeviceImportTaskListT&& value) { m_wirelessDeviceImportTaskListHasBeenSet = true; m_wirelessDeviceImportTaskList.emplace_back(std::forward<WirelessDeviceImportTaskListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWirelessDeviceImportTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WirelessDeviceImportTask> m_wirelessDeviceImportTaskList;
    bool m_wirelessDeviceImportTaskListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
