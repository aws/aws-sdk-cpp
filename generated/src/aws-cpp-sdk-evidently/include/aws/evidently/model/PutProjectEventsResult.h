﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/PutProjectEventsResultEntry.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class PutProjectEventsResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResult();
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains Evidently's response to the sent events, including
     * an event ID and error codes, if any.</p>
     */
    inline const Aws::Vector<PutProjectEventsResultEntry>& GetEventResults() const{ return m_eventResults; }
    inline void SetEventResults(const Aws::Vector<PutProjectEventsResultEntry>& value) { m_eventResults = value; }
    inline void SetEventResults(Aws::Vector<PutProjectEventsResultEntry>&& value) { m_eventResults = std::move(value); }
    inline PutProjectEventsResult& WithEventResults(const Aws::Vector<PutProjectEventsResultEntry>& value) { SetEventResults(value); return *this;}
    inline PutProjectEventsResult& WithEventResults(Aws::Vector<PutProjectEventsResultEntry>&& value) { SetEventResults(std::move(value)); return *this;}
    inline PutProjectEventsResult& AddEventResults(const PutProjectEventsResultEntry& value) { m_eventResults.push_back(value); return *this; }
    inline PutProjectEventsResult& AddEventResults(PutProjectEventsResultEntry&& value) { m_eventResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of events in the operation that could not be used by
     * Evidently.</p>
     */
    inline int GetFailedEventCount() const{ return m_failedEventCount; }
    inline void SetFailedEventCount(int value) { m_failedEventCount = value; }
    inline PutProjectEventsResult& WithFailedEventCount(int value) { SetFailedEventCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutProjectEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutProjectEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutProjectEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PutProjectEventsResultEntry> m_eventResults;

    int m_failedEventCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
