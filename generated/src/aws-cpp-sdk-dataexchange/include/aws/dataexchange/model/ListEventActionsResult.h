/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/EventActionEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListEventActionsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListEventActionsResult();
    AWS_DATAEXCHANGE_API ListEventActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListEventActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline const Aws::Vector<EventActionEntry>& GetEventActions() const{ return m_eventActions; }

    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline void SetEventActions(const Aws::Vector<EventActionEntry>& value) { m_eventActions = value; }

    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline void SetEventActions(Aws::Vector<EventActionEntry>&& value) { m_eventActions = std::move(value); }

    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline ListEventActionsResult& WithEventActions(const Aws::Vector<EventActionEntry>& value) { SetEventActions(value); return *this;}

    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline ListEventActionsResult& WithEventActions(Aws::Vector<EventActionEntry>&& value) { SetEventActions(std::move(value)); return *this;}

    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline ListEventActionsResult& AddEventActions(const EventActionEntry& value) { m_eventActions.push_back(value); return *this; }

    /**
     * <p>The event action objects listed by the request.</p>
     */
    inline ListEventActionsResult& AddEventActions(EventActionEntry&& value) { m_eventActions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListEventActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListEventActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListEventActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EventActionEntry> m_eventActions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
