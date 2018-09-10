﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Routing configuration for a fleet alias.</p> <p>Fleet-related operations
   * include:</p> <ul> <li> <p> <a>CreateFleet</a> </p> </li> <li> <p>
   * <a>ListFleets</a> </p> </li> <li> <p> <a>DeleteFleet</a> </p> </li> <li>
   * <p>Describe fleets:</p> <ul> <li> <p> <a>DescribeFleetAttributes</a> </p> </li>
   * <li> <p> <a>DescribeFleetCapacity</a> </p> </li> <li> <p>
   * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
   * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
   * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
   * <a>DescribeEC2InstanceLimits</a> </p> </li> <li> <p> <a>DescribeFleetEvents</a>
   * </p> </li> </ul> </li> <li> <p>Update fleets:</p> <ul> <li> <p>
   * <a>UpdateFleetAttributes</a> </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p>
   * </li> <li> <p> <a>UpdateFleetPortSettings</a> </p> </li> <li> <p>
   * <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li> <li> <p>Manage fleet
   * actions:</p> <ul> <li> <p> <a>StartFleetActions</a> </p> </li> <li> <p>
   * <a>StopFleetActions</a> </p> </li> </ul> </li> </ul><p><h3>See Also:</h3>   <a
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
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> -- The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> -- The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline const RoutingStrategyType& GetType() const{ return m_type; }

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> -- The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> -- The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline void SetType(const RoutingStrategyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> -- The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> -- The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline void SetType(RoutingStrategyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> -- The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> -- The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline RoutingStrategy& WithType(const RoutingStrategyType& value) { SetType(value); return *this;}

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> -- The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> -- The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline RoutingStrategy& WithType(RoutingStrategyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline RoutingStrategy& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline RoutingStrategy& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet that the alias points to.</p>
     */
    inline RoutingStrategy& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
     */
    inline RoutingStrategy& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
     */
    inline RoutingStrategy& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Message text to be used with a terminal routing strategy.</p>
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
