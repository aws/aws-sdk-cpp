/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Proxy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetVoiceConnectorProxyResult
  {
  public:
    AWS_CHIMESDKVOICE_API GetVoiceConnectorProxyResult();
    AWS_CHIMESDKVOICE_API GetVoiceConnectorProxyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API GetVoiceConnectorProxyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The proxy configuration details.</p>
     */
    inline const Proxy& GetProxy() const{ return m_proxy; }

    /**
     * <p>The proxy configuration details.</p>
     */
    inline void SetProxy(const Proxy& value) { m_proxy = value; }

    /**
     * <p>The proxy configuration details.</p>
     */
    inline void SetProxy(Proxy&& value) { m_proxy = std::move(value); }

    /**
     * <p>The proxy configuration details.</p>
     */
    inline GetVoiceConnectorProxyResult& WithProxy(const Proxy& value) { SetProxy(value); return *this;}

    /**
     * <p>The proxy configuration details.</p>
     */
    inline GetVoiceConnectorProxyResult& WithProxy(Proxy&& value) { SetProxy(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetVoiceConnectorProxyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetVoiceConnectorProxyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetVoiceConnectorProxyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Proxy m_proxy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
