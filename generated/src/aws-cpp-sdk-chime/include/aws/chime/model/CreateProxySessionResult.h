﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ProxySession.h>
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
namespace Chime
{
namespace Model
{
  class CreateProxySessionResult
  {
  public:
    AWS_CHIME_API CreateProxySessionResult();
    AWS_CHIME_API CreateProxySessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API CreateProxySessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The proxy session details.</p>
     */
    inline const ProxySession& GetProxySession() const{ return m_proxySession; }

    /**
     * <p>The proxy session details.</p>
     */
    inline void SetProxySession(const ProxySession& value) { m_proxySession = value; }

    /**
     * <p>The proxy session details.</p>
     */
    inline void SetProxySession(ProxySession&& value) { m_proxySession = std::move(value); }

    /**
     * <p>The proxy session details.</p>
     */
    inline CreateProxySessionResult& WithProxySession(const ProxySession& value) { SetProxySession(value); return *this;}

    /**
     * <p>The proxy session details.</p>
     */
    inline CreateProxySessionResult& WithProxySession(ProxySession&& value) { SetProxySession(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateProxySessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateProxySessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateProxySessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProxySession m_proxySession;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
