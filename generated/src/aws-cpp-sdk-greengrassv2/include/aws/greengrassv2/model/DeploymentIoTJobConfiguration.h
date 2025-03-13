/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/model/IoTJobExecutionsRolloutConfig.h>
#include <aws/greengrassv2/model/IoTJobAbortConfig.h>
#include <aws/greengrassv2/model/IoTJobTimeoutConfig.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about an IoT job configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/DeploymentIoTJobConfiguration">AWS
   * API Reference</a></p>
   */
  class DeploymentIoTJobConfiguration
  {
  public:
    AWS_GREENGRASSV2_API DeploymentIoTJobConfiguration() = default;
    AWS_GREENGRASSV2_API DeploymentIoTJobConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DeploymentIoTJobConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline const IoTJobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const { return m_jobExecutionsRolloutConfig; }
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }
    template<typename JobExecutionsRolloutConfigT = IoTJobExecutionsRolloutConfig>
    void SetJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::forward<JobExecutionsRolloutConfigT>(value); }
    template<typename JobExecutionsRolloutConfigT = IoTJobExecutionsRolloutConfig>
    DeploymentIoTJobConfiguration& WithJobExecutionsRolloutConfig(JobExecutionsRolloutConfigT&& value) { SetJobExecutionsRolloutConfig(std::forward<JobExecutionsRolloutConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline const IoTJobAbortConfig& GetAbortConfig() const { return m_abortConfig; }
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }
    template<typename AbortConfigT = IoTJobAbortConfig>
    void SetAbortConfig(AbortConfigT&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::forward<AbortConfigT>(value); }
    template<typename AbortConfigT = IoTJobAbortConfig>
    DeploymentIoTJobConfiguration& WithAbortConfig(AbortConfigT&& value) { SetAbortConfig(std::forward<AbortConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline const IoTJobTimeoutConfig& GetTimeoutConfig() const { return m_timeoutConfig; }
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }
    template<typename TimeoutConfigT = IoTJobTimeoutConfig>
    void SetTimeoutConfig(TimeoutConfigT&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::forward<TimeoutConfigT>(value); }
    template<typename TimeoutConfigT = IoTJobTimeoutConfig>
    DeploymentIoTJobConfiguration& WithTimeoutConfig(TimeoutConfigT&& value) { SetTimeoutConfig(std::forward<TimeoutConfigT>(value)); return *this;}
    ///@}
  private:

    IoTJobExecutionsRolloutConfig m_jobExecutionsRolloutConfig;
    bool m_jobExecutionsRolloutConfigHasBeenSet = false;

    IoTJobAbortConfig m_abortConfig;
    bool m_abortConfigHasBeenSet = false;

    IoTJobTimeoutConfig m_timeoutConfig;
    bool m_timeoutConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
