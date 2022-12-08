/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/FailoverMode.h>
#include <aws/mediaconnect/model/SourcePriority.h>
#include <aws/mediaconnect/model/State.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The settings for source failover.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FailoverConfig">AWS
   * API Reference</a></p>
   */
  class FailoverConfig
  {
  public:
    AWS_MEDIACONNECT_API FailoverConfig();
    AWS_MEDIACONNECT_API FailoverConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API FailoverConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The type of failover you choose for this flow. MERGE combines the source streams
     * into a single stream, allowing graceful recovery from any single-source loss.
     * FAILOVER allows switching between different streams.
     */
    inline const FailoverMode& GetFailoverMode() const{ return m_failoverMode; }

    /**
     * The type of failover you choose for this flow. MERGE combines the source streams
     * into a single stream, allowing graceful recovery from any single-source loss.
     * FAILOVER allows switching between different streams.
     */
    inline bool FailoverModeHasBeenSet() const { return m_failoverModeHasBeenSet; }

    /**
     * The type of failover you choose for this flow. MERGE combines the source streams
     * into a single stream, allowing graceful recovery from any single-source loss.
     * FAILOVER allows switching between different streams.
     */
    inline void SetFailoverMode(const FailoverMode& value) { m_failoverModeHasBeenSet = true; m_failoverMode = value; }

    /**
     * The type of failover you choose for this flow. MERGE combines the source streams
     * into a single stream, allowing graceful recovery from any single-source loss.
     * FAILOVER allows switching between different streams.
     */
    inline void SetFailoverMode(FailoverMode&& value) { m_failoverModeHasBeenSet = true; m_failoverMode = std::move(value); }

    /**
     * The type of failover you choose for this flow. MERGE combines the source streams
     * into a single stream, allowing graceful recovery from any single-source loss.
     * FAILOVER allows switching between different streams.
     */
    inline FailoverConfig& WithFailoverMode(const FailoverMode& value) { SetFailoverMode(value); return *this;}

    /**
     * The type of failover you choose for this flow. MERGE combines the source streams
     * into a single stream, allowing graceful recovery from any single-source loss.
     * FAILOVER allows switching between different streams.
     */
    inline FailoverConfig& WithFailoverMode(FailoverMode&& value) { SetFailoverMode(std::move(value)); return *this;}


    /**
     * Search window time to look for dash-7 packets
     */
    inline int GetRecoveryWindow() const{ return m_recoveryWindow; }

    /**
     * Search window time to look for dash-7 packets
     */
    inline bool RecoveryWindowHasBeenSet() const { return m_recoveryWindowHasBeenSet; }

    /**
     * Search window time to look for dash-7 packets
     */
    inline void SetRecoveryWindow(int value) { m_recoveryWindowHasBeenSet = true; m_recoveryWindow = value; }

    /**
     * Search window time to look for dash-7 packets
     */
    inline FailoverConfig& WithRecoveryWindow(int value) { SetRecoveryWindow(value); return *this;}


    /**
     * The priority you want to assign to a source. You can have a primary stream and a
     * backup stream or two equally prioritized streams.
     */
    inline const SourcePriority& GetSourcePriority() const{ return m_sourcePriority; }

    /**
     * The priority you want to assign to a source. You can have a primary stream and a
     * backup stream or two equally prioritized streams.
     */
    inline bool SourcePriorityHasBeenSet() const { return m_sourcePriorityHasBeenSet; }

    /**
     * The priority you want to assign to a source. You can have a primary stream and a
     * backup stream or two equally prioritized streams.
     */
    inline void SetSourcePriority(const SourcePriority& value) { m_sourcePriorityHasBeenSet = true; m_sourcePriority = value; }

    /**
     * The priority you want to assign to a source. You can have a primary stream and a
     * backup stream or two equally prioritized streams.
     */
    inline void SetSourcePriority(SourcePriority&& value) { m_sourcePriorityHasBeenSet = true; m_sourcePriority = std::move(value); }

    /**
     * The priority you want to assign to a source. You can have a primary stream and a
     * backup stream or two equally prioritized streams.
     */
    inline FailoverConfig& WithSourcePriority(const SourcePriority& value) { SetSourcePriority(value); return *this;}

    /**
     * The priority you want to assign to a source. You can have a primary stream and a
     * backup stream or two equally prioritized streams.
     */
    inline FailoverConfig& WithSourcePriority(SourcePriority&& value) { SetSourcePriority(std::move(value)); return *this;}


    
    inline const State& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline FailoverConfig& WithState(const State& value) { SetState(value); return *this;}

    
    inline FailoverConfig& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    FailoverMode m_failoverMode;
    bool m_failoverModeHasBeenSet = false;

    int m_recoveryWindow;
    bool m_recoveryWindowHasBeenSet = false;

    SourcePriority m_sourcePriority;
    bool m_sourcePriorityHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
