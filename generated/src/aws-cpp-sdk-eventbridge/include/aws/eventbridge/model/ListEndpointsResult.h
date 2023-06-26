/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridge/model/Endpoint.h>
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
  class ListEndpointsResult
  {
  public:
    AWS_EVENTBRIDGE_API ListEndpointsResult();
    AWS_EVENTBRIDGE_API ListEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EVENTBRIDGE_API ListEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline ListEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline ListEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline ListEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>The endpoints returned by the call.</p>
     */
    inline ListEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an HTTP 400 InvalidToken error.</p>
     */
    inline ListEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Endpoint> m_endpoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
