/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSession.h>
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
namespace DeviceFarm
{
namespace Model
{
  class ListTestGridSessionsResult
  {
  public:
    AWS_DEVICEFARM_API ListTestGridSessionsResult();
    AWS_DEVICEFARM_API ListTestGridSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API ListTestGridSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline const Aws::Vector<TestGridSession>& GetTestGridSessions() const{ return m_testGridSessions; }

    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline void SetTestGridSessions(const Aws::Vector<TestGridSession>& value) { m_testGridSessions = value; }

    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline void SetTestGridSessions(Aws::Vector<TestGridSession>&& value) { m_testGridSessions = std::move(value); }

    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline ListTestGridSessionsResult& WithTestGridSessions(const Aws::Vector<TestGridSession>& value) { SetTestGridSessions(value); return *this;}

    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline ListTestGridSessionsResult& WithTestGridSessions(Aws::Vector<TestGridSession>&& value) { SetTestGridSessions(std::move(value)); return *this;}

    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline ListTestGridSessionsResult& AddTestGridSessions(const TestGridSession& value) { m_testGridSessions.push_back(value); return *this; }

    /**
     * <p>The sessions that match the criteria in a <a>ListTestGridSessionsRequest</a>.
     * </p>
     */
    inline ListTestGridSessionsResult& AddTestGridSessions(TestGridSession&& value) { m_testGridSessions.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline ListTestGridSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TestGridSession> m_testGridSessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
