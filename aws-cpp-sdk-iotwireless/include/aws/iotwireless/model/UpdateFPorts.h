/**
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
   * <p>Object for updating the FPorts information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/UpdateFPorts">AWS
   * API Reference</a></p>
   */
  class AWS_IOTWIRELESS_API UpdateFPorts
  {
  public:
    UpdateFPorts();
    UpdateFPorts(Aws::Utils::Json::JsonView jsonValue);
    UpdateFPorts& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Positioning m_positioning;
    bool m_positioningHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
