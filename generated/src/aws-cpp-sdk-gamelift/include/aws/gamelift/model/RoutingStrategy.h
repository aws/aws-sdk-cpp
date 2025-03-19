/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/RoutingStrategyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>The routing configuration for a fleet alias.</p> <p> <b>Related actions</b>
   * </p> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
   * APIs by task</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RoutingStrategy">AWS
   * API Reference</a></p>
   */
  class RoutingStrategy
  {
  public:
    AWS_GAMELIFT_API RoutingStrategy() = default;
    AWS_GAMELIFT_API RoutingStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API RoutingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the message embedded.</p> </li> </ul>
     */
    inline RoutingStrategyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RoutingStrategyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline RoutingStrategy& WithType(RoutingStrategyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    RoutingStrategy& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    RoutingStrategy& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    RoutingStrategyType m_type{RoutingStrategyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
