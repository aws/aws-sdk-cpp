/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/TelemetryConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API TelemetryConfigurationUpdate
  {
  public:
    TelemetryConfigurationUpdate();
    TelemetryConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    TelemetryConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline TelemetryConfigurationUpdate& WithTelemetry(const Telemetry& value) { SetTelemetry(value); return *this;}

    /**
     * Configure telemetry to be on or off.
     */
    inline TelemetryConfigurationUpdate& WithTelemetry(Telemetry&& value) { SetTelemetry(std::move(value)); return *this;}

  private:

    Telemetry m_telemetry;
    bool m_telemetryHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
