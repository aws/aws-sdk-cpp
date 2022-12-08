/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/GameSession.h>
#include <aws/gamelift/model/ProtectionPolicy.h>
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
   * <p>A game session's properties plus the protection policy currently in
   * force.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GameSessionDetail">AWS
   * API Reference</a></p>
   */
  class GameSessionDetail
  {
  public:
    AWS_GAMELIFT_API GameSessionDetail();
    AWS_GAMELIFT_API GameSessionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API GameSessionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Object that describes a game session.</p>
     */
    inline const GameSession& GetGameSession() const{ return m_gameSession; }

    /**
     * <p>Object that describes a game session.</p>
     */
    inline bool GameSessionHasBeenSet() const { return m_gameSessionHasBeenSet; }

    /**
     * <p>Object that describes a game session.</p>
     */
    inline void SetGameSession(const GameSession& value) { m_gameSessionHasBeenSet = true; m_gameSession = value; }

    /**
     * <p>Object that describes a game session.</p>
     */
    inline void SetGameSession(GameSession&& value) { m_gameSessionHasBeenSet = true; m_gameSession = std::move(value); }

    /**
     * <p>Object that describes a game session.</p>
     */
    inline GameSessionDetail& WithGameSession(const GameSession& value) { SetGameSession(value); return *this;}

    /**
     * <p>Object that describes a game session.</p>
     */
    inline GameSessionDetail& WithGameSession(GameSession&& value) { SetGameSession(std::move(value)); return *this;}


    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline const ProtectionPolicy& GetProtectionPolicy() const{ return m_protectionPolicy; }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline bool ProtectionPolicyHasBeenSet() const { return m_protectionPolicyHasBeenSet; }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetProtectionPolicy(const ProtectionPolicy& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = value; }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline void SetProtectionPolicy(ProtectionPolicy&& value) { m_protectionPolicyHasBeenSet = true; m_protectionPolicy = std::move(value); }

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline GameSessionDetail& WithProtectionPolicy(const ProtectionPolicy& value) { SetProtectionPolicy(value); return *this;}

    /**
     * <p>Current status of protection for the game session.</p> <ul> <li> <p>
     * <b>NoProtection</b> -- The game session can be terminated during a scale-down
     * event.</p> </li> <li> <p> <b>FullProtection</b> -- If the game session is in an
     * <code>ACTIVE</code> status, it cannot be terminated during a scale-down
     * event.</p> </li> </ul>
     */
    inline GameSessionDetail& WithProtectionPolicy(ProtectionPolicy&& value) { SetProtectionPolicy(std::move(value)); return *this;}

  private:

    GameSession m_gameSession;
    bool m_gameSessionHasBeenSet = false;

    ProtectionPolicy m_protectionPolicy;
    bool m_protectionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
