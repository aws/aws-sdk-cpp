/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Session.h>
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
namespace Glue
{
namespace Model
{
  class ListSessionsResult
  {
  public:
    AWS_GLUE_API ListSessionsResult();
    AWS_GLUE_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the ID of the session. </p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline ListSessionsResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline ListSessionsResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline ListSessionsResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline ListSessionsResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>Returns the ID of the session. </p>
     */
    inline ListSessionsResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }


    /**
     * <p>Returns the session object. </p>
     */
    inline const Aws::Vector<Session>& GetSessions() const{ return m_sessions; }

    /**
     * <p>Returns the session object. </p>
     */
    inline void SetSessions(const Aws::Vector<Session>& value) { m_sessions = value; }

    /**
     * <p>Returns the session object. </p>
     */
    inline void SetSessions(Aws::Vector<Session>&& value) { m_sessions = std::move(value); }

    /**
     * <p>Returns the session object. </p>
     */
    inline ListSessionsResult& WithSessions(const Aws::Vector<Session>& value) { SetSessions(value); return *this;}

    /**
     * <p>Returns the session object. </p>
     */
    inline ListSessionsResult& WithSessions(Aws::Vector<Session>&& value) { SetSessions(std::move(value)); return *this;}

    /**
     * <p>Returns the session object. </p>
     */
    inline ListSessionsResult& AddSessions(const Session& value) { m_sessions.push_back(value); return *this; }

    /**
     * <p>Returns the session object. </p>
     */
    inline ListSessionsResult& AddSessions(Session&& value) { m_sessions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline ListSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline ListSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more result.
     * </p>
     */
    inline ListSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::Vector<Session> m_sessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
