/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-voice/model/ProxySession.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class ListProxySessionsResult
  {
  public:
    AWS_CHIMESDKVOICE_API ListProxySessionsResult();
    AWS_CHIMESDKVOICE_API ListProxySessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListProxySessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ProxySession>& GetProxySessions() const{ return m_proxySessions; }

    
    inline void SetProxySessions(const Aws::Vector<ProxySession>& value) { m_proxySessions = value; }

    
    inline void SetProxySessions(Aws::Vector<ProxySession>&& value) { m_proxySessions = std::move(value); }

    
    inline ListProxySessionsResult& WithProxySessions(const Aws::Vector<ProxySession>& value) { SetProxySessions(value); return *this;}

    
    inline ListProxySessionsResult& WithProxySessions(Aws::Vector<ProxySession>&& value) { SetProxySessions(std::move(value)); return *this;}

    
    inline ListProxySessionsResult& AddProxySessions(const ProxySession& value) { m_proxySessions.push_back(value); return *this; }

    
    inline ListProxySessionsResult& AddProxySessions(ProxySession&& value) { m_proxySessions.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListProxySessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProxySessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProxySessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProxySession> m_proxySessions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
