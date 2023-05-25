/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/ProxySession.h>
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
  class UpdateProxySessionResult
  {
  public:
    AWS_CHIMESDKVOICE_API UpdateProxySessionResult();
    AWS_CHIMESDKVOICE_API UpdateProxySessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API UpdateProxySessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated proxy session details.</p>
     */
    inline const ProxySession& GetProxySession() const{ return m_proxySession; }

    /**
     * <p>The updated proxy session details.</p>
     */
    inline void SetProxySession(const ProxySession& value) { m_proxySession = value; }

    /**
     * <p>The updated proxy session details.</p>
     */
    inline void SetProxySession(ProxySession&& value) { m_proxySession = std::move(value); }

    /**
     * <p>The updated proxy session details.</p>
     */
    inline UpdateProxySessionResult& WithProxySession(const ProxySession& value) { SetProxySession(value); return *this;}

    /**
     * <p>The updated proxy session details.</p>
     */
    inline UpdateProxySessionResult& WithProxySession(ProxySession&& value) { SetProxySession(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProxySessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProxySessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProxySessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProxySession m_proxySession;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
