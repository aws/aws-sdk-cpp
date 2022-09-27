﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/Positioning.h>
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
  class AWS_IOTWIRELESS_API FPorts
  {
  public:
    FPorts();
    FPorts(Aws::Utils::Json::JsonView jsonValue);
    FPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetFuota() const{ return m_fuota; }

    
    inline bool FuotaHasBeenSet() const { return m_fuotaHasBeenSet; }

    
    inline void SetFuota(int value) { m_fuotaHasBeenSet = true; m_fuota = value; }

    
    inline FPorts& WithFuota(int value) { SetFuota(value); return *this;}


    
    inline int GetMulticast() const{ return m_multicast; }

    
    inline bool MulticastHasBeenSet() const { return m_multicastHasBeenSet; }

    
    inline void SetMulticast(int value) { m_multicastHasBeenSet = true; m_multicast = value; }

    
    inline FPorts& WithMulticast(int value) { SetMulticast(value); return *this;}


    
    inline int GetClockSync() const{ return m_clockSync; }

    
    inline bool ClockSyncHasBeenSet() const { return m_clockSyncHasBeenSet; }

    
    inline void SetClockSync(int value) { m_clockSyncHasBeenSet = true; m_clockSync = value; }

    
    inline FPorts& WithClockSync(int value) { SetClockSync(value); return *this;}


    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline const Positioning& GetPositioning() const{ return m_positioning; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline bool PositioningHasBeenSet() const { return m_positioningHasBeenSet; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline void SetPositioning(const Positioning& value) { m_positioningHasBeenSet = true; m_positioning = value; }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline void SetPositioning(Positioning&& value) { m_positioningHasBeenSet = true; m_positioning = std::move(value); }

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline FPorts& WithPositioning(const Positioning& value) { SetPositioning(value); return *this;}

    /**
     * <p>FPort values for the GNSS, stream, and ClockSync functions of the positioning
     * information.</p>
     */
    inline FPorts& WithPositioning(Positioning&& value) { SetPositioning(std::move(value)); return *this;}

  private:

    int m_fuota;
    bool m_fuotaHasBeenSet = false;

    int m_multicast;
    bool m_multicastHasBeenSet = false;

    int m_clockSync;
    bool m_clockSyncHasBeenSet = false;

    Positioning m_positioning;
    bool m_positioningHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
