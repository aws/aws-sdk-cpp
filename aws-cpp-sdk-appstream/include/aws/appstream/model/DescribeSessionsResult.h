/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appstream/model/Session.h>
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
namespace AppStream
{
namespace Model
{
  class DescribeSessionsResult
  {
  public:
    AWS_APPSTREAM_API DescribeSessionsResult();
    AWS_APPSTREAM_API DescribeSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API DescribeSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline const Aws::Vector<Session>& GetSessions() const{ return m_sessions; }

    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline void SetSessions(const Aws::Vector<Session>& value) { m_sessions = value; }

    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline void SetSessions(Aws::Vector<Session>&& value) { m_sessions = std::move(value); }

    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline DescribeSessionsResult& WithSessions(const Aws::Vector<Session>& value) { SetSessions(value); return *this;}

    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline DescribeSessionsResult& WithSessions(Aws::Vector<Session>&& value) { SetSessions(std::move(value)); return *this;}

    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline DescribeSessionsResult& AddSessions(const Session& value) { m_sessions.push_back(value); return *this; }

    /**
     * <p>Information about the streaming sessions.</p>
     */
    inline DescribeSessionsResult& AddSessions(Session&& value) { m_sessions.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Session> m_sessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
