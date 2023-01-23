/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsecuretunneling/IoTSecureTunneling_EXPORTS.h>
#include <aws/iotsecuretunneling/IoTSecureTunnelingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsecuretunneling/model/ClientMode.h>
#include <aws/iotsecuretunneling/model/DestinationConfig.h>
#include <utility>

namespace Aws
{
namespace IoTSecureTunneling
{
namespace Model
{

  /**
   */
  class RotateTunnelAccessTokenRequest : public IoTSecureTunnelingRequest
  {
  public:
    AWS_IOTSECURETUNNELING_API RotateTunnelAccessTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RotateTunnelAccessToken"; }

    AWS_IOTSECURETUNNELING_API Aws::String SerializePayload() const override;

    AWS_IOTSECURETUNNELING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline const Aws::String& GetTunnelId() const{ return m_tunnelId; }

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline bool TunnelIdHasBeenSet() const { return m_tunnelIdHasBeenSet; }

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline void SetTunnelId(const Aws::String& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = value; }

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline void SetTunnelId(Aws::String&& value) { m_tunnelIdHasBeenSet = true; m_tunnelId = std::move(value); }

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline void SetTunnelId(const char* value) { m_tunnelIdHasBeenSet = true; m_tunnelId.assign(value); }

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline RotateTunnelAccessTokenRequest& WithTunnelId(const Aws::String& value) { SetTunnelId(value); return *this;}

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline RotateTunnelAccessTokenRequest& WithTunnelId(Aws::String&& value) { SetTunnelId(std::move(value)); return *this;}

    /**
     * <p>The tunnel for which you want to rotate the access tokens.</p>
     */
    inline RotateTunnelAccessTokenRequest& WithTunnelId(const char* value) { SetTunnelId(value); return *this;}


    /**
     * <p>The mode of the client that will use the client token, which can be either
     * the source or destination, or both source and destination.</p>
     */
    inline const ClientMode& GetClientMode() const{ return m_clientMode; }

    /**
     * <p>The mode of the client that will use the client token, which can be either
     * the source or destination, or both source and destination.</p>
     */
    inline bool ClientModeHasBeenSet() const { return m_clientModeHasBeenSet; }

    /**
     * <p>The mode of the client that will use the client token, which can be either
     * the source or destination, or both source and destination.</p>
     */
    inline void SetClientMode(const ClientMode& value) { m_clientModeHasBeenSet = true; m_clientMode = value; }

    /**
     * <p>The mode of the client that will use the client token, which can be either
     * the source or destination, or both source and destination.</p>
     */
    inline void SetClientMode(ClientMode&& value) { m_clientModeHasBeenSet = true; m_clientMode = std::move(value); }

    /**
     * <p>The mode of the client that will use the client token, which can be either
     * the source or destination, or both source and destination.</p>
     */
    inline RotateTunnelAccessTokenRequest& WithClientMode(const ClientMode& value) { SetClientMode(value); return *this;}

    /**
     * <p>The mode of the client that will use the client token, which can be either
     * the source or destination, or both source and destination.</p>
     */
    inline RotateTunnelAccessTokenRequest& WithClientMode(ClientMode&& value) { SetClientMode(std::move(value)); return *this;}


    
    inline const DestinationConfig& GetDestinationConfig() const{ return m_destinationConfig; }

    
    inline bool DestinationConfigHasBeenSet() const { return m_destinationConfigHasBeenSet; }

    
    inline void SetDestinationConfig(const DestinationConfig& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = value; }

    
    inline void SetDestinationConfig(DestinationConfig&& value) { m_destinationConfigHasBeenSet = true; m_destinationConfig = std::move(value); }

    
    inline RotateTunnelAccessTokenRequest& WithDestinationConfig(const DestinationConfig& value) { SetDestinationConfig(value); return *this;}

    
    inline RotateTunnelAccessTokenRequest& WithDestinationConfig(DestinationConfig&& value) { SetDestinationConfig(std::move(value)); return *this;}

  private:

    Aws::String m_tunnelId;
    bool m_tunnelIdHasBeenSet = false;

    ClientMode m_clientMode;
    bool m_clientModeHasBeenSet = false;

    DestinationConfig m_destinationConfig;
    bool m_destinationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSecureTunneling
} // namespace Aws
