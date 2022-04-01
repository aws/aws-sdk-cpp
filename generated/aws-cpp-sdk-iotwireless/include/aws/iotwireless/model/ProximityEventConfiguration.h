/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkEventNotificationConfigurations.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Proximity event configuration object for enabling and disabling relevant
   * topics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ProximityEventConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API ProximityEventConfiguration
  {
  public:
    ProximityEventConfiguration();
    ProximityEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    ProximityEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline const SidewalkEventNotificationConfigurations& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline void SetSidewalk(const SidewalkEventNotificationConfigurations& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline void SetSidewalk(SidewalkEventNotificationConfigurations&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline ProximityEventConfiguration& WithSidewalk(const SidewalkEventNotificationConfigurations& value) { SetSidewalk(value); return *this;}

    /**
     * <p>Proximity event configuration object for enabling or disabling Sidewalk
     * related event topics.</p>
     */
    inline ProximityEventConfiguration& WithSidewalk(SidewalkEventNotificationConfigurations&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    SidewalkEventNotificationConfigurations m_sidewalk;
    bool m_sidewalkHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
