﻿/*
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
#include <aws/gamelift/model/GameSession.h>
#include <aws/gamelift/model/ProtectionPolicy.h>

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
   * <p>A game session's properties and the protection policy currently in force.</p>
   */
  class AWS_GAMELIFT_API GameSessionDetail
  {
  public:
    GameSessionDetail();
    GameSessionDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    GameSessionDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const GameSession& GetGameSession() const{ return m_gameSession; }

    
    inline void SetGameSession(const GameSession& value) { m_gameSessionHasBeenSet = true; m_gameSession = value; }

    
    inline void SetGameSession(GameSession&& value) { m_gameSessionHasBeenSet = true; m_gameSession = value; }

    
    inline GameSessionDetail& WithGameSession(const GameSession& value) { SetGameSession(value); return *this;}

    
    inline GameSessionDetail& WithGameSession(GameSession&& value) { SetGameSession(value); return *this;}

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetProtectionPolicy() const{ return m_protectionPolicy; }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetProtectionPolicy(const ProtectionPolicy& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetProtectionPolicy(ProtectionPolicy&& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline GameSessionDetail& WithProtectionPolicy(const ProtectionPolicy& value) { SetProtectionPolicy(value); return *this;}

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> – The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> – If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline GameSessionDetail& WithProtectionPolicy(ProtectionPolicy&& value) { SetProtectionPolicy(value); return *this;}

  private:
    GameSession m_gameSession;
    bool m_gameSessionHasBeenSet;
    ProtectionPolicy m_protectionPolicy;
    bool m_protectionPolicyHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
