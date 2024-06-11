﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/BatchAlarmActionErrorEntry.h>
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
namespace IoTEventsData
{
namespace Model
{
  class BatchSnoozeAlarmResult
  {
  public:
    AWS_IOTEVENTSDATA_API BatchSnoozeAlarmResult();
    AWS_IOTEVENTSDATA_API BatchSnoozeAlarmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API BatchSnoozeAlarmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline const Aws::Vector<BatchAlarmActionErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }
    inline void SetErrorEntries(const Aws::Vector<BatchAlarmActionErrorEntry>& value) { m_errorEntries = value; }
    inline void SetErrorEntries(Aws::Vector<BatchAlarmActionErrorEntry>&& value) { m_errorEntries = std::move(value); }
    inline BatchSnoozeAlarmResult& WithErrorEntries(const Aws::Vector<BatchAlarmActionErrorEntry>& value) { SetErrorEntries(value); return *this;}
    inline BatchSnoozeAlarmResult& WithErrorEntries(Aws::Vector<BatchAlarmActionErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}
    inline BatchSnoozeAlarmResult& AddErrorEntries(const BatchAlarmActionErrorEntry& value) { m_errorEntries.push_back(value); return *this; }
    inline BatchSnoozeAlarmResult& AddErrorEntries(BatchAlarmActionErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchSnoozeAlarmResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchSnoozeAlarmResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchSnoozeAlarmResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchAlarmActionErrorEntry> m_errorEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
