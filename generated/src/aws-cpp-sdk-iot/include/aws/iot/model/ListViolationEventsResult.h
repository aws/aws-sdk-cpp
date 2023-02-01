/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ViolationEvent.h>
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
namespace IoT
{
namespace Model
{
  class ListViolationEventsResult
  {
  public:
    AWS_IOT_API ListViolationEventsResult();
    AWS_IOT_API ListViolationEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListViolationEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline const Aws::Vector<ViolationEvent>& GetViolationEvents() const{ return m_violationEvents; }

    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline void SetViolationEvents(const Aws::Vector<ViolationEvent>& value) { m_violationEvents = value; }

    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline void SetViolationEvents(Aws::Vector<ViolationEvent>&& value) { m_violationEvents = std::move(value); }

    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline ListViolationEventsResult& WithViolationEvents(const Aws::Vector<ViolationEvent>& value) { SetViolationEvents(value); return *this;}

    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline ListViolationEventsResult& WithViolationEvents(Aws::Vector<ViolationEvent>&& value) { SetViolationEvents(std::move(value)); return *this;}

    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline ListViolationEventsResult& AddViolationEvents(const ViolationEvent& value) { m_violationEvents.push_back(value); return *this; }

    /**
     * <p>The security profile violation alerts issued for this account during the
     * given time period, potentially filtered by security profile, behavior violated,
     * or thing (device) violating.</p>
     */
    inline ListViolationEventsResult& AddViolationEvents(ViolationEvent&& value) { m_violationEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListViolationEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListViolationEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListViolationEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ViolationEvent> m_violationEvents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
