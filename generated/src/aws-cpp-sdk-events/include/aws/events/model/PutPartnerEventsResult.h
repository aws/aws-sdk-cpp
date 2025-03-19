/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/PutPartnerEventsResultEntry.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class PutPartnerEventsResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API PutPartnerEventsResult() = default;
    AWS_CLOUDWATCHEVENTS_API PutPartnerEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API PutPartnerEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of events from this operation that could not be written to the
     * partner event bus.</p>
     */
    inline int GetFailedEntryCount() const { return m_failedEntryCount; }
    inline void SetFailedEntryCount(int value) { m_failedEntryCountHasBeenSet = true; m_failedEntryCount = value; }
    inline PutPartnerEventsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline const Aws::Vector<PutPartnerEventsResultEntry>& GetEntries() const { return m_entries; }
    template<typename EntriesT = Aws::Vector<PutPartnerEventsResultEntry>>
    void SetEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries = std::forward<EntriesT>(value); }
    template<typename EntriesT = Aws::Vector<PutPartnerEventsResultEntry>>
    PutPartnerEventsResult& WithEntries(EntriesT&& value) { SetEntries(std::forward<EntriesT>(value)); return *this;}
    template<typename EntriesT = PutPartnerEventsResultEntry>
    PutPartnerEventsResult& AddEntries(EntriesT&& value) { m_entriesHasBeenSet = true; m_entries.emplace_back(std::forward<EntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutPartnerEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_failedEntryCount{0};
    bool m_failedEntryCountHasBeenSet = false;

    Aws::Vector<PutPartnerEventsResultEntry> m_entries;
    bool m_entriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
