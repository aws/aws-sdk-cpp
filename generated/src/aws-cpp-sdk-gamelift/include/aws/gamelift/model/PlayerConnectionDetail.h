/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/PlayerConnectionEndpoint.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>Connection information for a game client to connect to a game session. This
 * object contains the IP address(es), port(s), and authentication details your
 * game client needs to establish a connection.</p> <p> <b>With player gateway
 * enabled:</b> Contains relay endpoints and a player gateway token. Your game
 * client must prepend player gateway token to each payload for validation and
 * connection through relay endpoints.</p> <p> <b>With player gateway disabled:</b>
 * Contains game server endpoint. Player gateway token and expiration fields are
 * empty.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerConnectionDetail">AWS
 * API Reference</a></p>
 */
class PlayerConnectionDetail {
 public:
  AWS_GAMELIFT_API PlayerConnectionDetail() = default;
  AWS_GAMELIFT_API PlayerConnectionDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API PlayerConnectionDetail& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A unique identifier for a player associated with this connection.</p>
   */
  inline const Aws::String& GetPlayerId() const { return m_playerId; }
  inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }
  template <typename PlayerIdT = Aws::String>
  void SetPlayerId(PlayerIdT&& value) {
    m_playerIdHasBeenSet = true;
    m_playerId = std::forward<PlayerIdT>(value);
  }
  template <typename PlayerIdT = Aws::String>
  PlayerConnectionDetail& WithPlayerId(PlayerIdT&& value) {
    SetPlayerId(std::forward<PlayerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of connection endpoints for the game client. Your game client uses these
   * IP address(es) and port(s) to connect to the game session.</p> <p>When player
   * gateway is enabled, these are relay endpoints with benefits such as DDoS
   * protection. When disabled, this is the game server endpoint.</p>
   */
  inline const Aws::Vector<PlayerConnectionEndpoint>& GetEndpoints() const { return m_endpoints; }
  inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
  template <typename EndpointsT = Aws::Vector<PlayerConnectionEndpoint>>
  void SetEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints = std::forward<EndpointsT>(value);
  }
  template <typename EndpointsT = Aws::Vector<PlayerConnectionEndpoint>>
  PlayerConnectionDetail& WithEndpoints(EndpointsT&& value) {
    SetEndpoints(std::forward<EndpointsT>(value));
    return *this;
  }
  template <typename EndpointsT = PlayerConnectionEndpoint>
  PlayerConnectionDetail& AddEndpoints(EndpointsT&& value) {
    m_endpointsHasBeenSet = true;
    m_endpoints.emplace_back(std::forward<EndpointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Access token that your game client must prepend to all traffic sent through
   * player gateway. Player gateway verifies identity and authorizes connection based
   * on this token.</p> <p>This value is empty when player gateway is disabled.</p>
   */
  inline const Aws::String& GetPlayerGatewayToken() const { return m_playerGatewayToken; }
  inline bool PlayerGatewayTokenHasBeenSet() const { return m_playerGatewayTokenHasBeenSet; }
  template <typename PlayerGatewayTokenT = Aws::String>
  void SetPlayerGatewayToken(PlayerGatewayTokenT&& value) {
    m_playerGatewayTokenHasBeenSet = true;
    m_playerGatewayToken = std::forward<PlayerGatewayTokenT>(value);
  }
  template <typename PlayerGatewayTokenT = Aws::String>
  PlayerConnectionDetail& WithPlayerGatewayToken(PlayerGatewayTokenT&& value) {
    SetPlayerGatewayToken(std::forward<PlayerGatewayTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When player gateway is enabled, this is the timestamp indicating when player
   * gateway token expires. Your game backend should call <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetPlayerConnectionDetails.html">GetPlayerConnectionDetails</a>
   * to retrieve fresh connection information for your game clients before this time.
   * Format is a number expressed in Unix time as milliseconds (for example
   * <code>"1469498468.057"</code>). </p> <p>This value is empty when player gateway
   * is disabled.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
  inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
  template <typename ExpirationT = Aws::Utils::DateTime>
  void SetExpiration(ExpirationT&& value) {
    m_expirationHasBeenSet = true;
    m_expiration = std::forward<ExpirationT>(value);
  }
  template <typename ExpirationT = Aws::Utils::DateTime>
  PlayerConnectionDetail& WithExpiration(ExpirationT&& value) {
    SetExpiration(std::forward<ExpirationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_playerId;

  Aws::Vector<PlayerConnectionEndpoint> m_endpoints;

  Aws::String m_playerGatewayToken;

  Aws::Utils::DateTime m_expiration{};
  bool m_playerIdHasBeenSet = false;
  bool m_endpointsHasBeenSet = false;
  bool m_playerGatewayTokenHasBeenSet = false;
  bool m_expirationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
