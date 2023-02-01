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
    AWS_GREENGRASSV2_API DeploymentIoTJobConfiguration();
    AWS_GREENGRASSV2_API DeploymentIoTJobConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API DeploymentIoTJobConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline const IoTJobExecutionsRolloutConfig& GetJobExecutionsRolloutConfig() const{ return m_jobExecutionsRolloutConfig; }

    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline bool JobExecutionsRolloutConfigHasBeenSet() const { return m_jobExecutionsRolloutConfigHasBeenSet; }

    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline void SetJobExecutionsRolloutConfig(const IoTJobExecutionsRolloutConfig& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = value; }

    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline void SetJobExecutionsRolloutConfig(IoTJobExecutionsRolloutConfig&& value) { m_jobExecutionsRolloutConfigHasBeenSet = true; m_jobExecutionsRolloutConfig = std::move(value); }

    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline DeploymentIoTJobConfiguration& WithJobExecutionsRolloutConfig(const IoTJobExecutionsRolloutConfig& value) { SetJobExecutionsRolloutConfig(value); return *this;}

    /**
     * <p>The rollout configuration for the job. This configuration defines the rate at
     * which the job rolls out to the fleet of target devices.</p>
     */
    inline DeploymentIoTJobConfiguration& WithJobExecutionsRolloutConfig(IoTJobExecutionsRolloutConfig&& value) { SetJobExecutionsRolloutConfig(std::move(value)); return *this;}


    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline const IoTJobAbortConfig& GetAbortConfig() const{ return m_abortConfig; }

    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline bool AbortConfigHasBeenSet() const { return m_abortConfigHasBeenSet; }

    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline void SetAbortConfig(const IoTJobAbortConfig& value) { m_abortConfigHasBeenSet = true; m_abortConfig = value; }

    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline void SetAbortConfig(IoTJobAbortConfig&& value) { m_abortConfigHasBeenSet = true; m_abortConfig = std::move(value); }

    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline DeploymentIoTJobConfiguration& WithAbortConfig(const IoTJobAbortConfig& value) { SetAbortConfig(value); return *this;}

    /**
     * <p>The stop configuration for the job. This configuration defines when and how
     * to stop a job rollout.</p>
     */
    inline DeploymentIoTJobConfiguration& WithAbortConfig(IoTJobAbortConfig&& value) { SetAbortConfig(std::move(value)); return *this;}


    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline const IoTJobTimeoutConfig& GetTimeoutConfig() const{ return m_timeoutConfig; }

    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline bool TimeoutConfigHasBeenSet() const { return m_timeoutConfigHasBeenSet; }

    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline void SetTimeoutConfig(const IoTJobTimeoutConfig& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = value; }

    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline void SetTimeoutConfig(IoTJobTimeoutConfig&& value) { m_timeoutConfigHasBeenSet = true; m_timeoutConfig = std::move(value); }

    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline DeploymentIoTJobConfiguration& WithTimeoutConfig(const IoTJobTimeoutConfig& value) { SetTimeoutConfig(value); return *this;}

    /**
     * <p>The timeout configuration for the job. This configuration defines the amount
     * of time each device has to complete the job.</p>
     */
    inline DeploymentIoTJobConfiguration& WithTimeoutConfig(IoTJobTimeoutConfig&& value) { SetTimeoutConfig(std::move(value)); return *this;}

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
