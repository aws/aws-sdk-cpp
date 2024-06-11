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
    AWS_IOTWIRELESS_API ListWirelessDeviceImportTasksResult();
    AWS_IOTWIRELESS_API ListWirelessDeviceImportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListWirelessDeviceImportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use to get the next set of results, or <code>null</code> if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWirelessDeviceImportTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWirelessDeviceImportTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWirelessDeviceImportTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of import tasks and summary information of onboarding status of devices
     * in each import task.</p>
     */
    inline const Aws::Vector<WirelessDeviceImportTask>& GetWirelessDeviceImportTaskList() const{ return m_wirelessDeviceImportTaskList; }
    inline void SetWirelessDeviceImportTaskList(const Aws::Vector<WirelessDeviceImportTask>& value) { m_wirelessDeviceImportTaskList = value; }
    inline void SetWirelessDeviceImportTaskList(Aws::Vector<WirelessDeviceImportTask>&& value) { m_wirelessDeviceImportTaskList = std::move(value); }
    inline ListWirelessDeviceImportTasksResult& WithWirelessDeviceImportTaskList(const Aws::Vector<WirelessDeviceImportTask>& value) { SetWirelessDeviceImportTaskList(value); return *this;}
    inline ListWirelessDeviceImportTasksResult& WithWirelessDeviceImportTaskList(Aws::Vector<WirelessDeviceImportTask>&& value) { SetWirelessDeviceImportTaskList(std::move(value)); return *this;}
    inline ListWirelessDeviceImportTasksResult& AddWirelessDeviceImportTaskList(const WirelessDeviceImportTask& value) { m_wirelessDeviceImportTaskList.push_back(value); return *this; }
    inline ListWirelessDeviceImportTasksResult& AddWirelessDeviceImportTaskList(WirelessDeviceImportTask&& value) { m_wirelessDeviceImportTaskList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWirelessDeviceImportTasksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWirelessDeviceImportTasksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWirelessDeviceImportTasksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<WirelessDeviceImportTask> m_wirelessDeviceImportTaskList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
