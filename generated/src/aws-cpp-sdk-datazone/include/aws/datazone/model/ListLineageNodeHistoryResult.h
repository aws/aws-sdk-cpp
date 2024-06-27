/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/LineageNodeSummary.h>
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
  class ListLineageNodeHistoryResult
  {
  public:
    AWS_DATAZONE_API ListLineageNodeHistoryResult();
    AWS_DATAZONE_API ListLineageNodeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListLineageNodeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the number of history items is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of items, the response includes a pagination token named
     * NextToken. You can specify this NextToken value in a subsequent call to
     * ListLineageNodeHistory to list the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLineageNodeHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLineageNodeHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLineageNodeHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nodes returned by the ListLineageNodeHistory action.</p>
     */
    inline const Aws::Vector<LineageNodeSummary>& GetNodes() const{ return m_nodes; }
    inline void SetNodes(const Aws::Vector<LineageNodeSummary>& value) { m_nodes = value; }
    inline void SetNodes(Aws::Vector<LineageNodeSummary>&& value) { m_nodes = std::move(value); }
    inline ListLineageNodeHistoryResult& WithNodes(const Aws::Vector<LineageNodeSummary>& value) { SetNodes(value); return *this;}
    inline ListLineageNodeHistoryResult& WithNodes(Aws::Vector<LineageNodeSummary>&& value) { SetNodes(std::move(value)); return *this;}
    inline ListLineageNodeHistoryResult& AddNodes(const LineageNodeSummary& value) { m_nodes.push_back(value); return *this; }
    inline ListLineageNodeHistoryResult& AddNodes(LineageNodeSummary&& value) { m_nodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLineageNodeHistoryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLineageNodeHistoryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLineageNodeHistoryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<LineageNodeSummary> m_nodes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
