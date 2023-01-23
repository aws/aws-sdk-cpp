/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/Positioning.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/ApplicationConfig.h>
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
   * <p>Object for updating the FPorts information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateFPorts">AWS
   * API Reference</a></p>
   */
  class UpdateFPorts
  {
  public:
    AWS_IOTWIRELESS_API UpdateFPorts();
    AWS_IOTWIRELESS_API UpdateFPorts(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API UpdateFPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline const Positioning& GetPositioning() const{ return m_positioning; }

    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }

    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline void SetPositioning(const Positioning& value) { m_positioningHasBeenSet = true; m_positioning = value; }

    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline void SetPositioning(Positioning&& value) { m_positioningHasBeenSet = true; m_positioning = std::move(value); }

    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline UpdateFPorts& WithPositioning(const Positioning& value) { SetPositioning(value); return *this;}

    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline UpdateFPorts& WithPositioning(Positioning&& value) { SetPositioning(std::move(value)); return *this;}


    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline const Aws::Vector<ApplicationConfig>& GetApplications() const{ return m_applications; }

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline void SetApplications(const Aws::Vector<ApplicationConfig>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline void SetApplications(Aws::Vector<ApplicationConfig>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline UpdateFPorts& WithApplications(const Aws::Vector<ApplicationConfig>& value) { SetApplications(value); return *this;}

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline UpdateFPorts& WithApplications(Aws::Vector<ApplicationConfig>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline UpdateFPorts& AddApplications(const ApplicationConfig& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline UpdateFPorts& AddApplications(ApplicationConfig&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }

  private:

    Positioning m_positioning;
    bool m_positioningHasBeenSet = false;

    Aws::Vector<ApplicationConfig> m_applications;
    bool m_applicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
