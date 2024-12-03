/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/LineageEventSummary.h>
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
namespace DataZone
{
namespace Model
{
  class ListLineageEventsResult
  {
  public:
    AWS_DATAZONE_API ListLineageEventsResult();
    AWS_DATAZONE_API ListLineageEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListLineageEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of the ListLineageEvents action.</p>
     */
    inline const Aws::Vector<LineageEventSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<LineageEventSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<LineageEventSummary>&& value) { m_items = std::move(value); }
    inline ListLineageEventsResult& WithItems(const Aws::Vector<LineageEventSummary>& value) { SetItems(value); return *this;}
    inline ListLineageEventsResult& WithItems(Aws::Vector<LineageEventSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListLineageEventsResult& AddItems(const LineageEventSummary& value) { m_items.push_back(value); return *this; }
    inline ListLineageEventsResult& AddItems(LineageEventSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of lineage events is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of lineage events, the response includes a pagination
     * token named NextToken. You can specify this NextToken value in a subsequent call
     * to ListLineageEvents to list the next set of lineage events.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLineageEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLineageEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLineageEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLineageEventsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLineageEventsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLineageEventsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LineageEventSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
