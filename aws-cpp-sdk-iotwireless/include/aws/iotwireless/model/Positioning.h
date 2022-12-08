/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>

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
   * <p>The FPorts for the position information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/Positioning">AWS
   * API Reference</a></p>
   */
  class Positioning
  {
  public:
    AWS_IOTWIRELESS_API Positioning();
    AWS_IOTWIRELESS_API Positioning(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Positioning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetClockSync() const{ return m_clockSync; }

    
    inline bool ClockSyncHasBeenSet() const { return m_clockSyncHasBeenSet; }

    
    inline void SetClockSync(int value) { m_clockSyncHasBeenSet = true; m_clockSync = value; }

    
    inline Positioning& WithClockSync(int value) { SetClockSync(value); return *this;}


    
    inline int GetStream() const{ return m_stream; }

    
    inline bool StreamHasBeenSet() const { return m_streamHasBeenSet; }

    
    inline void SetStream(int value) { m_streamHasBeenSet = true; m_stream = value; }

    
    inline Positioning& WithStream(int value) { SetStream(value); return *this;}


    
    inline int GetGnss() const{ return m_gnss; }

    
    inline bool GnssHasBeenSet() const { return m_gnssHasBeenSet; }

    
    inline void SetGnss(int value) { m_gnssHasBeenSet = true; m_gnss = value; }

    
    inline Positioning& WithGnss(int value) { SetGnss(value); return *this;}

  private:

    int m_clockSync;
    bool m_clockSyncHasBeenSet = false;

    int m_stream;
    bool m_streamHasBeenSet = false;

    int m_gnss;
    bool m_gnssHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
