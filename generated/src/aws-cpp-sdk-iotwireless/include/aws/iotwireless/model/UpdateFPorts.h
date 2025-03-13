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
    AWS_IOTWIRELESS_API UpdateFPorts() = default;
    AWS_IOTWIRELESS_API UpdateFPorts(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API UpdateFPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Positioning FPorts for the ClockSync, Stream, and GNSS functions.</p>
     */
    inline const Positioning& GetPositioning() const { return m_positioning; }
    inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }
    template<typename PositioningT = Positioning>
    void SetPositioning(PositioningT&& value) { m_positioningHasBeenSet = true; m_positioning = std::forward<PositioningT>(value); }
    template<typename PositioningT = Positioning>
    UpdateFPorts& WithPositioning(PositioningT&& value) { SetPositioning(std::forward<PositioningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>LoRaWAN application, which can be used for geolocation by activating
     * positioning.</p>
     */
    inline const Aws::Vector<ApplicationConfig>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<ApplicationConfig>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<ApplicationConfig>>
    UpdateFPorts& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = ApplicationConfig>
    UpdateFPorts& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}
  private:

    Positioning m_positioning;
    bool m_positioningHasBeenSet = false;

    Aws::Vector<ApplicationConfig> m_applications;
    bool m_applicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
