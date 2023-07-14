﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents-data/IoTEventsData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotevents-data/model/BatchPutMessageErrorEntry.h>
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
  class AWS_IOTEVENTSDATA_API BatchPutMessageResult
  {
  public:
    BatchPutMessageResult();
    BatchPutMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    BatchPutMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline const Aws::Vector<BatchPutMessageErrorEntry>& GetBatchPutMessageErrorEntries() const{ return m_batchPutMessageErrorEntries; }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline void SetBatchPutMessageErrorEntries(const Aws::Vector<BatchPutMessageErrorEntry>& value) { m_batchPutMessageErrorEntries = value; }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline void SetBatchPutMessageErrorEntries(Aws::Vector<BatchPutMessageErrorEntry>&& value) { m_batchPutMessageErrorEntries = std::move(value); }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& WithBatchPutMessageErrorEntries(const Aws::Vector<BatchPutMessageErrorEntry>& value) { SetBatchPutMessageErrorEntries(value); return *this;}

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& WithBatchPutMessageErrorEntries(Aws::Vector<BatchPutMessageErrorEntry>&& value) { SetBatchPutMessageErrorEntries(std::move(value)); return *this;}

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& AddBatchPutMessageErrorEntries(const BatchPutMessageErrorEntry& value) { m_batchPutMessageErrorEntries.push_back(value); return *this; }

    /**
     * <p>A list of any errors encountered when sending the messages.</p>
     */
    inline BatchPutMessageResult& AddBatchPutMessageErrorEntries(BatchPutMessageErrorEntry&& value) { m_batchPutMessageErrorEntries.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<BatchPutMessageErrorEntry> m_batchPutMessageErrorEntries;
  };

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
