/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetStatus.h>
#include <aws/gamelift/model/PlayerGatewayStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLift {
namespace Model {

/**
 * <p>A fleet location and its life-cycle state. A location state object might be
 * used to describe a fleet's remote location or home Region. Life-cycle state
 * tracks the progress of launching the first instance in a new location and
 * preparing it for game hosting, and then removing all instances and deleting the
 * location from the fleet.</p> <ul> <li> <p> <b>NEW</b> -- A new fleet location
 * has been defined and desired instances is set to 1. </p> </li> <li> <p>
 * <b>DOWNLOADING/VALIDATING/BUILDING/ACTIVATING</b> -- Amazon GameLift Servers is
 * setting up the new fleet location, creating new instances with the game build or
 * Realtime script and starting server processes.</p> </li> <li> <p> <b>ACTIVE</b>
 * -- Hosts can now accept game sessions.</p> </li> <li> <p> <b>ERROR</b> -- An
 * error occurred when downloading, validating, building, or activating the fleet
 * location.</p> </li> <li> <p> <b>DELETING</b> -- Hosts are responding to a delete
 * fleet location request.</p> </li> <li> <p> <b>TERMINATED</b> -- The fleet
 * location no longer exists.</p> </li> <li> <p> <b>NOT_FOUND</b> -- The fleet
 * location was not found. This could be because the custom location was removed or
 * not created. </p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/LocationState">AWS
 * API Reference</a></p>
 */
class LocationState {
 public:
  AWS_GAMELIFT_API LocationState() = default;
  AWS_GAMELIFT_API LocationState(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API LocationState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The fleet location, expressed as an Amazon Web Services Region code such as
   * <code>us-west-2</code>. </p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  LocationState& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The life-cycle status of a fleet location. </p>
   */
  inline FleetStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FleetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline LocationState& WithStatus(FleetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of player gateway in this location for this fleet. Note,
   * even if a fleet has PlayerGatewayMode configured as <code>ENABLED</code>, player
   * gateway might not be available in a specific location. For more information
   * about locations where player gateway is supported, see <a
   * href="https://docs.aws.amazon.com/gameliftservers/latest/developerguide/gamelift-regions.html">Amazon
   * GameLift Servers service locations</a>.</p> <p>Possible values include:</p> <ul>
   * <li> <p> <code>ENABLED</code> -- Player gateway is available for this fleet
   * location.</p> </li> <li> <p> <code>DISABLED</code> -- Player gateway is not
   * available for this fleet location.</p> </li> </ul>
   */
  inline PlayerGatewayStatus GetPlayerGatewayStatus() const { return m_playerGatewayStatus; }
  inline bool PlayerGatewayStatusHasBeenSet() const { return m_playerGatewayStatusHasBeenSet; }
  inline void SetPlayerGatewayStatus(PlayerGatewayStatus value) {
    m_playerGatewayStatusHasBeenSet = true;
    m_playerGatewayStatus = value;
  }
  inline LocationState& WithPlayerGatewayStatus(PlayerGatewayStatus value) {
    SetPlayerGatewayStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_location;

  FleetStatus m_status{FleetStatus::NOT_SET};

  PlayerGatewayStatus m_playerGatewayStatus{PlayerGatewayStatus::NOT_SET};
  bool m_locationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_playerGatewayStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws
