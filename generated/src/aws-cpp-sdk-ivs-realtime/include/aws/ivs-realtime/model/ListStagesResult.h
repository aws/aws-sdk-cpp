﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs-realtime/model/StageSummary.h>
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
  class ListStagesResult
  {
  public:
    AWS_IVSREALTIME_API ListStagesResult();
    AWS_IVSREALTIME_API ListStagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListStagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more stages than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListStagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline const Aws::Vector<StageSummary>& GetStages() const{ return m_stages; }

    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline void SetStages(const Aws::Vector<StageSummary>& value) { m_stages = value; }

    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline void SetStages(Aws::Vector<StageSummary>&& value) { m_stages = std::move(value); }

    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline ListStagesResult& WithStages(const Aws::Vector<StageSummary>& value) { SetStages(value); return *this;}

    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline ListStagesResult& WithStages(Aws::Vector<StageSummary>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline ListStagesResult& AddStages(const StageSummary& value) { m_stages.push_back(value); return *this; }

    /**
     * <p>List of the matching stages (summary information only).</p>
     */
    inline ListStagesResult& AddStages(StageSummary&& value) { m_stages.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListStagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListStagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListStagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<StageSummary> m_stages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
