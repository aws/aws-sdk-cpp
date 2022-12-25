/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Proxy.h>
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
  class GetVoiceConnectorProxyResult
  {
  public:
    AWS_CHIME_API GetVoiceConnectorProxyResult();
    AWS_CHIME_API GetVoiceConnectorProxyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API GetVoiceConnectorProxyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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

  private:

    Proxy m_proxy;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
