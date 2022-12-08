/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/ConfigurationSyncStatus.h>
#include <aws/greengrass/model/Telemetry.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Configuration settings for running telemetry.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/TelemetryConfiguration">AWS
   * API Reference</a></p>
   */
  class TelemetryConfiguration
  {
  public:
    AWS_GREENGRASS_API TelemetryConfiguration();
    AWS_GREENGRASS_API TelemetryConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API TelemetryConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Synchronization status of the device reported configuration with the desired
     * configuration.
     */
    inline const ConfigurationSyncStatus& GetConfigurationSyncStatus() const{ return m_configurationSyncStatus; }

    /**
     * Synchronization status of the device reported configuration with the desired
     * configuration.
     */
    inline bool ConfigurationSyncStatusHasBeenSet() const { return m_configurationSyncStatusHasBeenSet; }

    /**
     * Synchronization status of the device reported configuration with the desired
     * configuration.
     */
    inline void SetConfigurationSyncStatus(const ConfigurationSyncStatus& value) { m_configurationSyncStatusHasBeenSet = true; m_configurationSyncStatus = value; }

    /**
     * Synchronization status of the device reported configuration with the desired
     * configuration.
     */
    inline void SetConfigurationSyncStatus(ConfigurationSyncStatus&& value) { m_configurationSyncStatusHasBeenSet = true; m_configurationSyncStatus = std::move(value); }

    /**
     * Synchronization status of the device reported configuration with the desired
     * configuration.
     */
    inline TelemetryConfiguration& WithConfigurationSyncStatus(const ConfigurationSyncStatus& value) { SetConfigurationSyncStatus(value); return *this;}

    /**
     * Synchronization status of the device reported configuration with the desired
     * configuration.
     */
    inline TelemetryConfiguration& WithConfigurationSyncStatus(ConfigurationSyncStatus&& value) { SetConfigurationSyncStatus(std::move(value)); return *this;}


    /**
     * Configure telemetry to be on or off.
     */
    inline const Telemetry& GetTelemetry() const{ return m_telemetry; }

    /**
     * Configure telemetry to be on or off.
     */
    inline bool TelemetryHasBeenSet() const { return m_telemetryHasBeenSet; }

    /**
     * Configure telemetry to be on or off.
     */
    inline void SetTelemetry(const Telemetry& value) { m_telemetryHasBeenSet = true; m_telemetry = value; }

    /**
     * Configure telemetry to be on or off.
     */
    inline void SetTelemetry(Telemetry&& value) { m_telemetryHasBeenSet = true; m_telemetry = std::move(value); }

    /**
     * Configure telemetry to be on or off.
     */
    inline TelemetryConfiguration& WithTelemetry(const Telemetry& value) { SetTelemetry(value); return *this;}

    /**
     * Configure telemetry to be on or off.
     */
    inline TelemetryConfiguration& WithTelemetry(Telemetry&& value) { SetTelemetry(std::move(value)); return *this;}

  private:

    ConfigurationSyncStatus m_configurationSyncStatus;
    bool m_configurationSyncStatusHasBeenSet = false;

    Telemetry m_telemetry;
    bool m_telemetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
