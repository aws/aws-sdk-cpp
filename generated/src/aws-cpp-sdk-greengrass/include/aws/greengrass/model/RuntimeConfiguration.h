/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/TelemetryConfiguration.h>
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
   * Runtime configuration for a thing.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/RuntimeConfiguration">AWS
   * API Reference</a></p>
   */
  class RuntimeConfiguration
  {
  public:
    AWS_GREENGRASS_API RuntimeConfiguration();
    AWS_GREENGRASS_API RuntimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API RuntimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Configuration for telemetry service.
     */
    inline const TelemetryConfiguration& GetTelemetryConfiguration() const{ return m_telemetryConfiguration; }

    /**
     * Configuration for telemetry service.
     */
    inline bool TelemetryConfigurationHasBeenSet() const { return m_telemetryConfigurationHasBeenSet; }

    /**
     * Configuration for telemetry service.
     */
    inline void SetTelemetryConfiguration(const TelemetryConfiguration& value) { m_telemetryConfigurationHasBeenSet = true; m_telemetryConfiguration = value; }

    /**
     * Configuration for telemetry service.
     */
    inline void SetTelemetryConfiguration(TelemetryConfiguration&& value) { m_telemetryConfigurationHasBeenSet = true; m_telemetryConfiguration = std::move(value); }

    /**
     * Configuration for telemetry service.
     */
    inline RuntimeConfiguration& WithTelemetryConfiguration(const TelemetryConfiguration& value) { SetTelemetryConfiguration(value); return *this;}

    /**
     * Configuration for telemetry service.
     */
    inline RuntimeConfiguration& WithTelemetryConfiguration(TelemetryConfiguration&& value) { SetTelemetryConfiguration(std::move(value)); return *this;}

  private:

    TelemetryConfiguration m_telemetryConfiguration;
    bool m_telemetryConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
