/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/events/model/PutEventsResultEntry.h>

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
  /**
   * <p>The result of the <a>PutEvents</a> operation.</p>
   */
  class AWS_CLOUDWATCHEVENTS_API PutEventsResult
  {
  public:
    PutEventsResult();
    PutEventsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutEventsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline const Aws::Vector<PutEventsResultEntry>& GetEntries() const{ return m_entries; }

    /**
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline void SetEntries(const Aws::Vector<PutEventsResultEntry>& value) { m_entries = value; }

    /**
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline void SetEntries(Aws::Vector<PutEventsResultEntry>&& value) { m_entries = value; }

    /**
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline PutEventsResult& WithEntries(const Aws::Vector<PutEventsResultEntry>& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline PutEventsResult& WithEntries(Aws::Vector<PutEventsResultEntry>&& value) { SetEntries(value); return *this;}

    /**
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline PutEventsResult& AddEntries(const PutEventsResultEntry& value) { m_entries.push_back(value); return *this; }

    /**
     * <p>A list of successfully and unsuccessfully ingested events results. If the
     * ingestion was successful, the entry will have the event ID in it. If not, then
     * the ErrorCode and ErrorMessage can be used to identify the problem with the
     * entry.</p>
     */
    inline PutEventsResult& AddEntries(PutEventsResultEntry&& value) { m_entries.push_back(value); return *this; }

  private:
    int m_failedEntryCount;
    Aws::Vector<PutEventsResultEntry> m_entries;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
