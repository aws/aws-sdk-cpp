/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/ProxySession.h>
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
namespace Chime
{
namespace Model
{
  class ListProxySessionsResult
  {
  public:
    AWS_CHIME_API ListProxySessionsResult();
    AWS_CHIME_API ListProxySessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListProxySessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The proxy session details.</p>
     */
    inline const Aws::Vector<ProxySession>& GetProxySessions() const{ return m_proxySessions; }

    /**
     * <p>The proxy session details.</p>
     */
    inline void SetProxySessions(const Aws::Vector<ProxySession>& value) { m_proxySessions = value; }

    /**
     * <p>The proxy session details.</p>
     */
    inline void SetProxySessions(Aws::Vector<ProxySession>&& value) { m_proxySessions = std::move(value); }

    /**
     * <p>The proxy session details.</p>
     */
    inline ListProxySessionsResult& WithProxySessions(const Aws::Vector<ProxySession>& value) { SetProxySessions(value); return *this;}

    /**
     * <p>The proxy session details.</p>
     */
    inline ListProxySessionsResult& WithProxySessions(Aws::Vector<ProxySession>&& value) { SetProxySessions(std::move(value)); return *this;}

    /**
     * <p>The proxy session details.</p>
     */
    inline ListProxySessionsResult& AddProxySessions(const ProxySession& value) { m_proxySessions.push_back(value); return *this; }

    /**
     * <p>The proxy session details.</p>
     */
    inline ListProxySessionsResult& AddProxySessions(ProxySession&& value) { m_proxySessions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListProxySessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListProxySessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListProxySessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProxySession> m_proxySessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
