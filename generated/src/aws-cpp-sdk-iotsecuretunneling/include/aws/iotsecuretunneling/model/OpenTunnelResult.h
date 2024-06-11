/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
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
  class OpenTunnelResult
  {
  public:
    AWS_IOTSECURETUNNELING_API OpenTunnelResult();
    AWS_IOTSECURETUNNELING_API OpenTunnelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSECURETUNNELING_API OpenTunnelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }
    inline void SetTunnelId(const Aws::String& value) { m_tunnelId = value; }
    inline void SetTunnelId(Aws::String&& value) { m_tunnelId = std::move(value); }
    inline void SetTunnelId(const char* value) { m_tunnelId.assign(value); }
    inline OpenTunnelResult& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}
    inline OpenTunnelResult& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}
    inline OpenTunnelResult& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelArn() const{ return m_tunnelArn; }
    inline void SetTunnelArn(const Aws::String& value) { m_tunnelArn = value; }
    inline void SetTunnelArn(Aws::String&& value) { m_tunnelArn = std::move(value); }
    inline void SetTunnelArn(const char* value) { m_tunnelArn.assign(value); }
    inline OpenTunnelResult& WithTunnelArn(const Aws::String& value) { SetTunnelArn(value); return *this;}
    inline OpenTunnelResult& WithTunnelArn(Aws::String&& value) { SetTunnelArn(std::move(value)); return *this;}
    inline OpenTunnelResult& WithTunnelArn(const char* value) { SetTunnelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline const Aws::String& GetSourceAccessToken() const{ return m_sourceAccessToken; }
    inline void SetSourceAccessToken(const Aws::String& value) { m_sourceAccessToken = value; }
    inline void SetSourceAccessToken(Aws::String&& value) { m_sourceAccessToken = std::move(value); }
    inline void SetSourceAccessToken(const char* value) { m_sourceAccessToken.assign(value); }
    inline OpenTunnelResult& WithSourceAccessToken(const Aws::String& value) { SetSourceAccessToken(value); return *this;}
    inline OpenTunnelResult& WithSourceAccessToken(Aws::String&& value) { SetSourceAccessToken(std::move(value)); return *this;}
    inline OpenTunnelResult& WithSourceAccessToken(const char* value) { SetSourceAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline const Aws::String& GetDestinationAccessToken() const{ return m_destinationAccessToken; }
    inline void SetDestinationAccessToken(const Aws::String& value) { m_destinationAccessToken = value; }
    inline void SetDestinationAccessToken(Aws::String&& value) { m_destinationAccessToken = std::move(value); }
    inline void SetDestinationAccessToken(const char* value) { m_destinationAccessToken.assign(value); }
    inline OpenTunnelResult& WithDestinationAccessToken(const Aws::String& value) { SetDestinationAccessToken(value); return *this;}
    inline OpenTunnelResult& WithDestinationAccessToken(Aws::String&& value) { SetDestinationAccessToken(std::move(value)); return *this;}
    inline OpenTunnelResult& WithDestinationAccessToken(const char* value) { SetDestinationAccessToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline OpenTunnelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline OpenTunnelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline OpenTunnelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tunnelId;

    Aws::String m_tunnelArn;

    Aws::String m_sourceAccessToken;

    Aws::String m_destinationAccessToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
