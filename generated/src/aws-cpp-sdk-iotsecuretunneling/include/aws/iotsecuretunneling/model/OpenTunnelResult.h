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


    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }

    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline void SetTunnelId(const Aws::String& value) { m_tunnelId = value; }

    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline void SetTunnelId(Aws::String&& value) { m_tunnelId = std::move(value); }

    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline void SetTunnelId(const char* value) { m_tunnelId.assign(value); }

    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline OpenTunnelResult& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}

    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline OpenTunnelResult& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}

    /**
     * <p>A unique alpha-numeric tunnel ID.</p>
     */
    inline OpenTunnelResult& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}


    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelArn() const{ return m_tunnelArn; }

    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline void SetTunnelArn(const Aws::String& value) { m_tunnelArn = value; }

    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline void SetTunnelArn(Aws::String&& value) { m_tunnelArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline void SetTunnelArn(const char* value) { m_tunnelArn.assign(value); }

    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline OpenTunnelResult& WithTunnelArn(const Aws::String& value) { SetTunnelArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline OpenTunnelResult& WithTunnelArn(Aws::String&& value) { SetTunnelArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name for the tunnel.</p>
     */
    inline OpenTunnelResult& WithTunnelArn(const char* value) { SetTunnelArn(value); return *this;}


    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline const Aws::String& GetSourceAccessToken() const{ return m_sourceAccessToken; }

    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline void SetSourceAccessToken(const Aws::String& value) { m_sourceAccessToken = value; }

    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline void SetSourceAccessToken(Aws::String&& value) { m_sourceAccessToken = std::move(value); }

    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline void SetSourceAccessToken(const char* value) { m_sourceAccessToken.assign(value); }

    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline OpenTunnelResult& WithSourceAccessToken(const Aws::String& value) { SetSourceAccessToken(value); return *this;}

    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline OpenTunnelResult& WithSourceAccessToken(Aws::String&& value) { SetSourceAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token the source local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline OpenTunnelResult& WithSourceAccessToken(const char* value) { SetSourceAccessToken(value); return *this;}


    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline const Aws::String& GetDestinationAccessToken() const{ return m_destinationAccessToken; }

    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline void SetDestinationAccessToken(const Aws::String& value) { m_destinationAccessToken = value; }

    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline void SetDestinationAccessToken(Aws::String&& value) { m_destinationAccessToken = std::move(value); }

    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline void SetDestinationAccessToken(const char* value) { m_destinationAccessToken.assign(value); }

    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline OpenTunnelResult& WithDestinationAccessToken(const Aws::String& value) { SetDestinationAccessToken(value); return *this;}

    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline OpenTunnelResult& WithDestinationAccessToken(Aws::String&& value) { SetDestinationAccessToken(std::move(value)); return *this;}

    /**
     * <p>The access token the destination local proxy uses to connect to IoT Secure
     * Tunneling.</p>
     */
    inline OpenTunnelResult& WithDestinationAccessToken(const char* value) { SetDestinationAccessToken(value); return *this;}

  private:

    Aws::String m_tunnelId;

    Aws::String m_tunnelArn;

    Aws::String m_sourceAccessToken;

    Aws::String m_destinationAccessToken;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
