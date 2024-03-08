/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/PutPartnerEventsResultEntry.h>
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
namespace EventBridge
{
namespace Model
{
  class PutPartnerEventsResult
  {
  public:
    AWS_EVENTBRIDGE_API PutPartnerEventsResult();
    AWS_EVENTBRIDGE_API PutPartnerEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API PutPartnerEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline const Aws::Vector<PutPartnerEventsResultEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline void SetEntries(const Aws::Vector<PutPartnerEventsResultEntry>& value) { m_entries = value; }

    /**
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline void SetEntries(Aws::Vector<PutPartnerEventsResultEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline PutPartnerEventsResult& WithEntries(const Aws::Vector<PutPartnerEventsResultEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline PutPartnerEventsResult& WithEntries(Aws::Vector<PutPartnerEventsResultEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline PutPartnerEventsResult& AddEntries(const PutPartnerEventsResultEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>The results for each event entry the partner submitted in this request. If
     * the event was successfully submitted, the entry has the event ID in it.
     * Otherwise, you can use the error code and error message to identify the problem
     * with the entry.</p> <p>For each record, the index of the response element is the
     * same as the index in the request array.</p>
     */
    inline PutPartnerEventsResult& AddEntries(PutPartnerEventsResultEntry&& value) { m_entries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutPartnerEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutPartnerEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutPartnerEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_failedEntryCount;

    Aws::Vector<PutPartnerEventsResultEntry> m_entries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
