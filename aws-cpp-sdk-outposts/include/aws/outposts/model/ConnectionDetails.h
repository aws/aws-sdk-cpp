/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about a connection. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ConnectionDetails">AWS
   * API Reference</a></p>
   */
  class ConnectionDetails
  {
  public:
    AWS_OUTPOSTS_API ConnectionDetails();
    AWS_OUTPOSTS_API ConnectionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API ConnectionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The public key of the client. </p>
     */
    inline const Aws::String& GetClientPublicKey() const{ return m_clientPublicKey; }

    /**
     * <p> The public key of the client. </p>
     */
    inline bool ClientPublicKeyHasBeenSet() const { return m_clientPublicKeyHasBeenSet; }

    /**
     * <p> The public key of the client. </p>
     */
    inline void SetClientPublicKey(const Aws::String& value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey = value; }

    /**
     * <p> The public key of the client. </p>
     */
    inline void SetClientPublicKey(Aws::String&& value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey = std::move(value); }

    /**
     * <p> The public key of the client. </p>
     */
    inline void SetClientPublicKey(const char* value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey.assign(value); }

    /**
     * <p> The public key of the client. </p>
     */
    inline ConnectionDetails& WithClientPublicKey(const Aws::String& value) { SetClientPublicKey(value); return *this;}

    /**
     * <p> The public key of the client. </p>
     */
    inline ConnectionDetails& WithClientPublicKey(Aws::String&& value) { SetClientPublicKey(std::move(value)); return *this;}

    /**
     * <p> The public key of the client. </p>
     */
    inline ConnectionDetails& WithClientPublicKey(const char* value) { SetClientPublicKey(value); return *this;}


    /**
     * <p> The public key of the server. </p>
     */
    inline const Aws::String& GetServerPublicKey() const{ return m_serverPublicKey; }

    /**
     * <p> The public key of the server. </p>
     */
    inline bool ServerPublicKeyHasBeenSet() const { return m_serverPublicKeyHasBeenSet; }

    /**
     * <p> The public key of the server. </p>
     */
    inline void SetServerPublicKey(const Aws::String& value) { m_serverPublicKeyHasBeenSet = true; m_serverPublicKey = value; }

    /**
     * <p> The public key of the server. </p>
     */
    inline void SetServerPublicKey(Aws::String&& value) { m_serverPublicKeyHasBeenSet = true; m_serverPublicKey = std::move(value); }

    /**
     * <p> The public key of the server. </p>
     */
    inline void SetServerPublicKey(const char* value) { m_serverPublicKeyHasBeenSet = true; m_serverPublicKey.assign(value); }

    /**
     * <p> The public key of the server. </p>
     */
    inline ConnectionDetails& WithServerPublicKey(const Aws::String& value) { SetServerPublicKey(value); return *this;}

    /**
     * <p> The public key of the server. </p>
     */
    inline ConnectionDetails& WithServerPublicKey(Aws::String&& value) { SetServerPublicKey(std::move(value)); return *this;}

    /**
     * <p> The public key of the server. </p>
     */
    inline ConnectionDetails& WithServerPublicKey(const char* value) { SetServerPublicKey(value); return *this;}


    /**
     * <p> The endpoint for the server. </p>
     */
    inline const Aws::String& GetServerEndpoint() const{ return m_serverEndpoint; }

    /**
     * <p> The endpoint for the server. </p>
     */
    inline bool ServerEndpointHasBeenSet() const { return m_serverEndpointHasBeenSet; }

    /**
     * <p> The endpoint for the server. </p>
     */
    inline void SetServerEndpoint(const Aws::String& value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint = value; }

    /**
     * <p> The endpoint for the server. </p>
     */
    inline void SetServerEndpoint(Aws::String&& value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint = std::move(value); }

    /**
     * <p> The endpoint for the server. </p>
     */
    inline void SetServerEndpoint(const char* value) { m_serverEndpointHasBeenSet = true; m_serverEndpoint.assign(value); }

    /**
     * <p> The endpoint for the server. </p>
     */
    inline ConnectionDetails& WithServerEndpoint(const Aws::String& value) { SetServerEndpoint(value); return *this;}

    /**
     * <p> The endpoint for the server. </p>
     */
    inline ConnectionDetails& WithServerEndpoint(Aws::String&& value) { SetServerEndpoint(std::move(value)); return *this;}

    /**
     * <p> The endpoint for the server. </p>
     */
    inline ConnectionDetails& WithServerEndpoint(const char* value) { SetServerEndpoint(value); return *this;}


    /**
     * <p> The client tunnel address. </p>
     */
    inline const Aws::String& GetClientTunnelAddress() const{ return m_clientTunnelAddress; }

    /**
     * <p> The client tunnel address. </p>
     */
    inline bool ClientTunnelAddressHasBeenSet() const { return m_clientTunnelAddressHasBeenSet; }

    /**
     * <p> The client tunnel address. </p>
     */
    inline void SetClientTunnelAddress(const Aws::String& value) { m_clientTunnelAddressHasBeenSet = true; m_clientTunnelAddress = value; }

    /**
     * <p> The client tunnel address. </p>
     */
    inline void SetClientTunnelAddress(Aws::String&& value) { m_clientTunnelAddressHasBeenSet = true; m_clientTunnelAddress = std::move(value); }

    /**
     * <p> The client tunnel address. </p>
     */
    inline void SetClientTunnelAddress(const char* value) { m_clientTunnelAddressHasBeenSet = true; m_clientTunnelAddress.assign(value); }

    /**
     * <p> The client tunnel address. </p>
     */
    inline ConnectionDetails& WithClientTunnelAddress(const Aws::String& value) { SetClientTunnelAddress(value); return *this;}

    /**
     * <p> The client tunnel address. </p>
     */
    inline ConnectionDetails& WithClientTunnelAddress(Aws::String&& value) { SetClientTunnelAddress(std::move(value)); return *this;}

    /**
     * <p> The client tunnel address. </p>
     */
    inline ConnectionDetails& WithClientTunnelAddress(const char* value) { SetClientTunnelAddress(value); return *this;}


    /**
     * <p> The server tunnel address. </p>
     */
    inline const Aws::String& GetServerTunnelAddress() const{ return m_serverTunnelAddress; }

    /**
     * <p> The server tunnel address. </p>
     */
    inline bool ServerTunnelAddressHasBeenSet() const { return m_serverTunnelAddressHasBeenSet; }

    /**
     * <p> The server tunnel address. </p>
     */
    inline void SetServerTunnelAddress(const Aws::String& value) { m_serverTunnelAddressHasBeenSet = true; m_serverTunnelAddress = value; }

    /**
     * <p> The server tunnel address. </p>
     */
    inline void SetServerTunnelAddress(Aws::String&& value) { m_serverTunnelAddressHasBeenSet = true; m_serverTunnelAddress = std::move(value); }

    /**
     * <p> The server tunnel address. </p>
     */
    inline void SetServerTunnelAddress(const char* value) { m_serverTunnelAddressHasBeenSet = true; m_serverTunnelAddress.assign(value); }

    /**
     * <p> The server tunnel address. </p>
     */
    inline ConnectionDetails& WithServerTunnelAddress(const Aws::String& value) { SetServerTunnelAddress(value); return *this;}

    /**
     * <p> The server tunnel address. </p>
     */
    inline ConnectionDetails& WithServerTunnelAddress(Aws::String&& value) { SetServerTunnelAddress(std::move(value)); return *this;}

    /**
     * <p> The server tunnel address. </p>
     */
    inline ConnectionDetails& WithServerTunnelAddress(const char* value) { SetServerTunnelAddress(value); return *this;}


    /**
     * <p> The allowed IP addresses. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedIps() const{ return m_allowedIps; }

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline bool AllowedIpsHasBeenSet() const { return m_allowedIpsHasBeenSet; }

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline void SetAllowedIps(const Aws::Vector<Aws::String>& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = value; }

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline void SetAllowedIps(Aws::Vector<Aws::String>&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps = std::move(value); }

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline ConnectionDetails& WithAllowedIps(const Aws::Vector<Aws::String>& value) { SetAllowedIps(value); return *this;}

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline ConnectionDetails& WithAllowedIps(Aws::Vector<Aws::String>&& value) { SetAllowedIps(std::move(value)); return *this;}

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline ConnectionDetails& AddAllowedIps(const Aws::String& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(value); return *this; }

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline ConnectionDetails& AddAllowedIps(Aws::String&& value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(std::move(value)); return *this; }

    /**
     * <p> The allowed IP addresses. </p>
     */
    inline ConnectionDetails& AddAllowedIps(const char* value) { m_allowedIpsHasBeenSet = true; m_allowedIps.push_back(value); return *this; }

  private:

    Aws::String m_clientPublicKey;
    bool m_clientPublicKeyHasBeenSet = false;

    Aws::String m_serverPublicKey;
    bool m_serverPublicKeyHasBeenSet = false;

    Aws::String m_serverEndpoint;
    bool m_serverEndpointHasBeenSet = false;

    Aws::String m_clientTunnelAddress;
    bool m_clientTunnelAddressHasBeenSet = false;

    Aws::String m_serverTunnelAddress;
    bool m_serverTunnelAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedIps;
    bool m_allowedIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
