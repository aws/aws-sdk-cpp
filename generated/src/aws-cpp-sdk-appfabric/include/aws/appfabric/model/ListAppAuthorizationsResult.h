/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/AppAuthorizationSummary.h>
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
namespace AppFabric
{
namespace Model
{
  class ListAppAuthorizationsResult
  {
  public:
    AWS_APPFABRIC_API ListAppAuthorizationsResult();
    AWS_APPFABRIC_API ListAppAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPFABRIC_API ListAppAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline const Aws::Vector<AppAuthorizationSummary>& GetAppAuthorizationSummaryList() const{ return m_appAuthorizationSummaryList; }

    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline void SetAppAuthorizationSummaryList(const Aws::Vector<AppAuthorizationSummary>& value) { m_appAuthorizationSummaryList = value; }

    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline void SetAppAuthorizationSummaryList(Aws::Vector<AppAuthorizationSummary>&& value) { m_appAuthorizationSummaryList = std::move(value); }

    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline ListAppAuthorizationsResult& WithAppAuthorizationSummaryList(const Aws::Vector<AppAuthorizationSummary>& value) { SetAppAuthorizationSummaryList(value); return *this;}

    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline ListAppAuthorizationsResult& WithAppAuthorizationSummaryList(Aws::Vector<AppAuthorizationSummary>&& value) { SetAppAuthorizationSummaryList(std::move(value)); return *this;}

    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline ListAppAuthorizationsResult& AddAppAuthorizationSummaryList(const AppAuthorizationSummary& value) { m_appAuthorizationSummaryList.push_back(value); return *this; }

    /**
     * <p>Contains a list of app authorization summaries.</p>
     */
    inline ListAppAuthorizationsResult& AddAppAuthorizationSummaryList(AppAuthorizationSummary&& value) { m_appAuthorizationSummaryList.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline ListAppAuthorizationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline ListAppAuthorizationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline ListAppAuthorizationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAppAuthorizationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAppAuthorizationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAppAuthorizationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AppAuthorizationSummary> m_appAuthorizationSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
