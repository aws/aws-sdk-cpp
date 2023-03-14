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
    AWS_IOTANALYTICS_API BatchPutMessageResult();
    AWS_IOTANALYTICS_API BatchPutMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API BatchPutMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline const Aws::Vector<BatchPutMessageErrorEntry>& GetBatchPutMessageErrorEntries() const{ return m_batchPutMessageErrorEntries; }

    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline void SetBatchPutMessageErrorEntries(const Aws::Vector<BatchPutMessageErrorEntry>& value) { m_batchPutMessageErrorEntries = value; }

    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline void SetBatchPutMessageErrorEntries(Aws::Vector<BatchPutMessageErrorEntry>&& value) { m_batchPutMessageErrorEntries = std::move(value); }

    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline BatchPutMessageResult& WithBatchPutMessageErrorEntries(const Aws::Vector<BatchPutMessageErrorEntry>& value) { SetBatchPutMessageErrorEntries(value); return *this;}

    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline BatchPutMessageResult& WithBatchPutMessageErrorEntries(Aws::Vector<BatchPutMessageErrorEntry>&& value) { SetBatchPutMessageErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline BatchPutMessageResult& AddBatchPutMessageErrorEntries(const BatchPutMessageErrorEntry& value) { m_batchPutMessageErrorEntries.push_back(value); return *this; }

    /**
     * <p>A list of any errors encountered when sending the messages to the
     * channel.</p>
     */
    inline BatchPutMessageResult& AddBatchPutMessageErrorEntries(BatchPutMessageErrorEntry&& value) { m_batchPutMessageErrorEntries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchPutMessageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchPutMessageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchPutMessageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchPutMessageErrorEntry> m_batchPutMessageErrorEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
