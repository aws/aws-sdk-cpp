/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/model/Tunnel.h>
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
namespace IoTSecureTunneling
{
namespace Model
{
  class DescribeTunnelResult
  {
  public:
    AWS_IOTSECURETUNNELING_API DescribeTunnelResult();
    AWS_IOTSECURETUNNELING_API DescribeTunnelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSECURETUNNELING_API DescribeTunnelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tunnel being described.</p>
     */
    inline const Tunnel& GetTunnel() const{ return m_tunnel; }

    /**
     * <p>The tunnel being described.</p>
     */
    inline void SetTunnel(const Tunnel& value) { m_tunnel = value; }

    /**
     * <p>The tunnel being described.</p>
     */
    inline void SetTunnel(Tunnel&& value) { m_tunnel = std::move(value); }

    /**
     * <p>The tunnel being described.</p>
     */
    inline DescribeTunnelResult& WithTunnel(const Tunnel& value) { SetTunnel(value); return *this;}

    /**
     * <p>The tunnel being described.</p>
     */
    inline DescribeTunnelResult& WithTunnel(Tunnel&& value) { SetTunnel(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeTunnelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeTunnelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeTunnelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Tunnel m_tunnel;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
