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
  class TelemetryConfigurationUpdate
  {
  public:
    AWS_GREENGRASS_API TelemetryConfigurationUpdate() = default;
    AWS_GREENGRASS_API TelemetryConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API TelemetryConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Configure telemetry to be on or off.
     */
    inline Telemetry GetTelemetry() const { return m_telemetry; }
    inline bool TelemetryHasBeenSet() const { return m_telemetryHasBeenSet; }
    inline void SetTelemetry(Telemetry value) { m_telemetryHasBeenSet = true; m_telemetry = value; }
    inline TelemetryConfigurationUpdate& WithTelemetry(Telemetry value) { SetTelemetry(value); return *this;}
    ///@}
  private:

    Telemetry m_telemetry{Telemetry::NOT_SET};
    bool m_telemetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
