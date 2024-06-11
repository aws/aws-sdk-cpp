﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/Replay.h>
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
namespace EventBridge
{
namespace Model
{
  class ListReplaysResult
  {
  public:
    AWS_EVENTBRIDGE_API ListReplaysResult();
    AWS_EVENTBRIDGE_API ListReplaysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListReplaysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline const Aws::Vector<Replay>& GetReplays() const{ return m_replays; }
    inline void SetReplays(const Aws::Vector<Replay>& value) { m_replays = value; }
    inline void SetReplays(Aws::Vector<Replay>&& value) { m_replays = std::move(value); }
    inline ListReplaysResult& WithReplays(const Aws::Vector<Replay>& value) { SetReplays(value); return *this;}
    inline ListReplaysResult& WithReplays(Aws::Vector<Replay>&& value) { SetReplays(std::move(value)); return *this;}
    inline ListReplaysResult& AddReplays(const Replay& value) { m_replays.push_back(value); return *this; }
    inline ListReplaysResult& AddReplays(Replay&& value) { m_replays.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListReplaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListReplaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListReplaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListReplaysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListReplaysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListReplaysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Replay> m_replays;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
