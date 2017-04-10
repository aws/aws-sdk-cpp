/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Routing configuration for a fleet alias.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RoutingStrategy">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API RoutingStrategy
  {
  public:
    RoutingStrategy();
    RoutingStrategy(const Aws::Utils::Json::JsonValue& jsonValue);
    RoutingStrategy& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> – The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> – The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline const RoutingStrategyType& GetType() const{ return m_type; }

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> – The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> – The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline void SetType(const RoutingStrategyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> – The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> – The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline void SetType(RoutingStrategyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> – The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> – The alias does not resolve to a fleet but instead can be used
     * to display a message to the user. A terminal alias throws a
     * TerminalRoutingStrategyException with the <a>RoutingStrategy</a> message
     * embedded.</p> </li> </ul>
     */
    inline RoutingStrategy& WithType(const RoutingStrategyType& value) { SetType(value); return *this;}

    /**
     * <p>Type of routing strategy.</p> <p>Possible routing types include the
     * following:</p> <ul> <li> <p> <b>SIMPLE</b> – The alias resolves to one specific
     * fleet. Use this type when routing to active fleets.</p> </li> <li> <p>
     * <b>TERMINAL</b> – The alias does not resolve to a fleet but instead can be used
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
