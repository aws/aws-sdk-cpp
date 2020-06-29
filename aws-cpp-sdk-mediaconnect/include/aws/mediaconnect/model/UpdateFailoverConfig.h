/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
   * The settings for source failover<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFailoverConfig">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API UpdateFailoverConfig
  {
  public:
    UpdateFailoverConfig();
    UpdateFailoverConfig(Aws::Utils::Json::JsonView jsonValue);
    UpdateFailoverConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Recovery window time to look for dash-7 packets
     */
    inline int GetRecoveryWindow() const{ return m_recoveryWindow; }

    /**
     * Recovery window time to look for dash-7 packets
     */
    inline bool RecoveryWindowHasBeenSet() const { return m_recoveryWindowHasBeenSet; }

    /**
     * Recovery window time to look for dash-7 packets
     */
    inline void SetRecoveryWindow(int value) { m_recoveryWindowHasBeenSet = true; m_recoveryWindow = value; }

    /**
     * Recovery window time to look for dash-7 packets
     */
    inline UpdateFailoverConfig& WithRecoveryWindow(int value) { SetRecoveryWindow(value); return *this;}


    
    inline const State& GetState() const{ return m_state; }

    
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    
    inline UpdateFailoverConfig& WithState(const State& value) { SetState(value); return *this;}

    
    inline UpdateFailoverConfig& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    int m_recoveryWindow;
    bool m_recoveryWindowHasBeenSet;

    State m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
