/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/StreamSessionSummary.h>
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
namespace GameLiftStreams
{
namespace Model
{
  class ListStreamSessionsResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API ListStreamSessionsResult();
    AWS_GAMELIFTSTREAMS_API ListStreamSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API ListStreamSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of Amazon GameLift Streams stream sessions that are associated
     * with a stream group and returned in response to a list request. Each item
     * includes stream session metadata and status.</p>
     */
    inline const Aws::Vector<StreamSessionSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<StreamSessionSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<StreamSessionSummary>&& value) { m_items = std::move(value); }
    inline ListStreamSessionsResult& WithItems(const Aws::Vector<StreamSessionSummary>& value) { SetItems(value); return *this;}
    inline ListStreamSessionsResult& WithItems(Aws::Vector<StreamSessionSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListStreamSessionsResult& AddItems(const StreamSessionSummary& value) { m_items.push_back(value); return *this; }
    inline ListStreamSessionsResult& AddItems(StreamSessionSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that marks the start of the next sequential page of results. If an
     * operation doesn't return a token, you've reached the end of the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListStreamSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListStreamSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListStreamSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStreamSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStreamSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStreamSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StreamSessionSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
