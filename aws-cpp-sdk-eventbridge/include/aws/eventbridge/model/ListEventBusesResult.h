/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/EventBus.h>
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
  class AWS_EVENTBRIDGE_API ListEventBusesResult
  {
  public:
    ListEventBusesResult();
    ListEventBusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListEventBusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This list of event buses.</p>
     */
    inline const Aws::Vector<EventBus>& GetEventBuses() const{ return m_eventBuses; }

    /**
     * <p>This list of event buses.</p>
     */
    inline void SetEventBuses(const Aws::Vector<EventBus>& value) { m_eventBuses = value; }

    /**
     * <p>This list of event buses.</p>
     */
    inline void SetEventBuses(Aws::Vector<EventBus>&& value) { m_eventBuses = std::move(value); }

    /**
     * <p>This list of event buses.</p>
     */
    inline ListEventBusesResult& WithEventBuses(const Aws::Vector<EventBus>& value) { SetEventBuses(value); return *this;}

    /**
     * <p>This list of event buses.</p>
     */
    inline ListEventBusesResult& WithEventBuses(Aws::Vector<EventBus>&& value) { SetEventBuses(std::move(value)); return *this;}

    /**
     * <p>This list of event buses.</p>
     */
    inline ListEventBusesResult& AddEventBuses(const EventBus& value) { m_eventBuses.push_back(value); return *this; }

    /**
     * <p>This list of event buses.</p>
     */
    inline ListEventBusesResult& AddEventBuses(EventBus&& value) { m_eventBuses.push_back(std::move(value)); return *this; }


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
    inline ListEventBusesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListEventBusesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token you can use in a subsequent operation to retrieve the next set of
     * results.</p>
     */
    inline ListEventBusesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventBus> m_eventBuses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
