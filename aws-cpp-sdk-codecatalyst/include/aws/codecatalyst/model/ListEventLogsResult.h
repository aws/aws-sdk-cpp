/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/EventLogEntry.h>
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
namespace CodeCatalyst
{
namespace Model
{
  class ListEventLogsResult
  {
  public:
    AWS_CODECATALYST_API ListEventLogsResult();
    AWS_CODECATALYST_API ListEventLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECATALYST_API ListEventLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListEventLogsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListEventLogsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListEventLogsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline const Aws::Vector<EventLogEntry>& GetItems() const{ return m_items; }

    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline void SetItems(const Aws::Vector<EventLogEntry>& value) { m_items = value; }

    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline void SetItems(Aws::Vector<EventLogEntry>&& value) { m_items = std::move(value); }

    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline ListEventLogsResult& WithItems(const Aws::Vector<EventLogEntry>& value) { SetItems(value); return *this;}

    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline ListEventLogsResult& WithItems(Aws::Vector<EventLogEntry>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline ListEventLogsResult& AddItems(const EventLogEntry& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Information about each event retrieved in the list.</p>
     */
    inline ListEventLogsResult& AddItems(EventLogEntry&& value) { m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<EventLogEntry> m_items;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
