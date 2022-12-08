/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/EventConfigurationItem.h>
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
namespace IoTWireless
{
namespace Model
{
  class ListEventConfigurationsResult
  {
  public:
    AWS_IOTWIRELESS_API ListEventConfigurationsResult();
    AWS_IOTWIRELESS_API ListEventConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API ListEventConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListEventConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListEventConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>To retrieve the next set of results, the <code>nextToken</code> value from a
     * previous response; otherwise <b>null</b> to receive the first set of
     * results.</p>
     */
    inline ListEventConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline const Aws::Vector<EventConfigurationItem>& GetEventConfigurationsList() const{ return m_eventConfigurationsList; }

    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline void SetEventConfigurationsList(const Aws::Vector<EventConfigurationItem>& value) { m_eventConfigurationsList = value; }

    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline void SetEventConfigurationsList(Aws::Vector<EventConfigurationItem>&& value) { m_eventConfigurationsList = std::move(value); }

    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline ListEventConfigurationsResult& WithEventConfigurationsList(const Aws::Vector<EventConfigurationItem>& value) { SetEventConfigurationsList(value); return *this;}

    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline ListEventConfigurationsResult& WithEventConfigurationsList(Aws::Vector<EventConfigurationItem>&& value) { SetEventConfigurationsList(std::move(value)); return *this;}

    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline ListEventConfigurationsResult& AddEventConfigurationsList(const EventConfigurationItem& value) { m_eventConfigurationsList.push_back(value); return *this; }

    /**
     * <p>Event configurations of all events for a single resource.</p>
     */
    inline ListEventConfigurationsResult& AddEventConfigurationsList(EventConfigurationItem&& value) { m_eventConfigurationsList.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<EventConfigurationItem> m_eventConfigurationsList;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
