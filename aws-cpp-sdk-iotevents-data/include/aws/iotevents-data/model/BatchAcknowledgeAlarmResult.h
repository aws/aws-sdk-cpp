/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class BatchAcknowledgeAlarmResult
  {
  public:
    AWS_IOTEVENTSDATA_API BatchAcknowledgeAlarmResult();
    AWS_IOTEVENTSDATA_API BatchAcknowledgeAlarmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API BatchAcknowledgeAlarmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline const Aws::Vector<BatchAlarmActionErrorEntry>& GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline void SetErrorEntries(const Aws::Vector<BatchAlarmActionErrorEntry>& value) { m_errorEntries = value; }

    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline void SetErrorEntries(Aws::Vector<BatchAlarmActionErrorEntry>&& value) { m_errorEntries = std::move(value); }

    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline BatchAcknowledgeAlarmResult& WithErrorEntries(const Aws::Vector<BatchAlarmActionErrorEntry>& value) { SetErrorEntries(value); return *this;}

    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline BatchAcknowledgeAlarmResult& WithErrorEntries(Aws::Vector<BatchAlarmActionErrorEntry>&& value) { SetErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline BatchAcknowledgeAlarmResult& AddErrorEntries(const BatchAlarmActionErrorEntry& value) { m_errorEntries.push_back(value); return *this; }

    /**
     * <p>A list of errors associated with the request, or <code>null</code> if there
     * are no errors. Each error entry contains an entry ID that helps you identify the
     * entry that failed.</p>
     */
    inline BatchAcknowledgeAlarmResult& AddErrorEntries(BatchAlarmActionErrorEntry&& value) { m_errorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchAlarmActionErrorEntry> m_errorEntries;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
