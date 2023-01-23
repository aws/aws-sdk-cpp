/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/BatchDeleteDetectorErrorEntry.h>
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
  class BatchDeleteDetectorResult
  {
  public:
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorResult();
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline const Aws::Vector<BatchDeleteDetectorErrorEntry>& GetBatchDeleteDetectorErrorEntries() const{ return m_batchDeleteDetectorErrorEntries; }

    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline void SetBatchDeleteDetectorErrorEntries(const Aws::Vector<BatchDeleteDetectorErrorEntry>& value) { m_batchDeleteDetectorErrorEntries = value; }

    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline void SetBatchDeleteDetectorErrorEntries(Aws::Vector<BatchDeleteDetectorErrorEntry>&& value) { m_batchDeleteDetectorErrorEntries = std::move(value); }

    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline BatchDeleteDetectorResult& WithBatchDeleteDetectorErrorEntries(const Aws::Vector<BatchDeleteDetectorErrorEntry>& value) { SetBatchDeleteDetectorErrorEntries(value); return *this;}

    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline BatchDeleteDetectorResult& WithBatchDeleteDetectorErrorEntries(Aws::Vector<BatchDeleteDetectorErrorEntry>&& value) { SetBatchDeleteDetectorErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline BatchDeleteDetectorResult& AddBatchDeleteDetectorErrorEntries(const BatchDeleteDetectorErrorEntry& value) { m_batchDeleteDetectorErrorEntries.push_back(value); return *this; }

    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline BatchDeleteDetectorResult& AddBatchDeleteDetectorErrorEntries(BatchDeleteDetectorErrorEntry&& value) { m_batchDeleteDetectorErrorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchDeleteDetectorErrorEntry> m_batchDeleteDetectorErrorEntries;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
