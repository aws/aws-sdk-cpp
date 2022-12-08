/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/greengrass/model/TelemetryConfigurationUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class UpdateThingRuntimeConfigurationRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API UpdateThingRuntimeConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThingRuntimeConfiguration"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;


    /**
     * Configuration for telemetry service.
     */
    inline const TelemetryConfigurationUpdate& GetTelemetryConfiguration() const{ return m_telemetryConfiguration; }

    /**
     * Configuration for telemetry service.
     */
    inline bool TelemetryConfigurationHasBeenSet() const { return m_telemetryConfigurationHasBeenSet; }

    /**
     * Configuration for telemetry service.
     */
    inline void SetTelemetryConfiguration(const TelemetryConfigurationUpdate& value) { m_telemetryConfigurationHasBeenSet = true; m_telemetryConfiguration = value; }

    /**
     * Configuration for telemetry service.
     */
    inline void SetTelemetryConfiguration(TelemetryConfigurationUpdate&& value) { m_telemetryConfigurationHasBeenSet = true; m_telemetryConfiguration = std::move(value); }

    /**
     * Configuration for telemetry service.
     */
    inline UpdateThingRuntimeConfigurationRequest& WithTelemetryConfiguration(const TelemetryConfigurationUpdate& value) { SetTelemetryConfiguration(value); return *this;}

    /**
     * Configuration for telemetry service.
     */
    inline UpdateThingRuntimeConfigurationRequest& WithTelemetryConfiguration(TelemetryConfigurationUpdate&& value) { SetTelemetryConfiguration(std::move(value)); return *this;}


    /**
     * The thing name.
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * The thing name.
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * The thing name.
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * The thing name.
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * The thing name.
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * The thing name.
     */
    inline UpdateThingRuntimeConfigurationRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * The thing name.
     */
    inline UpdateThingRuntimeConfigurationRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * The thing name.
     */
    inline UpdateThingRuntimeConfigurationRequest& WithThingName(const char* value) { SetThingName(value); return *this;}

  private:

    TelemetryConfigurationUpdate m_telemetryConfiguration;
    bool m_telemetryConfigurationHasBeenSet = false;

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
