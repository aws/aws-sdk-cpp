/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/EventStreamSummary.h>
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
  class ListEventStreamsResult
  {
  public:
    AWS_CUSTOMERPROFILES_API ListEventStreamsResult();
    AWS_CUSTOMERPROFILES_API ListEventStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API ListEventStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline const Aws::Vector<EventStreamSummary>& GetItems() const{ return m_items; }

    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline void SetItems(const Aws::Vector<EventStreamSummary>& value) { m_items = value; }

    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline void SetItems(Aws::Vector<EventStreamSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline ListEventStreamsResult& WithItems(const Aws::Vector<EventStreamSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline ListEventStreamsResult& WithItems(Aws::Vector<EventStreamSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline ListEventStreamsResult& AddItems(const EventStreamSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Contains summary information about an EventStream.</p>
     */
    inline ListEventStreamsResult& AddItems(EventStreamSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEventStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEventStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline ListEventStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEventStreamsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEventStreamsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEventStreamsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EventStreamSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
