/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/StageSessionSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListStageSessionsResult
  {
  public:
    AWS_IVSREALTIME_API ListStageSessionsResult();
    AWS_IVSREALTIME_API ListStageSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListStageSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStageSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStageSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more stage sessions than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStageSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of matching stage sessions.</p>
     */
    inline const Aws::Vector<StageSessionSummary>& GetStageSessions() const{ return m_stageSessions; }

    /**
     * <p>List of matching stage sessions.</p>
     */
    inline void SetStageSessions(const Aws::Vector<StageSessionSummary>& value) { m_stageSessions = value; }

    /**
     * <p>List of matching stage sessions.</p>
     */
    inline void SetStageSessions(Aws::Vector<StageSessionSummary>&& value) { m_stageSessions = std::move(value); }

    /**
     * <p>List of matching stage sessions.</p>
     */
    inline ListStageSessionsResult& WithStageSessions(const Aws::Vector<StageSessionSummary>& value) { SetStageSessions(value); return *this;}

    /**
     * <p>List of matching stage sessions.</p>
     */
    inline ListStageSessionsResult& WithStageSessions(Aws::Vector<StageSessionSummary>&& value) { SetStageSessions(std::move(value)); return *this;}

    /**
     * <p>List of matching stage sessions.</p>
     */
    inline ListStageSessionsResult& AddStageSessions(const StageSessionSummary& value) { m_stageSessions.push_back(value); return *this; }

    /**
     * <p>List of matching stage sessions.</p>
     */
    inline ListStageSessionsResult& AddStageSessions(StageSessionSummary&& value) { m_stageSessions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStageSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStageSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStageSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<StageSessionSummary> m_stageSessions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
