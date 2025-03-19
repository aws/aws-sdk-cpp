/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/BatchPutMessageErrorEntry.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class BatchPutMessageResult
  {
  public:
    AWS_IOTANALYTICS_API BatchPutMessageResult() = default;
    AWS_IOTANALYTICS_API BatchPutMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API BatchPutMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline const Aws::Vector<BatchPutMessageErrorEntry>& GetBatchPutMessageErrorEntries() const { return m_batchPutMessageErrorEntries; }
    template<typename BatchPutMessageErrorEntriesT = Aws::Vector<BatchPutMessageErrorEntry>>
    void SetBatchPutMessageErrorEntries(BatchPutMessageErrorEntriesT&& value) { m_batchPutMessageErrorEntriesHasBeenSet = true; m_batchPutMessageErrorEntries = std::forward<BatchPutMessageErrorEntriesT>(value); }
    template<typename BatchPutMessageErrorEntriesT = Aws::Vector<BatchPutMessageErrorEntry>>
    BatchPutMessageResult& WithBatchPutMessageErrorEntries(BatchPutMessageErrorEntriesT&& value) { SetBatchPutMessageErrorEntries(std::forward<BatchPutMessageErrorEntriesT>(value)); return *this;}
    template<typename BatchPutMessageErrorEntriesT = BatchPutMessageErrorEntry>
    BatchPutMessageResult& AddBatchPutMessageErrorEntries(BatchPutMessageErrorEntriesT&& value) { m_batchPutMessageErrorEntriesHasBeenSet = true; m_batchPutMessageErrorEntries.emplace_back(std::forward<BatchPutMessageErrorEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchPutMessageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPutMessageErrorEntry> m_batchPutMessageErrorEntries;
    bool m_batchPutMessageErrorEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
