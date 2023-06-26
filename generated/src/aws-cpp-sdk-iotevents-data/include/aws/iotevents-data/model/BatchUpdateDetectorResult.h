﻿/**
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
    AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult();
    AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTEVENTSDATA_API BatchUpdateDetectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline const Aws::Vector<BatchUpdateDetectorErrorEntry>& GetBatchUpdateDetectorErrorEntries() const{ return m_batchUpdateDetectorErrorEntries; }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline void SetBatchUpdateDetectorErrorEntries(const Aws::Vector<BatchUpdateDetectorErrorEntry>& value) { m_batchUpdateDetectorErrorEntries = value; }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline void SetBatchUpdateDetectorErrorEntries(Aws::Vector<BatchUpdateDetectorErrorEntry>&& value) { m_batchUpdateDetectorErrorEntries = std::move(value); }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& WithBatchUpdateDetectorErrorEntries(const Aws::Vector<BatchUpdateDetectorErrorEntry>& value) { SetBatchUpdateDetectorErrorEntries(value); return *this;}

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& WithBatchUpdateDetectorErrorEntries(Aws::Vector<BatchUpdateDetectorErrorEntry>&& value) { SetBatchUpdateDetectorErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& AddBatchUpdateDetectorErrorEntries(const BatchUpdateDetectorErrorEntry& value) { m_batchUpdateDetectorErrorEntries.push_back(value); return *this; }

    /**
     * <p>A list of those detector updates that resulted in errors. (If an error is
     * listed here, the specific update did not occur.)</p>
     */
    inline BatchUpdateDetectorResult& AddBatchUpdateDetectorErrorEntries(BatchUpdateDetectorErrorEntry&& value) { m_batchUpdateDetectorErrorEntries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchUpdateDetectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchUpdateDetectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchUpdateDetectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchUpdateDetectorErrorEntry> m_batchUpdateDetectorErrorEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
