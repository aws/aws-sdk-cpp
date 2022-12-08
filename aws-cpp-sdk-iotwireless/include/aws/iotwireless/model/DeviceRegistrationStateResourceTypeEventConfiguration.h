/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/SidewalkResourceTypeEventConfiguration.h>
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
   * <p>Device registration state resource type event configuration object for
   * enabling or disabling topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/DeviceRegistrationStateResourceTypeEventConfiguration">AWS
   * API Reference</a></p>
   */
  class DeviceRegistrationStateResourceTypeEventConfiguration
  {
  public:
    AWS_IOTWIRELESS_API DeviceRegistrationStateResourceTypeEventConfiguration();
    AWS_IOTWIRELESS_API DeviceRegistrationStateResourceTypeEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API DeviceRegistrationStateResourceTypeEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Device registration resource type state event configuration object for
     * enabling or disabling Sidewalk related event topics.</p>
     */
    inline const SidewalkResourceTypeEventConfiguration& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>Device registration resource type state event configuration object for
     * enabling or disabling Sidewalk related event topics.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>Device registration resource type state event configuration object for
     * enabling or disabling Sidewalk related event topics.</p>
     */
    inline void SetSidewalk(const SidewalkResourceTypeEventConfiguration& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>Device registration resource type state event configuration object for
     * enabling or disabling Sidewalk related event topics.</p>
     */
    inline void SetSidewalk(SidewalkResourceTypeEventConfiguration&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>Device registration resource type state event configuration object for
     * enabling or disabling Sidewalk related event topics.</p>
     */
    inline DeviceRegistrationStateResourceTypeEventConfiguration& WithSidewalk(const SidewalkResourceTypeEventConfiguration& value) { SetSidewalk(value); return *this;}

    /**
     * <p>Device registration resource type state event configuration object for
     * enabling or disabling Sidewalk related event topics.</p>
     */
    inline DeviceRegistrationStateResourceTypeEventConfiguration& WithSidewalk(SidewalkResourceTypeEventConfiguration&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    SidewalkResourceTypeEventConfiguration m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
