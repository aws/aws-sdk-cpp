/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Proxy.h>
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
  class PutVoiceConnectorProxyResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorProxyResult();
    AWS_CHIMESDKVOICE_API PutVoiceConnectorProxyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutVoiceConnectorProxyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Proxy& GetProxy() const{ return m_proxy; }

    
    inline void SetProxy(const Proxy& value) { m_proxy = value; }

    
    inline void SetProxy(Proxy&& value) { m_proxy = std::move(value); }

    
    inline PutVoiceConnectorProxyResult& WithProxy(const Proxy& value) { SetProxy(value); return *this;}

    
    inline PutVoiceConnectorProxyResult& WithProxy(Proxy&& value) { SetProxy(std::move(value)); return *this;}

  private:

    Proxy m_proxy;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
