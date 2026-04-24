/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/ContainerFleetLocationStatus.h>
#include <aws/gamelift/model/PlayerGatewayStatus.h>

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
 * <p>Details about a location in a multi-location container fleet. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerFleetLocationAttributes">AWS
 * API Reference</a></p>
 */
class ContainerFleetLocationAttributes {
 public:
  AWS_GAMELIFT_API ContainerFleetLocationAttributes() = default;
  AWS_GAMELIFT_API ContainerFleetLocationAttributes(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API ContainerFleetLocationAttributes& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_GAMELIFT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A location identifier.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  ContainerFleetLocationAttributes& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of fleet activity in the location. </p> <ul> <li> <p>
   * <code>PENDING</code> -- A new container fleet has been requested.</p> </li> <li>
   * <p> <code>CREATING</code> -- A new container fleet resource is being created.
   * </p> </li> <li> <p> <code>CREATED</code> -- A new container fleet resource has
   * been created. No fleet instances have been deployed.</p> </li> <li> <p>
   * <code>ACTIVATING</code> -- New container fleet instances are being deployed.</p>
   * </li> <li> <p> <code>ACTIVE</code> -- The container fleet has been deployed and
   * is ready to host game sessions.</p> </li> <li> <p> <code>UPDATING</code> --
   * Updates to the container fleet is being updated. A deployment is in
   * progress.</p> </li> </ul>
   */
  inline ContainerFleetLocationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ContainerFleetLocationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ContainerFleetLocationAttributes& WithStatus(ContainerFleetLocationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of player gateway in this location for this container
   * fleet. Note, even if a container fleet has PlayerGatewayMode configured as
   * <code>ENABLED</code>, player gateway might not be available in a specific
   * location. For more information about locations where player gateway is
   * supported, see <a
   * href="https://docs.aws.amazon.com/gameliftservers/latest/developerguide/gamelift-regions.html">Amazon
   * GameLift Servers service locations</a>.</p> <p>Possible values include:</p> <ul>
   * <li> <p> <code>ENABLED</code> -- Player gateway is available for this container
   * fleet location.</p> </li> <li> <p> <code>DISABLED</code> -- Player gateway is
   * not available for this container fleet location.</p> </li> </ul>
   */
  inline PlayerGatewayStatus GetPlayerGatewayStatus() const { return m_playerGatewayStatus; }
  inline bool PlayerGatewayStatusHasBeenSet() const { return m_playerGatewayStatusHasBeenSet; }
  inline void SetPlayerGatewayStatus(PlayerGatewayStatus value) {
    m_playerGatewayStatusHasBeenSet = true;
    m_playerGatewayStatus = value;
  }
  inline ContainerFleetLocationAttributes& WithPlayerGatewayStatus(PlayerGatewayStatus value) {
    SetPlayerGatewayStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_location;

  ContainerFleetLocationStatus m_status{ContainerFleetLocationStatus::NOT_SET};

  PlayerGatewayStatus m_playerGatewayStatus{PlayerGatewayStatus::NOT_SET};
  bool m_locationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_playerGatewayStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
