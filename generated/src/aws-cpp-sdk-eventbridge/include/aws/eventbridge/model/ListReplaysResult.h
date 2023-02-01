/**
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


    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline const Aws::Vector<Replay>& GetReplays() const{ return m_replays; }

    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline void SetReplays(const Aws::Vector<Replay>& value) { m_replays = value; }

    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline void SetReplays(Aws::Vector<Replay>&& value) { m_replays = std::move(value); }

    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline ListReplaysResult& WithReplays(const Aws::Vector<Replay>& value) { SetReplays(value); return *this;}

    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline ListReplaysResult& WithReplays(Aws::Vector<Replay>&& value) { SetReplays(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline ListReplaysResult& AddReplays(const Replay& value) { m_replays.push_back(value); return *this; }

    /**
     * <p>An array of <code>Replay</code> objects that contain information about the
     * replay.</p>
     */
    inline ListReplaysResult& AddReplays(Replay&& value) { m_replays.push_back(std::move(value)); return *this; }


    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListReplaysResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListReplaysResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned by a previous call to retrieve the next set of
     * results.</p>
     */
    inline ListReplaysResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Replay> m_replays;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
