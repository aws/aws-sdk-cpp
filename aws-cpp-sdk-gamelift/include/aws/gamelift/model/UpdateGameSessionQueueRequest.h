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
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/GameSessionQueueDestination.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API UpdateGameSessionQueueRequest : public GameLiftRequest
  {
  public:
    UpdateGameSessionQueueRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline UpdateGameSessionQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline UpdateGameSessionQueueRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>Descriptive label that is associated with queue. Queue names must be unique
     * within each region.</p>
     */
    inline UpdateGameSessionQueueRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a TIMED_OUT status.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a TIMED_OUT status.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>Maximum time, in seconds, that a new game session placement request remains
     * in the queue. When a request exceeds this time, the game session placement
     * changes to a TIMED_OUT status.</p>
     */
    inline UpdateGameSessionQueueRequest& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline const Aws::Vector<GameSessionQueueDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline void SetDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline void SetDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline UpdateGameSessionQueueRequest& WithDestinations(const Aws::Vector<GameSessionQueueDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline UpdateGameSessionQueueRequest& WithDestinations(Aws::Vector<GameSessionQueueDestination>&& value) { SetDestinations(value); return *this;}

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline UpdateGameSessionQueueRequest& AddDestinations(const GameSessionQueueDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>List of fleets that can be used to fulfill game session placement requests in
     * the queue. Fleets are identified by either a fleet ARN or a fleet alias ARN.
     * Destinations are listed in default preference order.</p>
     */
    inline UpdateGameSessionQueueRequest& AddDestinations(GameSessionQueueDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;
    Aws::Vector<GameSessionQueueDestination> m_destinations;
    bool m_destinationsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
