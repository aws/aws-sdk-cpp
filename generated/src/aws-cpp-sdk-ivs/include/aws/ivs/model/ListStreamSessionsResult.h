﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/StreamSessionSummary.h>
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
namespace IVS
{
namespace Model
{
  class ListStreamSessionsResult
  {
  public:
    AWS_IVS_API ListStreamSessionsResult();
    AWS_IVS_API ListStreamSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListStreamSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more streams than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
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
    /**
     * <p>List of stream sessions.</p>
     */
    inline const Aws::Vector<StreamSessionSummary>& GetStreamSessions() const{ return m_streamSessions; }
    inline void SetStreamSessions(const Aws::Vector<StreamSessionSummary>& value) { m_streamSessions = value; }
    inline void SetStreamSessions(Aws::Vector<StreamSessionSummary>&& value) { m_streamSessions = std::move(value); }
    inline ListStreamSessionsResult& WithStreamSessions(const Aws::Vector<StreamSessionSummary>& value) { SetStreamSessions(value); return *this;}
    inline ListStreamSessionsResult& WithStreamSessions(Aws::Vector<StreamSessionSummary>&& value) { SetStreamSessions(std::move(value)); return *this;}
    inline ListStreamSessionsResult& AddStreamSessions(const StreamSessionSummary& value) { m_streamSessions.push_back(value); return *this; }
    inline ListStreamSessionsResult& AddStreamSessions(StreamSessionSummary&& value) { m_streamSessions.push_back(std::move(value)); return *this; }
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

    Aws::String m_nextToken;

    Aws::Vector<StreamSessionSummary> m_streamSessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
