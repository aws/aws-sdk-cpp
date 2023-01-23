/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/frauddetector/model/EventType.h>
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
namespace FraudDetector
{
namespace Model
{
  class GetEventTypesResult
  {
  public:
    AWS_FRAUDDETECTOR_API GetEventTypesResult();
    AWS_FRAUDDETECTOR_API GetEventTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FRAUDDETECTOR_API GetEventTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of event types.</p>
     */
    inline const Aws::Vector<EventType>& GetEventTypes() const{ return m_eventTypes; }

    /**
     * <p>An array of event types.</p>
     */
    inline void SetEventTypes(const Aws::Vector<EventType>& value) { m_eventTypes = value; }

    /**
     * <p>An array of event types.</p>
     */
    inline void SetEventTypes(Aws::Vector<EventType>&& value) { m_eventTypes = std::move(value); }

    /**
     * <p>An array of event types.</p>
     */
    inline GetEventTypesResult& WithEventTypes(const Aws::Vector<EventType>& value) { SetEventTypes(value); return *this;}

    /**
     * <p>An array of event types.</p>
     */
    inline GetEventTypesResult& WithEventTypes(Aws::Vector<EventType>&& value) { SetEventTypes(std::move(value)); return *this;}

    /**
     * <p>An array of event types.</p>
     */
    inline GetEventTypesResult& AddEventTypes(const EventType& value) { m_eventTypes.push_back(value); return *this; }

    /**
     * <p>An array of event types.</p>
     */
    inline GetEventTypesResult& AddEventTypes(EventType&& value) { m_eventTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The next page token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The next page token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The next page token.</p>
     */
    inline GetEventTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetEventTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The next page token.</p>
     */
    inline GetEventTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventType> m_eventTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
