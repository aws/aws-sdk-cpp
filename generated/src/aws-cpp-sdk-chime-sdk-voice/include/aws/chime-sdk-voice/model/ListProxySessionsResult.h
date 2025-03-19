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
    AWS_CHIMESDKVOICE_API ListProxySessionsResult() = default;
    AWS_CHIMESDKVOICE_API ListProxySessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API ListProxySessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The proxy sessions' details.</p>
     */
    inline const Aws::Vector<ProxySession>& GetProxySessions() const { return m_proxySessions; }
    template<typename ProxySessionsT = Aws::Vector<ProxySession>>
    void SetProxySessions(ProxySessionsT&& value) { m_proxySessionsHasBeenSet = true; m_proxySessions = std::forward<ProxySessionsT>(value); }
    template<typename ProxySessionsT = Aws::Vector<ProxySession>>
    ListProxySessionsResult& WithProxySessions(ProxySessionsT&& value) { SetProxySessions(std::forward<ProxySessionsT>(value)); return *this;}
    template<typename ProxySessionsT = ProxySession>
    ListProxySessionsResult& AddProxySessions(ProxySessionsT&& value) { m_proxySessionsHasBeenSet = true; m_proxySessions.emplace_back(std::forward<ProxySessionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProxySessionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProxySessionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProxySession> m_proxySessions;
    bool m_proxySessionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
