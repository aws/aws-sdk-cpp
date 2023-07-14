﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/PutEventsResultEntry.h>
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
  class AWS_CLOUDWATCHEVENTS_API PutEventsResult
  {
  public:
    PutEventsResult();
    PutEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of failed entries.</p>
     */
    inline int GetFailedEntryCount() const{ return m_failedEntryCount; }

    /**
     * <p>The number of failed entries.</p>
     */
    inline void SetFailedEntryCount(int value) { m_failedEntryCount = value; }

    /**
     * <p>The number of failed entries.</p>
     */
    inline PutEventsResult& WithFailedEntryCount(int value) { SetFailedEntryCount(value); return *this;}


    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline const Aws::Vector<PutEventsResultEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline void SetEntries(const Aws::Vector<PutEventsResultEntry>& value) { m_entries = value; }

    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline void SetEntries(Aws::Vector<PutEventsResultEntry>&& value) { m_entries = std::move(value); }

    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline PutEventsResult& WithEntries(const Aws::Vector<PutEventsResultEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline PutEventsResult& WithEntries(Aws::Vector<PutEventsResultEntry>&& value) { SetEntries(std::move(value)); return *this;}

    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline PutEventsResult& AddEntries(const PutEventsResultEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>The successfully and unsuccessfully ingested events results. If the ingestion
     * was successful, the entry has the event ID in it. Otherwise, you can use the
     * error code and error message to identify the problem with the entry.</p>
     */
    inline PutEventsResult& AddEntries(PutEventsResultEntry&& value) { m_entries.push_back(std::move(value)); return *this; }

  private:

    int m_failedEntryCount;

    Aws::Vector<PutEventsResultEntry> m_entries;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
