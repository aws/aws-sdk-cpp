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
   * <p>List of FPort assigned for different LoRaWAN application packages to
   * use</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/FPorts">AWS
   * API Reference</a></p>
   */
  class FPorts
  {
  public:
    AWS_IOTWIRELESS_API FPorts() = default;
    AWS_IOTWIRELESS_API FPorts(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API FPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetFuota() const { return m_fuota; }
    inline bool FuotaHasBeenSet() const { return m_fuotaHasBeenSet; }
    inline void SetFuota(int value) { m_fuotaHasBeenSet = true; m_fuota = value; }
    inline FPorts& WithFuota(int value) { SetFuota(value); return *this;}
    ///@}

    ///@{
    
    inline int GetMulticast() const { return m_multicast; }
    inline bool MulticastHasBeenSet() const { return m_multicastHasBeenSet; }
    inline void SetMulticast(int value) { m_multicastHasBeenSet = true; m_multicast = value; }
    inline FPorts& WithMulticast(int value) { SetMulticast(value); return *this;}
    ///@}

    ///@{
    
    inline int GetClockSync() const { return m_clockSync; }
    inline bool ClockSyncHasBeenSet() const { return m_clockSyncHasBeenSet; }
    inline void SetClockSync(int value) { m_clockSyncHasBeenSet = true; m_clockSync = value; }
    inline FPorts& WithClockSync(int value) { SetClockSync(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline const Positioning& GetPositioning() const { return m_positioning; }
    inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }
    template<typename PositioningT = Positioning>
    void SetPositioning(PositioningT&& value) { m_positioningHasBeenSet = true; m_positioning = std::forward<PositioningT>(value); }
    template<typename PositioningT = Positioning>
    FPorts& WithPositioning(PositioningT&& value) { SetPositioning(std::forward<PositioningT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional LoRaWAN application information, which can be used for
     * geolocation.</p>
     */
    inline const Aws::Vector<ApplicationConfig>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<ApplicationConfig>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<ApplicationConfig>>
    FPorts& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = ApplicationConfig>
    FPorts& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}
  private:

    int m_fuota{0};
    bool m_fuotaHasBeenSet = false;

    int m_multicast{0};
    bool m_multicastHasBeenSet = false;

    int m_clockSync{0};
    bool m_clockSyncHasBeenSet = false;

    Positioning m_positioning;
    bool m_positioningHasBeenSet = false;

    Aws::Vector<ApplicationConfig> m_applications;
    bool m_applicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
