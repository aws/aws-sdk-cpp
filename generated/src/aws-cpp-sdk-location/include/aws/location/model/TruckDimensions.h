/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/DimensionUnit.h>
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
namespace LocationService
{
namespace Model
{

  /**
   * <p>Contains details about the truck dimensions in the unit of measurement that
   * you specify. Used to filter out roads that can't support or allow the specified
   * dimensions for requests that specify <code>TravelMode</code> as
   * <code>Truck</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/location-2020-11-19/TruckDimensions">AWS
   * API Reference</a></p>
   */
  class TruckDimensions
  {
  public:
    AWS_LOCATIONSERVICE_API TruckDimensions() = default;
    AWS_LOCATIONSERVICE_API TruckDimensions(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API TruckDimensions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOCATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The length of the truck.</p> <ul> <li> <p>For example, <code>15.5</code>.</p>
     * </li> </ul>  <p> For routes calculated with a HERE resource, this value
     * must be between 0 and 300 meters. </p> 
     */
    inline double GetLength() const { return m_length; }
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }
    inline void SetLength(double value) { m_lengthHasBeenSet = true; m_length = value; }
    inline TruckDimensions& WithLength(double value) { SetLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The height of the truck.</p> <ul> <li> <p>For example, <code>4.5</code>.</p>
     * </li> </ul>  <p> For routes calculated with a HERE resource, this value
     * must be between 0 and 50 meters. </p> 
     */
    inline double GetHeight() const { return m_height; }
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }
    inline void SetHeight(double value) { m_heightHasBeenSet = true; m_height = value; }
    inline TruckDimensions& WithHeight(double value) { SetHeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The width of the truck.</p> <ul> <li> <p>For example, <code>4.5</code>.</p>
     * </li> </ul>  <p> For routes calculated with a HERE resource, this value
     * must be between 0 and 50 meters. </p> 
     */
    inline double GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    inline void SetWidth(double value) { m_widthHasBeenSet = true; m_width = value; }
    inline TruckDimensions& WithWidth(double value) { SetWidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the unit of measurement for the truck dimensions.</p> <p>Default
     * Value: <code>Meters</code> </p>
     */
    inline DimensionUnit GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(DimensionUnit value) { m_unitHasBeenSet = true; m_unit = value; }
    inline TruckDimensions& WithUnit(DimensionUnit value) { SetUnit(value); return *this;}
    ///@}
  private:

    double m_length{0.0};
    bool m_lengthHasBeenSet = false;

    double m_height{0.0};
    bool m_heightHasBeenSet = false;

    double m_width{0.0};
    bool m_widthHasBeenSet = false;

    DimensionUnit m_unit{DimensionUnit::NOT_SET};
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
