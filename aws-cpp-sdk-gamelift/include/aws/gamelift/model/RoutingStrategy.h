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
   * <p>The routing configuration for a fleet alias.</p> <ul> <li> <p>
   * <a>CreateAlias</a> </p> </li> <li> <p> <a>ListAliases</a> </p> </li> <li> <p>
   * <a>DescribeAlias</a> </p> </li> <li> <p> <a>UpdateAlias</a> </p> </li> <li> <p>
   * <a>DeleteAlias</a> </p> </li> <li> <p> <a>ResolveAlias</a> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RoutingStrategy">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API RoutingStrategy
  {
  public:
    RoutingStrategy();
    RoutingStrategy(Aws::Utils::Json::JsonView jsonValue);
    RoutingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline const RoutingStrategyType& GetType() const{ return m_type; }

    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline void SetType(const RoutingStrategyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline void SetType(RoutingStrategyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline RoutingStrategy& WithType(const RoutingStrategyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of routing strategy for the alias.</p> <p>Possible routing types
     * include the following:</p> <ul> <li> <p> <b>SIMPLE</b> - The alias resolves to
     * one specific fleet. Use this type when routing to active fleets.</p> </li> <li>
     * <p> <b>TERMINAL</b> - The alias does not resolve to a fleet but instead can be
     * used to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline RoutingStrategy& WithType(RoutingStrategyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline RoutingStrategy& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline RoutingStrategy& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for a fleet that the alias points to. This value is the
     * fleet ID, not the fleet ARN.</p>
     */
    inline RoutingStrategy& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline RoutingStrategy& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline RoutingStrategy& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message text to be used with a terminal routing strategy.</p>
     */
    inline RoutingStrategy& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    RoutingStrategyType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
