/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorResult() = default;
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API BatchDeleteDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of errors associated with the request, or an empty array
     * (<code>[]</code>) if there are no errors. Each error entry contains a
     * <code>messageId</code> that helps you identify the entry that failed.</p>
     */
    inline const Aws::Vector<BatchDeleteDetectorErrorEntry>& GetBatchDeleteDetectorErrorEntries() const { return m_batchDeleteDetectorErrorEntries; }
    template<typename BatchDeleteDetectorErrorEntriesT = Aws::Vector<BatchDeleteDetectorErrorEntry>>
    void SetBatchDeleteDetectorErrorEntries(BatchDeleteDetectorErrorEntriesT&& value) { m_batchDeleteDetectorErrorEntriesHasBeenSet = true; m_batchDeleteDetectorErrorEntries = std::forward<BatchDeleteDetectorErrorEntriesT>(value); }
    template<typename BatchDeleteDetectorErrorEntriesT = Aws::Vector<BatchDeleteDetectorErrorEntry>>
    BatchDeleteDetectorResult& WithBatchDeleteDetectorErrorEntries(BatchDeleteDetectorErrorEntriesT&& value) { SetBatchDeleteDetectorErrorEntries(std::forward<BatchDeleteDetectorErrorEntriesT>(value)); return *this;}
    template<typename BatchDeleteDetectorErrorEntriesT = BatchDeleteDetectorErrorEntry>
    BatchDeleteDetectorResult& AddBatchDeleteDetectorErrorEntries(BatchDeleteDetectorErrorEntriesT&& value) { m_batchDeleteDetectorErrorEntriesHasBeenSet = true; m_batchDeleteDetectorErrorEntries.emplace_back(std::forward<BatchDeleteDetectorErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteDetectorErrorEntry> m_batchDeleteDetectorErrorEntries;
    bool m_batchDeleteDetectorErrorEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
