/**
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
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API PutProjectEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains Evidently's response to the sent events, including
     * an event ID and error codes, if any.</p>
     */
    inline const Aws::Vector<PutProjectEventsResultEntry>& GetEventResults() const { return m_eventResults; }
    template<typename EventResultsT = Aws::Vector<PutProjectEventsResultEntry>>
    void SetEventResults(EventResultsT&& value) { m_eventResultsHasBeenSet = true; m_eventResults = std::forward<EventResultsT>(value); }
    template<typename EventResultsT = Aws::Vector<PutProjectEventsResultEntry>>
    PutProjectEventsResult& WithEventResults(EventResultsT&& value) { SetEventResults(std::forward<EventResultsT>(value)); return *this;}
    template<typename EventResultsT = PutProjectEventsResultEntry>
    PutProjectEventsResult& AddEventResults(EventResultsT&& value) { m_eventResultsHasBeenSet = true; m_eventResults.emplace_back(std::forward<EventResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of events in the operation that could not be used by
     * Evidently.</p>
     */
    inline int GetFailedEventCount() const { return m_failedEventCount; }
    inline void SetFailedEventCount(int value) { m_failedEventCountHasBeenSet = true; m_failedEventCount = value; }
    inline PutProjectEventsResult& WithFailedEventCount(int value) { SetFailedEventCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutProjectEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PutProjectEventsResultEntry> m_eventResults;
    bool m_eventResultsHasBeenSet = false;

    int m_failedEventCount{0};
    bool m_failedEventCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
