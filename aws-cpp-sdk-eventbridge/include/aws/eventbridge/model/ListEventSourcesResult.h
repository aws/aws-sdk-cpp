/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/EventSource.h>
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
  class ListEventSourcesResult
  {
  public:
    AWS_EVENTBRIDGE_API ListEventSourcesResult();
    AWS_EVENTBRIDGE_API ListEventSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListEventSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of event sources.</p>
     */
    inline const Aws::Vector<EventSource>& GetEventSources() const{ return m_eventSources; }

    /**
     * <p>The list of event sources.</p>
     */
    inline void SetEventSources(const Aws::Vector<EventSource>& value) { m_eventSources = value; }

    /**
     * <p>The list of event sources.</p>
     */
    inline void SetEventSources(Aws::Vector<EventSource>&& value) { m_eventSources = std::move(value); }

    /**
     * <p>The list of event sources.</p>
     */
    inline ListEventSourcesResult& WithEventSources(const Aws::Vector<EventSource>& value) { SetEventSources(value); return *this;}

    /**
     * <p>The list of event sources.</p>
     */
    inline ListEventSourcesResult& WithEventSources(Aws::Vector<EventSource>&& value) { SetEventSources(std::move(value)); return *this;}

    /**
     * <p>The list of event sources.</p>
     */
    inline ListEventSourcesResult& AddEventSources(const EventSource& value) { m_eventSources.push_back(value); return *this; }

    /**
     * <p>The list of event sources.</p>
     */
    inline ListEventSourcesResult& AddEventSources(EventSource&& value) { m_eventSources.push_back(std::move(value)); return *this; }


    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListEventSourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListEventSourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListEventSourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventSource> m_eventSources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
