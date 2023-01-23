/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ConnectionSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListConnectionsResult
  {
  public:
    AWS_APPRUNNER_API ListConnectionsResult();
    AWS_APPRUNNER_API ListConnectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListConnectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline const Aws::Vector<ConnectionSummary>& GetConnectionSummaryList() const{ return m_connectionSummaryList; }

    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline void SetConnectionSummaryList(const Aws::Vector<ConnectionSummary>& value) { m_connectionSummaryList = value; }

    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline void SetConnectionSummaryList(Aws::Vector<ConnectionSummary>&& value) { m_connectionSummaryList = std::move(value); }

    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline ListConnectionsResult& WithConnectionSummaryList(const Aws::Vector<ConnectionSummary>& value) { SetConnectionSummaryList(value); return *this;}

    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline ListConnectionsResult& WithConnectionSummaryList(Aws::Vector<ConnectionSummary>&& value) { SetConnectionSummaryList(std::move(value)); return *this;}

    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline ListConnectionsResult& AddConnectionSummaryList(const ConnectionSummary& value) { m_connectionSummaryList.push_back(value); return *this; }

    /**
     * <p>A list of summary information records for connections. In a paginated
     * request, the request returns up to <code>MaxResults</code> records for each
     * call.</p>
     */
    inline ListConnectionsResult& AddConnectionSummaryList(ConnectionSummary&& value) { m_connectionSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline ListConnectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline ListConnectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. Returned in a paginated request.</p>
     */
    inline ListConnectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectionSummary> m_connectionSummaryList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
