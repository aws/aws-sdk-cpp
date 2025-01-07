/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/TerminationMode.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class TerminateGameSessionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API TerminateGameSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TerminateGameSession"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique identifier for the game session to be terminated. A game session ARN
     * has the following format:
     * <code>arn:aws:gamelift:&lt;region&gt;::gamesession/&lt;fleet ID&gt;/&lt;custom
     * ID string or idempotency token&gt;</code>.</p>
     */
    inline const Aws::String& GetGameSessionId() const{ return m_gameSessionId; }
    inline bool GameSessionIdHasBeenSet() const { return m_gameSessionIdHasBeenSet; }
    inline void SetGameSessionId(const Aws::String& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = value; }
    inline void SetGameSessionId(Aws::String&& value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId = std::move(value); }
    inline void SetGameSessionId(const char* value) { m_gameSessionIdHasBeenSet = true; m_gameSessionId.assign(value); }
    inline TerminateGameSessionRequest& WithGameSessionId(const Aws::String& value) { SetGameSessionId(value); return *this;}
    inline TerminateGameSessionRequest& WithGameSessionId(Aws::String&& value) { SetGameSessionId(std::move(value)); return *this;}
    inline TerminateGameSessionRequest& WithGameSessionId(const char* value) { SetGameSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method to use to terminate the game session. Available methods include:
     * </p> <ul> <li> <p> <code>TRIGGER_ON_PROCESS_TERMINATE</code> – Sends an
     * <code>OnProcessTerminate()</code> callback to the server process to initiate the
     * normal game session shutdown sequence. At a minimum, the callback method must
     * include a call to the server SDK action <code>ProcessEnding()</code>, which is
     * how the server process signals that a game session is ending. If the server
     * process doesn't call <code>ProcessEnding()</code>, this termination method won't
     * be successful.</p> </li> <li> <p> <code>FORCE_TERMINATE</code> – Takes action to
     * stop the server process, using existing methods to control how server processes
     * run on an Amazon GameLift managed compute. </p>  <p>This method is not
     * available for game sessions that are running on Anywhere fleets unless the fleet
     * is deployed with the Amazon GameLift Agent. In this scenario, a force terminate
     * request results in an invalid or bad request exception.</p>  </li> </ul>
     */
    inline const TerminationMode& GetTerminationMode() const{ return m_terminationMode; }
    inline bool TerminationModeHasBeenSet() const { return m_terminationModeHasBeenSet; }
    inline void SetTerminationMode(const TerminationMode& value) { m_terminationModeHasBeenSet = true; m_terminationMode = value; }
    inline void SetTerminationMode(TerminationMode&& value) { m_terminationModeHasBeenSet = true; m_terminationMode = std::move(value); }
    inline TerminateGameSessionRequest& WithTerminationMode(const TerminationMode& value) { SetTerminationMode(value); return *this;}
    inline TerminateGameSessionRequest& WithTerminationMode(TerminationMode&& value) { SetTerminationMode(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_gameSessionId;
    bool m_gameSessionIdHasBeenSet = false;

    TerminationMode m_terminationMode;
    bool m_terminationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
