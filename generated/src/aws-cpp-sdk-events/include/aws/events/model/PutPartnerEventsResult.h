/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_CLOUDWATCHEVENTS_API PutPartnerEventsResult();
    AWS_CLOUDWATCHEVENTS_API PutPartnerEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API PutPartnerEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of events from this operation that could not be written to the
     * partner event bus.</p>
     */
    inline int GetFailedEntryCount() const{ return m_failedEntryCount; }

    /**
     * <p>The number of events from this operation that could not be written to the
     * partner event bus.</p>
     */
    inline void SetFailedEntryCount(int value) { m_failedEntryCount = value; }

    /**
     * <p>The number of events from this operation that could not be written to the
     * partner event bus.</p>
     */
    inline PutPartnerEventsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}


    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline const Aws::Vector<PutPartnerEventsResultEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline void SetEntries(const Aws::Vector<PutPartnerEventsResultEntry>& value) { m_entries = value; }

    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline void SetEntries(Aws::Vector<PutPartnerEventsResultEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline PutPartnerEventsResult& WithEntries(const Aws::Vector<PutPartnerEventsResultEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline PutPartnerEventsResult& WithEntries(Aws::Vector<PutPartnerEventsResultEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline PutPartnerEventsResult& AddEntries(const PutPartnerEventsResultEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>The list of events from this operation that were successfully written to the
     * partner event bus.</p>
     */
    inline PutPartnerEventsResult& AddEntries(PutPartnerEventsResultEntry&& value) { m_entries.push_back(std::move(value)); return *this; }

  private:

    int m_failedEntryCount;

    Aws::Vector<PutPartnerEventsResultEntry> m_entries;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
