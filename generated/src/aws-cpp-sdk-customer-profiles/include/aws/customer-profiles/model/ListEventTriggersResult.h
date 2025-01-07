/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/EventTriggerSummaryItem.h>
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
namespace CustomerProfiles
{
namespace Model
{
  class ListEventTriggersResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListEventTriggersResult();
    AWS_CUSTOMERPROFILES_API ListEventTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListEventTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Event Triggers.</p>
     */
    inline const Aws::Vector<EventTriggerSummaryItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<EventTriggerSummaryItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<EventTriggerSummaryItem>&& value) { m_items = std::move(value); }
    inline ListEventTriggersResult& WithItems(const Aws::Vector<EventTriggerSummaryItem>& value) { SetItems(value); return *this;}
    inline ListEventTriggersResult& WithItems(Aws::Vector<EventTriggerSummaryItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListEventTriggersResult& AddItems(const EventTriggerSummaryItem& value) { m_items.push_back(value); return *this; }
    inline ListEventTriggersResult& AddItems(EventTriggerSummaryItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token from the previous call to ListEventTriggers.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventTriggersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventTriggersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventTriggersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventTriggersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventTriggersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventTriggersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventTriggerSummaryItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
