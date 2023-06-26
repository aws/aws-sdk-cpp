﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
   * <p>Regional latency information for a player, used when requesting a new game
   * session. This value indicates the amount of time lag that exists when the player
   * is connected to a fleet in the specified Region. The relative difference between
   * a player's latency values for multiple Regions are used to determine which
   * fleets are best suited to place a new game session for the player.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PlayerLatency">AWS
   * API Reference</a></p>
   */
  class PlayerLatency
  {
  public:
    AWS_GAMELIFT_API PlayerLatency();
    AWS_GAMELIFT_API PlayerLatency(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API PlayerLatency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline const Aws::String& GetPlayerId() const{ return m_playerId; }

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline bool PlayerIdHasBeenSet() const { return m_playerIdHasBeenSet; }

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline void SetPlayerId(const Aws::String& value) { m_playerIdHasBeenSet = true; m_playerId = value; }

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline void SetPlayerId(Aws::String&& value) { m_playerIdHasBeenSet = true; m_playerId = std::move(value); }

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline void SetPlayerId(const char* value) { m_playerIdHasBeenSet = true; m_playerId.assign(value); }

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline PlayerLatency& WithPlayerId(const Aws::String& value) { SetPlayerId(value); return *this;}

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline PlayerLatency& WithPlayerId(Aws::String&& value) { SetPlayerId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a player associated with the latency data.</p>
     */
    inline PlayerLatency& WithPlayerId(const char* value) { SetPlayerId(value); return *this;}


    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline const Aws::String& GetRegionIdentifier() const{ return m_regionIdentifier; }

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline bool RegionIdentifierHasBeenSet() const { return m_regionIdentifierHasBeenSet; }

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline void SetRegionIdentifier(const Aws::String& value) { m_regionIdentifierHasBeenSet = true; m_regionIdentifier = value; }

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline void SetRegionIdentifier(Aws::String&& value) { m_regionIdentifierHasBeenSet = true; m_regionIdentifier = std::move(value); }

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline void SetRegionIdentifier(const char* value) { m_regionIdentifierHasBeenSet = true; m_regionIdentifier.assign(value); }

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline PlayerLatency& WithRegionIdentifier(const Aws::String& value) { SetRegionIdentifier(value); return *this;}

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline PlayerLatency& WithRegionIdentifier(Aws::String&& value) { SetRegionIdentifier(std::move(value)); return *this;}

    /**
     * <p>Name of the Region that is associated with the latency value.</p>
     */
    inline PlayerLatency& WithRegionIdentifier(const char* value) { SetRegionIdentifier(value); return *this;}


    /**
     * <p>Amount of time that represents the time lag experienced by the player when
     * connected to the specified Region.</p>
     */
    inline double GetLatencyInMilliseconds() const{ return m_latencyInMilliseconds; }

    /**
     * <p>Amount of time that represents the time lag experienced by the player when
     * connected to the specified Region.</p>
     */
    inline bool LatencyInMillisecondsHasBeenSet() const { return m_latencyInMillisecondsHasBeenSet; }

    /**
     * <p>Amount of time that represents the time lag experienced by the player when
     * connected to the specified Region.</p>
     */
    inline void SetLatencyInMilliseconds(double value) { m_latencyInMillisecondsHasBeenSet = true; m_latencyInMilliseconds = value; }

    /**
     * <p>Amount of time that represents the time lag experienced by the player when
     * connected to the specified Region.</p>
     */
    inline PlayerLatency& WithLatencyInMilliseconds(double value) { SetLatencyInMilliseconds(value); return *this;}

  private:

    Aws::String m_playerId;
    bool m_playerIdHasBeenSet = false;

    Aws::String m_regionIdentifier;
    bool m_regionIdentifierHasBeenSet = false;

    double m_latencyInMilliseconds;
    bool m_latencyInMillisecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
