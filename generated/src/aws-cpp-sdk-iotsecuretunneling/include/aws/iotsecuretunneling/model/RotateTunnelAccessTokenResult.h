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
  class RotateTunnelAccessTokenResult
  {
  public:
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenResult();
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelArn() const{ return m_tunnelArn; }
    inline void SetTunnelArn(const Aws::String& value) { m_tunnelArn = value; }
    inline void SetTunnelArn(Aws::String&& value) { m_tunnelArn = std::move(value); }
    inline void SetTunnelArn(const char* value) { m_tunnelArn.assign(value); }
    inline RotateTunnelAccessTokenResult& WithTunnelArn(const Aws::String& value) { SetTunnelArn(value); return *this;}
    inline RotateTunnelAccessTokenResult& WithTunnelArn(Aws::String&& value) { SetTunnelArn(std::move(value)); return *this;}
    inline RotateTunnelAccessTokenResult& WithTunnelArn(const char* value) { SetTunnelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client access token that the source local proxy uses to connect to IoT
     * Secure Tunneling.</p>
     */
    inline const Aws::String& GetSourceAccessToken() const{ return m_sourceAccessToken; }
    inline void SetSourceAccessToken(const Aws::String& value) { m_sourceAccessToken = value; }
    inline void SetSourceAccessToken(Aws::String&& value) { m_sourceAccessToken = std::move(value); }
    inline void SetSourceAccessToken(const char* value) { m_sourceAccessToken.assign(value); }
    inline RotateTunnelAccessTokenResult& WithSourceAccessToken(const Aws::String& value) { SetSourceAccessToken(value); return *this;}
    inline RotateTunnelAccessTokenResult& WithSourceAccessToken(Aws::String&& value) { SetSourceAccessToken(std::move(value)); return *this;}
    inline RotateTunnelAccessTokenResult& WithSourceAccessToken(const char* value) { SetSourceAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client access token that the destination local proxy uses to connect to
     * IoT Secure Tunneling.</p>
     */
    inline const Aws::String& GetDestinationAccessToken() const{ return m_destinationAccessToken; }
    inline void SetDestinationAccessToken(const Aws::String& value) { m_destinationAccessToken = value; }
    inline void SetDestinationAccessToken(Aws::String&& value) { m_destinationAccessToken = std::move(value); }
    inline void SetDestinationAccessToken(const char* value) { m_destinationAccessToken.assign(value); }
    inline RotateTunnelAccessTokenResult& WithDestinationAccessToken(const Aws::String& value) { SetDestinationAccessToken(value); return *this;}
    inline RotateTunnelAccessTokenResult& WithDestinationAccessToken(Aws::String&& value) { SetDestinationAccessToken(std::move(value)); return *this;}
    inline RotateTunnelAccessTokenResult& WithDestinationAccessToken(const char* value) { SetDestinationAccessToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RotateTunnelAccessTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RotateTunnelAccessTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RotateTunnelAccessTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tunnelArn;

    Aws::String m_sourceAccessToken;

    Aws::String m_destinationAccessToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
