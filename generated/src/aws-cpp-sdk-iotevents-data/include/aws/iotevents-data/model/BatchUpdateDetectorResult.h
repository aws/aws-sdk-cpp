/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents-data/model/BatchUpdateDetectorErrorEntry.h>
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
  class BatchUpdateDetectorResult
  {
  public:
    AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult() = default;
    AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline const Aws::Vector<BatchUpdateDetectorErrorEntry>& GetBatchUpdateDetectorErrorEntries() const { return m_batchUpdateDetectorErrorEntries; }
    template<typename BatchUpdateDetectorErrorEntriesT = Aws::Vector<BatchUpdateDetectorErrorEntry>>
    void SetBatchUpdateDetectorErrorEntries(BatchUpdateDetectorErrorEntriesT&& value) { m_batchUpdateDetectorErrorEntriesHasBeenSet = true; m_batchUpdateDetectorErrorEntries = std::forward<BatchUpdateDetectorErrorEntriesT>(value); }
    template<typename BatchUpdateDetectorErrorEntriesT = Aws::Vector<BatchUpdateDetectorErrorEntry>>
    BatchUpdateDetectorResult& WithBatchUpdateDetectorErrorEntries(BatchUpdateDetectorErrorEntriesT&& value) { SetBatchUpdateDetectorErrorEntries(std::forward<BatchUpdateDetectorErrorEntriesT>(value)); return *this;}
    template<typename BatchUpdateDetectorErrorEntriesT = BatchUpdateDetectorErrorEntry>
    BatchUpdateDetectorResult& AddBatchUpdateDetectorErrorEntries(BatchUpdateDetectorErrorEntriesT&& value) { m_batchUpdateDetectorErrorEntriesHasBeenSet = true; m_batchUpdateDetectorErrorEntries.emplace_back(std::forward<BatchUpdateDetectorErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchUpdateDetectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchUpdateDetectorErrorEntry> m_batchUpdateDetectorErrorEntries;
    bool m_batchUpdateDetectorErrorEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
