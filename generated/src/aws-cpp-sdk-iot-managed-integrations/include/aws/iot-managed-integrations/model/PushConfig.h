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
    AWS_IOTMANAGEDINTEGRATIONS_API PushConfig();
    AWS_IOTMANAGEDINTEGRATIONS_API PushConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API PushConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Structure representing one abort config.</p>
     */
    inline const OtaTaskAbortConfig& GetAbortConfig() const{ return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    inline void SetAbortConfig(const OtaTaskAbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }
    inline void SetAbortConfig(OtaTaskAbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }
    inline PushConfig& WithAbortConfig(const OtaTaskAbortConfig& value) { SetAbortConfig(value); return *this;}
    inline PushConfig& WithAbortConfig(OtaTaskAbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure representing one rollout config.</p>
     */
    inline const OtaTaskExecutionRolloutConfig& GetRolloutConfig() const{ return m_rolloutConfig; }
    inline bool RolloutConfigHasBeenSet() const { return m_rolloutConfigHasBeenSet; }
    inline void SetRolloutConfig(const OtaTaskExecutionRolloutConfig& value) { m_rolloutConfigHasBeenSet = true; m_rolloutConfig = value; }
    inline void SetRolloutConfig(OtaTaskExecutionRolloutConfig&& value) { m_rolloutConfigHasBeenSet = true; m_rolloutConfig = std::move(value); }
    inline PushConfig& WithRolloutConfig(const OtaTaskExecutionRolloutConfig& value) { SetRolloutConfig(value); return *this;}
    inline PushConfig& WithRolloutConfig(OtaTaskExecutionRolloutConfig&& value) { SetRolloutConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure representing one timeout config.</p>
     */
    inline const OtaTaskTimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    inline void SetTimeoutConfig(const OtaTaskTimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }
    inline void SetTimeoutConfig(OtaTaskTimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }
    inline PushConfig& WithTimeoutConfig(const OtaTaskTimeoutConfig& value) { SetTimeoutConfig(value); return *this;}
    inline PushConfig& WithTimeoutConfig(OtaTaskTimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}
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
