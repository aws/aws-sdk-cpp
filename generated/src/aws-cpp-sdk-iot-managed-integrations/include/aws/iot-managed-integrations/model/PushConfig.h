/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/OtaTaskAbortConfig.h>
#include <aws/iot-managed-integrations/model/OtaTaskExecutionRolloutConfig.h>
#include <aws/iot-managed-integrations/model/OtaTaskTimeoutConfig.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure representing a push config.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/PushConfig">AWS
   * API Reference</a></p>
   */
  class PushConfig
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API PushConfig() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API PushConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API PushConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Structure representing one abort config.</p>
     */
    inline const OtaTaskAbortConfig& GetAbortConfig() const { return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    template<typename AbortConfigT = OtaTaskAbortConfig>
    void SetAbortConfig(AbortConfigT&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::forward<AbortConfigT>(value); }
    template<typename AbortConfigT = OtaTaskAbortConfig>
    PushConfig& WithAbortConfig(AbortConfigT&& value) { SetAbortConfig(std::forward<AbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure representing one rollout config.</p>
     */
    inline const OtaTaskExecutionRolloutConfig& GetRolloutConfig() const { return m_rolloutConfig; }
    inline bool RolloutConfigHasBeenSet() const { return m_rolloutConfigHasBeenSet; }
    template<typename RolloutConfigT = OtaTaskExecutionRolloutConfig>
    void SetRolloutConfig(RolloutConfigT&& value) { m_rolloutConfigHasBeenSet = true; m_rolloutConfig = std::forward<RolloutConfigT>(value); }
    template<typename RolloutConfigT = OtaTaskExecutionRolloutConfig>
    PushConfig& WithRolloutConfig(RolloutConfigT&& value) { SetRolloutConfig(std::forward<RolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure representing one timeout config.</p>
     */
    inline const OtaTaskTimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = OtaTaskTimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = OtaTaskTimeoutConfig>
    PushConfig& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}
  private:

    OtaTaskAbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    OtaTaskExecutionRolloutConfig m_rolloutConfig;
    bool m_rolloutConfigHasBeenSet = false;

    OtaTaskTimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
